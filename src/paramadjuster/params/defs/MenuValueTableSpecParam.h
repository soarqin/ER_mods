#pragma once

#include <cstdint>

struct MenuValueTableSpecParam {
    /* 比較する値
     *   比較する値
     * Value
     *   Value to compare */
    int32_t value {};

    /* 変換後のテキストID
     *   変換後のテキストID
     * Text ID
     *   Converted text ID */
    int32_t textId {};

    /* 比較タイプ
     *   比較タイプ
     * Compare Type
     *   Comparison type */
    int8_t compareType {};

    /* パディング
     *   パディング */
    char padding[3] {};
};
