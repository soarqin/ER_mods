#pragma once

#include <cstdint>

struct BonfireWarpTabParam {
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

    /* テキストID
     *   タブの表示名テキストID[MenuText]
     * Text ID
     *   Tab Display Name Text ID [MenuText] */
    int32_t textId;

    /* ソートID
     *   タブの表示順ソートID。照準で左から並ぶ
     * Sort ID
     *   Tab display order sort ID. Line up from the left with aim */
    int32_t sortId;

    /* アイコンID
     *   タブのアイコンID。メニューリソース準拠
     * Icon ID
     *   Tab icon ID. Menu resource compliance */
    uint16_t iconId;

    /* パッド */
    char pad[2];
};
