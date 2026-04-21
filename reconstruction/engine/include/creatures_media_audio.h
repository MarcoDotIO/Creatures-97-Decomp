#ifndef CREATURES_MEDIA_AUDIO_H
#define CREATURES_MEDIA_AUDIO_H

#include "creatures_common.h"

#define CREATURES_AUDIO_VOICE_SLOT_COUNT 32
#define CREATURES_AUDIO_REGISTERED_STREAM_CAPACITY 32
#define CREATURES_AUDIO_OWNER_CAPACITY 32
#define CREATURES_AUDIO_COOPERATIVE_LEVEL_PRIORITY 2

typedef struct CreaturesWaveFormat {
    uint16_t format_tag;
    uint16_t channel_count;
    uint32_t samples_per_second;
    uint32_t average_bytes_per_second;
    uint16_t block_align;
    uint16_t bits_per_sample;
} CreaturesWaveFormat;

typedef struct CreaturesSoundBufferDesc {
    uint32_t size;
    uint32_t flags;
    uint32_t buffer_bytes;
    void *format;
} CreaturesSoundBufferDesc;

typedef struct CreaturesAudioVoiceSlot {
    void *buffer_handle;
    uint32_t is_active;
    uint32_t playback_cursor;
    uint32_t write_cursor;
    struct CreaturesAudioBufferOwner *owner;
} CreaturesAudioVoiceSlot;

typedef struct CreaturesAudioBufferOwner {
    int active_voice_ref_count;
    struct CreaturesAudioBufferOwner *linked_owner;
} CreaturesAudioBufferOwner;

typedef int (*CreaturesAudioCreateDeviceProc)(
    void *guid, void **device_out, void *outer, void *ctx);
typedef int (*CreaturesAudioSetCooperativeLevelProc)(
    void *device, uintptr_t window_handle, unsigned int level, void *ctx);
typedef int (*CreaturesAudioCreateBufferProc)(void *device,
    const CreaturesSoundBufferDesc *buffer_desc, void **buffer_out, void *ctx);
typedef int (*CreaturesAudioGetFormatProc)(
    void *buffer, CreaturesWaveFormat *format_out, size_t format_size, void *ctx);
typedef int (*CreaturesAudioSetFormatProc)(
    void *buffer, const CreaturesWaveFormat *format, void *ctx);
typedef int (*CreaturesAudioStopBufferProc)(void *buffer, void *ctx);
typedef int (*CreaturesAudioReleaseBufferProc)(void *buffer, void *ctx);
typedef int (*CreaturesAudioReleaseStreamProc)(void *stream, int destroy_mode, void *ctx);
typedef int (*CreaturesAudioReleaseOwnerProc)(
    CreaturesAudioBufferOwner *owner, int destroy_mode, void *ctx);
typedef void (*CreaturesAudioNotifyMixerIdleProc)(int channel, int value, void *ctx);

typedef struct CreaturesAudioOutputOps {
    CreaturesAudioCreateDeviceProc create_device;
    CreaturesAudioSetCooperativeLevelProc set_cooperative_level;
    CreaturesAudioCreateBufferProc create_buffer;
    CreaturesAudioGetFormatProc get_format;
    CreaturesAudioSetFormatProc set_format;
    CreaturesAudioStopBufferProc stop_buffer;
    CreaturesAudioReleaseBufferProc release_buffer;
    CreaturesAudioReleaseStreamProc release_stream;
    CreaturesAudioReleaseOwnerProc release_owner;
    CreaturesAudioNotifyMixerIdleProc notify_mixer_idle;
    void *ctx;
} CreaturesAudioOutputOps;

typedef struct CreaturesAudioOutput {
    void *device_handle;
    void *primary_buffer_handle;
    CreaturesAudioVoiceSlot voice_slots[CREATURES_AUDIO_VOICE_SLOT_COUNT];
    void *registered_streams[CREATURES_AUDIO_REGISTERED_STREAM_CAPACITY];
    size_t registered_stream_count;
    CreaturesAudioBufferOwner *owners[CREATURES_AUDIO_OWNER_CAPACITY];
    size_t owner_count;
    int is_device_ready;
    int is_primary_buffer_ready;
    int active_voice_count;
} CreaturesAudioOutput;

void creatures_audio_voice_slot_reset(CreaturesAudioVoiceSlot *slot);
void creatures_audio_output_init(CreaturesAudioOutput *output);
bool creatures_audio_output_create_primary_buffer(CreaturesAudioOutput *output,
    uintptr_t cooperative_window_handle, const CreaturesAudioOutputOps *ops);
void creatures_audio_output_release_registered_streams(
    CreaturesAudioOutput *output, const CreaturesAudioOutputOps *ops);
void creatures_audio_output_release_registered_streams_and_slots(
    CreaturesAudioOutput *output, const CreaturesAudioOutputOps *ops);
bool creatures_audio_output_release_voice_slot(
    CreaturesAudioOutput *output, int slot_index, const CreaturesAudioOutputOps *ops);
void creatures_audio_output_release_owner_chain(CreaturesAudioOutput *output,
    CreaturesAudioBufferOwner *owner, const CreaturesAudioOutputOps *ops);
void creatures_audio_output_release_registered_owners(
    CreaturesAudioOutput *output, const CreaturesAudioOutputOps *ops);
void creatures_audio_output_shutdown(
    CreaturesAudioOutput *output, const CreaturesAudioOutputOps *ops);
CreaturesAudioOutput *creatures_audio_output_destroy(
    CreaturesAudioOutput *output, uint32_t destroy_flags, const CreaturesAudioOutputOps *ops);

#endif
