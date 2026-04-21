#include "creatures_viewport_capture.h"

#include <string.h>

static bool creatures_viewport_capture_intersect_rect(CreaturesDisplayRect *out_rect,
    const CreaturesDisplayRect *left_rect, const CreaturesDisplayRect *right_rect) {
    if (out_rect == NULL || left_rect == NULL || right_rect == NULL) {
        return false;
    }

    out_rect->left = left_rect->left > right_rect->left ? left_rect->left : right_rect->left;
    out_rect->top = left_rect->top > right_rect->top ? left_rect->top : right_rect->top;
    out_rect->right = left_rect->right < right_rect->right ? left_rect->right : right_rect->right;
    out_rect->bottom =
        left_rect->bottom < right_rect->bottom ? left_rect->bottom : right_rect->bottom;
    return out_rect->left < out_rect->right && out_rect->top < out_rect->bottom;
}

static bool creatures_viewport_capture_equal_rect(
    const CreaturesDisplayRect *left_rect, const CreaturesDisplayRect *right_rect) {
    if (left_rect == NULL || right_rect == NULL) {
        return false;
    }

    return left_rect->left == right_rect->left && left_rect->top == right_rect->top &&
        left_rect->right == right_rect->right && left_rect->bottom == right_rect->bottom;
}

static uint32_t creatures_viewport_capture_align_stride(uint32_t width) {
    return (width + 3u) & ~3u;
}

int creatures_capture_8bit_bitmap_region(const CreaturesWingBitmapInfo *bitmap_info,
    const uint8_t *backbuffer_pixels, const CreaturesDisplayRect *client_rect,
    void *capture_target, const CreaturesViewportCaptureOps *ops) {
    CreaturesCapturedBitmapHeader *capture_header;
    uint8_t *capture_pixels;
    const uint8_t *source_row;
    int source_stride;
    int source_step;
    uint32_t capture_height;
    uint32_t capture_stride;
    size_t allocation_size;
    uint32_t row_index;
    int submit_result;

    if (bitmap_info == NULL || backbuffer_pixels == NULL || client_rect == NULL || ops == NULL ||
        ops->allocate_capture == NULL || ops->free_capture == NULL ||
        ops->submit_capture == NULL) {
        return 0;
    }

    if (bitmap_info->bit_count != 8 || client_rect->left >= client_rect->right ||
        client_rect->top >= client_rect->bottom) {
        return 0;
    }

    capture_height = (uint32_t)(client_rect->bottom - client_rect->top);
    capture_stride = creatures_viewport_capture_align_stride(
        (uint32_t)(client_rect->right - client_rect->left));
    allocation_size = sizeof(*capture_header) + (size_t)capture_height * capture_stride;
    capture_header = (CreaturesCapturedBitmapHeader *)ops->allocate_capture(
        allocation_size, ops->ctx);
    if (capture_header == NULL) {
        return 0;
    }

    capture_header->row_pitch = capture_stride;
    capture_header->height = capture_height;
    capture_header->stored_stride = capture_stride;
    capture_pixels = (uint8_t *)(capture_header + 1);

    source_stride = (int)creatures_viewport_capture_align_stride((uint32_t)bitmap_info->width);
    source_row = backbuffer_pixels + client_rect->top * source_stride + client_rect->left;
    source_step = source_stride;
    if (bitmap_info->height < 0) {
        source_step = -source_stride;
        source_row += source_stride * (int)capture_height;
    }

    for (row_index = 0; row_index < capture_height; row_index++) {
        memcpy(capture_pixels + (size_t)row_index * capture_stride, source_row, capture_stride);
        source_row += source_step;
    }

    if (ops->begin_capture != NULL) {
        ops->begin_capture(ops->ctx);
    }

    submit_result = ops->submit_capture(capture_target, 0x1001u, capture_header,
        allocation_size, ops->ctx);
    if (!submit_result && ops->report_capture_failure != NULL) {
        ops->report_capture_failure("Could not create file.", ops->ctx);
    }

    if (ops->end_capture != NULL) {
        ops->end_capture(ops->ctx);
    }
    ops->free_capture(capture_header, ops->ctx);
    return submit_result != 0;
}

int creatures_capture_centered_viewport_region(uint8_t capture_width, uint8_t capture_height,
    void *bounds_source, void *default_bounds_source,
    const CreaturesViewportCaptureSource *capture_source, void *capture_target,
    const CreaturesViewportCaptureOps *ops) {
    CreaturesDisplayRect requested_bounds;
    CreaturesDisplayRect visible_bounds;
    CreaturesDisplayRect capture_bounds;

    if (capture_source == NULL || capture_source->surface == NULL || capture_source->bitmap_info == NULL ||
        capture_source->backbuffer_pixels == NULL || ops == NULL || ops->resolve_bounds == NULL) {
        return 0;
    }

    if (bounds_source == NULL) {
        bounds_source = default_bounds_source;
    }
    ops->resolve_bounds(bounds_source, &requested_bounds, ops->ctx);

    requested_bounds.left = requested_bounds.left -
        (((requested_bounds.left - requested_bounds.right) + (int)capture_width + 1) >> 1);
    requested_bounds.right = requested_bounds.left + (int)capture_width;
    requested_bounds.top = requested_bounds.top -
        (((requested_bounds.top - requested_bounds.bottom) + (int)capture_height + 1) >> 1);
    requested_bounds.bottom = requested_bounds.top + (int)capture_height;

    visible_bounds = capture_source->surface->bounds;
    if (!creatures_viewport_capture_intersect_rect(
            &capture_bounds, &requested_bounds, &visible_bounds) ||
        !creatures_viewport_capture_equal_rect(&capture_bounds, &requested_bounds)) {
        return 0;
    }

    creatures_display_surface_world_to_client_rect(
        capture_source->surface, &capture_bounds, &requested_bounds);
    return creatures_capture_8bit_bitmap_region(capture_source->bitmap_info,
        capture_source->backbuffer_pixels, &capture_bounds, capture_target, ops);
}
