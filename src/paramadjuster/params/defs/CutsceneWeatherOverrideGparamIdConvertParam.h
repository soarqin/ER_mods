#pragma once

#include <cstdint>

struct CutsceneWeatherOverrideGparamIdConvertParam {
    /* カットシーン天候上書きGparamサフィックスID
     *   s00_00_0000_WeatherOverride_??.gparamの??の部分のIDです
     * Weather Override GPARAM ID
     *   The ID of the ?? part of s00_00_0000_WeatherOverride_ ??. Gparam */
    uint32_t weatherOverrideGparamId {};
};
