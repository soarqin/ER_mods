#pragma once

#include <cstdint>

struct WeatherAssetReplaceParam {
    /* マップ番号
     *   マップ番号を8桁で指定します。オープン、レガシーの天球配置マップのみ指定可能です
     * Map ID
     *   Specify the map number in 8 digits. Only open and legacy celestial sphere placement maps can be specified */
    uint32_t mapId {};

    /* 天候
     *   この天候で有効になるアセットを指定します。
     * Transition Source Weather
     *   Specifies the assets that will be valid in this weather. */
    int16_t TransitionSrcWeather {};

    /* reserved0 */
    char padding0[2] {};

    /* 「火の灰」後か？
     *   マップの「火の灰」状態での適応の有無を指定します。
     * Is Burning Ash
     *   Specifies whether or not to adapt to the fire ash state of the map. */
    uint8_t isFireAsh {};

    /* padding0 */
    char padding1[3] {};

    /* reserved2 */
    uint32_t reserved2 {};

    /* 表示アセット1
     *   -1:無効 生成するアセットIDを指定します。AEG999_999 -> 999999
     * Asset ID [0]
     *   -1: Invalid Specify the asset ID to generate. AEG999_999 999999
     * Default Value  = -1 */
    int32_t AssetId0 = -1;

    /* 表示アセット2
     *   -1:無効 生成するアセットIDを指定します。AEG999_999 -> 999999
     * Asset ID [1]
     *   -1: Invalid Specify the asset ID to generate. AEG999_999 999999
     * Default Value  = -1 */
    int32_t AssetId1 = -1;

    /* 表示アセット3
     *   -1:無効 生成するアセットIDを指定します。AEG999_999 -> 999999
     * Asset ID [2]
     *   -1: Invalid Specify the asset ID to generate. AEG999_999 999999
     * Default Value  = -1 */
    int32_t AssetId2 = -1;

    /* 表示アセット4
     *   -1:無効 生成するアセットIDを指定します。AEG999_999 -> 999999
     * Asset ID [3]
     *   -1: Invalid Specify the asset ID to generate. AEG999_999 999999
     * Default Value  = -1 */
    int32_t AssetId3 = -1;

    /* 表示アセット5
     *   -1:無効 生成するアセットIDを指定します。AEG999_999 -> 999999
     * Asset ID [4]
     *   -1: Invalid Specify the asset ID to generate. AEG999_999 999999
     * Default Value  = -1 */
    int32_t AssetId4 = -1;

    /* 表示アセット6
     *   -1:無効 生成するアセットIDを指定します。AEG999_999 -> 999999
     * Asset ID [5]
     *   -1: Invalid Specify the asset ID to generate. AEG999_999 999999
     * Default Value  = -1 */
    int32_t AssetId5 = -1;

    /* 表示アセット7
     *   -1:無効 生成するアセットIDを指定します。AEG999_999 -> 999999
     * Asset ID [6]
     *   -1: Invalid Specify the asset ID to generate. AEG999_999 999999
     * Default Value  = -1 */
    int32_t AssetId6 = -1;

    /* 表示アセット8
     *   -1:無効 生成するアセットIDを指定します。AEG999_999 -> 999999
     * Asset ID [7]
     *   -1: Invalid Specify the asset ID to generate. AEG999_999 999999
     * Default Value  = -1 */
    int32_t AssetId7 = -1;

    char reserved0[8] {};

    /* 生成制限ID0
     *   生成制限用のIDです。-1:無制限。「マップデフォルトパラメータ.xlsm」の生成制限IDと一致した場合のみ生成が許可されます(SEQ08921)
     * Create Asset Limit ID [0]
     *   ID for production restriction. -1: Unlimited. Generation is allowed only if it matches the generation limit ID in Map default parameter .xlsm (SEQ08921).
     * Default Value  = -1 */
    int8_t CreateAssetLimitId0 = -1;

    /* 生成制限ID1
     *   生成制限用のIDです。-1:無制限。「マップデフォルトパラメータ.xlsm」の生成制限IDと一致した場合のみ生成が許可されます(SEQ08921)
     * Create Asset Limit ID [1]
     *   ID for production restriction. -1: Unlimited. Generation is allowed only if it matches the generation limit ID in Map default parameter .xlsm (SEQ08921).
     * Default Value  = -1 */
    int8_t CreateAssetLimitId1 = -1;

    /* 生成制限ID2
     *   生成制限用のIDです。-1:無制限。「マップデフォルトパラメータ.xlsm」の生成制限IDと一致した場合のみ生成が許可されます(SEQ08921)
     * Create Asset Limit ID [2]
     *   ID for production restriction. -1: Unlimited. Generation is allowed only if it matches the generation limit ID in Map default parameter .xlsm (SEQ08921).
     * Default Value  = -1 */
    int8_t CreateAssetLimitId2 = -1;

    /* 生成制限ID3
     *   生成制限用のIDです。-1:無制限。「マップデフォルトパラメータ.xlsm」の生成制限IDと一致した場合のみ生成が許可されます(SEQ08921)
     * Create Asset Limit ID [3]
     *   ID for production restriction. -1: Unlimited. Generation is allowed only if it matches the generation limit ID in Map default parameter .xlsm (SEQ08921).
     * Default Value  = -1 */
    int8_t CreateAssetLimitId3 = -1;

    char reserved1[4] {};
};
