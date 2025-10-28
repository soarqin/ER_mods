#pragma once

#include <cstdint>

/* Defines upgrades of weapons, include stat changes and upgrade cost (EquipMtrlSetParam id offset) */
struct ReinforceParamWeapon {
    /* 物理攻撃力基本値
     *   物理攻撃力の補正値
     * Damage %: Physical
     *   Physical attack power correction value
     * Default Value  = 1 */
    float physicsAtkRate = 1;

    /* 魔法攻撃力基本値
     *   魔法攻撃力の補正値
     * Damage %: Magic
     *   Magic attack power correction value
     * Default Value  = 1 */
    float magicAtkRate = 1;

    /* 炎攻撃力基本値
     *   炎攻撃力の補正値
     * Damage %: Fire
     *   Fire attack power correction value
     * Default Value  = 1 */
    float fireAtkRate = 1;

    /* 電撃攻撃力基本値
     *   電撃攻撃力の補正値
     * Damage %: Lightning
     *   Correction value of electric shock attack power
     * Default Value  = 1 */
    float thunderAtkRate = 1;

    /* スタミナ攻撃力
     *   スタミナ攻撃力の補正値
     * Damage %: Stamina
     *   Stamina attack power correction value
     * Default Value  = 1 */
    float staminaAtkRate = 1;

    /* SA武器攻撃力
     *   スーパーアーマー武器攻撃色の補正値
     * Damage %: Poise
     *   Super Armor Weapon Attack Color Correction Value
     * Default Value  = 1 */
    float saWeaponAtkRate = 1;

    /* SA耐久値
     *   SA耐久力の補正値
     * Poise Durability
     *   SA endurance correction value
     * Default Value  = 1 */
    float saDurabilityRate = 1;

    /* 筋力補正
     *   筋力補正の補正値
     * Correction %: STR
     *   Correction value of muscle strength correction
     * Default Value  = 1 */
    float correctStrengthRate = 1;

    /* 俊敏補正
     *   俊敏補正の補正値
     * Correction %: DEX
     *   Correction value of agility correction
     * Default Value  = 1 */
    float correctAgilityRate = 1;

    /* 魔力補正
     *   魔力補正の補正値
     * Correction %: INT
     *   Correction value of magic power correction
     * Default Value  = 1 */
    float correctMagicRate = 1;

    /* 信仰補正
     *   信仰補正の補正値
     * Correction %: FTH
     *   Correction value of faith correction
     * Default Value  = 1 */
    float correctFaithRate = 1;

    /* ガード時物理攻撃カット率
     *   ガード時物理攻撃カット率の補正値
     * Guard Absorption %: Physical
     *   Correction value of physical attack cut rate when guarding
     * Default Value  = 1 */
    float physicsGuardCutRate = 1;

    /* ガード時魔法攻撃カット率
     *   ガード時魔法攻撃カット率の補正値
     * Guard Absorption %: Magic
     *   Correction value of magic attack cut rate when guarding
     * Default Value  = 1 */
    float magicGuardCutRate = 1;

    /* ガード時炎攻撃カット率
     *   ガード時炎攻撃カット率の補正値
     * Guard Absorption %: Fire
     *   Correction value of flame attack cut rate when guarding
     * Default Value  = 1 */
    float fireGuardCutRate = 1;

    /* ガード時電撃攻撃カット率
     *   ガード時電撃攻撃カット率の補正値
     * Guard Absorption %: Lightning
     *   Correction value of electric shock attack cut rate when guarding
     * Default Value  = 1 */
    float thunderGuardCutRate = 1;

    /* ガード時毒攻撃カット率
     *   ガード時毒攻撃カット率の補正値
     * Guard Absorption %: Poison
     *   Correction value of poison attack cut rate when guarding
     * Default Value  = 1 */
    float poisonGuardResistRate = 1;

    /* ガード時疫病攻撃カット率
     *   ガード時疫病攻撃カット率の補正値
     * Guard Absorption %: Scarlet Rot
     *   Correction value of plague attack cut rate when guarding
     * Default Value  = 1 */
    float diseaseGuardResistRate = 1;

    /* ガード時出血攻撃カット率
     *   ガード時出血攻撃カット率の補正値
     * Guard Absorption %: Blood Loss
     *   Correction value for bleeding attack cut rate when guarding
     * Default Value  = 1 */
    float bloodGuardResistRate = 1;

    /* ガード時呪攻撃カット率
     *   ガード時呪い攻撃カット率の補正値
     * Guard Absorption %: Death Blight
     *   Correction value of curse attack cut rate when guarding
     * Default Value  = 1 */
    float curseGuardResistRate = 1;

    /* ガード時スタミナ防御力
     *   ガード時スタミナ防御力の補正値
     * Guard Absorption %: Stability
     *   Correction value of stamina defense power when guarding
     * Default Value  = 1 */
    float staminaGuardDefRate = 1;

    /* 特殊効果ID1
     *   特殊効果ID1の加算補正値
     * Behavior SpEffect [1] Offset
     *   Addition correction value for special effect ID1 */
    uint8_t spEffectId1 {};

    /* 特殊効果ID2
     *   特殊効果ID2の加算補正値
     * Behavior SpEffect [2] Offset
     *   Addition correction value for special effect ID2 */
    uint8_t spEffectId2 {};

    /* 特殊効果ID3
     *   特殊効果ID3の加算補正値
     * Behavior SpEffect [3] Offset
     *   Addition correction value for special effect ID3 */
    uint8_t spEffectId3 {};

    /* 常駐特殊効果ID1
     *   常駐特殊効果ID1の加算補正値
     * Passive SpEffect [1] Offset
     *   Addition correction value for resident special effect ID1 */
    uint8_t residentSpEffectId1 {};

    /* 常駐特殊効果ID2
     *   常駐特殊効果ID2の加算補正値
     * Passive SpEffect [2] Offset
     *   Addition correction value for resident special effect ID2 */
    uint8_t residentSpEffectId2 {};

    /* 常駐特殊効果ID3
     *   常駐特殊効果ID3の加算補正値
     * Passive SpEffect [3] Offset
     *   Addition correction value for resident special effect ID3 */
    uint8_t residentSpEffectId3 {};

    /* 素材ID加算値
     *   素材パラメータIDの加算補正値
     * Reinforcement Material Set Offset
     *   Addition correction value of material parameter ID */
    uint8_t materialSetId {};

    /* 最大強化武器レベル用レベル値
     *   最大強化武器レベル用レベル値
     * Max Reinforcement Level
     *   Level value for maximum enhanced weapon level */
    uint8_t maxReinforceLevel {};

    /* 闇攻撃力基本値
     *   闇攻撃力の補正値
     * Damage %: Holy
     *   Dark attack power correction value
     * Default Value  = 1 */
    float darkAtkRate = 1;

    /* ガード時闇攻撃カット率
     *   ガード時闇攻撃カット率の補正値
     * Guard Absorption %: Holy
     *   Correction value of darkness attack cut rate when guarding
     * Default Value  = 1 */
    float darkGuardCutRate = 1;

    /* 運補正
     *   運補正の補正値
     * Correction %: ARC
     *   Correction value of luck correction
     * Default Value  = 1 */
    float correctLuckRate = 1;

    /* ガード時冷気攻撃カット率
     *   ガード時冷気攻撃カット率の補正値
     * Guard Absorption %: Frostbite
     *   Correction value of cold air attack cut rate when guarding
     * Default Value  = 1 */
    float freezeGuardDefRate = 1;

    /* 強化価格補正値
     *   武器パラメータの強化価格に乗算する補正値
     * Reinforce Price Rate
     *   Correction value to multiply the enhancement price of the weapon parameter
     * Default Value  = 1 */
    float reinforcePriceRate = 1;

    /* 進化価格補正値
     *   武器パラメータの進化価格に乗算する補正値
     * Base Change Price Rate
     *   Correction value to multiply the evolution price of the weapon parameter
     * Default Value  = 1 */
    float baseChangePriceRate = 1;

    /* 装着可能魔石ランク
     *   装着可能魔石ランク
     * Ash of War Rank
     *   Mountable magic stone rank */
    int8_t enableGemRank {};

    /* pad */
    char pad2[3] {};

    /* ガード時睡眠攻撃カット率
     *   ガード時睡眠攻撃カット率の補正値
     * Guard Absorption %: Sleep
     *   Correction value of sleep attack cut rate when guarding
     * Default Value  = 1 */
    float sleepGuardDefRate = 1;

    /* ガード時発狂攻撃カット率
     *   ガード時発狂攻撃カット率の補正値
     * Guard Absorption %: Madness
     *   Correction value of mad attack cut rate when guarding
     * Default Value  = 1 */
    float madnessGuardDefRate = 1;

    /* 加算攻撃力倍率
     *   加算攻撃力倍率
     * Damage %: BaseAtk
     *   Damage multiplier for attacks with isAddBaseAtk in AtkParam, typically used with Ash of Wars.
     * Default Value  = 1 */
    float baseAtkRate = 1;
};
