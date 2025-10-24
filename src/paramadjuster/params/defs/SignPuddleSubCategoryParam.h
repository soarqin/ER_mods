#pragma once

#include <cstdint>

struct SignPuddleSubCategoryParam {
    char startPad[4];

    /* Sign Puddle Category Text ID */
    int32_t signPuddleCategoryText;

    /* Tab ID */
    uint16_t signPuddleTabId;

    uint16_t unknown_0xa;

    char endPad[4];
};
