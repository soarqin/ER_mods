#pragma once

#include <cstdint>

struct MapPieceTexParam_m61 {
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

    /* R
     *   変換前の地図画像のカラー情報（R）。RGB値が一致したピクセルとこのパラメータが紐づく
     * Pre-conversion - Map Image - R
     *   Color information (R) of the map image before conversion. Pixels with matching RGB values are associated with this parameter */
    uint8_t srcR;

    /* G
     *   変換前の地図画像のカラー情報（G）。RGB値が一致したピクセルとこのパラメータが紐づく
     * Pre-conversion - Map Image - G
     *   Color information (G) of the map image before conversion. Pixels with matching RGB values are associated with this parameter */
    uint8_t srcG;

    /* B
     *   変換前の地図画像のカラー情報（B）。RGB値が一致したピクセルとこのパラメータが紐づく
     * Pre-conversion - Map Image - B
     *   Color information (B) of the map image before conversion. Pixels with matching RGB values are associated with this parameter */
    uint8_t srcB;

    /* パッド
     *   パッド。一応「画像色情報（A）」用で空けておく */
    char pad1[1];

    /* マップ名ID_セーブデータ表示用
     *   セーブデータ表示用のマップ名ID[PlaceName](0:無効値)
     * Save Map Name ID
     *   Map name ID for displaying save data [PlaceName] (0 - invalid value)
     * Default Value  = -1 */
    int32_t saveMapNameId;

    /* マルチプレイエリアID
     *   マルチプレイエリアID(-1:無効値)
     * Multiplayer Area ID
     *   Multiplayer area ID (-1 - invalid value)
     * Default Value  = -1 */
    int32_t multiPlayAreaId;

    int32_t unknown_0x10;

    int32_t unknown_0x14;

    int32_t unknown_0x18;

    int32_t unknown_0x1c;

    /* Multiplayer Area ID [1] */
    int32_t unknownPlayRegion_1;

    /* Multiplayer Area ID [2] */
    int32_t unknownPlayRegion_2;
};
