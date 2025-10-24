#pragma once

#include <cstdint>

/* Defines a set of SpEffects to be applied to a specific enemy from MSB (map). */
struct SpEffectSetParam {
    /* 特殊効果ID1
     *   特殊効果ID1
     * SpEffect ID [1]
     *   Special effect ID1
     * Default Value  = -1 */
    int32_t spEffectId1;

    /* 特殊効果ID2
     *   特殊効果ID2
     * SpEffect ID [2]
     *   Special effect ID2
     * Default Value  = -1 */
    int32_t spEffectId2;

    /* 特殊効果ID3
     *   特殊効果ID3
     * SpEffect ID [3]
     *   Special effect ID3
     * Default Value  = -1 */
    int32_t spEffectId3;

    /* 特殊効果ID4
     *   特殊効果ID4
     * SpEffect ID [4]
     *   Special effect ID4
     * Default Value  = -1 */
    int32_t spEffectId4;
};
