#pragma once

#include <cstdint>

struct MapMimicryEstablishmentParam {
    /* 擬態重み0
     *   擬態重み0
     * Mimicry Weight [0]
     *   Mimicry weight 0
     * Default Value  = -1 */
    float mimicryEstablishment0 = -1;

    /* 擬態重み1
     *   擬態重み1
     * Mimicry Weight [1]
     *   Mimicry weight 1
     * Default Value  = -1 */
    float mimicryEstablishment1 = -1;

    /* 擬態重み2
     *   擬態重み2
     * Mimicry Weight [2]
     *   Mimicry weight 2
     * Default Value  = -1 */
    float mimicryEstablishment2 = -1;

    /* 擬態0 SFXID 前振り
     *   擬態0 SFXID 前振り
     * Mimicry - Init SFX ID [0]
     *   Mimicry 0 SFXID Forward swing
     * Default Value  = -1 */
    int32_t mimicryBeginSfxId0 = -1;

    /* 擬態0 SFXID 本体
     *   擬態0 SFXID 本体
     * Mimicry - Midst SFX ID [0]
     *   Mimicry 0 SFXID body
     * Default Value  = -1 */
    int32_t mimicrySfxId0 = -1;

    /* 擬態0 SFXID 解除
     *   擬態0 SFXID 解除
     * Mimicry - End SFX ID [0]
     *   Mimicry 0 SFXID release
     * Default Value  = -1 */
    int32_t mimicryEndSfxId0 = -1;

    /* 擬態1 SFXID 前振り
     *   擬態1 SFXID 前振り
     * Mimicry - Init SFX ID [1]
     *   Mimicry 1 SFXID Forward swing
     * Default Value  = -1 */
    int32_t mimicryBeginSfxId1 = -1;

    /* 擬態1 SFXID 本体
     *   擬態1 SFXID 本体
     * Mimicry - Midst SFX ID [1]
     *   Mimicry 1 SFXID body
     * Default Value  = -1 */
    int32_t mimicrySfxId1 = -1;

    /* 擬態1 SFXID 解除
     *   擬態1 SFXID 解除
     * Mimicry - End SFX ID [1]
     *   Mimicry 1 SFXID release
     * Default Value  = -1 */
    int32_t mimicryEndSfxId1 = -1;

    /* 擬態2 SFXID 前振り
     *   擬態2 SFXID 前振り
     * Mimicry - Init SFX ID [2]
     *   Mimicry 2 SFXID Forward swing
     * Default Value  = -1 */
    int32_t mimicryBeginSfxId2 = -1;

    /* 擬態2 SFXID 本体
     *   擬態2 SFXID 本体
     * Mimicry - Midst SFX ID [2]
     *   Mimicry 2 SFXID body
     * Default Value  = -1 */
    int32_t mimicrySfxId2 = -1;

    /* 擬態2 SFXID 解除
     *   擬態2 SFXID 解除
     * Mimicry - End SFX ID [2]
     *   Mimicry 2 SFXID cancellation
     * Default Value  = -1 */
    int32_t mimicryEndSfxId2 = -1;

    /* パッド
     *   pad */
    char pad1[16] {};
};
