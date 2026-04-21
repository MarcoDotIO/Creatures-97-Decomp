#include "creatures_window_state.h"

static const char k_creatures_window_pos_value[] = "WindowPosn";
static const char k_creatures_eye_pos_value[] = "EyePosn";

void creatures_main_window_save_placement_and_shutdown(void *window_handle,
    const CreaturesRegistryHandler *handler, const CreaturesRegistryOps *registry_ops,
    const CreaturesMainWindowStateOps *window_ops) {
    CreaturesDisplayRect window_rect;

    if (handler != NULL && registry_ops != NULL && window_ops != NULL &&
        window_ops->is_iconic != NULL && window_ops->read_window_rect != NULL &&
        window_ops->is_iconic(window_handle, window_ops->ctx) == 0) {
        window_ops->read_window_rect(window_handle, &window_rect, window_ops->ctx);
        creatures_registry_write_rect(handler, registry_ops, 0, k_creatures_window_pos_value,
            &window_rect);
    }

    if (window_ops != NULL && window_ops->shutdown_main_window != NULL) {
        window_ops->shutdown_main_window(window_ops->ctx);
    }
}

void creatures_eye_window_save_position_and_destroy(void *owner, void *window_handle,
    const CreaturesRegistryHandler *handler, const CreaturesRegistryOps *registry_ops,
    const CreaturesEyeWindowStateOps *window_ops) {
    CreaturesDisplayRect window_rect;
    CreaturesRegistryPair32 window_position;

    if (handler != NULL && registry_ops != NULL && window_ops != NULL &&
        window_ops->read_window_rect != NULL) {
        window_ops->read_window_rect(window_handle, &window_rect, window_ops->ctx);
        window_position.first = window_rect.left;
        window_position.second = window_rect.top;
        creatures_registry_write_pair32(handler, registry_ops, 0, k_creatures_eye_pos_value,
            &window_position);
    }

    if (window_ops != NULL && window_ops->destroy_eye_window != NULL) {
        window_ops->destroy_eye_window(owner, window_ops->ctx);
    }
}
