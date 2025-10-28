#pragma once

#include <cstdint>

struct LegacyDistantViewPartsReplaceParam {
    /* マップID
     *   対象のマップIDを指定します。レガシーのみ。(m12_34_56_78→12345678) 。当初レガシーのみでしたがオープンの天球マップも対応しました
     * Target Map ID
     *   Specify the target map ID. Legacy only. (m12_34_56_78  12345678). Initially it was only legacy, but it also supports open celestial sphere maps
     * Default Value  = -1 */
    int32_t TargetMapId = -1;

    /* 天変地異イベントID
     *   「300、310、311、312」の中から、対象天変地異イベントIDを入力した場合は【天変地異差し替えデータ】となります。0or空白の場合は【地方IDの切り替えデータ】となります(SEQ16039)
     * Target Event ID
     *   If you enter the target natural disaster event ID from 300, 310, 311 and 312, it will be [natural disaster replacement data]. If it is 0 or blank, it will be [Regional ID switching data] (SEQ16039). */
    uint32_t TargetEventId {};

    /* 差し替え元アセットID
     *   差し替え元AssetId：AEG123_456_9999→123456
     * Replacement Source Asset ID
     *   Replacement source AssetId AEG123_456_9999  123456
     * Default Value  = -1 */
    int32_t SrcAssetId = -1;

    /* 差し替え元アセットパーツID
     *   差し替え元PartsNo：AEG123_456_9999→9999
     * Replacement Source Asset Part ID
     *   Replacement source PartsNo AEG123_456_9999  9999
     * Default Value  = -1 */
    int32_t SrcAssetPartsNo = -1;

    /* 差し替え先アセットID
     *   差し替え先AssetId：AEG123_456_9999→123456
     * Replacement Destination Asset ID
     *   Replacement destination AssetId AEG123_456_9999  123456
     * Default Value  = -1 */
    int32_t DstAssetId = -1;

    /* 差し替え先アセットパーツID
     *   差し替え先PartsNo：AEG123_456_9999→9999
     * Replacement Destination Asset Part ID
     *   Replacement destination PartsNo AEG123_456_9999  9999
     * Default Value  = -1 */
    int32_t DstAssetPartsNo = -1;

    /* 差し替え元アセットID範囲指定Min
     *   差し替え元アセットID範囲指定Min
     * Replacement Source Asset ID - Min Range
     *   Replacement source asset ID range specification Min
     * Default Value  = -1 */
    int32_t SrcAssetIdRangeMin = -1;

    /* 差し替え元アセットID範囲指定Max
     *   差し替え元アセットID範囲指定Max
     * Replacement Source Asset ID - Max Range
     *   Replacement source asset ID range specification Max
     * Default Value  = -1 */
    int32_t SrcAssetIdRangeMax = -1;

    /* 差し替え先アセットID範囲指定Min
     *   差し替え先アセットID範囲指定Min
     * Replacement Destination Asset ID - Min Range
     *   Replacement destination asset ID range specification Min
     * Default Value  = -1 */
    int32_t DstAssetIdRangeMin = -1;

    /* 差し替え先アセットID範囲指定Max
     *   差し替え先アセットID範囲指定Max
     * Replacement Destination Asset ID - Max Range
     *   Replacement destination asset ID range specification Max
     * Default Value  = -1 */
    int32_t DstAssetIdRangeMax = -1;

    /* 地方ID制限0
     *   MapGD地方IDの制限0：「天変地異イベントID」が0の時だけ有効。設定したMapGD地方IDでのみパーツが有効になります(SEQ16039)
     * Limited Map Region ID [0]
     *   MapGD Local ID restriction 0 Valid only when Natural disaster event ID is 0. The part is valid only with the MapGD local ID you set (SEQ16039).
     * Default Value  = -1 */
    int8_t LimitedMapRegionId0 = -1;

    /* 地方ID制限1
     *   MapGD地方IDの制限1：「天変地異イベントID」が0の時だけ有効。設定したMapGD地方IDでのみパーツが有効になります(SEQ16039)
     * Limited Map Region ID [1]
     *   MapGD Local ID Restriction 1 Valid only when Natural Disaster Event ID is 0. The part is valid only with the MapGD local ID you set (SEQ16039).
     * Default Value  = -1 */
    int8_t LimitedMapRegionId1 = -1;

    /* 地方ID制限2
     *   MapGD地方IDの制限2：「天変地異イベントID」が0の時だけ有効。設定したMapGD地方IDでのみパーツが有効になります(SEQ16039)
     * Limited Map Region ID [2]
     *   MapGD Local ID restriction 2 Valid only when Natural disaster event ID is 0. The part is valid only with the MapGD local ID you set (SEQ16039).
     * Default Value  = -1 */
    int8_t LimitedMapRegionId2 = -1;

    /* 地方ID制限3
     *   MapGD地方IDの制限3：「天変地異イベントID」が0の時だけ有効。設定したMapGD地方IDでのみパーツが有効になります(SEQ16039)
     * Limited Map Region ID [3]
     *   MapGD Local ID restriction 3 Valid only when Natural disaster event ID is 0. The part is valid only with the MapGD local ID you set (SEQ16039).
     * Default Value  = -1 */
    int8_t LimitedMapRegionId3 = -1;

    /* 予約
     *   予約 */
    char reserve[4] {};

    /* 地方制限アセットID
     *   MapGD地方IDで有効なアセット指定：AssetId：AEG123_456_9999→123456
     * Limited Map Region Asset ID
     *   MapGD Valid assets specified by local ID AssetId AEG123_456_9999  123456
     * Default Value  = -1 */
    int32_t LimitedMapRegionAssetId = -1;

    /* 地方制限アセットパーツID
     *   MapGD地方IDで有効なアセット指定：PartsNo：AEG123_456_9999→9999
     * Limited Map Region Parts ID
     *   MapGD Valid assets specified by local ID PartsNo AEG123_456_9999  9999
     * Default Value  = -1 */
    int32_t LimitedMapRegioAssetPartsNo = -1;

    /* 地方制限アセットID範囲指定Min
     *   MapGD地方IDで有効なアセット指定：アセットID範囲指定Min
     * Limited Map Region Asset ID - Range Min
     *   MapGD Valid asset specification with local ID Asset ID range specification Min
     * Default Value  = -1 */
    int32_t LimitedMapRegioAssetIdRangeMin = -1;

    /* 地方制限アセットID範囲指定Max
     *   MapGD地方IDで有効なアセット指定：アセットID範囲指定Max
     * Limited Map Region Asset ID - Range Max
     *   MapGD Valid asset specification for local ID Asset ID range specification Max
     * Default Value  = -1 */
    int32_t LimitedMapRegioAssetIdRangeMax = -1;
};
