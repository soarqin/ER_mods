#pragma once

#include <cstdint>

struct BuddyParam {
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

    /* 召喚特殊効果ID
     *   召喚条件になる特殊効果IDを設定します 
     * Trigger SpEffect ID
     *   Set the special effect ID that will be the summoning condition
     * Default Value  = -1 */
    int32_t triggerSpEffectId = -1;

    /* NPCパラメータID
     *   召喚されるバディのNPCパラメータIDを設定します
     * NPC Param ID
     *   Set the NPC parameter ID of the summoned buddy
     * Default Value  = -1 */
    int32_t npcParamId = -1;

    /* 思考パラメータID
     *   召喚されるバディのNPC思考パラメータIDを設定します
     * NPC Think Param ID
     *   Sets the NPC Thinking Parameter ID of the summoned buddy
     * Default Value  = -1 */
    int32_t npcThinkParamId = -1;

    /* 騎乗（乗られる側）：NPCパラメータID
     *   騎乗状態で召喚したいバディの場合、「乗られる側」のNPCパラメータIDを設定します 
     * NPC Param ID - Ride
     *   For buddies that you want to summon while riding, set the NPC parameter ID for the rider
     * Default Value  = -1 */
    int32_t npcParamId_ridden = -1;

    /* 騎乗（乗られる側）：思考パラメータID
     *   騎乗状態で召喚したいバディの場合、「乗られる側」のNPC思考パラメータIDを設定します
     * NPC Think Param ID - Ride
     *   For buddies that you want to summon while riding, set the NPC Thinking Parameter ID for the rider
     * Default Value  = -1 */
    int32_t npcThinkParamId_ridden = -1;

    /* X：配置座標オフセット[m]
     *   バディを召喚ポイントから、X座標にオフセットする距離をメートル単位で設定します
     * Spawn Offset: X (left/right)
     *   Sets the distance in meters to offset the buddy from the summon point to the X coordinate (left/right). */
    float x_offset {};

    /* Z：配置座標オフセット[m]
     *   バディを召喚ポイントから、Z座標にオフセットする距離をメートル単位で設定します
     * Spawn Offset: Z (forward/back)
     *   Sets the distance in meters to offsets the buddy from the summon point to the Z coordinate (forwad/back). */
    float z_offset {};

    /* Y：自分の配置角度[deg]
     *   Y軸を中心に、自分を回転させる角度を設定します
     * Spawn Angle: Y
     *   Sets summon position rotation. */
    float y_angle {};

    /* 石碑周辺から出現するか？
     *   石碑周辺から出現するか？
     * Appear near Stone Monument
     *   Forces summon to spawn at summon monument. */
    uint8_t appearOnAroundSekihi {};

    /* PCとのターゲット共有をスキップするか？
     *   PCとのターゲット共有をスキップするか？
     * Disable Player Target Share
     *   Disables summon targeting whoever PC locked-onto. */
    uint8_t disablePCTargetShare {};

    /* PC追従＆ワープタイプ 
     *   PC追従＆ワープタイプ 
     * Player Follow Type
     *   Determines PC tracking and non-combat behavior. */
    uint8_t pcFollowType {};

    /* リザーブ
     *   リザーブ */
    char Reserve[1] {};

    /* +0時ドーピング特殊効果
     *   +0時ドーピング特殊効果
     * Reinforcement SpEffect: +0
     *   SpEffect granted when reinforced to +0
     * Default Value  = -1 */
    int32_t dopingSpEffect_lv0 = -1;

    /* +1時ドーピング特殊効果
     *   +0時ドーピング特殊効果
     * Reinforcement SpEffect: +1
     *   SpEffect granted when reinforced to +1.
     * Default Value  = -1 */
    int32_t dopingSpEffect_lv1 = -1;

    /* +2時ドーピング特殊効果
     *   +0時ドーピング特殊効果
     * Reinforcement SpEffect: +2
     *   SpEffect granted when reinforced to +2.
     * Default Value  = -1 */
    int32_t dopingSpEffect_lv2 = -1;

    /* +3時ドーピング特殊効果
     *   +0時ドーピング特殊効果
     * Reinforcement SpEffect: +3
     *   SpEffect granted when reinforced to +3.
     * Default Value  = -1 */
    int32_t dopingSpEffect_lv3 = -1;

    /* +4時ドーピング特殊効果
     *   +0時ドーピング特殊効果
     * Reinforcement SpEffect: +4
     *   SpEffect granted when reinforced to +4.
     * Default Value  = -1 */
    int32_t dopingSpEffect_lv4 = -1;

    /* +5時ドーピング特殊効果
     *   +0時ドーピング特殊効果
     * Reinforcement SpEffect: +5
     *   SpEffect granted when reinforced to +5.
     * Default Value  = -1 */
    int32_t dopingSpEffect_lv5 = -1;

    /* +6時ドーピング特殊効果
     *   +0時ドーピング特殊効果
     * Reinforcement SpEffect: +6
     *   SpEffect granted when reinforced to +6.
     * Default Value  = -1 */
    int32_t dopingSpEffect_lv6 = -1;

    /* +7時ドーピング特殊効果
     *   +0時ドーピング特殊効果
     * Reinforcement SpEffect: +7
     *   SpEffect granted when reinforced to +7.
     * Default Value  = -1 */
    int32_t dopingSpEffect_lv7 = -1;

    /* +8時ドーピング特殊効果
     *   +0時ドーピング特殊効果
     * Reinforcement SpEffect: +8
     *   SpEffect granted when reinforced to +8.
     * Default Value  = -1 */
    int32_t dopingSpEffect_lv8 = -1;

    /* +9時ドーピング特殊効果
     *   +0時ドーピング特殊効果
     * Reinforcement SpEffect: +9
     *   SpEffect granted when reinforced to +9.
     * Default Value  = -1 */
    int32_t dopingSpEffect_lv9 = -1;

    /* +10時ドーピング特殊効果
     *   +0時ドーピング特殊効果
     * Reinforcement SpEffect: +10
     *   SpEffect granted when reinforced to +10.
     * Default Value  = -1 */
    int32_t dopingSpEffect_lv10 = -1;

    /* アーキタイプ別初期パラメータID
     *   アーキタイプ別初期パラメータID
     * Character Init ID
     *   CharaInitParam ID this c0000 summon will use.
     * Default Value  = -1 */
    int32_t npcPlayerInitParamId = -1;

    /* ジェネレートアニメID
     *   ジェネレートアニメID
     * Generate Anim ID
     *   Generate Anime ID
     * Default Value  = -1 */
    int32_t generateAnimId = -1;

    uint32_t unknown_0x5c {};

    uint32_t unknown_0x60 {};

    int32_t unknown_0x64 {};

    int32_t unknown_0x68 {};

    int32_t unknown_0x6c {};

    int32_t unknown_0x70 {};

    int32_t unknown_0x74 {};

    int32_t unknown_0x78 {};

    int32_t unknown_0x7c {};

    int32_t unknown_0x80 {};

    uint32_t unknown_0x84 {};

    int32_t unknown_0x88 {};

    int32_t unknown_0x8c {};

    int32_t unknown_0x90 {};

    int32_t unknown_0x94 {};

    int32_t unknown_0x98 {};

    uint32_t unknown_0x9c {};
};
