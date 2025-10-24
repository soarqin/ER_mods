#pragma once

#include <cstdint>

struct CommonSystemParam {
    /* ゲーム開始時マップ名ID_セーブデータ用
     *   ゲーム開始時マップ名ID_セーブデータ用(SEQ15052)
     * Save Data - Game Start: Map Name
     *   At the start of the game Map name ID_for save data (SEQ15052) */
    uint32_t mapSaveMapNameIdOnGameStart;

    /* リザーブ
     *   リザーブ */
    char reserve0[60];
};
