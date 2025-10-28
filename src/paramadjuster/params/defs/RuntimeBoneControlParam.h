#pragma once

#include <cstdint>

struct RuntimeBoneControlParam {
    /* キャラID
     *   キャラID
     * Character ID
     *   Character ID */
    uint32_t chrId {};

    /* 制御タイプ
     *   制御タイプ
     * Bone Control Type
     *   Control type */
    uint8_t ctrlType {};

    char pad[11] {};

    /* 適用関節
     *   適用関節
     * Applicable Joint
     *   Applicable joint */
    char applyBone[32] {};

    /* ターゲット関節１
     *   ターゲット関節１
     * Target Joint [1]
     *   Target joint 1 */
    char targetBone1[32] {};

    /* ターゲット関節２
     *   ターゲット関節２
     * Target Joint [2]
     *   Target joint 2 */
    char targetBone2[32] {};
};
