#pragma once

#include <cstdint>

/* Governs which damage types scale with which stats. Includes correction values. */
struct AttackElementCorrectParam {
    /* 筋力補正するか（物理）
     * Physical Correction: STR */
    uint8_t isStrengthCorrect_byPhysics:1;

    /* 技量補正するか（物理）
     * Physical Correction: DEX */
    uint8_t isDexterityCorrect_byPhysics:1;

    /* 理力補正するか（物理）
     * Physical Correction: INT */
    uint8_t isMagicCorrect_byPhysics:1;

    /* 信仰補正するか（物理）
     * Physical Correction: FTH */
    uint8_t isFaithCorrect_byPhysics:1;

    /* 運補正するか（物理）
     * Physical Correction: ARC */
    uint8_t isLuckCorrect_byPhysics:1;

    /* 筋力補正するか（魔法）
     * Magic Correction: STR */
    uint8_t isStrengthCorrect_byMagic:1;

    /* 技量補正するか（魔法）
     * Magic Correction: DEX */
    uint8_t isDexterityCorrect_byMagic:1;

    /* 理力補正するか（魔法）
     * Magic Correction: INT */
    uint8_t isMagicCorrect_byMagic:1;

    /* 信仰補正するか（魔法）
     * Magic Correction: FTH */
    uint8_t isFaithCorrect_byMagic:1;

    /* 運補正するか（魔法）
     * Magic Correction: ARC */
    uint8_t isLuckCorrect_byMagic:1;

    /* 筋力補正するか（炎）
     * Fire Correction: STR */
    uint8_t isStrengthCorrect_byFire:1;

    /* 技量補正するか（炎）
     * Fire Correction: DEX */
    uint8_t isDexterityCorrect_byFire:1;

    /* 理力補正するか（炎）
     * Fire Correction: INT */
    uint8_t isMagicCorrect_byFire:1;

    /* 信仰補正するか（炎）
     * Fire Correction: FTH */
    uint8_t isFaithCorrect_byFire:1;

    /* 運補正するか（炎）
     * Fire Correction: ARC */
    uint8_t isLuckCorrect_byFire:1;

    /* 筋力補正するか（雷）
     * Lightning Correction: STR */
    uint8_t isStrengthCorrect_byThunder:1;

    /* 技量補正するか（雷）
     * Lightning Correction: DEX */
    uint8_t isDexterityCorrect_byThunder:1;

    /* 理力補正するか（雷）
     * Lightning Correction: INT */
    uint8_t isMagicCorrect_byThunder:1;

    /* 信仰補正するか（雷）
     * Lightning Correction: FTH */
    uint8_t isFaithCorrect_byThunder:1;

    /* 運補正するか（雷）
     * Lightning Correction: ARC */
    uint8_t isLuckCorrect_byThunder:1;

    /* 筋力補正するか（闇）
     * Holy Correction: STR */
    uint8_t isStrengthCorrect_byDark:1;

    /* 技量補正するか（闇）
     * Holy Correction: DEX */
    uint8_t isDexterityCorrect_byDark:1;

    /* 理力補正するか（闇）
     * Holy Correction: INT */
    uint8_t isMagicCorrect_byDark:1;

    /* 信仰補正するか（闇）
     * Holy Correction: FTH */
    uint8_t isFaithCorrect_byDark:1;

    /* 運補正するか（闇）
     * Holy Correction: ARC */
    uint8_t isLuckCorrect_byDark:1;

    /* パディング */
    char pad1:7;

    /* 筋力補正値上書き（物理）
     * Physical Replacement Correction: STR
     * Default Value  = -1 */
    int16_t overwriteStrengthCorrectRate_byPhysics;

    /* 技量補正値上書き（物理）
     * Physical Replacement Correction: DEX
     * Default Value  = -1 */
    int16_t overwriteDexterityCorrectRate_byPhysics;

    /* 理力補正値上書き（物理）
     * Physical Replacement Correction: INT
     * Default Value  = -1 */
    int16_t overwriteMagicCorrectRate_byPhysics;

    /* 信仰補正値上書き（物理）
     * Physical Replacement Correction: FTH
     * Default Value  = -1 */
    int16_t overwriteFaithCorrectRate_byPhysics;

    /* 運補正値上書き（物理）
     * Physical Replacement Correction: ARC
     * Default Value  = -1 */
    int16_t overwriteLuckCorrectRate_byPhysics;

    /* 筋力補正値上書き（魔法）
     * Magic Replacement Correction: STR
     * Default Value  = -1 */
    int16_t overwriteStrengthCorrectRate_byMagic;

    /* 技量補正値上書き（魔法）
     * Magic Replacement Correction: DEX
     * Default Value  = -1 */
    int16_t overwriteDexterityCorrectRate_byMagic;

    /* 理力補正値上書き（魔法）
     * Magic Replacement Correction: INT
     * Default Value  = -1 */
    int16_t overwriteMagicCorrectRate_byMagic;

    /* 信仰補正値上書き（魔法）
     * Magic Replacement Correction: FTH
     * Default Value  = -1 */
    int16_t overwriteFaithCorrectRate_byMagic;

    /* 運補正値上書き（魔法）
     * Magic Replacement Correction: ARC
     * Default Value  = -1 */
    int16_t overwriteLuckCorrectRate_byMagic;

    /* 筋力補正値上書き（炎）
     * Fire Replacement Correction: STR
     * Default Value  = -1 */
    int16_t overwriteStrengthCorrectRate_byFire;

    /* 技量補正値上書き（炎）
     * Fire Replacement Correction: DEX
     * Default Value  = -1 */
    int16_t overwriteDexterityCorrectRate_byFire;

    /* 理力補正値上書き（炎）
     * Fire Replacement Correction: INT
     * Default Value  = -1 */
    int16_t overwriteMagicCorrectRate_byFire;

    /* 信仰補正値上書き（炎）
     * Fire Replacement Correction: FTH
     * Default Value  = -1 */
    int16_t overwriteFaithCorrectRate_byFire;

    /* 運補正値上書き（炎）
     * Fire Replacement Correction: ARC
     * Default Value  = -1 */
    int16_t overwriteLuckCorrectRate_byFire;

    /* 筋力補正値上書き（雷）
     * Lightning Replacement Correction: STR
     * Default Value  = -1 */
    int16_t overwriteStrengthCorrectRate_byThunder;

    /* 技量補正値上書き（雷）
     * Lightning Replacement Correction: DEX
     * Default Value  = -1 */
    int16_t overwriteDexterityCorrectRate_byThunder;

    /* 理力補正値上書き（雷）
     * Lightning Replacement Correction: INT
     * Default Value  = -1 */
    int16_t overwriteMagicCorrectRate_byThunder;

    /* 信仰補正値上書き（雷）
     * Lightning Replacement Correction: FTH
     * Default Value  = -1 */
    int16_t overwriteFaithCorrectRate_byThunder;

    /* 運補正値上書き（雷）
     * Lightning Replacement Correction: ARC
     * Default Value  = -1 */
    int16_t overwriteLuckCorrectRate_byThunder;

    /* 筋力補正値上書き（闇）
     * Holy Replacement Correction: STR
     * Default Value  = -1 */
    int16_t overwriteStrengthCorrectRate_byDark;

    /* 技量補正値上書き（闇）
     * Holy Replacement Correction: DEX
     * Default Value  = -1 */
    int16_t overwriteDexterityCorrectRate_byDark;

    /* 理力補正値上書き（闇）
     * Holy Replacement Correction: INT
     * Default Value  = -1 */
    int16_t overwriteMagicCorrectRate_byDark;

    /* 信仰補正値上書き（闇）
     * Holy Replacement Correction: FTH
     * Default Value  = -1 */
    int16_t overwriteFaithCorrectRate_byDark;

    /* 運補正値上書き（闇）
     * Holy Replacement Correction: ARC
     * Default Value  = -1 */
    int16_t overwriteLuckCorrectRate_byDark;

    /* 筋力補正値影響率（物理）
     *   補正率の影響割合。
     * Physical Correction Ratio: STR
     *   The rate of influence of the correction factor.
     * Default Value  = 100 */
    int16_t InfluenceStrengthCorrectRate_byPhysics;

    /* 技量補正値影響率（物理）
     *   補正率の影響割合。
     * Physical Correction Ratio: DEX
     *   The rate of influence of the correction factor.
     * Default Value  = 100 */
    int16_t InfluenceDexterityCorrectRate_byPhysics;

    /* 理力補正値影響率（物理）
     *   補正率の影響割合。
     * Physical Correction Ratio: INT
     *   The rate of influence of the correction factor.
     * Default Value  = 100 */
    int16_t InfluenceMagicCorrectRate_byPhysics;

    /* 信仰補正値影響率（物理）
     *   補正率の影響割合。
     * Physical Correction Ratio: FTH
     *   The rate of influence of the correction factor.
     * Default Value  = 100 */
    int16_t InfluenceFaithCorrectRate_byPhysics;

    /* 運補正値影響率（物理）
     *   補正率の影響割合。
     * Physical Correction Ratio: ARC
     *   The rate of influence of the correction factor.
     * Default Value  = 100 */
    int16_t InfluenceLuckCorrectRate_byPhysics;

    /* 筋力補正値影響率（魔法）
     *   補正率の影響割合。
     * Magic Correction Ratio: STR
     *   The rate of influence of the correction factor.
     * Default Value  = 100 */
    int16_t InfluenceStrengthCorrectRate_byMagic;

    /* 技量補正値影響率（魔法）
     *   補正率の影響割合。
     * Magic Correction Ratio: DEX
     *   The rate of influence of the correction factor.
     * Default Value  = 100 */
    int16_t InfluenceDexterityCorrectRate_byMagic;

    /* 理力補正値影響率（魔法）
     *   補正率の影響割合。
     * Magic Correction Ratio: INT
     *   The rate of influence of the correction factor.
     * Default Value  = 100 */
    int16_t InfluenceMagicCorrectRate_byMagic;

    /* 信仰補正値影響率（魔法）
     *   補正率の影響割合。
     * Magic Correction Ratio: FTH
     *   The rate of influence of the correction factor.
     * Default Value  = 100 */
    int16_t InfluenceFaithCorrectRate_byMagic;

    /* 運補正値影響率（魔法）
     *   補正率の影響割合。
     * Magic Correction Ratio: ARC
     *   The rate of influence of the correction factor.
     * Default Value  = 100 */
    int16_t InfluenceLuckCorrectRate_byMagic;

    /* 筋力補正値影響率（炎）
     *   補正率の影響割合。
     * Fire Correction Ratio: STR
     *   The rate of influence of the correction factor.
     * Default Value  = 100 */
    int16_t InfluenceStrengthCorrectRate_byFire;

    /* 技量補正値影響率（炎）
     *   補正率の影響割合。
     * Fire Correction Ratio: DEX
     *   The rate of influence of the correction factor.
     * Default Value  = 100 */
    int16_t InfluenceDexterityCorrectRate_byFire;

    /* 理力補正値影響率（炎）
     *   補正率の影響割合。
     * Fire Correction Ratio: INT
     *   The rate of influence of the correction factor.
     * Default Value  = 100 */
    int16_t InfluenceMagicCorrectRate_byFire;

    /* 信仰補正値影響率（炎）
     *   補正率の影響割合。
     * Fire Correction Ratio: FTH
     *   The rate of influence of the correction factor.
     * Default Value  = 100 */
    int16_t InfluenceFaithCorrectRate_byFire;

    /* 運補正値影響率（炎）
     *   補正率の影響割合。
     * Fire Correction Ratio: ARC
     *   The rate of influence of the correction factor.
     * Default Value  = 100 */
    int16_t InfluenceLuckCorrectRate_byFire;

    /* 筋力補正値影響率（雷）
     *   補正率の影響割合。
     * Lightning Correction Ratio: STR
     *   The rate of influence of the correction factor.
     * Default Value  = 100 */
    int16_t InfluenceStrengthCorrectRate_byThunder;

    /* 技量補正値影響率（雷）
     *   補正率の影響割合。
     * Lightning Correction Ratio: DEX
     *   The rate of influence of the correction factor.
     * Default Value  = 100 */
    int16_t InfluenceDexterityCorrectRate_byThunder;

    /* 理力補正値影響率（雷）
     *   補正率の影響割合。
     * Lightning Correction Ratio: INT
     *   The rate of influence of the correction factor.
     * Default Value  = 100 */
    int16_t InfluenceMagicCorrectRate_byThunder;

    /* 信仰補正値影響率（雷）
     *   補正率の影響割合。
     * Lightning Correction Ratio: FTH
     *   The rate of influence of the correction factor.
     * Default Value  = 100 */
    int16_t InfluenceFaithCorrectRate_byThunder;

    /* 運補正値影響率（雷）
     *   補正率の影響割合。
     * Lightning Correction Ratio: ARC
     *   The rate of influence of the correction factor.
     * Default Value  = 100 */
    int16_t InfluenceLuckCorrectRate_byThunder;

    /* 筋力補正値影響率（闇）
     *   補正率の影響割合。
     * Holy Correction Ratio: STR
     *   The rate of influence of the correction factor.
     * Default Value  = 100 */
    int16_t InfluenceStrengthCorrectRate_byDark;

    /* 技量補正値影響率（闇）
     *   補正率の影響割合。
     * Holy Correction Ratio: DEX
     *   The rate of influence of the correction factor.
     * Default Value  = 100 */
    int16_t InfluenceDexterityCorrectRate_byDark;

    /* 理力補正値影響率（闇）
     *   補正率の影響割合。
     * Holy Correction Ratio: INT
     *   The rate of influence of the correction factor.
     * Default Value  = 100 */
    int16_t InfluenceMagicCorrectRate_byDark;

    /* 信仰補正値影響率（闇）
     *   補正率の影響割合。
     * Holy Correction Ratio: FTH
     *   The rate of influence of the correction factor.
     * Default Value  = 100 */
    int16_t InfluenceFaithCorrectRate_byDark;

    /* 運補正値影響率（闇）
     *   補正率の影響割合。
     * Holy Correction Ratio: ARC
     *   The rate of influence of the correction factor.
     * Default Value  = 100 */
    int16_t InfluenceLuckCorrectRate_byDark;

    /* パディング */
    char pad2[24];
};
