#pragma once

#include <cstdint>

/* Associated with the NPC_ATK enum used in AI lua scripts. */
struct NpcAiActionParam {
    /* 移動方向入力
     *   入力する移動方向
     * Move Direction
     *   Moving direction to enter */
    uint8_t moveDir;

    /* キー入力1
     *   入力するキー
     * Key [1]
     *   Key to enter */
    uint8_t key1;

    /* キー入力2
     *   入力するキー
     * Key [2]
     *   Key to enter */
    uint8_t key2;

    /* キー入力3
     *   入力するキー
     * Key [3]
     *   Key to enter */
    uint8_t key3;

    /* 移動方向入力は長押し？
     *   入力する移動方向を長押し扱いするか
     * Handle Move Direction as Long Press
     *   Whether to handle the input movement direction as long press */
    uint8_t bMoveDirHold;

    /* キー入力1は長押し？
     *   入力するキーを長押扱いするか
     * Handle Key [1] Hold as Long Press
     *   Whether to treat the key to be entered as a long press */
    uint8_t bKeyHold1;

    /* キー入力2は長押し？
     *   入力するキーを長押扱いするか
     * Handle Key [2] Hold as Long Press
     *   Whether to treat the key to be entered as a long press */
    uint8_t bKeyHold2;

    /* キー入力3は長押し？
     *   入力するキーを長押扱いするか
     * Handle Key [3] Hold as Long Press
     *   Whether to treat the key to be entered as a long press */
    uint8_t bKeyHold3;

    /* ジェスチャーID（どれかのキー入力がGESTUREの時のみ有効）
     *   ジェスチャーID
     * Gesture ID
     *   Gesture ID */
    int32_t gestureId;

    /* 寿命が尽きた時成功扱いにする
     *   これがONならAIのゴールが寿命まで成功にならない
     * AI Goal Waits For Duration End
     *   If this is ON, the AI goal will not be successful until the end of its life */
    uint8_t bLifeEndSuccess;

    /* パッド
     *   pad */
    char pad1[3];
};
