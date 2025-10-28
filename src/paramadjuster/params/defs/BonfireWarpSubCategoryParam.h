#pragma once

#include <cstdint>

struct BonfireWarpSubCategoryParam {
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

    /* テキストID
     *   サブカテゴリの表示名テキストID[MenuText]
     * Text ID
     *   Subcategory display name Text ID [MenuText] */
    int32_t textId {};

    /* 篝火ワープタブID
     *   篝火ワープタブID。このサブカテゴリが所属するタブのID
     * Tab ID
     *   Kagaribi Warp Tab ID. ID of the tab to which this subcategory belongs */
    uint16_t tabId {};

    /* 篝火ワープタブソートID
     *   篝火ワープタブソートID。タブの中サブカテゴリの表示順
     * Tab Sort ID
     *   Bonfire Warp Tab Sort ID. Display order of subcategories in tabs */
    uint16_t sortId {};

    char pad[4] {};
};
