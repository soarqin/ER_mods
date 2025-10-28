#pragma once

#include <cstdint>

struct ChrModelParam {
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

    /* モデルの使用メモリタイプ
     *   モデルの使用メモリタイプ
     * Model Memory Type
     *   Model used memory type */
    uint8_t modelMemoryType {};

    /* テクスチャの使用メモリタイプ
     *   テクスチャの使用メモリタイプ
     * Texture Memory Type
     *   Texture usage memory type */
    uint8_t texMemoryType {};

    /* カメラフェードパラメータID
     *   カメラフェードパラメータID（-1：マテリアルを参照、0：消えない、1～：パラメータID）
     * Camera Dither Fade ID
     *   Camera fade parameter ID (-1 refer to material, 0: do not disappear, 1 parameter ID) */
    int16_t cameraDitherFadeId {};

    /* 報告アニメ容量(MB)
     *   この値を超えると報告システムで報告が来る。
     * Send Report - Animation Memory Size MB
     *   If this value is exceeded, a report will be sent by the reporting system.
     * Default Value  = 12 */
    float reportAnimMemSizeMb = 12;

    /* Unk
     *   Unk (Added in 1.06)
     * Default Value  = 0 */
    uint32_t unk = 0;
};
