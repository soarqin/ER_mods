#pragma once

#include <cstdint>

struct CharMakeMenuTopParam {
    /* コマンドタイプ
     *   コマンドの種別
     * Command Type
     *   Command type */
    int32_t commandType {};

    /* 項目テキストID
     *   表示するテキストのID
     * Caption ID
     *   ID of the text to be displayed */
    int32_t captionId {};

    /* 顔パラムID
     *   顔パラムID
     * Face Param ID
     *   Face Param ID */
    int32_t faceParamId {};

    /* テーブルID（男性）
     *   選択するアイテム一覧の先頭ID（男）。コマンドタイプが[スライダー：最小値ラベル(n)と最大値ラベル(n+1)のテキストID、カラー：カラーテーブルのID、グリッド or テキスト：キャラメイクリストアイテムの先頭ID、それ以外：無視]
     * Table ID - Male
     *   First ID (male) in the list of items to select. The command type is [Slider: Text ID of minimum label (n) and maximum label (n + 1), Color: ID of color table, Grid or text: First ID of character make list item, Other: Ignore] */
    int32_t tableId {};

    /* 表示条件
     *   このコマンドを表示する条件
     * View Condition
     *   Conditions for displaying this command */
    int32_t viewCondition {};

    /* プレビューモード
     *   プレビュー表示しているキャラクターモデルの表示モード
     * Preview Mode
     *   Display mode of the character model displayed in preview */
    int8_t previewMode {};

    /* 予約 */
    char reserved2[3] {};

    /* テーブルID（女性）
     *   テーブルIDの女用。-1なら男用を参照する
     * Table ID - Female
     *   For women with table ID. If -1, refer to for men
     * Default Value  = -1 */
    int32_t tableId2 = -1;

    /* 参照先の顔パラムID
     *   「○○に合わせる」用の合わせ先の顔パラムID
     * Reference Face Param ID
     *   Face param ID of the matching destination for matching to XX
     * Default Value  = -1 */
    int32_t refFaceParamId = -1;

    /* 参照先テキストID
     *   「○○に合わせる」用の表示テキストID
     * Reference Text ID
     *   Display text ID for fit to XX
     * Default Value  = -1 */
    int32_t refTextId = -1;

    /* 1行ヘルプテキストID（上書き）
     *   1行ヘルプのテキストID(-1: 項目テキストIDで1行ヘルプを取得する)。基本的に項目テキストID＝1行ヘルプテキストIDになっているが、一部上書きしたいときにこのパラメータで指定する
     * Help Text ID
     *   1-line help text ID (-1: Get 1-line help with item text ID). Basically, item text ID = 1 line help text ID, but if you want to overwrite part of it, specify it with this parameter.
     * Default Value  = -1 */
    int32_t helpTextId = -1;

    /* イベントフラグID
     *   この項目をアンロックするイベントフラグ(0:無効値)。無効値なら常にアンロックされる
     * Unlock Event Flag ID
     *   Event flag to unlock this item (0: invalid value). Invalid value will always be unlocked */
    uint32_t unlockEventFlagId {};

    /* 予約 */
    char reserved[4] {};
};
