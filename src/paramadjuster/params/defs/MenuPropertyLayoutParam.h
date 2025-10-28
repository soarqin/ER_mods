#pragma once

#include <cstdint>

struct MenuPropertyLayoutParam {
    /* レイアウトパス
     * Layout Path */
    char LayoutPath[16] {};

    /* プロパティID
     * Menu Property ID */
    int32_t PropertyID {};

    /* 項目名テキストID
     *   有効なテキストIDが設定されている場合、プロパティ名よりもこちらを優先して表示します。
     * Caption Text ID
     *   If a valid text ID is set, this will be displayed in preference to the property name. */
    int32_t CaptionTextID {};

    /* ヘルプテキストID
     *   ここが有効なテキストIDの場合のみ、項目ヘルプで選択できるようになります。
     * Help Text ID
     *   Only if this is a valid text ID will it be selectable in the field help. */
    int32_t HelpTextID {};

    /* 予約 */
    char reserved[4] {};
};
