#pragma once

#include <cstdint>

struct BaseChrSelectMenuParam {
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

    /* アーキタイプID：ベースキャラクター
     *   フェイスパラを設定したアーキタイプ別初期パラメータIDを指定する 
     * Chr Init Param ID - Class
     *   Specify the initial parameter ID for each architype for which face para is set. */
    uint32_t chrInitParam {};

    /* アーキタイプID：素性
     *   素性のアーキタイプ別初期パラメータIDを指定する
     * Chr Init Param ID - Origin
     *   Specify the initial parameter ID for each feature archetype */
    uint32_t originChrInitParam {};

    /* イメージID
     *   ベースキャラクター選択画面に並ぶ画像。Flaに埋め込まれたリソースのフレーム数を指定
     * Image ID
     *   Images lined up on the base character selection screen. Specify the number of frames of resources embedded in Fla */
    int32_t imageId {};

    /* テキストID
     *   職業名のメニューテキストID
     * Text ID
     *   Occupation name menu text ID */
    int32_t textId {};

    /* リザーブ */
    char reserve[12] {};
};
