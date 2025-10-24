#pragma once

#include <cstdint>

struct WaypointParam {
    /* 属性1
     * Attribute [1]
     * Default Value  = -1 */
    int16_t attribute1;

    /* 属性2
     * Attribute [2]
     * Default Value  = -1 */
    int16_t attribute2;

    /* 属性3
     * Attribute [3]
     * Default Value  = -1 */
    int16_t attribute3;

    /* 属性4
     * Attribute [4]
     * Default Value  = -1 */
    int16_t attribute4;

    /* パディング4 */
    char padding4[8];
};
