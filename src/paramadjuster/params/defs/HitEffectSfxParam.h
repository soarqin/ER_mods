#pragma once

#include <cstdint>

struct HitEffectSfxParam {
    /* 斬撃：標準
     *   斬撃：標準
     * Slash: Standard
     *   Slash: Standard */
    int32_t Slash_Normal;

    /* 斬撃：小
     *   斬撃：小
     * Slash: Small
     *   Slash: Small */
    int32_t Slash_S;

    /* 斬撃：大
     *   斬撃：大
     * Slash: Large
     *   Slash: Large */
    int32_t Slash_L;

    /* 斬撃：指定1
     *   斬撃：指定1
     * Slash: Specific 1
     *   Slash: Specific 1 */
    int32_t Slash_Specific1;

    /* 斬撃：指定2
     *   斬撃：指定2
     * Slash: Specific 2
     *   Slash: Specific 2 */
    int32_t Slash_Specific2;

    /* 打撃：標準
     *   打撃：標準
     * Batter: Standard
     *   Batter: Standard */
    int32_t Blow_Normal;

    /* 打撃：小
     *   打撃：小
     * Batter: Small
     *   Batter: Small */
    int32_t Blow_S;

    /* 打撃：大
     *   打撃：大
     * Batter: Large
     *   Batter: Large */
    int32_t Blow_L;

    /* 打撃：指定1
     *   打撃：指定1
     * Batter: Specific 1
     *   Batter: Specific 1 */
    int32_t Blow_Specific1;

    /* 打撃：指定2
     *   打撃：指定2
     * Batter: Specific 2
     *   Batter: Specific 2 */
    int32_t Blow_Specific2;

    /* 刺突：標準
     *   刺突：標準
     * Piercing: Standard
     *   Piercing: Standard */
    int32_t Thrust_Normal;

    /* 刺突：小
     *   刺突：小
     * Piercing: Small
     *   Piercing: Small */
    int32_t Thrust_S;

    /* 刺突：大
     *   刺突：大
     * Piercing: Large
     *   Piercing: Large */
    int32_t Thrust_L;

    /* 刺突：指定1
     *   刺突：指定1
     * Piercing: Specific 1
     *   Piercing: Specific 1 */
    int32_t Thrust_Specific1;

    /* 刺突：指定2
     *   刺突：指定2
     * Piercing: Specific 2
     *   Piercing: Specific 2 */
    int32_t Thrust_Specific2;

    /* 無属性：標準
     *   無属性：標準
     * Neutral: Standard
     *   Neutral: standard */
    int32_t Neutral_Normal;

    /* 無属性：小
     *   無属性：小
     * Neutral: Small
     *   Neutral: Small */
    int32_t Neutral_S;

    /* 無属性：大
     *   無属性：大
     * Neutral: Large
     *   Neutral: Large */
    int32_t Neutral_L;

    /* 無属性：指定1
     *   無属性：指定1
     * Neutral: Specific 1
     *   Neutral: Specific 1 */
    int32_t Neutral_Specific1;

    /* 無属性：指定2
     *   無属性：指定2
     * Neutral: Specific 2
     *   Neutral: Specific 2 */
    int32_t Neutral_Specific2;
};
