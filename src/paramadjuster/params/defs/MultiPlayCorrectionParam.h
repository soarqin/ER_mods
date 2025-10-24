#pragma once

#include <cstdint>

struct MultiPlayCorrectionParam {
    /* NT版出力から外すか
     *   ○をつけたパラメータをNT版パッケージでは除外します
     * Disable Param - Network Test
     *   Parameters marked with  are excluded in the NT version package. */
    uint8_t disableParam_NT:1;

    /* パッケージ出力用リザーブ1
     *   パッケージ出力用リザーブ1 */
    char disableParamReserve1:7;

    /* パッケージ出力用リザーブ2
     *   パッケージ出力用リザーブ2 */
    char disableParamReserve2[3];

    /* 協力クライアント1名特殊効果ID
     *   協力クライアント1名特殊効果ID
     * Friendly Client [1] - SpEffect ID
     *   1 cooperating client Special effect ID
     * Default Value  = -1 */
    int32_t client1SpEffectId;

    /* 協力クライアント2名特殊効果ID
     *   協力クライアント2名特殊効果ID
     * Friendly Client [2] - SpEffect ID
     *   2 cooperating clients Special effect ID
     * Default Value  = -1 */
    int32_t client2SpEffectId;

    /* 協力クライアント3名特殊効果ID
     *   協力クライアント3名特殊効果ID
     * Friendly Client [3] - SpEffect ID
     *   3 cooperating clients Special effect ID
     * Default Value  = -1 */
    int32_t client3SpEffectId;

    /* 協力人数変動時に上書きするか
     *   協力人数変動時に上書きするか
     * Override SpEffect when Client Count Changes
     *   Whether to overwrite when the number of cooperating people fluctuates */
    uint8_t bOverrideSpEffect;

    /* pad
     *   pad */
    char pad3[15];
};
