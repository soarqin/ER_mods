#pragma once

#include <cstdint>

struct MenuPropertySpecParam {
    /* 項目名テキストID
     * Caption Text ID */
    int32_t CaptionTextID;

    /* 項目アイコンID
     * Icon ID */
    int32_t IconID;

    /* 必要スキル
     * Required Property ID */
    uint32_t RequiredPropertyID;

    /* 優劣判定
     * Compare Type */
    int8_t CompareType;

    /* パディング */
    char pad2[1];

    /* 書式
     * Format Type */
    uint16_t FormatType;

    /* パディング */
    char pad[16];
};
