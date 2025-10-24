#pragma once

#include <cstdint>

struct SignPuddleParam {
    /* NT版出力から外すか
     *   ○をつけたパラメータをNT版パッケージでは除外します
     * Disable Param - Network Test
     *   Parameters marked with  are excluded in the NT version package. */
    uint8_t disableParam_NT:1;

    /* パッケージ出力用リザーブ1
     *   パッケージ出力用リザーブ1 */
    char disableParamReserve1:7;

    /* パッケージ出力用リザーブ2
     *   パッケージ出力用リザーブ2 */
    char disableParamReserve2[3];

    /* 簡易マッチエリアID
     *   属している簡易マッチエリアのID
     * Match Area ID
     *   ID of the simple match area to which it belongs */
    int32_t matchAreaId;

    int32_t unknown_0x20;

    int32_t unknown_0x24;

    /* Map Area
     *   AA part of mAA_BB_CC_DD */
    uint8_t areaNo;

    /* Map Block
     *   BB part of mAA_BB_CC_DD */
    uint8_t gridXNo;

    /* Map Region
     *   CC part of mAA_BB_CC_DD */
    uint8_t gridZNo;

    char pad3[1];

    /* Coordinate: X
     *   X coordinate */
    float posX;

    /* Coordinate: Y
     *   Y coordinate (not used) */
    float posY;

    /* Coordinate: Z
     *   Z coordinate */
    float posZ;

    /* Sign Sub Category ID */
    int32_t signSubCategoryId;

    /* Location Text ID */
    int32_t locationTextId;

    /* Sort ID */
    int32_t sortId;

    char endPad[4];
};
