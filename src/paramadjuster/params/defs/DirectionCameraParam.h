#pragma once

#include <cstdint>

struct DirectionCameraParam {
    /* オプションの影響を受けるか
     *   演出カメラON/OFFオプションの影響を受けるか？
     * Is Use Option
     *   Is it affected by the production camera ON / OFF option? */
    uint8_t isUseOption:1 {};

    /* パッド
     *   pad */
    char pad2:3 {};

    /* パッド
     *   pad */
    char pad1[15] {};
};
