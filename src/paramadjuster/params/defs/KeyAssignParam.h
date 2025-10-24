#pragma once

#include <cstdint>

struct KeyAssignParam {
    /* パッド
     *   パッド（物理キー）
     * Pad Key ID
     *   Pad (physical key)
     * Default Value  = -1 */
    int32_t padKeyId;

    /* キーボード修飾
     *   キーボード修飾キー
     * Keyboard Modify Key
     *   Keyboard modifier keys */
    int32_t keyboardModifyKey;

    /* キーボード
     *   キーボード（物理キー）
     * Keyboard Key ID
     *   Keyboard (physical keys)
     * Default Value  = -1 */
    int32_t keyboardKeyId;

    /* マウス修飾
     *   マウス修飾キー
     * Mouse Modify Key
     *   Mouse modifier key */
    int32_t mouseModifyKey;

    /* マウス
     *   マウス（物理キー）
     * Mouse Key ID
     *   Mouse (physical key) */
    int32_t mouseKeyId;

    /* ---- */
    char reserved[12];
};
