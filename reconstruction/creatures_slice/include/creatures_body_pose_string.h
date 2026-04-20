#ifndef CREATURES_BODY_POSE_STRING_H
#define CREATURES_BODY_POSE_STRING_H

#include "creatures_body_layout.h"

void creatures_body_layout_apply_selection_mode(CreaturesBodyLayoutRuntime *layout);
void creatures_body_layout_apply_pose_string(CreaturesBodyLayoutRuntime *layout,
    const char pose_string[15]);

#endif
