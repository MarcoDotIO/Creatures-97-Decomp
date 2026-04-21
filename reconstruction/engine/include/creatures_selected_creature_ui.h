#ifndef CREATURES_SELECTED_CREATURE_UI_H
#define CREATURES_SELECTED_CREATURE_UI_H

#include "creatures_common.h"

#define CREATURES_SELECTED_CREATURE_SLOT_COUNT 4

typedef struct CreaturesSelectedCreatureHistory {
    int count;
    void *slots[CREATURES_SELECTED_CREATURE_SLOT_COUNT];
} CreaturesSelectedCreatureHistory;

typedef uint32_t (*CreaturesCreatureClassFlagsProc)(void *creature, void *ctx);
typedef int (*CreaturesCreatureInactiveProc)(void *creature, void *ctx);
typedef unsigned int (*CreaturesCreatureHealthRawProc)(void *creature, void *ctx);
typedef const char *(*CreaturesCreatureNameProc)(void *creature, void *ctx);
typedef void (*CreaturesLoadStringResourceProc)(
    uint32_t resource_id, char *out_text, size_t out_size, void *ctx);
typedef int (*CreaturesReadStatusPaneTextProc)(
    int pane_index, char *out_text, size_t out_size, void *ctx);
typedef void (*CreaturesSetStatusPaneTextProc)(
    int pane_index, const char *text, int redraw, void *ctx);
typedef void (*CreaturesSetStatusPaneStateProc)(int pane_index, uint32_t state, void *ctx);
typedef int (*CreaturesScorePartValueProc)(int part_index, void *ctx);
typedef void (*CreaturesInvalidateWindowProc)(
    void *window_handle, int erase_background, void *ctx);
typedef void (*CreaturesSetMainWindowTitleProc)(const char *title, void *ctx);
typedef void (*CreaturesSelectionModeProc)(
    int channel, int value, int first_arg, int second_arg, void *ctx);
typedef void (*CreaturesUiVoidProc)(void *ctx);
typedef void (*CreaturesCreatureCallbackProc)(void *creature, void *ctx);

typedef struct CreaturesSelectedCreatureUiOps {
    CreaturesCreatureClassFlagsProc creature_class_flags;
    CreaturesCreatureInactiveProc creature_is_inactive;
    CreaturesCreatureHealthRawProc creature_health_raw;
    CreaturesCreatureNameProc creature_name;
    CreaturesLoadStringResourceProc load_string_resource;
    CreaturesReadStatusPaneTextProc read_status_pane_text;
    CreaturesSetStatusPaneTextProc set_status_pane_text;
    CreaturesSetStatusPaneStateProc set_status_pane_state;
    CreaturesScorePartValueProc score_part_value;
    CreaturesInvalidateWindowProc invalidate_window;
    CreaturesSetMainWindowTitleProc set_main_window_title;
    CreaturesSelectionModeProc notify_selection_mode;
    CreaturesUiVoidProc close_eye_window;
    CreaturesUiVoidProc refresh_eye_window;
    CreaturesUiVoidProc refresh_main_surface;
    CreaturesCreatureCallbackProc on_remove_inactive_creature;
    void *ctx;
} CreaturesSelectedCreatureUiOps;

void creatures_status_bar_refresh_selected_metrics(void *selected_creature,
    const CreaturesSelectedCreatureUiOps *ops);
void creatures_status_bar_refresh_history_and_metrics(
    const CreaturesSelectedCreatureHistory *history, void *selected_creature,
    void *status_window_handle, const CreaturesSelectedCreatureUiOps *ops);
void creatures_main_window_refresh_title(
    const char *base_title, void *selected_creature, const CreaturesSelectedCreatureUiOps *ops);
void creatures_selected_creature_history_remove(CreaturesSelectedCreatureHistory *history,
    void *creature, int handle_inactive_remove, void *selected_creature,
    void *status_window_handle, const CreaturesSelectedCreatureUiOps *ops);
void creatures_selected_creature_history_push(CreaturesSelectedCreatureHistory *history,
    void *creature, void *selected_creature, void *status_window_handle,
    const CreaturesSelectedCreatureUiOps *ops);
void creatures_selected_creature_set(void **selected_creature_inout, void *new_creature,
    int refresh_main_surface, CreaturesSelectedCreatureHistory *history,
    void *status_window_handle, void *main_window_handle, const char *base_title,
    const CreaturesSelectedCreatureUiOps *ops);

#endif
