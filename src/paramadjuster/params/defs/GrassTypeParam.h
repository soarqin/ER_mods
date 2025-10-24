#pragma once

#include <cstdint>

/* Dynamic instanced assets, combined with a flat or billboard texture. Used to generate scattered grass or other such arrangements without the need for manual placement. */
struct GrassTypeParam {
    /* LOD距離
     * LOD Distance */
    uint16_t lodRange;

    /* LOD0のクラスタータイプ
     * LOD 0 - Cluster Type */
    uint8_t lod0ClusterType;

    /* LOD1のクラスタータイプ
     * LOD 1 - Cluster Type */
    uint8_t lod1ClusterType;

    /* LOD2のクラスタータイプ
     * LOD 2 - Cluster Type */
    uint8_t lod2ClusterType;

    char pad0[2];

    /* 配置方法
     * Placement Method */
    uint8_t distributionType;

    /* 基本密度
     * Base Density
     * Default Value  = 1 */
    float baseDensity;

    /* モデル名（０）
     * Model Name [0] */
    wchar_t model0Name[16];

    /* フラットテクスチャー名
     * Flat Texture Name */
    wchar_t flatTextureName[32];

    /* ビルボードのテクスチャー名
     * Billboard Texture Name */
    wchar_t billboardTextureName[32];

    /* 傾きの影響（％）
     * Effect of Tilt % */
    uint8_t normalInfluence;

    /* 傾きの最大角度（度）
     * Maximum Tilt Angle
     * Default Value  = 90 */
    uint8_t inclinationMax;

    /* 傾斜角のランダム性（度）
     * Randomness of Tilt Angle */
    uint8_t inclinationJitter;

    /* 幅のスケール範囲(min，％)
     * Width Scale - Min
     * Default Value  = 100 */
    uint8_t scaleBaseMin;

    /* 幅のスケール範囲(max，％)
     * Width Scale - Max
     * Default Value  = 100 */
    uint8_t scaleBaseMax;

    /* 高さのスケール範囲(min，％)
     * Height Scale - Min
     * Default Value  = 100 */
    uint8_t scaleHeightMin;

    /* 高さのスケール範囲(max，％)
     * Height Scale - Max
     * Default Value  = 100 */
    uint8_t scaleHeightMax;

    /* 乗算カラー１ (赤）
     * Color Shade [1] R
     * Default Value  = 255 */
    uint8_t colorShade1_r;

    /* 乗算カラー１ （緑）
     * Color Shade [1] G
     * Default Value  = 255 */
    uint8_t colorShade1_g;

    /* 乗算カラー １（青）
     * Color Shade [1] B
     * Default Value  = 255 */
    uint8_t colorShade1_b;

    /* 乗算カラー２ （赤）
     * Color Shade [2] R
     * Default Value  = 255 */
    uint8_t colorShade2_r;

    /* 乗算カラー２ （緑）
     * Color Shade [2] G
     * Default Value  = 255 */
    uint8_t colorShade2_g;

    /* 乗算カラー ２（青）
     * Color Shade [2] B
     * Default Value  = 255 */
    uint8_t colorShade2_b;

    /* 平面の分離
     * Plane Split Type */
    uint8_t flatSplitType;

    /* 平面の枚数
     * Number of Planes
     * Default Value  = 2 */
    uint8_t flatBladeCount;

    /* 平面の角度（度）
     * Plane Angle */
    int8_t flatSlant;

    /* 平面の距離
     * Plane Distance */
    float flatRadius;

    /* 影を落とすか
     * Cast Shadow
     * Default Value  = 1 */
    uint8_t castShadow;

    /* 振幅(揺れの大きさ)
     * Wind Amplitude
     * Default Value  = 80 */
    uint8_t windAmplitude;

    char pad1[1];

    /* 周期(速度)
     * Wind Speed
     * Default Value  = 40 */
    uint8_t windCycle;

    /* 方向（度）
     *   -1の場合はランダム
     * Direction
     *   Random for -1
     * Default Value  = -1 */
    float orientationAngle;

    /* 方向の範囲（度）
     * Direction Range
     * Default Value  = -1 */
    float orientationRange;

    /* モデル間隔
     * Model Spacing */
    float spacing;

    /* ディザリング
     * Dithering */
    uint8_t dithering;

    /* pad2 */
    char pad[3];

    /* Simpleモデル名
     * Simple Model Name */
    wchar_t simpleModelName[16];

    /* モデル名（１）
     * Model Name [1] */
    wchar_t model1Name[16];
};
