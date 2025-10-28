#pragma once

#include <cstdint>

/* Defines upgrades of Armor. Unused in Elden Ring.
 * Tailoring is handled by a shop and functions as total item replacement, not variation. */
struct ReinforceParamProtector {
    /* 物理防御力
     *   物理防御力の補正値
     * Defence %: Physical
     *   Physical defense correction value
     * Default Value  = 1 */
    float physicsDefRate = 1;

    /* 魔法防御力
     *   魔法防御力の補正値
     * Defence %: Magic
     *   Magic defense correction value
     * Default Value  = 1 */
    float magicDefRate = 1;

    /* 炎防御力
     *   炎防御力の補正値
     * Defence %: Fire
     *   Fire defense correction value
     * Default Value  = 1 */
    float fireDefRate = 1;

    /* 電撃防御力
     *   電撃防御力の補正値
     * Defence %: Lightning
     *   Electric shock defense correction value
     * Default Value  = 1 */
    float thunderDefRate = 1;

    /* 斬撃防御力
     *   斬撃防御力の補正値
     * Defence %: Slash
     *   Slash defense correction value
     * Default Value  = 1 */
    float slashDefRate = 1;

    /* 打撃防御力
     *   打撃防御力の補正値
     * Defence %: Strike
     *   Impact defense correction value
     * Default Value  = 1 */
    float blowDefRate = 1;

    /* 刺突防御力
     *   刺突防御力の補正値
     * Defence %: Thrust
     *   Correction value of piercing defense power
     * Default Value  = 1 */
    float thrustDefRate = 1;

    /* 毒耐性
     *   毒耐性の補正値
     * Aux Resist %: Poison
     *   Poison resistance correction value
     * Default Value  = 1 */
    float resistPoisonRate = 1;

    /* 疫病耐性
     *   疫病耐性の補正値
     * Aux Resist %: Scarlet Rot
     *   Epidemic resistance correction value
     * Default Value  = 1 */
    float resistDiseaseRate = 1;

    /* 出血耐性
     *   出血耐性の補正値
     * Aux Resist %: Blood Loss
     *   Bleeding resistance correction value
     * Default Value  = 1 */
    float resistBloodRate = 1;

    /* 呪耐性
     *   呪耐性の補正値
     * Aux Resist %: Death Blight
     *   Curse resistance correction value
     * Default Value  = 1 */
    float resistCurseRate = 1;

    /* 常駐特殊効果ID1
     *   常駐特殊効果ID1の加算補正値
     * Passive SpEffect ID [1] Offset
     *   Addition correction value for resident special effect ID1 */
    uint8_t residentSpEffectId1 {};

    /* 常駐特殊効果ID2
     *   常駐特殊効果ID2の加算補正値
     * Passive SpEffect ID [2] Offset
     *   Addition correction value for resident special effect ID2 */
    uint8_t residentSpEffectId2 {};

    /* 常駐特殊効果ID3
     *   常駐特殊効果ID3の加算補正値
     * Passive SpEffect ID [3] Offset
     *   Addition correction value for resident special effect ID3 */
    uint8_t residentSpEffectId3 {};

    /* 素材ID加算値
     *   素材パラメータIDの加算補正値
     * Reinforcement Material Set ID
     *   Addition correction value of material parameter ID */
    uint8_t materialSetId {};

    /* 闇防御力
     *   闇防御力の補正値
     * Absorption %: Holy
     *   Dark defense correction value
     * Default Value  = 1 */
    float darkDefRate = 1;

    /* 冷気耐性
     *   冷気耐性の補正値
     * Aux Resist %: Frost
     *   Cold resistance correction value
     * Default Value  = 1 */
    float resistFreezeRate = 1;

    /* 睡眠耐性
     *   睡眠耐性の補正値
     * Aux Resist %: Sleep
     *   Correction value for sleep tolerance
     * Default Value  = 1 */
    float resistSleepRate = 1;

    /* 発狂耐性
     *   発狂耐性の補正値
     * Aux Resist %: Madness
     *   Madness resistance correction value
     * Default Value  = 1 */
    float resistMadnessRate = 1;
};
