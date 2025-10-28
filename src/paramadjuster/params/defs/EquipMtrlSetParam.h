#pragma once

#include <cstdint>

/* Defines costs associated with trades or upgrades. ID incrementation is used in places. */
struct EquipMtrlSetParam {
    /* 必要素材アイテムID01
     *   武具強化に必要な素材アイテムIDです。
     * Material ID [1]
     *   Material item ID required to strengthen armor.
     * Default Value  = -1 */
    int32_t materialId01 = -1;

    /* 必要素材アイテムID02
     *   武具強化に必要な素材アイテムIDです。
     * Material ID [2]
     *   Material item ID required to strengthen armor.
     * Default Value  = -1 */
    int32_t materialId02 = -1;

    /* 必要素材アイテムID03
     *   武具強化に必要な素材アイテムIDです。
     * Material ID [3]
     *   Material item ID required to strengthen armor.
     * Default Value  = -1 */
    int32_t materialId03 = -1;

    /* 必要素材アイテムID04
     *   武具強化に必要な素材アイテムIDです。
     * Material ID [4]
     *   Material item ID required to strengthen armor.
     * Default Value  = -1 */
    int32_t materialId04 = -1;

    /* 必要素材アイテムID05
     *   武具強化に必要な素材アイテムIDです。
     * Material ID [5]
     *   Material item ID required to strengthen armor.
     * Default Value  = -1 */
    int32_t materialId05 = -1;

    /* 必要素材アイテムID06
     *   武具強化に必要な素材アイテムIDです。
     * Material ID [6]
     *   Material item ID required to strengthen armor.
     * Default Value  = -1 */
    int32_t materialId06 = -1;

    /* パディング
     *   パディング。素材アイテムIDが増えたとき用 */
    char pad_id[8] {};

    /* 必要個数01
     *   武具強化に必要な素材アイテムの個数です。
     * Material Amount [1]
     *   The number of material items required to strengthen armor.
     * Default Value  = -1 */
    int8_t itemNum01 = -1;

    /* 必要個数02
     *   武具強化に必要な素材アイテムの個数です。
     * Material Amount [2]
     *   The number of material items required to strengthen armor.
     * Default Value  = -1 */
    int8_t itemNum02 = -1;

    /* 必要個数03
     *   武具強化に必要な素材アイテムの個数です。
     * Material Amount [3]
     *   The number of material items required to strengthen armor.
     * Default Value  = -1 */
    int8_t itemNum03 = -1;

    /* 必要個数04
     *   武具強化に必要な素材アイテムの個数です。
     * Material Amount [4]
     *   The number of material items required to strengthen armor.
     * Default Value  = -1 */
    int8_t itemNum04 = -1;

    /* 必要個数05
     *   武具強化に必要な素材アイテムの個数です。
     * Material Amount [5]
     *   The number of material items required to strengthen armor.
     * Default Value  = -1 */
    int8_t itemNum05 = -1;

    /* 必要個数06
     *   武具強化に必要な素材アイテムの個数です。
     * Material Amount [6]
     *   The number of material items required to strengthen armor.
     * Default Value  = -1 */
    int8_t itemNum06 = -1;

    /* パディング
     *   パディング。アイテムの個数が増えたとき用 */
    char pad_num[2] {};

    /* 必要素材アイテムカテゴリ01
     *   武具強化に必要な素材アイテムのカテゴリです。
     * Material Category [1]
     *   This is a category of material items required for strengthening armor.
     * Default Value  = 4 */
    uint8_t materialCate01 = 4;

    /* 必要素材アイテムカテゴリ02
     *   武具強化に必要な素材アイテムのカテゴリです。
     * Material Category [2]
     *   This is a category of material items required for strengthening armor.
     * Default Value  = 4 */
    uint8_t materialCate02 = 4;

    /* 必要素材アイテムカテゴリ03
     *   武具強化に必要な素材アイテムのカテゴリです。
     * Material Category [3]
     *   This is a category of material items required for strengthening armor.
     * Default Value  = 4 */
    uint8_t materialCate03 = 4;

    /* 必要素材アイテムカテゴリ04
     *   武具強化に必要な素材アイテムのカテゴリです。
     * Material Category [4]
     *   This is a category of material items required for strengthening armor.
     * Default Value  = 4 */
    uint8_t materialCate04 = 4;

    /* 必要素材アイテムカテゴリ05
     *   武具強化に必要な素材アイテムのカテゴリです。
     * Material Category [5]
     *   This is a category of material items required for strengthening armor.
     * Default Value  = 4 */
    uint8_t materialCate05 = 4;

    /* 必要素材アイテムカテゴリ06
     *   武具強化に必要な素材アイテムのカテゴリです。
     * Material Category [6]
     *   This is a category of material items required for strengthening armor.
     * Default Value  = 4 */
    uint8_t materialCate06 = 4;

    /* パディング
     *   パディング。カテゴリが増えたとき用 */
    char pad_cate[2] {};

    /* 個数表示を無効化01
     *   個数表示を無効化するか(強化ショップ用)
     * Disable Display Number [1]
     *   Disable the number display (for enhanced shops) */
    uint8_t isDisableDispNum01:1 {};

    /* 個数表示を無効化02
     *   個数表示を無効化するか
     * Disable Display Number [2]
     *   Whether to disable the number display */
    uint8_t isDisableDispNum02:1 {};

    /* 個数表示を無効化03
     *   個数表示を無効化するか
     * Disable Display Number [3]
     *   Whether to disable the number display */
    uint8_t isDisableDispNum03:1 {};

    /* 個数表示を無効化04
     *   個数表示を無効化するか
     * Disable Display Number [4]
     *   Whether to disable the number display */
    uint8_t isDisableDispNum04:1 {};

    /* 個数表示を無効化05
     *   個数表示を無効化するか
     * Disable Display Number [5]
     *   Whether to disable the number display */
    uint8_t isDisableDispNum05:1 {};

    /* 個数表示を無効化06
     *   個数表示を無効化するか
     * Disable Display Number [6]
     *   Whether to disable the number display */
    uint8_t isDisableDispNum06:1 {};

    /* パディング
     *   パディングです。 */
    char pad[3] {};
};
