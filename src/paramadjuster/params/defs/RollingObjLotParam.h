#pragma once

#include <cstdint>

/* Governs the appearance of random AEGs like glowing skulls and tumbleweed. Each row corresponds to a map ID. The AEGs referenced must have a param row and asset behavior type set to 'Dynamic'. */
struct RollingObjLotParam {
    /* NT版出力から外すか
     *   ○をつけたパラメータをNT版パッケージでは除外します
     * Disable Param - Network Test
     *   Parameters marked with  are excluded in the NT version package. */
    uint8_t disableParam_NT:1 {};

    /* パッケージ出力用リザーブ1
     *   パッケージ出力用リザーブ1 */
    char disableParamReserve1:7 {};

    /* パッケージ出力用リザーブ2
     *   パッケージ出力用リザーブ2 */
    char disableParamReserve2[3] {};

    /* Asset ID [0]
     *   AssetId_0 (-1 Ignore)
     * Default Value  = -1 */
    int32_t AssetId_0 = -1;

    /* Asset ID [1]
     *   AssetId_1 (-1 Ignore)
     * Default Value  = -1 */
    int32_t AssetId_1 = -1;

    /* Asset ID [2]
     *   AssetId_2 (-1 Ignore)
     * Default Value  = -1 */
    int32_t AssetId_2 = -1;

    /* Asset ID [3]
     *   AssetId_3 (-1 Ignore)
     * Default Value  = -1 */
    int32_t AssetId_3 = -1;

    /* Asset ID [4]
     *   AssetId_4 (-1 Ignore)
     * Default Value  = -1 */
    int32_t AssetId_4 = -1;

    /* Asset ID [5]
     *   AssetId_5 (-1 Ignore)
     * Default Value  = -1 */
    int32_t AssetId_5 = -1;

    /* Asset ID [6]
     *   AssetId_6 (-1 Ignore)
     * Default Value  = -1 */
    int32_t AssetId_6 = -1;

    /* Asset ID [7]
     *   AssetId_7 (-1 Ignore)
     * Default Value  = -1 */
    int32_t AssetId_7 = -1;

    /* 出現ウェイト_0
     *   出現の比率ポイント(ウェイト)_0: 0だと無視
     * Appearance Weight [0]
     *   Appearance ratio point (weight) _0 0 is ignored */
    uint8_t CreateWeight_0 {};

    /* 出現ウェイト_1
     *   出現の比率ポイント(ウェイト)_1
     * Appearance Weight [1]
     *   Appearance ratio point (weight) _1 */
    uint8_t CreateWeight_1 {};

    /* 出現ウェイト_2
     *   出現の比率ポイント(ウェイト)_2
     * Appearance Weight [2]
     *   Appearance ratio point (weight) _2 */
    uint8_t CreateWeight_2 {};

    /* 出現ウェイト_3
     *   出現の比率ポイント(ウェイト)_3
     * Appearance Weight [3]
     *   Appearance ratio point (weight) _3 */
    uint8_t CreateWeight_3 {};

    /* 出現ウェイト_4
     *   出現の比率ポイント(ウェイト)_4
     * Appearance Weight [4]
     *   Appearance ratio point (weight) _4 */
    uint8_t CreateWeight_4 {};

    /* 出現ウェイト_5
     *   出現の比率ポイント(ウェイト)_5
     * Appearance Weight [5]
     *   Appearance ratio point (weight) _5 */
    uint8_t CreateWeight_5 {};

    /* 出現ウェイト_6
     *   出現の比率ポイント(ウェイト)_6
     * Appearance Weight [6]
     *   Appearance ratio point (weight) _6 */
    uint8_t CreateWeight_6 {};

    /* 出現ウェイト_7
     *   出現の比率ポイント(ウェイト)_7
     * Appearance Weight [7]
     *   Appearance ratio point (weight) _7 */
    uint8_t CreateWeight_7 {};

    /* リザーブ
     *   リザーブ */
    char Reserve_0[20] {};
};
