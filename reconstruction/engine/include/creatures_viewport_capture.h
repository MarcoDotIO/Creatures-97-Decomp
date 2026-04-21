#ifndef CREATURES_VIEWPORT_CAPTURE_H
#define CREATURES_VIEWPORT_CAPTURE_H

#include "creatures_media_display.h"
#include "creatures_media_wing.h"

typedef void (*CreaturesViewportResolveBoundsProc)(
    void *bounds_source, CreaturesDisplayRect *out_bounds, void *ctx);
typedef void *(*CreaturesViewportCaptureAllocProc)(size_t allocation_size, void *ctx);
typedef void (*CreaturesViewportCaptureFreeProc)(void *allocation, void *ctx);
typedef void (*CreaturesViewportCaptureBeginProc)(void *ctx);
typedef int (*CreaturesViewportCaptureSubmitProc)(
    void *capture_target, unsigned int format_id, const void *payload, size_t payload_size,
    void *ctx);
typedef void (*CreaturesViewportCaptureEndProc)(void *ctx);
typedef void (*CreaturesViewportCaptureReportFailureProc)(const char *message, void *ctx);

typedef struct CreaturesViewportCaptureSource {
    CreaturesDisplaySurface *surface;
    const CreaturesWingBitmapInfo *bitmap_info;
    const uint8_t *backbuffer_pixels;
} CreaturesViewportCaptureSource;

typedef struct CreaturesCapturedBitmapHeader {
    uint32_t row_pitch;
    uint32_t height;
    uint32_t stored_stride;
} CreaturesCapturedBitmapHeader;

typedef struct CreaturesViewportCaptureOps {
    CreaturesViewportResolveBoundsProc resolve_bounds;
    CreaturesViewportCaptureAllocProc allocate_capture;
    CreaturesViewportCaptureFreeProc free_capture;
    CreaturesViewportCaptureBeginProc begin_capture;
    CreaturesViewportCaptureSubmitProc submit_capture;
    CreaturesViewportCaptureEndProc end_capture;
    CreaturesViewportCaptureReportFailureProc report_capture_failure;
    void *ctx;
} CreaturesViewportCaptureOps;

int creatures_capture_8bit_bitmap_region(const CreaturesWingBitmapInfo *bitmap_info,
    const uint8_t *backbuffer_pixels, const CreaturesDisplayRect *client_rect,
    void *capture_target, const CreaturesViewportCaptureOps *ops);
int creatures_capture_centered_viewport_region(uint8_t capture_width, uint8_t capture_height,
    void *bounds_source, void *default_bounds_source,
    const CreaturesViewportCaptureSource *capture_source, void *capture_target,
    const CreaturesViewportCaptureOps *ops);

#endif
