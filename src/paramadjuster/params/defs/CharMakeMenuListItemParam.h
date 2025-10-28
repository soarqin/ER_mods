#pragma once

#include <cstdint>

struct CharMakeMenuListItemParam {
    /* 値
     *   プログラム側に扱う値。1つのグループ内で通し番号にする
     * Value
     *   The value handled by the program. Make serial numbers within one group */
    int32_t value {};

    /* 項目テキストID
     *   表示するテキストのID
     * Caption ID
     *   ID of the text to be displayed */
    int32_t captionId {};

    /* アイコンID
     *   表示するアイコンのID
     * Icon ID
     *   ID of the icon to be displayed */
    uint8_t iconId {};

    /* 予約 */
    char reserved[7] {};
};
