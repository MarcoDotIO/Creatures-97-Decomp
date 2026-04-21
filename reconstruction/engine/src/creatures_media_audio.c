#include "creatures_media_audio.h"

#include <string.h>

static void creatures_audio_notify_mixer_idle(const CreaturesAudioOutputOps *ops) {
    if (ops != NULL && ops->notify_mixer_idle != NULL) {
        ops->notify_mixer_idle(0, -1, ops->ctx);
    }
}

void creatures_audio_voice_slot_reset(CreaturesAudioVoiceSlot *slot) {
    if (slot == NULL) {
        return;
    }

    memset(slot, 0, sizeof(*slot));
}

void creatures_audio_output_init(CreaturesAudioOutput *output) {
    size_t index;

    if (output == NULL) {
        return;
    }

    memset(output, 0, sizeof(*output));
    for (index = 0; index < CREATURES_AUDIO_VOICE_SLOT_COUNT; index++) {
        creatures_audio_voice_slot_reset(&output->voice_slots[index]);
    }
}

bool creatures_audio_output_create_primary_buffer(CreaturesAudioOutput *output,
    uintptr_t cooperative_window_handle, const CreaturesAudioOutputOps *ops) {
    CreaturesSoundBufferDesc buffer_desc;
    CreaturesWaveFormat wave_format;

    if (output == NULL || ops == NULL || ops->create_device == NULL ||
        ops->set_cooperative_level == NULL || ops->create_buffer == NULL ||
        ops->get_format == NULL || ops->set_format == NULL) {
        return false;
    }

    creatures_audio_output_init(output);
    if (ops->create_device(NULL, &output->device_handle, NULL, ops->ctx) != 0) {
        return false;
    }

    if (ops->set_cooperative_level(output->device_handle, cooperative_window_handle,
            CREATURES_AUDIO_COOPERATIVE_LEVEL_PRIORITY, ops->ctx) != 0) {
        return false;
    }

    memset(&buffer_desc, 0, sizeof(buffer_desc));
    buffer_desc.size = 0x14;
    buffer_desc.flags = 1;
    if (ops->create_buffer(output->device_handle, &buffer_desc, &output->primary_buffer_handle,
            ops->ctx) != 0) {
        return false;
    }

    if (ops->get_format(
            output->primary_buffer_handle, &wave_format, sizeof(wave_format), ops->ctx) != 0) {
        return false;
    }

    wave_format.channel_count = 2;
    wave_format.samples_per_second = 22050;
    wave_format.average_bytes_per_second = 88200;
    wave_format.block_align = 4;
    wave_format.bits_per_sample = 16;
    if (ops->set_format(output->primary_buffer_handle, &wave_format, ops->ctx) != 0) {
        return false;
    }

    output->is_device_ready = 1;
    output->is_primary_buffer_ready = 1;
    output->active_voice_count = 0;
    return true;
}

void creatures_audio_output_release_registered_streams(
    CreaturesAudioOutput *output, const CreaturesAudioOutputOps *ops) {
    size_t index;

    if (output == NULL) {
        return;
    }

    for (index = 0; index < output->registered_stream_count; index++) {
        if (output->registered_streams[index] != NULL && ops != NULL &&
            ops->release_stream != NULL) {
            ops->release_stream(output->registered_streams[index], 1, ops->ctx);
        }
    }
    creatures_audio_notify_mixer_idle(ops);
}

void creatures_audio_output_release_registered_streams_and_slots(
    CreaturesAudioOutput *output, const CreaturesAudioOutputOps *ops) {
    size_t index;

    if (output == NULL || output->is_device_ready == 0) {
        return;
    }

    creatures_audio_output_release_registered_streams(output, ops);
    if (output->active_voice_count != 0) {
        for (index = 0; index < CREATURES_AUDIO_VOICE_SLOT_COUNT; index++) {
            creatures_audio_output_release_voice_slot(output, (int)index, ops);
        }
    }
}

bool creatures_audio_output_release_voice_slot(
    CreaturesAudioOutput *output, int slot_index, const CreaturesAudioOutputOps *ops) {
    CreaturesAudioVoiceSlot *slot;

    if (output == NULL || slot_index < 0 || slot_index >= CREATURES_AUDIO_VOICE_SLOT_COUNT ||
        output->is_device_ready == 0) {
        return false;
    }

    slot = &output->voice_slots[slot_index];
    if (slot->is_active == 0) {
        return false;
    }

    slot->is_active = 0;
    if (ops != NULL && ops->stop_buffer != NULL && slot->buffer_handle != NULL) {
        ops->stop_buffer(slot->buffer_handle, ops->ctx);
    }
    if (slot->owner != NULL) {
        if (ops != NULL && ops->release_buffer != NULL && slot->buffer_handle != NULL) {
            ops->release_buffer(slot->buffer_handle, ops->ctx);
        }
        if (slot->owner->active_voice_ref_count > 0) {
            slot->owner->active_voice_ref_count--;
        }
    }
    if (output->active_voice_count > 0) {
        output->active_voice_count--;
    }
    return true;
}

void creatures_audio_output_release_owner_chain(CreaturesAudioOutput *output,
    CreaturesAudioBufferOwner *owner, const CreaturesAudioOutputOps *ops) {
    size_t index;

    if (output == NULL || owner == NULL) {
        return;
    }

    if (owner->active_voice_ref_count > 0) {
        for (index = 0; index < CREATURES_AUDIO_VOICE_SLOT_COUNT; index++) {
            if (output->voice_slots[index].is_active != 0 &&
                output->voice_slots[index].owner == owner) {
                creatures_audio_output_release_voice_slot(output, (int)index, ops);
            }
        }
    }

    if (owner->linked_owner != NULL) {
        for (index = 0; index < CREATURES_AUDIO_VOICE_SLOT_COUNT; index++) {
            if (output->voice_slots[index].is_active != 0 &&
                output->voice_slots[index].owner == owner->linked_owner) {
                creatures_audio_output_release_voice_slot(output, (int)index, ops);
            }
        }
        if (ops != NULL && ops->release_owner != NULL) {
            ops->release_owner(owner->linked_owner, 1, ops->ctx);
        }
        owner->linked_owner = NULL;
    }

    if (ops != NULL && ops->release_owner != NULL) {
        ops->release_owner(owner, 1, ops->ctx);
    }
}

void creatures_audio_output_release_registered_owners(
    CreaturesAudioOutput *output, const CreaturesAudioOutputOps *ops) {
    size_t index;

    if (output == NULL) {
        return;
    }

    if (output->owner_count > 0) {
        for (index = 0; index < output->owner_count; index++) {
            creatures_audio_output_release_owner_chain(output, output->owners[index], ops);
        }
        creatures_audio_notify_mixer_idle(ops);
    }
}

void creatures_audio_output_shutdown(
    CreaturesAudioOutput *output, const CreaturesAudioOutputOps *ops) {
    if (output == NULL || output->is_device_ready == 0) {
        return;
    }

    creatures_audio_output_release_registered_streams_and_slots(output, ops);
    creatures_audio_output_release_registered_owners(output, ops);

    if (output->primary_buffer_handle != NULL && ops != NULL && ops->release_buffer != NULL) {
        ops->release_buffer(output->primary_buffer_handle, ops->ctx);
    }

    output->registered_stream_count = 0;
    output->owner_count = 0;
    output->primary_buffer_handle = NULL;
    output->is_primary_buffer_ready = 0;
    output->is_device_ready = 0;
}

CreaturesAudioOutput *creatures_audio_output_destroy(
    CreaturesAudioOutput *output, uint32_t destroy_flags, const CreaturesAudioOutputOps *ops) {
    creatures_audio_output_shutdown(output, ops);
    if ((destroy_flags & 1u) != 0 && ops != NULL && ops->release_stream != NULL) {
        ops->release_stream(output, 1, ops->ctx);
        return NULL;
    }
    return output;
}
