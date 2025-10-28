#pragma once

#include <cstdint>

/* Governs hitboxes and damage of attacks */
struct AtkParam {
    /* あたり0 半径
     *   球、カプセルの半径
     * Hit 0: Radius
     *   Sphere, capsule radius */
    float hit0_Radius {};

    /* あたり1 半径
     *   球、カプセルの半径
     * Hit 1: Radius
     *   Sphere, capsule radius */
    float hit1_Radius {};

    /* あたり2 半径
     *   球、カプセルの半径
     * Hit 2: Radius
     *   Sphere, capsule radius */
    float hit2_Radius {};

    /* あたり3 半径
     *   球、カプセルの半径
     * Hit 3: Radius
     *   Sphere, capsule radius */
    float hit3_Radius {};

    /* ノックバック距離[m]
     *   ノックバック距離[m]
     * Knockback Distance
     *   Knockback distance [m] */
    float knockbackDist {};

    /* ヒットストップ時間[s]
     *   ヒットストップの停止時間[s]
     * Hit Stop Time
     *   Hit stop stop time [s] */
    float hitStopTime {};

    /* 特殊効果0
     *   特殊効果パラメータで作成したＩＤを入れる
     * Target SpEffect [0]
     *   Enter the ID created with the special effects parameter
     * Default Value  = -1 */
    int32_t spEffectId0 = -1;

    /* 特殊効果1
     *   特殊効果パラメータで作成したＩＤを入れる
     * Target SpEffect [1]
     *   Enter the ID created with the special effects parameter
     * Default Value  = -1 */
    int32_t spEffectId1 = -1;

    /* 特殊効果2
     *   特殊効果パラメータで作成したＩＤを入れる
     * Target SpEffect [2]
     *   Enter the ID created with the special effects parameter
     * Default Value  = -1 */
    int32_t spEffectId2 = -1;

    /* 特殊効果3
     *   特殊効果パラメータで作成したＩＤを入れる
     * Target SpEffect [3]
     *   Enter the ID created with the special effects parameter
     * Default Value  = -1 */
    int32_t spEffectId3 = -1;

    /* 特殊効果4
     *   特殊効果パラメータで作成したＩＤを入れる
     * Target SpEffect [4]
     *   Enter the ID created with the special effects parameter
     * Default Value  = -1 */
    int32_t spEffectId4 = -1;

    /* あたり0 ダミポリ1
     *   球、カプセル位置のダミポリ
     * Hit 0: Dummy Poly [1]
     *   Damipoli in sphere, capsule position */
    int16_t hit0_DmyPoly1 {};

    /* あたり1 ダミポリ1
     *   球、カプセル位置のダミポリ
     * Hit 1: Dummy Poly [1]
     *   Damipoli in sphere, capsule position */
    int16_t hit1_DmyPoly1 {};

    /* あたり2 ダミポリ1
     *   球、カプセル位置のダミポリ
     * Hit 2: Dummy Poly [1]
     *   Damipoli in sphere, capsule position */
    int16_t hit2_DmyPoly1 {};

    /* あたり3 ダミポリ1
     *   球、カプセル位置のダミポリ
     * Hit 3: Dummy Poly [1]
     *   Damipoli in sphere, capsule position */
    int16_t hit3_DmyPoly1 {};

    /* あたり0 ダミポリ2
     *   カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
     * Hit 0: Dummy Poly [2]
     *   The position of another point on the capsule Damipoli. -1 makes it a sphere */
    int16_t hit0_DmyPoly2 {};

    /* あたり1 ダミポリ2
     *   カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
     * Hit 1: Dummy Poly [2]
     *   The position of another point on the capsule Damipoli. -1 makes it a sphere */
    int16_t hit1_DmyPoly2 {};

    /* あたり2 ダミポリ2
     *   カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
     * Hit 2: Dummy Poly [2]
     *   The position of another point on the capsule Damipoli. -1 makes it a sphere */
    int16_t hit2_DmyPoly2 {};

    /* あたり3 ダミポリ2
     *   カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
     * Hit 3: Dummy Poly [2]
     *   The position of another point on the capsule Damipoli. -1 makes it a sphere */
    int16_t hit3_DmyPoly2 {};

    /* 吹き飛ばし補正値
     *   吹き飛ばす時の補正値
     * Attack Correction: Blowing
     *   Correction value when blowing off */
    uint16_t blowingCorrection {};

    /* 物理攻撃力補正値
     *   PCのみ。物理攻撃力基本値に掛ける倍率
     * Attack Correction: Physical
     *   PC only. Multiplier by multiplying the basic physical attack power */
    uint16_t atkPhysCorrection {};

    /* 魔法攻撃力補正値
     *   PCのみ。魔法攻撃力に掛ける倍率（弓の場合は、飛び道具を補正）
     * Attack Correction: Magic
     *   PC only. Multiply the magic attack power (in the case of a bow, correct the missile) */
    uint16_t atkMagCorrection {};

    /* 炎攻撃力補正値
     *   PCのみ。炎攻撃力に掛ける倍率（弓の場合は、飛び道具を補正）
     * Attack Correction: Fire
     *   PC only. Multiply the fire attack power (in the case of a bow, correct the missile) */
    uint16_t atkFireCorrection {};

    /* 電撃攻撃力補正値
     *   PCのみ。電撃攻撃力に掛ける倍率（弓の場合は、飛び道具を補正）
     * Attack Correction: Lightning
     *   PC only. Multiplier for electric shock attack power (in the case of a bow, correct the missile) */
    uint16_t atkThunCorrection {};

    /* スタミナ攻撃力補正値
     *   PCのみ。スタミナ攻撃力に掛ける倍率
     * Attack Correction: Stamina
     *   PC only. Multiplier for stamina attack power */
    uint16_t atkStamCorrection {};

    /* はじき攻撃力補正値
     *   PCのみ。1のみ
     * Attack Correction: Guard Attack Rate
     *   PC only. 1 only */
    uint16_t guardAtkRateCorrection {};

    /* はじき防御力補正値
     *   PCのみ。攻撃のはじかれ基本値に掛ける倍率
     * Attack Correction: Guard Break
     *   PC only. Multiplying the base value by the repelling of the attack */
    uint16_t guardBreakCorrection {};

    /* 投げ抜け攻撃力補正値
     *   投げ抜け攻撃に対する武器補正値
     * Attack Correction: Throw Escape
     *   Weapon correction value for throw-through attacks */
    uint16_t atkThrowEscapeCorrection {};

    /* サブカテゴリ1
     *   サブカテゴリ1
     * Conditional Category [1]
     *   Subcategory 1 */
    uint8_t subCategory1 {};

    /* サブカテゴリ2
     *   サブカテゴリ2
     * Conditional Category [2]
     *   Subcategory 2 */
    uint8_t subCategory2 {};

    /* 物理攻撃力
     *   NPCのみ。物理攻撃の基本ダメージ
     * Damage: Physical
     *   NPCs only. Basic damage of physical attack */
    uint16_t atkPhys {};

    /* 魔法攻撃力
     *   NPCのみ。魔法攻撃の追加ダメージ
     * Damage: Magic
     *   NPCs only. Additional damage from magic attacks */
    uint16_t atkMag {};

    /* 炎攻撃力
     *   NPCのみ。炎攻撃の追加ダメージ
     * Damage: Fire
     *   NPCs only. Additional damage from fire attacks */
    uint16_t atkFire {};

    /* 電撃攻撃力
     *   NPCのみ。電撃攻撃の追加ダメージ
     * Damage: Lightning
     *   NPCs only. Additional damage from electric shock attacks */
    uint16_t atkThun {};

    /* スタミナ攻撃力
     *   NPCのみ。敵（プレイヤー）のスタミナに対するダメージ量
     * Damage: Stamina
     *   NPCs only. Amount of damage to enemy (player) stamina */
    uint16_t atkStam {};

    /* はじき攻撃力
     *   NPCのみ。はじき値
     * Damage: Guard Attack Rate
     *   NPCs only. Flick value */
    uint16_t guardAtkRate {};

    /* はじき防御力
     *   NPCのみ。攻撃がはじかれるかどうかの判定に利用する値
     * Damage: Guard Break Rate
     *   NPCs only. Value used to determine if an attack is repelled */
    uint16_t guardBreakRate {};

    /* pad */
    char pad6[1] {};

    /* 茂みにダメージ可
     *   「茂みダメージで壊れるか」ONのアセットに対してダメージ計算をするか？を設定します。〇：計算する、×：計算しない(つまりダメージをあたえることはできない)【GR】SEQ20617 
     * Is Considered Special Attack for Asset Destruction
     *   Do you want to calculate damage for assets that are Break due to bush damage? To set. : Calculate, : Do not calculate (that is, you cannot inflict damage) [GR] SEQ20617 */
    uint8_t isEnableCalcDamageForBushesObj {};

    /* 投げ抜け攻撃力
     *   投げ抜け攻撃力
     * Damage: Throw Escape
     *   Throw-through attack power */
    uint16_t atkThrowEscape {};

    /* オブジェ攻撃力
     *   ＯＢＪに対する攻撃力
     * Damage: Object
     *   Attack power against OBJ */
    uint16_t atkObj {};

    /* ガード時スタミナカット率補正
     *   武器パラメータ、ＮＰＣパラメータに設定されている【ガード時スタミナカット率】を補正する
     * Guard Cut Stamina Rate
     *   Correct the [stamina cut rate when guarding] set in the weapon parameter and NPC parameter. */
    int16_t guardStaminaCutRate {};

    /* ガード倍率
     *   ＮＰＣ、武器パラメータで設定してあるガード性能を一律で補正を掛ける0で、1倍／100で、2倍／－100で、0　にパラメータが増減するようにするガード倍率　=　（ガード倍率/100　+　1）
     * Guard Rate
     *   NPC, the guard performance set in the weapon parameter is uniformly corrected. 0, 1x / 100, 2x / -100, guard multiplier = (guard multiplier / 100) to increase / decrease the parameter to 0. + 1) */
    int16_t guardRate {};

    /* 投げタイプID
     *   投げパラメータと紐付けされているID
     * Throw Type ID
     *   ID associated with the throw parameter */
    uint16_t throwTypeId {};

    /* あたり0 部位
     *   あたり部位
     * Hit 0: Hit Type
     *   Hit part */
    uint8_t hit0_hitType {};

    /* あたり1 部位
     *   あたり部位
     * Hit 1: Hit Type
     *   Hit part */
    uint8_t hit1_hitType {};

    /* あたり2 部位
     *   あたり部位
     * Hit 2: Hit Type
     *   Hit part */
    uint8_t hit2_hitType {};

    /* あたり3 部位
     *   あたり部位
     * Hit 3: Hit Type
     *   Hit part */
    uint8_t hit3_hitType {};

    /* あたり0 優先順位
     *   優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
     * Hit 0: Priority
     *   priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. */
    uint8_t hti0_Priority {};

    /* あたり1 優先順位
     *   優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
     * Hit 1: Priority
     *   priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. */
    uint8_t hti1_Priority {};

    /* あたり2 優先順位
     *   優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
     * Hit 2: Priority
     *   priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. */
    uint8_t hti2_Priority {};

    /* あたり3 優先順位
     *   優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
     * Hit 3: Priority
     *   priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. */
    uint8_t hti3_Priority {};

    /* ダメージレベル
     *   攻撃したとき、敵にどのダメージモーションを再生するか？を決める.
     * Damage Level
     *   Which damage motion should be played against the enemy when attacking? To decide. */
    uint8_t dmgLevel {};

    /* マップあたり参照
     *   攻撃あたりが、どのマップあたりを見るか？を設定
     * Map Hit Type
     *   Which map do you see around the attack? The set */
    uint8_t mapHitType {};

    /* ガードカット率無効化倍率
     *   ガードカット率無効化倍率（－100～100）　→0のとき通常／－100で完全無効化／100で相手の防御効果倍増 　→－50とすれば、100％カットの盾が、50％カットになります 
     * Guard Absorption Bypass Rate
     *   Guard cut rate invalidation ratio (-100 to 100)  Normal at 0 / Completely invalidated at -100 / Doubles the defense effect of the opponent at 100  -50, 100% cut shield becomes 50% cut Become  */
    int8_t guardCutCancelRate {};

    /* 物理属性
     *   攻撃に設定する物理属性
     * Attack Attribute
     *   Physical attributes to set for attacks */
    uint8_t atkAttribute {};

    /* 特殊属性
     *   攻撃に設定する特殊属性
     * Special Attribute
     *   Special attributes to set for attacks */
    uint8_t spAttribute {};

    /* 攻撃属性[SFX/SE]
     *   攻撃時のSFX/SEを指定(属性、材質、サイズで1セット)
     * Attack Type
     *   Specify SFX / SE at the time of attack (1 set by attribute, material, size) */
    uint8_t atkType {};

    /* 攻撃材質[SFX/SE]
     *   攻撃時のSFX/SEを指定(属性、材質、サイズで1セット)
     * Attack Material
     *   Specify SFX / SE at the time of attack (1 set by attribute, material, size) */
    uint8_t atkMaterial {};

    /* ガード判定位置
     *   ガード判定位置
     * Guard Range Type
     *   Guard judgment position */
    uint8_t guardRangeType {};

    /* 防御材質1[SE]
     *   ガード時のSEに使用1
     * Defence SE Material
     *   Used for SE when guarding 1 */
    uint16_t defSeMaterial1 {};

    /* あたり発生源
     *   攻撃あたりのダミポリＩＤをどこから取ってくるか？を指定する
     * Hit Source Type
     *   Where do you get the Damipoli ID per attack? To specify */
    uint8_t hitSourceType {};

    /* 投げ
     *   投げ情報に用いるフラグ
     * Throw Flag
     *   Flag used for throwing information */
    uint8_t throwFlag {};

    /* ガード不可フラグ
     *   1の場合、ガード側のガードを無視して、ダメージレベルを入れる
     * Disable Guard
     *   If 1, ignore the guard on the guard side and enter the damage level */
    uint8_t disableGuard:1 {};

    /* スタミナ減らない
     *   スタミナ攻撃力による「崩され判定」は行うが、実際にスタミナは減らさない
     * Disable Stamina Attack
     *   Destruction judgment is performed by stamina attack power, but stamina is not actually reduced. */
    uint8_t disableStaminaAttack:1 {};

    /* ヒット時特殊効果無効
     *   攻撃ヒットしたときの特殊効果を無効にします。SCEバグ対策
     * Disable Hit SpEffect
     *   Disables special effects when an attack hits. SCE bug countermeasures */
    uint8_t disableHitSpEffect:1 {};

    /* AIに空振り通知しない
     *   AIに空振り通知しない
     * Disable Missed Attack Notification For AI
     *   Do not notify AI of missed swing */
    uint8_t IgnoreNotifyMissSwingForAI:1 {};

    /* ＨＩＴ時にＳＦＸを何度も出すか
     *   敵専用：壁Hit時のSFXが連続で発生するか
     * Repeat Hit Sound FX
     *   Enemy only: Does SFX occur continuously when hitting a wall? */
    uint8_t repeatHitSfx:1 {};

    /* 矢攻撃か
     *   部位ダメージ判定に使用する。
     * Is Physical Projectile
     *   Used for site damage judgment. */
    uint8_t isArrowAtk:1 {};

    /* 霊体攻撃か
     *   霊体ダメージ判定に使用。
     * Is Attack By Ghost
     *   Used for determining spirit damage. */
    uint8_t isGhostAtk:1 {};

    /* 無敵を貫通するか
     *   ステップ等の無敵効果を無視します、TAEの完全無敵は無視できません。
     * Disable No Damage
     *   Ignore invincible effects such as steps, TAE's complete invincibility cannot be ignored. */
    uint8_t isDisableNoDamage:1 {};

    /* 攻撃強度[SFX]
     *   攻撃強度[SFX]
     * Attack Power - SFX Effect
     *   Attack strength [SFX] */
    int8_t atkPow_forSfx {};

    /* 攻撃方向[SFX]
     *   攻撃方向[SFX]
     * Attack Direction - SFX Effect
     *   Attack direction [SFX] */
    int8_t atkDir_forSfx {};

    /* 対象：●敵対
     *   対象：●敵対
     * Oppose Target
     *   Target:  Hostile
     * Default Value  = 1 */
    uint8_t opposeTarget:1 = 1;

    /* 対象：○味方
     *   対象：○味方
     * Friendly Target
     *   Target:  Allies */
    uint8_t friendlyTarget:1 {};

    /* 対象：自分
     *   対象：自分
     * Self Target
     *   Target: myself */
    uint8_t selfTarget:1 {};

    /* 扉貫通チェックを行うか
     *   扉貫通チェックを行うかどうか。○の場合は扉越しの対象を攻撃できるかどうかの判定を行います。
     * Is Target Hit Through Door
     *   Whether to check the door penetration. In the case of , it is judged whether or not the target through the door can be attacked. */
    uint8_t isCheckDoorPenetration:1 {};

    /* 騎乗特攻か
     *   騎乗中の騎乗特攻対象に攻撃を当てた場合、SAダメージに倍率補正が掛かる
     * Is Ride Special Attack
     *   If you hit the target of the riding special attack while riding, the SA damage will be multiplied by the multiplier. */
    uint8_t isVsRideAtk:1 {};

    /* 武器攻撃でも加算攻撃力を参照するか
     *   武器攻撃でも加算攻撃力を参照するか
     * Is Base Attack Added
     *   Do you refer to the additional attack power even in weapon attacks? */
    uint8_t isAddBaseAtk:1 {};

    /* 脅威度通知対象除外か
     *   脅威度通知対象除外か
     * Is Excluded from Threat Level Notification
     *   Is it excluded from threat level notification? */
    uint8_t excludeThreatLvNotify:1 {};

    char pad1:1 {};

    /* Behavior用識別値1
     *   Behavior用識別値：特大ダメージ遷移
     * Attack Behavior ID
     *   Behavior identification value: Extra large damage transition */
    uint8_t atkBehaviorId {};

    /* 攻撃強度[SE]
     *   攻撃強度[SE]
     * Attack Power - SE Effect
     *   Attack strength [SE] */
    int8_t atkPow_forSe {};

    /* SA攻撃力
     *   NPCのみ。SAブレイク計算式に利用すする値
     * Damage: Poise
     *   NPCs only. Value used for SA break calculation formula */
    float atkSuperArmor {};

    /* デカールID1（直接指定）
     *   デカールID1（直接指定）
     * Decal ID [1]
     *   Decal ID 1 (directly specified)
     * Default Value  = -1 */
    int32_t decalId1 = -1;

    /* デカールID2（直接指定）
     *   デカールID2（直接指定）
     * Decal ID [2]
     *   Decal ID 2 (directly specified)
     * Default Value  = -1 */
    int32_t decalId2 = -1;

    /* 発生時AI音ID
     *   攻撃発生時に発生させるAI音のID
     * Appear AI Sound ID
     *   ID of AI sound generated when an attack occurs */
    int32_t AppearAiSoundId {};

    /* ヒット時AI音ID
     *   ヒット時に発生させるAI音のID
     * Hit AI Sound ID
     *   ID of AI sound generated at the time of hit */
    int32_t HitAiSoundId {};

    /* ヒット時振動効果(-1無効)
     *   ヒット時の振動ID（-1無効）。次の3つのどれにも当てはまらない時の振動IDとなる
     * Hit Rumble ID - Default
     *   Vibration ID at the time of hit (-1 invalid). It is a vibration ID when none of the following three applies
     * Default Value  = -1 */
    int32_t HitRumbleId = -1;

    /* 先端ヒット時振動ID
     *   先端にヒットした時のヒット時振動ID（-1無効）
     * Hit Rumble ID - Normal
     *   Vibration ID at the time of hit when hitting the tip (-1 invalid)
     * Default Value  = -1 */
    int32_t HitRumbleIdByNormal = -1;

    /* 真ん中ヒット時振動ID
     *   真ん中にヒットした時のヒット時振動ID（-1無効）
     * Hit Rumble ID - Middle
     *   Vibration ID at the time of hit when hit in the middle (-1 invalid)
     * Default Value  = -1 */
    int32_t HitRumbleIdByMiddle = -1;

    /* 根本ヒット時振動ID
     *   根本にヒットした時のヒット時振動ID（-1無効）
     * Hit Rumble ID - Root
     *   Vibration ID at the time of hit when hitting the root (-1 invalid)
     * Default Value  = -1 */
    int32_t HitRumbleIdByRoot = -1;

    /* 剣閃SfxID_０
     *   剣閃SfxID_０(-1無効)
     * Trace SFX ID [0]
     *   Sword flash SfxID_0 (-1 invalid)
     * Default Value  = -1 */
    int32_t traceSfxId0 = -1;

    /* 根元剣閃ダミポリID_０
     *   剣閃根元ダミポリID_０(-1無効)
     * Trace SFX ID [0] - Head Dummy Poly
     *   Sword flash root Damipoli ID_0 (-1 invalid)
     * Default Value  = -1 */
    int32_t traceDmyIdHead0 = -1;

    /* 剣先剣閃ダミポリID_０
     *   剣閃剣先ダミポリID_０
     * Trace SFX ID [0] - Tail Dummy Poly
     *   Sword Flash Sword Tip Damipoli ID_0
     * Default Value  = -1 */
    int32_t traceDmyIdTail0 = -1;

    /* 剣閃SfxID_１
     *   剣閃SfxID_１(-1無効)
     * Trace SFX ID [1]
     *   Sword flash SfxID_1 (-1 invalid)
     * Default Value  = -1 */
    int32_t traceSfxId1 = -1;

    /* 根元剣閃ダミポリID_１
     *   剣閃根元ダミポリID_１(-1無効)
     * Trace SFX ID [1] - Head Dummy Poly
     *   Sword Flash Root Damipoli ID_1 (-1 invalid)
     * Default Value  = -1 */
    int32_t traceDmyIdHead1 = -1;

    /* 剣先剣閃ダミポリID_１
     *   剣閃剣先ダミポリID_１
     * Trace SFX ID [1] - Tail Dummy Poly
     *   Sword Flash Sword Tip Damipoli ID_1
     * Default Value  = -1 */
    int32_t traceDmyIdTail1 = -1;

    /* 剣閃SfxID_２
     *   剣閃SfxID_２(-1無効)
     * Trace SFX ID [2]
     *   Sword flash SfxID_2 (-1 invalid)
     * Default Value  = -1 */
    int32_t traceSfxId2 = -1;

    /* 根元剣閃ダミポリID_２
     *   剣閃根元ダミポリID_２(-1無効)
     * Trace SFX ID [2] - Head Dummy Poly
     *   Sword Flash Root Damipoli ID_2 (-1 invalid)
     * Default Value  = -1 */
    int32_t traceDmyIdHead2 = -1;

    /* 剣先剣閃ダミポリID_２
     *   剣閃剣先ダミポリID_２
     * Trace SFX ID [2] - Tail Dummy Poly
     *   Sword Flash Sword Tip Damipoli ID_2
     * Default Value  = -1 */
    int32_t traceDmyIdTail2 = -1;

    /* 剣閃SfxID_３
     *   剣閃SfxID_３(-1無効)
     * Trace SFX ID [3]
     *   Sword Flash SfxID_3 (-1 invalid)
     * Default Value  = -1 */
    int32_t traceSfxId3 = -1;

    /* 根元剣閃ダミポリID_３
     *   剣閃根元ダミポリID_３(-1無効)
     * Trace SFX ID [3] - Head Dummy Poly
     *   Sword flash root Damipoli ID_3 (-1 invalid)
     * Default Value  = -1 */
    int32_t traceDmyIdHead3 = -1;

    /* 剣先剣閃ダミポリID_３
     *   剣閃剣先ダミポリID_３
     * Trace SFX ID [3] - Tail Dummy Poly
     *   Sword Flash Sword Tip Damipoli ID_3
     * Default Value  = -1 */
    int32_t traceDmyIdTail3 = -1;

    /* 剣閃SfxID_４
     *   剣閃SfxID_４(-1無効)
     * Trace SFX ID [4]
     *   Sword Flash SfxID_4 (-1 invalid)
     * Default Value  = -1 */
    int32_t traceSfxId4 = -1;

    /* 根元剣閃ダミポリID_４
     *   剣閃根元ダミポリID_４(-1無効)
     * Trace SFX ID [4] - Head Dummy Poly
     *   Sword flash root Damipoli ID_4 (-1 invalid)
     * Default Value  = -1 */
    int32_t traceDmyIdHead4 = -1;

    /* 剣先剣閃ダミポリID_４
     *   剣閃剣先ダミポリID_４
     * Trace SFX ID [4] - Tail Dummy Poly
     *   Sword Flash Sword Tip Damipoli ID_4
     * Default Value  = -1 */
    int32_t traceDmyIdTail4 = -1;

    /* 剣閃SfxID_５
     *   剣閃SfxID_５(-1無効)
     * Trace SFX ID [5]
     *   Sword Flash SfxID_5 (-1 invalid)
     * Default Value  = -1 */
    int32_t traceSfxId5 = -1;

    /* 根元剣閃ダミポリID_５
     *   剣閃根元ダミポリID_５(-1無効)
     * Trace SFX ID [5] - Head Dummy Poly
     *   Sword Flash Root Damipoli ID_5 (-1 invalid)
     * Default Value  = -1 */
    int32_t traceDmyIdHead5 = -1;

    /* 剣先剣閃ダミポリID_５
     *   剣閃剣先ダミポリID_５
     * Trace SFX ID [5] - Tail Dummy Poly
     *   Sword Flash Sword Tip Damipoli ID_5
     * Default Value  = -1 */
    int32_t traceDmyIdTail5 = -1;

    /* 剣閃SfxID_６
     *   剣閃SfxID_６(-1無効)
     * Trace SFX ID [6]
     *   Sword Flash SfxID_6 (-1 invalid)
     * Default Value  = -1 */
    int32_t traceSfxId6 = -1;

    /* 根元剣閃ダミポリID_６
     *   剣閃根元ダミポリID_６(-1無効)
     * Trace SFX ID [6] - Head Dummy Poly
     *   Sword Flash Root Damipoli ID_6 (-1 invalid)
     * Default Value  = -1 */
    int32_t traceDmyIdHead6 = -1;

    /* 剣先剣閃ダミポリID_６
     *   剣閃剣先ダミポリID_６
     * Trace SFX ID [6] - Tail Dummy Poly
     *   Sword Flash Sword Tip Damipoli ID_6
     * Default Value  = -1 */
    int32_t traceDmyIdTail6 = -1;

    /* 剣閃SfxID_７
     *   剣閃SfxID_７(-1無効)
     * Trace SFX ID [7]
     *   Sword Flash SfxID_7 (-1 invalid)
     * Default Value  = -1 */
    int32_t traceSfxId7 = -1;

    /* 根元剣閃ダミポリID_７
     *   剣閃根元ダミポリID_７(-1無効)
     * Trace SFX ID [7] - Head Dummy Poly
     *   Sword Flash Root Damipoli ID_7 (-1 invalid)
     * Default Value  = -1 */
    int32_t traceDmyIdHead7 = -1;

    /* 剣先剣閃ダミポリID_７
     *   剣閃剣先ダミポリID_７
     * Trace SFX ID [7] - Tail Dummy Poly
     *   Sword Flash Sword Tip Damipoli ID_7
     * Default Value  = -1 */
    int32_t traceDmyIdTail7 = -1;

    /* あたり4 半径
     *   球、カプセルの半径
     * Hit 4: Radius
     *   Sphere, capsule radius */
    float hit4_Radius {};

    /* あたり5 半径
     *   球、カプセルの半径
     * Hit 5: Radius
     *   Sphere, capsule radius */
    float hit5_Radius {};

    /* あたり6 半径
     *   球、カプセルの半径
     * Hit 6: Radius
     *   Sphere, capsule radius */
    float hit6_Radius {};

    /* あたり7 半径
     *   球、カプセルの半径
     * Hit 7: Radius
     *   Sphere, capsule radius */
    float hit7_Radius {};

    /* あたり8 半径
     *   球、カプセルの半径
     * Hit 8: Radius
     *   Sphere, capsule radius */
    float hit8_Radius {};

    /* あたり9 半径
     *   球、カプセルの半径
     * Hit 9: Radius
     *   Sphere, capsule radius */
    float hit9_Radius {};

    /* あたり10 半径
     *   球、カプセルの半径
     * Hit 10: Radius
     *   Sphere, capsule radius */
    float hit10_Radius {};

    /* あたり11 半径
     *   球、カプセルの半径
     * Hit 11: Radius
     *   Sphere, capsule radius */
    float hit11_Radius {};

    /* あたり12 半径
     *   球、カプセルの半径
     * Hit 12: Radius
     *   Sphere, capsule radius */
    float hit12_Radius {};

    /* あたり13 半径
     *   球、カプセルの半径
     * Hit 13: Radius
     *   Sphere, capsule radius */
    float hit13_Radius {};

    /* あたり14 半径
     *   球、カプセルの半径
     * Hit 14: Radius
     *   Sphere, capsule radius */
    float hit14_Radius {};

    /* あたり15 半径
     *   球、カプセルの半径
     * Hit 15: Radius
     *   Sphere, capsule radius */
    float hit15_Radius {};

    /* あたり4 ダミポリ1
     *   球、カプセル位置のダミポリ
     * Hit 4: Dummy Poly 1
     *   Damipoli in sphere, capsule position */
    int16_t hit4_DmyPoly1 {};

    /* あたり5 ダミポリ1
     *   球、カプセル位置のダミポリ
     * Hit 5: Dummy Poly 1
     *   Damipoli in sphere, capsule position */
    int16_t hit5_DmyPoly1 {};

    /* あたり6 ダミポリ1
     *   球、カプセル位置のダミポリ
     * Hit 6: Dummy Poly 1
     *   Damipoli in sphere, capsule position */
    int16_t hit6_DmyPoly1 {};

    /* あたり7 ダミポリ1
     *   球、カプセル位置のダミポリ
     * Hit 7: Dummy Poly 1
     *   Damipoli in sphere, capsule position */
    int16_t hit7_DmyPoly1 {};

    /* あたり8ダミポリ1
     *   球、カプセル位置のダミポリ
     * Hit 8: Dummy Poly 1
     *   Damipoli in sphere, capsule position */
    int16_t hit8_DmyPoly1 {};

    /* あたり9 ダミポリ1
     *   球、カプセル位置のダミポリ
     * Hit 9: Dummy Poly 1
     *   Damipoli in sphere, capsule position */
    int16_t hit9_DmyPoly1 {};

    /* あたり10 ダミポリ1
     *   球、カプセル位置のダミポリ
     * Hit 10: Dummy Poly 1
     *   Damipoli in sphere, capsule position */
    int16_t hit10_DmyPoly1 {};

    /* あたり11 ダミポリ1
     *   球、カプセル位置のダミポリ
     * Hit 11: Dummy Poly 1
     *   Damipoli in sphere, capsule position */
    int16_t hit11_DmyPoly1 {};

    /* あたり12 ダミポリ1
     *   球、カプセル位置のダミポリ
     * Hit 12: Dummy Poly 1
     *   Damipoli in sphere, capsule position */
    int16_t hit12_DmyPoly1 {};

    /* あたり13ダミポリ1
     *   球、カプセル位置のダミポリ
     * Hit 13: Dummy Poly 1
     *   Damipoli in sphere, capsule position */
    int16_t hit13_DmyPoly1 {};

    /* あたり14 ダミポリ1
     *   球、カプセル位置のダミポリ
     * Hit 14: Dummy Poly 1
     *   Damipoli in sphere, capsule position */
    int16_t hit14_DmyPoly1 {};

    /* あたり15 ダミポリ1
     *   球、カプセル位置のダミポリ
     * Hit 15: Dummy Poly 1
     *   Damipoli in sphere, capsule position */
    int16_t hit15_DmyPoly1 {};

    /* あたり4 ダミポリ2
     *   カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
     * Hit 4: Dummy Poly 2
     *   The position of another point on the capsule Damipoli. -1 makes it a sphere */
    int16_t hit4_DmyPoly2 {};

    /* あたり5ダミポリ2
     *   カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
     * Hit 5: Dummy Poly 2
     *   The position of another point on the capsule Damipoli. -1 makes it a sphere */
    int16_t hit5_DmyPoly2 {};

    /* あたり6ダミポリ2
     *   カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
     * Hit 6: Dummy Poly 2
     *   The position of another point on the capsule Damipoli. -1 makes it a sphere */
    int16_t hit6_DmyPoly2 {};

    /* あたり7ダミポリ2
     *   カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
     * Hit 7: Dummy Poly 2
     *   The position of another point on the capsule Damipoli. -1 makes it a sphere */
    int16_t hit7_DmyPoly2 {};

    /* あたり8 ダミポリ2
     *   カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
     * Hit 8: Dummy Poly 2
     *   The position of another point on the capsule Damipoli. -1 makes it a sphere */
    int16_t hit8_DmyPoly2 {};

    /* あたり9ダミポリ2
     *   カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
     * Hit 9: Dummy Poly 2
     *   The position of another point on the capsule Damipoli. -1 makes it a sphere */
    int16_t hit9_DmyPoly2 {};

    /* あたり10 ダミポリ2
     *   カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
     * Hit 10: Dummy Poly 2
     *   The position of another point on the capsule Damipoli. -1 makes it a sphere */
    int16_t hit10_DmyPoly2 {};

    /* あたり11 ダミポリ2
     *   カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
     * Hit 11: Dummy Poly 2
     *   The position of another point on the capsule Damipoli. -1 makes it a sphere */
    int16_t hit11_DmyPoly2 {};

    /* あたり12 ダミポリ2
     *   カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
     * Hit 12: Dummy Poly 2
     *   The position of another point on the capsule Damipoli. -1 makes it a sphere */
    int16_t hit12_DmyPoly2 {};

    /* あたり13 ダミポリ2
     *   カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
     * Hit 13: Dummy Poly 2
     *   The position of another point on the capsule Damipoli. -1 makes it a sphere */
    int16_t hit13_DmyPoly2 {};

    /* あたり14 ダミポリ2
     *   カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
     * Hit 14: Dummy Poly 2
     *   The position of another point on the capsule Damipoli. -1 makes it a sphere */
    int16_t hit14_DmyPoly2 {};

    /* あたり15 ダミポリ2
     *   カプセルのもうひとつの点の位置ダミポリ。-1だと球になる
     * Hit 15: Dummy Poly 2
     *   The position of another point on the capsule Damipoli. -1 makes it a sphere */
    int16_t hit15_DmyPoly2 {};

    /* あたり4 部位
     *   あたり部位
     * Hit 4: Hit Type
     *   Hit part */
    uint8_t hit4_hitType {};

    /* あたり5 部位
     *   あたり部位
     * Hit 5: Hit Type
     *   Hit part */
    uint8_t hit5_hitType {};

    /* あたり6 部位
     *   あたり部位
     * Hit 6: Hit Type
     *   Hit part */
    uint8_t hit6_hitType {};

    /* あたり7 部位
     *   あたり部位
     * Hit 7: Hit Type
     *   Hit part */
    uint8_t hit7_hitType {};

    /* あたり8 部位
     *   あたり部位
     * Hit 8: Hit Type
     *   Hit part */
    uint8_t hit8_hitType {};

    /* あたり9 部位
     *   あたり部位
     * Hit 9: Hit Type
     *   Hit part */
    uint8_t hit9_hitType {};

    /* あたり10 部位
     *   あたり部位
     * Hit 10: Hit Type
     *   Hit part */
    uint8_t hit10_hitType {};

    /* あたり11 部位
     *   あたり部位
     * Hit 11: Hit Type
     *   Hit part */
    uint8_t hit11_hitType {};

    /* あたり12 部位
     *   あたり部位
     * Hit 12: Hit Type
     *   Hit part */
    uint8_t hit12_hitType {};

    /* あたり13 部位
     *   あたり部位
     * Hit 13: Hit Type
     *   Hit part */
    uint8_t hit13_hitType {};

    /* あたり14 部位
     *   あたり部位
     * Hit 14: Hit Type
     *   Hit part */
    uint8_t hit14_hitType {};

    /* あたり15 部位
     *   あたり部位
     * Hit 15: Hit Type
     *   Hit part */
    uint8_t hit15_hitType {};

    /* あたり4 優先順位
     *   優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
     * Hit 4: Priority
     *   priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. */
    uint8_t hti4_Priority {};

    /* あたり5 優先順位
     *   優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
     * Hit 5: Priority
     *   priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. */
    uint8_t hti5_Priority {};

    /* あたり6 優先順位
     *   優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
     * Hit 6: Priority
     *   priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. */
    uint8_t hti6_Priority {};

    /* あたり7 優先順位
     *   優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
     * Hit 7: Priority
     *   priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. */
    uint8_t hti7_Priority {};

    /* あたり8 優先順位
     *   優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
     * Hit 8: Priority
     *   priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. */
    uint8_t hti8_Priority {};

    /* あたり9 優先順位
     *   優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
     * Hit 9: Priority
     *   priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. */
    uint8_t hti9_Priority {};

    /* あたり10 優先順位
     *   優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
     * Hit 10: Priority
     *   priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. */
    uint8_t hti10_Priority {};

    /* あたり11 優先順位
     *   優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
     * Hit 11: Priority
     *   priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. */
    uint8_t hti11_Priority {};

    /* あたり12 優先順位
     *   優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
     * Hit 12: Priority
     *   priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. */
    uint8_t hti12_Priority {};

    /* あたり13 優先順位
     *   優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
     * Hit 13: Priority
     *   priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. */
    uint8_t hti13_Priority {};

    /* あたり14 優先順位
     *   優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
     * Hit 14: Priority
     *   priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. */
    uint8_t hti14_Priority {};

    /* あたり15 優先順位
     *   優先度。同時に2つ以上のあたりがあたった場合、優先度が高いほうを採用する。
     * Hit 15: Priority
     *   priority. If there are two or more hits at the same time, the one with the higher priority will be adopted. */
    uint8_t hti15_Priority {};

    /* 防御材質1[SFX]
     *   ガード時のSFXに使用.1
     * Defence SFX Material [1]
     *   Used for SFX when guarding. 1 */
    uint16_t defSfxMaterial1 {};

    /* 防御材質2[SE]
     *   ガード時のSEに使用2
     * Defence SE Material [2]
     *   Used for SE when guarding 2 */
    uint16_t defSeMaterial2 {};

    /* 防御材質2[SFX]
     *   ガード時のSFXに使用.2
     * Defence SFX Material [2]
     *   Used for SFX when guarding. 2 */
    uint16_t defSfxMaterial2 {};

    /* 闇攻撃力補正値
     *   PCのみ。闇攻撃力に掛ける倍率（弓の場合は、飛び道具を補正）
     * Attack Correction: Holy
     *   PC only. Multiply the dark attack power (in the case of a bow, correct the missile) */
    uint16_t atkDarkCorrection {};

    /* 闇攻撃力
     *   NPCのみ。闇攻撃の追加ダメージ
     * Damage: Holy
     *   NPCs only. Additional damage from dark attacks */
    uint16_t atkDark {};

    /* pad
     *   pad */
    char pad5:1 {};

    /* 攻撃接触パリィ判定無効
     *   新パリィ制御を無効化するかどうかのフラグです。攻撃側のダメージが、防御側でパリィ状態のキャラに接触した場合にパリィされたと判定する処理。
     * Is Disable Parry
     *   This is a flag to disable the new parry control. A process that determines that the damage on the attacking side has been parried when it comes into contact with a character in the parry state on the defending side.
     * Default Value  = 1 */
    uint8_t isDisableParry:1 = 1;

    /* 両手持ち時攻撃力ボーナス無効か
     *   両手時の成長ステータス1.5倍適応を使わないようにする
     * Is Disable 2H ATK Bonus
     *   Avoid using the 1.5x growth status adaptation with both hands */
    uint8_t isDisableBothHandsAtkBonus:1 {};

    /* 限定無敵（空中のみ）で無効化されるか
     *   「無敵を貫通するか」が◯の場合、この設定は無視されます
     * Is Invalidated by No Damage in Air
     *   If Do you want to penetrate invincibility is , this setting will be ignored. */
    uint8_t isInvalidatedByNoDamageInAir:1 {};

    /* pad1 */
    char pad2:4 {};

    /* ダメージレベル 対プレイヤー
     *   プレイヤーに対するダメージレベル。“0(デフォルト)”であれば使わない。“0(デフォルト)”以外の値域の意味は、《ダメージレベル》と同じ。
     * Damage Level - Vs. Player
     *   Damage level to the player. If it is 0 (default), it is not used. The meaning of the range other than 0 (default) is the same as Damage level. */
    int8_t dmgLevel_vsPlayer {};

    /* 状態異常攻撃力倍率補正
     *   特殊効果の状態異常攻撃力に対して、倍率補正を行う。
     * Status Ailment Correction
     *   Magnification correction is performed for the abnormal state attack power of special effects.
     * Default Value  = 100 */
    uint16_t statusAilmentAtkPowerCorrectRate = 100;

    /* 特殊効果攻撃力倍率補正（攻撃力ポイント）
     *   特殊効果の～～攻撃力[point]に対して、倍率補正を行う。
     * Attack Correction - By SpEffect Point
     *   Magnification correction is performed for the special effect ~ ~ attack power [point].
     * Default Value  = 100 */
    uint16_t spEffectAtkPowerCorrectRate_byPoint = 100;

    /* 特殊効果攻撃力倍率補正（攻撃力倍率）
     *   特殊効果の～～攻撃力倍率に対して、倍率補正を行う。
     * Attack Correction - By SpEffect Power
     *   Magnification is corrected for the special effect's attack power multiplier.
     * Default Value  = 100 */
    uint16_t spEffectAtkPowerCorrectRate_byRate = 100;

    /* 特殊効果攻撃力倍率補正（最終攻撃力倍率）
     *   特殊効果の攻撃側：～～ダメージ倍率に対して、倍率補正を行う。
     * Attack Correction - By SpEffect Damage
     *   Attack side of special effect: ~ ~ Performs magnification correction for damage multiplier.
     * Default Value  = 100 */
    uint16_t spEffectAtkPowerCorrectRate_byDmg = 100;

    /* Behavior用識別値2
     *   Behavior用識別値：特定の時だけダメージモーションを再生する 
     * Attack Behavior ID [2]
     *   Behavior identification value: Plays damage motion only at specific times */
    uint8_t atkBehaviorId_2 {};

    /* 投げダメージ属性
     *   攻撃判定の投げダメージの属性。対応する特殊効果がかかるようになる。攻撃のATK_PATAM_THROWFLAG_TYPEが「2：投げ」の場合にのみ、機能を発揮する
     * Throw Damage Attribute
     *   Attribute of throw damage of attack judgment. Corresponding special effects will be applied. It works only when the attack ATK_PATAM_THROWFLAG_TYPE is 2: Throw. */
    uint8_t throwDamageAttribute {};

    /* 特殊効果状態異常補正（攻撃力ポイント）
     *   特殊効果の「状態異常攻撃力倍率補正を適応するか」に対して、倍率補正を行う。
     * Status Ailment Correction - By Point
     *   Magnification correction is performed for the special effect Whether to apply the abnormal state attack power magnification correction.
     * Default Value  = 100 */
    uint16_t statusAilmentAtkPowerCorrectRate_byPoint = 100;

    /* 攻撃属性補正ID上書き
     *   攻撃属性を補正するパラメータのID上書き用
     * Attack Element Correct ID
     *   For overwriting the ID of the parameter that corrects the attack attribute
     * Default Value  = -1 */
    int32_t overwriteAttackElementCorrectId = -1;

    /* デカール識別子1
     *   デカール識別子1(3桁)
     * Decal Base ID [1]
     *   Decal identifier 1 (3 digits)
     * Default Value  = -1 */
    int16_t decalBaseId1 = -1;

    /* デカール識別子2
     *   デカール識別子2(3桁)
     * Decal Base ID [2]
     *   Decal identifier 2 (3 digits)
     * Default Value  = -1 */
    int16_t decalBaseId2 = -1;

    /* 武器リゲイン量補正値
     *   武器リゲイン量補正値
     * Weapon HP Regain Amount Scale
     *   Weapon regain amount correction value
     * Default Value  = 100 */
    uint16_t wepRegainHpScale = 100;

    /* 攻撃リゲイン量
     *   攻撃リゲイン量
     * Attack HP Regain Amount
     *   Amount of attack regain */
    uint16_t atkRegainHp {};

    /* リゲイン可能時間補正倍率
     *   リゲイン可能時間補正倍率
     * HP Regain Time Scale
     *   Regainable time correction factor
     * Default Value  = 1 */
    float regainableTimeScale = 1;

    /* リゲイン可能率補正倍率
     *   リゲイン可能率補正倍率
     * HP Regain Rate Scale
     *   Regainable rate correction factor
     * Default Value  = 1 */
    float regainableHpRateScale = 1;

    /* 同一攻撃判定ID
     *   同一攻撃判定ID
     * Same Attack Judgment ID
     *   Same attack judgment ID
     * Default Value  = -1 */
    int8_t regainableSlotId = -1;

    /* 特殊属性バリエーション値
     *   「特殊属性」と組み合わせて特殊属性によって発生するSFX、SEにバリエーションを持たせるための値(SEQ16473)
     * Special Attribute VFX Variation Offset
     *   Value for giving variation to SFX and SE generated by special attribute in combination with special attribute (SEQ16473) */
    uint8_t spAttributeVariationValue {};

    /* パリィ成立条件の正面角度オフセット
     *   パリィ成立条件の【崩される側】の正面角度オフセット
     * Parry Forward Offset
     *   Front angle offset of [collapsed side] of parry establishment condition */
    int16_t parryForwardOffset {};

    /* SA攻撃力補正値
     *   PCのみ。武器に設定された【基本値】にかける補正値
     * Attack Correction: Poise
     *   PC only. Correction value to be applied to the [basic value] set for the weapon */
    float atkSuperArmorCorrection {};

    /* 防御材質バリエーション値
     *   ガード時に使用される「防御材質1or2」と組み合わせてダメージSFX、SEのバリエーションを持たせるための値。(SEQ16473)
     * Defence SFX Material Variation Offset
     *   A value to have variations of damage SFX and SE in combination with defense material 1 or 2 used when guarding. (SEQ16473) */
    uint8_t defSfxMaterialVariationValue {};

    /* pad */
    char pad4[3] {};

    /* Final Damage % ID */
    int32_t finalDamageRateId {};

    /* Conditional Category [3]
     *   Subcategory 3 */
    uint8_t subCategory3 {};

    /* Conditional Category [4]
     *   Subcategory 4 */
    uint8_t subCategory4 {};

    char pad7[10] {};
};
