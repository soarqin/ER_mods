#pragma once

#include <cstdint>

struct BuddyStoneParam {
    /* NT版出力から外すか
     *   ○をつけたパラメータをNT版パッケージでは除外します
     * Disable Param - Network Test
     *   Parameters marked with  are excluded in the NT version package. */
    uint8_t disableParam_NT:1 {};

    /* パッケージ出力用リザーブ1
     *   パッケージ出力用リザーブ1 */
    char disableParamReserve1:7 {};

    /* パッケージ出力用リザーブ2
     *   パッケージ出力用リザーブ2 */
    char disableParamReserve2[3] {};

    /* 会話キャラエンティティID
     *   会話から参照する時の外部キーとして使う。
     * Talk Character Entity ID
     *   Used as a foreign key when referencing from a conversation. */
    uint32_t talkChrEntityId {};

    /* 撃破対象リストエンティティID
     *   この石碑から召喚した際に、バディの撃破対象になるキャラ/グループのエンティティID
     * Defeat Target List Entity ID
     *   Entity ID of the character / group to be defeated by the buddy when summoned from this stele */
    uint32_t eliminateTargetEntityId {};

    /* 召喚済みイベントフラグID
     *   一度石碑から召喚した際に立つフラグID。このフラグが立っていると、石碑が召喚不可になる。
     * Summoned Event Flag ID
     *   Flag ID that stands when summoned from a stone monument. When this flag is set, the stone monument cannot be summoned. */
    uint32_t summonedEventFlagId {};

    /* スペシャルか
     *   石碑がSP石碑か汎用石碑か？を区別するbool。
     * Is Special Monument
     *   Is the stone monument an SP stone monument or a general-purpose stone monument? A bool that distinguishes. */
    uint8_t isSpecial:1 {};

    /* パディング */
    char pad1:7 {};

    /* パディング */
    char pad2[3] {};

    /* バディID
     *   バディパラメータのID。「スペシャルか」が○の場合、このバディIDが召喚される。
     * Buddy ID
     *   ID of the buddy parameter. If Special is , this buddy ID will be summoned. */
    int32_t buddyId {};

    /* ドーピング用特殊効果ID
     *   バディ召喚時に、バディにかかる特殊効果ID。
     * Applied SpEffect ID
     *   Special effect ID applied to the buddy when summoning the buddy.
     * Default Value  = -1 */
    int32_t dopingSpEffectId = -1;

    /* バディ起動距離[m]
     *   撃破対象のキャラがこの範囲に1体でも居れば、その石碑でバディ召喚が可能になる
     * Activation Distance
     *   If there is at least one character to be defeated in this range, you can summon a buddy at that stone monument.
     * Default Value  = 100 */
    uint16_t activateRange = 100;

    /* バディ帰巣距離上書き[m]
     *   バディの帰巣距離を上書きできる
     * Overwrite Return Range
     *   Buddy's homecoming distance can be overridden
     * Default Value  = -1 */
    int16_t overwriteReturnRange = -1;

    /* 起動範囲上書き領域エンティティID
     *   バディを召喚できる範囲を、指定エンティティIDの領域で上書きできる
     * Overwrite Activation Region Entity ID
     *   The range where the buddy can be summoned can be overwritten in the area of the specified entity ID. */
    uint32_t overwriteActivateRegionEntityId {};

    /* 警告範囲上書き領域エンティティID
     *   警告領域エンティティID
     * Warn Region Entity ID
     *   Warning area entity ID */
    uint32_t warnRegionEntityId {};

    /* パディング */
    char pad3[24] {};
};
