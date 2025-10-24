#pragma once

#include <cstdint>

/* Defines a pairing of Weapon and Ash of War (Gem) for use from CharaInitParam.
 * For loot and shops, change the default AoW/Gem on the weapon. */
struct EquipParamCustomWeapon {
    /* 武器ベースID
     *   武器ベースID
     * Base Weapon ID
     *   Weapon base ID */
    int32_t baseWepId;

    /* 魔石ID
     *   魔石ID
     * Gem ID
     *   Magic stone ID */
    int32_t gemId;

    /* 強化値
     *   強化値
     * Reinforcement Level
     *   Enhancement value */
    uint8_t reinforceLv;

    char pad[7];
};
