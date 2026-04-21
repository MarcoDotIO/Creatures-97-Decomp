#include "creatures_selected_creature_ui.h"

#include <stddef.h>
#include <string.h>

#define CREATURES_STATUS_PANE_FIRST_SLOT 4
#define CREATURES_STATUS_PANE_ACTIVE_CREATURE 6
#define CREATURES_STATUS_PANE_SCORE 7

#define CREATURES_STATUS_LABEL_INACTIVE_CREATURE 0x0000ef1bU
#define CREATURES_STATUS_LABEL_ACTIVE_CREATURE 0x0000ef1cU
#define CREATURES_STATUS_LABEL_NON_CREATURE 0x0000ef1dU
#define CREATURES_STATUS_DISABLED_STATE 0x04000100U

static bool creatures_selected_creature_copy_string(
    char *out, size_t out_size, const char *value) {
    size_t length;

    if (out == NULL || out_size == 0 || value == NULL) {
        return false;
    }

    length = strlen(value);
    if (length >= out_size) {
        return false;
    }

    memcpy(out, value, length + 1);
    return true;
}

static bool creatures_selected_creature_append_string(
    char *out, size_t out_size, const char *value) {
    size_t current_length;
    size_t value_length;

    if (out == NULL || out_size == 0 || value == NULL) {
        return false;
    }

    current_length = strlen(out);
    value_length = strlen(value);
    if (current_length + value_length >= out_size) {
        return false;
    }

    memcpy(out + current_length, value, value_length + 1);
    return true;
}

static int creatures_selected_creature_is_inactive(
    void *creature, const CreaturesSelectedCreatureUiOps *ops) {
    if (creature == NULL || ops == NULL || ops->creature_is_inactive == NULL) {
        return 0;
    }
    return ops->creature_is_inactive(creature, ops->ctx);
}

static uint32_t creatures_selected_creature_slot_label(
    void *creature, const CreaturesSelectedCreatureUiOps *ops) {
    uint32_t class_flags;

    if (creature == NULL || ops == NULL || ops->creature_class_flags == NULL) {
        return CREATURES_STATUS_LABEL_NON_CREATURE;
    }

    class_flags = ops->creature_class_flags(creature, ops->ctx);
    if ((class_flags & 0xff000000U) != 0x04000000U) {
        return CREATURES_STATUS_LABEL_NON_CREATURE;
    }

    if (creatures_selected_creature_is_inactive(creature, ops) != 0) {
        return CREATURES_STATUS_LABEL_INACTIVE_CREATURE;
    }
    return CREATURES_STATUS_LABEL_ACTIVE_CREATURE;
}

static void creatures_selected_creature_write_numeric_tail(
    char *text, size_t digit_count, unsigned int value) {
    size_t length;
    size_t digit_index;
    char *cursor;

    if (text == NULL || digit_count == 0) {
        return;
    }

    length = strlen(text);
    if (length < digit_count) {
        cursor = text;
    } else {
        cursor = text + length - digit_count;
    }

    for (digit_index = 0; digit_index < digit_count; digit_index++) {
        size_t reverse_index;

        reverse_index = digit_count - digit_index - 1;
        if (value == 0) {
            cursor[reverse_index] = digit_index == 0 ? '0' : ' ';
        } else {
            cursor[reverse_index] = (char)('0' + (value % 10));
        }
        value /= 10;
    }
}

void creatures_status_bar_refresh_selected_metrics(void *selected_creature,
    const CreaturesSelectedCreatureUiOps *ops) {
    char pane_text[64];
    unsigned int health_percent;
    unsigned int score_value;

    if (ops == NULL || ops->read_status_pane_text == NULL || ops->set_status_pane_text == NULL ||
        ops->score_part_value == NULL) {
        return;
    }

    if (selected_creature != NULL && ops->creature_health_raw != NULL &&
        ops->read_status_pane_text(CREATURES_STATUS_PANE_ACTIVE_CREATURE, pane_text,
            sizeof(pane_text), ops->ctx) == 0) {
        health_percent = (ops->creature_health_raw(selected_creature, ops->ctx) * 100U) / 0xffU;
        if (creatures_selected_creature_is_inactive(selected_creature, ops) != 0) {
            health_percent = 0;
        }
        creatures_selected_creature_write_numeric_tail(pane_text, 3, health_percent);
        ops->set_status_pane_text(CREATURES_STATUS_PANE_ACTIVE_CREATURE, pane_text, 1, ops->ctx);
    }

    if (ops->read_status_pane_text(CREATURES_STATUS_PANE_SCORE, pane_text, sizeof(pane_text),
            ops->ctx) != 0) {
        return;
    }

    score_value = (unsigned int)ops->score_part_value(1, ops->ctx) * 0x100U +
        (unsigned int)ops->score_part_value(4, ops->ctx);
    if (score_value > 99999U) {
        score_value = 99999U;
    }
    creatures_selected_creature_write_numeric_tail(pane_text, 6, score_value);
    ops->set_status_pane_text(CREATURES_STATUS_PANE_SCORE, pane_text, 1, ops->ctx);
}

void creatures_status_bar_refresh_history_and_metrics(
    const CreaturesSelectedCreatureHistory *history, void *selected_creature,
    void *status_window_handle, const CreaturesSelectedCreatureUiOps *ops) {
    int slot_index;
    char pane_text[64];

    if (history == NULL || ops == NULL || ops->load_string_resource == NULL ||
        ops->set_status_pane_text == NULL || ops->set_status_pane_state == NULL) {
        return;
    }

    for (slot_index = 0; slot_index < history->count; slot_index++) {
        int pane_index;
        uint32_t label_id;

        pane_index = CREATURES_STATUS_PANE_FIRST_SLOT - slot_index;
        label_id = creatures_selected_creature_slot_label(history->slots[slot_index], ops);
        ops->load_string_resource(label_id, pane_text, sizeof(pane_text), ops->ctx);
        ops->set_status_pane_text(pane_index, pane_text, 1, ops->ctx);
        ops->set_status_pane_state(pane_index, 0, ops->ctx);
    }

    for (; slot_index < CREATURES_SELECTED_CREATURE_SLOT_COUNT; slot_index++) {
        ops->set_status_pane_state(
            CREATURES_STATUS_PANE_FIRST_SLOT - slot_index, CREATURES_STATUS_DISABLED_STATE,
            ops->ctx);
    }

    ops->set_status_pane_state(CREATURES_STATUS_PANE_ACTIVE_CREATURE,
        selected_creature == NULL ? CREATURES_STATUS_DISABLED_STATE : 0, ops->ctx);
    creatures_status_bar_refresh_selected_metrics(selected_creature, ops);
    if (ops->invalidate_window != NULL) {
        ops->invalidate_window(status_window_handle, 1, ops->ctx);
    }
}

void creatures_main_window_refresh_title(
    const char *base_title, void *selected_creature, const CreaturesSelectedCreatureUiOps *ops) {
    char title_buffer[256];
    const char *selected_name;

    if (base_title == NULL || ops == NULL || ops->set_main_window_title == NULL) {
        return;
    }

    if (!creatures_selected_creature_copy_string(
            title_buffer, sizeof(title_buffer), base_title)) {
        return;
    }

    if (selected_creature != NULL && ops->creature_name != NULL) {
        selected_name = ops->creature_name(selected_creature, ops->ctx);
        if (selected_name != NULL && selected_name[0] != '\0' &&
            creatures_selected_creature_append_string(
                title_buffer, sizeof(title_buffer), " - ") &&
            creatures_selected_creature_append_string(
                title_buffer, sizeof(title_buffer), selected_name)) {
            ops->set_main_window_title(title_buffer, ops->ctx);
            return;
        }
    }

    ops->set_main_window_title(title_buffer, ops->ctx);
}

void creatures_selected_creature_history_remove(CreaturesSelectedCreatureHistory *history,
    void *creature, int handle_inactive_remove, void *selected_creature,
    void *status_window_handle, const CreaturesSelectedCreatureUiOps *ops) {
    int slot_index;
    int remove_index;

    if (history == NULL || creature == NULL) {
        return;
    }

    remove_index = -1;
    for (slot_index = 0; slot_index < history->count; slot_index++) {
        if (history->slots[slot_index] == creature) {
            remove_index = slot_index;
            break;
        }
    }
    if (remove_index < 0) {
        return;
    }

    if (handle_inactive_remove != 0 && ops != NULL && ops->on_remove_inactive_creature != NULL &&
        ops->creature_class_flags != NULL &&
        (ops->creature_class_flags(creature, ops->ctx) & 0xff000000U) == 0x04000000U &&
        creatures_selected_creature_is_inactive(creature, ops) != 0) {
        ops->on_remove_inactive_creature(creature, ops->ctx);
    }

    for (slot_index = remove_index; slot_index < history->count - 1; slot_index++) {
        history->slots[slot_index] = history->slots[slot_index + 1];
    }
    history->slots[history->count - 1] = NULL;
    history->count--;

    if (ops != NULL) {
        creatures_status_bar_refresh_history_and_metrics(
            history, selected_creature, status_window_handle, ops);
    }
}

void creatures_selected_creature_history_push(CreaturesSelectedCreatureHistory *history,
    void *creature, void *selected_creature, void *status_window_handle,
    const CreaturesSelectedCreatureUiOps *ops) {
    int slot_index;

    if (history == NULL || creature == NULL) {
        return;
    }

    for (slot_index = 0; slot_index < history->count; slot_index++) {
        if (history->slots[slot_index] == creature) {
            if (ops != NULL) {
                creatures_status_bar_refresh_history_and_metrics(
                    history, selected_creature, status_window_handle, ops);
            }
            return;
        }
    }

    if (history->count == CREATURES_SELECTED_CREATURE_SLOT_COUNT) {
        if (ops != NULL && ops->on_remove_inactive_creature != NULL &&
            ops->creature_class_flags != NULL &&
            (ops->creature_class_flags(history->slots[0], ops->ctx) & 0xff000000U) ==
                0x04000000U &&
            creatures_selected_creature_is_inactive(history->slots[0], ops) != 0) {
            ops->on_remove_inactive_creature(history->slots[0], ops->ctx);
        }
        for (slot_index = 0; slot_index < history->count - 1; slot_index++) {
            history->slots[slot_index] = history->slots[slot_index + 1];
        }
        history->count--;
    }

    history->slots[history->count++] = creature;
    if (ops != NULL) {
        creatures_status_bar_refresh_history_and_metrics(
            history, selected_creature, status_window_handle, ops);
    }
}

void creatures_selected_creature_set(void **selected_creature_inout, void *new_creature,
    int refresh_main_surface, CreaturesSelectedCreatureHistory *history,
    void *status_window_handle, void *main_window_handle, const char *base_title,
    const CreaturesSelectedCreatureUiOps *ops) {
    void *previous_creature;
    int selection_mode;

    if (selected_creature_inout == NULL || ops == NULL) {
        return;
    }

    previous_creature = *selected_creature_inout;
    if (previous_creature == new_creature) {
        return;
    }

    *selected_creature_inout = new_creature;
    selection_mode = new_creature == NULL ? 8 : 6;
    if (ops->notify_selection_mode != NULL) {
        ops->notify_selection_mode(2, selection_mode, 0, 0, ops->ctx);
    }

    creatures_main_window_refresh_title(base_title, new_creature, ops);
    if (ops->close_eye_window != NULL &&
        (new_creature == NULL || creatures_selected_creature_is_inactive(new_creature, ops) != 0)) {
        ops->close_eye_window(ops->ctx);
    } else if (ops->refresh_eye_window != NULL) {
        ops->refresh_eye_window(ops->ctx);
    }

    if (new_creature != NULL && creatures_selected_creature_is_inactive(new_creature, ops) != 0 &&
        ops->notify_selection_mode != NULL) {
        ops->notify_selection_mode(2, 8, 0, 0, ops->ctx);
    }

    if (refresh_main_surface != 0 && ops->refresh_main_surface != NULL) {
        ops->refresh_main_surface(ops->ctx);
    }
    creatures_status_bar_refresh_history_and_metrics(
        history, new_creature, status_window_handle, ops);
    if (ops->invalidate_window != NULL) {
        ops->invalidate_window(main_window_handle, 0, ops->ctx);
    }
}
