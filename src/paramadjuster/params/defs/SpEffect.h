#pragma once

#include <cstdint>

/* Defines various effects that can be applied to the player and to enemies.
 * Can define passive, activated, single-use and repeated or continuous application effects with indefinite duration.
 * Successful application may depend on spCategory or invocationConditions. */
struct SpEffect {
    /* アイコンID
     *   アイコンID(-1の時は、アイコン必要なし)
     * Icon ID
     *   Icon ID (When -1, no icon is required)
     * Default Value  = -1 */
    int32_t iconId;

    /* 発動条件　残りHP比率[%]
     *   残りHPが、maxHPの何%になったら発動するかを設定
     * Trigger at HP Below %
     *   Set what percentage of maxHP the remaining HP will be activated
     * Default Value  = -1 */
    float conditionHp;

    /* 効果持続時間　時間[s]
     *   変化持続時間　/-1で永続 /0で瞬間1回限り
     * Duration
     *   Change duration / -1 for permanent / 0 for one moment only */
    float effectEndurance;

    /* 発動間隔[s]
     *   何秒間隔で発生するのかを設定
     * Trigger Interval
     *   Set how many seconds it occurs */
    float motionInterval;

    /* 最大HP倍率[%]
     *   最大HPに補正をかける
     * Max HP %
     *   Correct the maximum HP
     * Default Value  = 1 */
    float maxHpRate;

    /* 最大MP倍率[%]
     *   最大MPに補正をかける
     * Max FP %
     *   Correct the maximum MP
     * Default Value  = 1 */
    float maxMpRate;

    /* 最大スタミナ倍率[%]
     *   最大SPに補正をかける
     * Max Stamina %
     *   Correct the maximum SP
     * Default Value  = 1 */
    float maxStaminaRate;

    /* 防御側：斬撃ダメージ倍率
     *   斬撃ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
     * Absorption %: Slash
     *   Slash damage ratio: Correct the calculated damage by XX times. 1 is normal.
     * Default Value  = 1 */
    float slashDamageCutRate;

    /* 防御側：打撃ダメージ倍率
     *   打撃ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
     * Absorption %: Strike
     *   Batter damage ratio: The calculated damage is corrected by XX times. 1 is normal.
     * Default Value  = 1 */
    float blowDamageCutRate;

    /* 防御側：刺突ダメージ倍率
     *   刺突ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
     * Absorption %: Thrust
     *   Puncture damage ratio: Correct the calculated damage by XX times. 1 is normal.
     * Default Value  = 1 */
    float thrustDamageCutRate;

    /* 防御側：無属性ダメージ倍率
     *   無属性ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
     * Absorption %: Standard
     *   Non-attribute damage ratio: Correct the calculated damage by XX times. 1 is normal.
     * Default Value  = 1 */
    float neutralDamageCutRate;

    /* 防御側：魔法ダメージ倍率
     *   魔法ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
     * Absorption %: Magic
     *   Magic damage multiplier: The calculated damage is corrected by XX times. 1 is normal.
     * Default Value  = 1 */
    float magicDamageCutRate;

    /* 防御側：炎ダメージ倍率
     *   炎ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
     * Absorption %: Fire
     *   Flame damage ratio: Correct the calculated damage by XX times. 1 is normal.
     * Default Value  = 1 */
    float fireDamageCutRate;

    /* 防御側：電撃ダメージ倍率
     *   電撃ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
     * Absorption %: Lightning
     *   Electric shock damage ratio: Correct the calculated damage by XX times. 1 is normal.
     * Default Value  = 1 */
    float thunderDamageCutRate;

    /* 攻撃側：物理ダメージ倍率
     *   物理ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
     * Attack %: Physical
     *   Physical damage ratio: Correct the calculated damage by XX times. 1 is normal.
     * Default Value  = 1 */
    float physicsAttackRate;

    /* 攻撃側：魔法ダメージ倍率
     *   魔法ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
     * Attack %: Magic
     *   Magic damage multiplier: The calculated damage is corrected by XX times. 1 is normal.
     * Default Value  = 1 */
    float magicAttackRate;

    /* 攻撃側：炎ダメージ倍率
     *   炎ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
     * Attack %: Fire
     *   Flame damage ratio: Correct the calculated damage by XX times. 1 is normal.
     * Default Value  = 1 */
    float fireAttackRate;

    /* 攻撃側：電撃ダメージ倍率
     *   電撃ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
     * Attack %: Lightning
     *   Electric shock damage ratio: Correct the calculated damage by XX times. 1 is normal.
     * Default Value  = 1 */
    float thunderAttackRate;

    /* 物理攻撃力倍率
     *   物理攻撃力に設定した数値をかけます
     * Power %: Physical
     *   Multiply the physical attack power by the set value
     * Default Value  = 1 */
    float physicsAttackPowerRate;

    /* 魔法攻撃力倍率
     *   魔法攻撃力に設定した数値をかけます
     * Power %: Magic
     *   Multiply the magic attack power by the set value
     * Default Value  = 1 */
    float magicAttackPowerRate;

    /* 炎攻撃力倍率
     *   炎攻撃力に設定した数値をかけます
     * Power %: Fire
     *   Multiply the fire attack power by the set value
     * Default Value  = 1 */
    float fireAttackPowerRate;

    /* 電撃攻撃力倍率
     *   電撃攻撃力に設定した数値をかけます
     * Power %: Lightning
     *   Multiply the electric shock attack power by the set value
     * Default Value  = 1 */
    float thunderAttackPowerRate;

    /* 物理攻撃力[point]
     *   物理攻撃力に設定した数値を加減算する
     * Damage +: Physical
     *   Add or subtract the value set for physical attack power */
    int32_t physicsAttackPower;

    /* 魔法攻撃力[point]
     *   魔法攻撃力に設定した数値を加減算する
     * Damage +: Magic
     *   Add or subtract the value set for the magic attack power */
    int32_t magicAttackPower;

    /* 炎攻撃力[point]
     *   炎攻撃力に設定した数値を加減算する
     * Damage +: Fire
     *   Add or subtract the value set for the flame attack power */
    int32_t fireAttackPower;

    /* 電撃攻撃力[point]
     *   電撃攻撃力に設定した数値を加減算する
     * Damage +: Lighting
     *   Add or subtract the value set for the electric shock attack power */
    int32_t thunderAttackPower;

    /* 物理防御力倍率
     *   物理防御力に設定した数値をかけます
     * Defence %: Physical
     *   Multiply the set value for physical defense
     * Default Value  = 1 */
    float physicsDiffenceRate;

    /* 魔法防御力倍率
     *   魔法防御力に設定した数値をかけます
     * Defence %: Magic
     *   Multiply the value set for magic defense
     * Default Value  = 1 */
    float magicDiffenceRate;

    /* 炎防御力倍率
     *   炎防御力に設定した数値をかけます
     * Defence %: Fire
     *   Multiply the fire defense by the set value
     * Default Value  = 1 */
    float fireDiffenceRate;

    /* 電撃防御力倍率
     *   電撃防御力に設定した数値をかけます
     * Defence %: Lightning
     *   Multiply the value set for the electric shock defense
     * Default Value  = 1 */
    float thunderDiffenceRate;

    /* 物理防御力[point]
     *   物理防御力に設定した数値を加減算する
     * Defence +: Physical
     *   Add or subtract the value set for physical defense */
    int32_t physicsDiffence;

    /* 魔法防御力[point]
     *   魔法防御力に設定した数値を加減算する
     * Defence +: Magic
     *   Add or subtract the value set for magic defense */
    int32_t magicDiffence;

    /* 炎防御力[point]
     *   炎防御力に設定した数値を加減算する
     * Defence +: Fire
     *   Add or subtract the value set for the fire defense */
    int32_t fireDiffence;

    /* 電撃防御力[point]
     *   電撃防御力に設定した数値を加減算する
     * Defence +: Lightning
     *   Add or subtract the value set for the electric shock defense */
    int32_t thunderDiffence;

    /* 隙ダメージ倍率
     *   隙のときのダメージ倍率を、設定した数値に置き換える（ダメージ側に設定）
     * No Guard Damage %
     *   Replace the damage ratio at the time of the gap with the set value (set on the damage side)
     * Default Value  = 1 */
    float NoGuardDamageRate;

    /* スィートスポット倍率
     *   スィートスポットのダメージ計算を指定した数値に差し替える(急所ダメージ補正) -1.0で無効
     * Vital Spot Change %
     *   Replaces the damage calculation of the sweet spot with the specified value (key point damage correction) -Invalid at 1.0
     * Default Value  = -1 */
    float vitalSpotChangeRate;

    /* ノーマルヒット倍率
     *   ノーマルヒットのダメージ計算を指定した数値に差し替える  -1.0で無効
     * Normal Hit Change %
     *   Replaces normal hit damage calculation with the specified number -Invalid at 1.0
     * Default Value  = -1 */
    float normalSpotChangeRate;

    /* LookAt位置オフセット[m]
     *   敵がLookAtする際に目標位置をオフセットする。見られる側のしゃがみや騎乗に設定する
     * Look-At Target Position Offset
     *   Offset the target position when the enemy looks at. Set to crouch or mount on the side to be seen */
    float lookAtTargetPosOffset;

    /* 行動ID指定枠
     *   特殊効果から行動IDを使ってダメージを与える場合に指定-1で無効
     * Behavior ID
     *   Specified -1 when dealing damage using action ID from special effects\nNPC Behavior - Requires State Info 142\nPlayer Behavior - Requires State Info 275\nBullet Behavior - Requires State Info 33
     * Default Value  = -1 */
    int32_t behaviorId;

    /* HPダメージ量[%]
     *   一度の発動で最大HPの何%分を減算（または加算）するかを設定
     * Current HP %
     *   Set what percentage of the maximum HP to subtract (or add) with one activation */
    float changeHpRate;

    /* HPダメージ[point]
     *   一度の発動で何ポイント減算（または加算）するかを設定
     * Current HP +
     *   Set how many points to subtract (or add) with one activation */
    int32_t changeHpPoint;

    /* MPダメージ量[%]
     *   一度の発動で最大MPの何%分を減算（または加算）するかを設定
     * Current FP %
     *   Set what percentage of the maximum MP to subtract (or add) with one activation */
    float changeMpRate;

    /* MPダメージ[point]
     *   一度の発動で何ポイント減算（または加算）するかを設定
     * Current FP +
     *   Set how many points to subtract (or add) with one activation */
    int32_t changeMpPoint;

    /* MP回復速度変化[point]
     *   回復速度を変化させる。回復計算式の基準回復速度、初期回復速度に加減算する。
     * FP Recovery Speed
     *   Change the recovery speed. Add or subtract to the standard recovery speed and initial recovery speed of the recovery formula. */
    int32_t mpRecoverChangeSpeed;

    /* スタミナダメージ量[%]
     *   一度の発動で最大スタミナの何%分を減算（または加算）するかを設定
     * Current Stamina %
     *   Set what percentage of the maximum stamina to subtract (or add) with one activation */
    float changeStaminaRate;

    /* スタミナダメージ[point]
     *   一度の発動で何ポイント減算（または加算）するかを設定
     * Current Stamina +
     *   Set how many points to subtract (or add) with one activation */
    int32_t changeStaminaPoint;

    /* スタミナ回復速度変化[point]
     *   回復速度を変化させる。回復計算式の基準回復速度、初期回復速度に加減算する。
     * Stamina Recovery Speed
     *   Change the recovery speed. Add or subtract to the standard recovery speed and initial recovery speed of the recovery formula. */
    int32_t staminaRecoverChangeSpeed;

    /* 魔法効果時間変化
     *   効果持続時間に0.1秒以上設定されている魔法のみ、効果持続時間に設定されている時間を加減算する
     * Magic Effect Time Change
     *   Add / subtract the time set for the effect duration only for magic that has the effect duration set to 0.1 seconds or more. */
    float magicEffectTimeChange;

    /* 耐久度変化：内部損耗度[point]
     *   内部損耗度に数値分を加減算する
     * Current Durability +
     *   Add or subtract the numerical value to the internal wear degree */
    int32_t insideDurability;

    /* 耐久度変化：最大損耗度変化[point]
     *   耐久度の内部損耗度の最大値に、設定された数値を加算する
     * Max Durability
     *   Add the set value to the maximum value of the internal wear degree of durability. */
    int32_t maxDurability;

    /* スタミナ攻撃力倍率
     *   スタミナ攻撃力に、倍率をかける(1.0 1倍 0.5 半分）
     * Attack %: Stamina
     *   Multiply the stamina attack power by a factor (1.0 1 times 0.5 half)
     * Default Value  = 1 */
    float staminaAttackRate;

    /* 毒耐性攻撃力[point]
     *   ヒットした時に、対象の【毒耐性値】に加算する数値
     * Aux Inflict +: Poison
     *   A value to be added to the target's [poison resistance value] when it hits\nRequires State Info 2 */
    int32_t poizonAttackPower;

    /* 疫病耐性攻撃力[point]
     *   ヒットした時に、対象の【疫病耐性値】に加算する数値
     * Aux Inflict +: Scarlet Rot
     *   Numerical value to be added to the target [Plague resistance value] when hit\nRequires State Info 5 */
    int32_t diseaseAttackPower;

    /* 出血耐性攻撃力[point]
     *   ヒットした時に、対象の【出血耐性値】に加算する数値
     * Aux Inflict +: Blood Loss
     *   A value to be added to the target's [bleeding resistance value] when it hits\nRequires State Info 6 */
    int32_t bloodAttackPower;

    /* 呪耐性攻撃力[point]
     *   ヒットした時に、対象の【呪耐性値】に加算する数値
     * Aux Inflict +: Death Blight
     *   A number to be added to the target [curse resistance value] when hit\nRequires State Info 116 */
    int32_t curseAttackPower;

    /* 落下ダメージ倍率
     *   落下時のダメージ計算に倍率をかける
     * Fall Damage %
     *   Multiply the damage calculation when falling */
    float fallDamageRate;

    /* 取得ソウル倍率
     *   敵を倒した時の取得ソウル量が、指定倍数分上乗せされる
     * Rune Gain %
     *   The amount of soul acquired when defeating an enemy is added by the specified multiple.\nRequires State Info 76 */
    float soulRate;

    /* 装備重量変化倍率
     *   最大装備重量に、設定された倍率をかける
     * Max Equip Load %
     *   Multiply the maximum equipment weight by the set magnification */
    float equipWeightChangeRate;

    /* 所持重量変化倍率
     *   最大所持重量に、設定された倍率をかける
     * Item Weight %
     *   Multiply the maximum weight you have by the set magnification */
    float allItemWeightChangeRate;

    /* ソウル加算
     *   所持ソウルに、設定値を加算する
     * Rune Gain +
     *   Add the set value to the possessed soul */
    int32_t soul;

    /* アニメIDオフセット(無効-1)
     *   アニメIDオフセット(無効-1)
     * Anim ID Offset
     *   Anime ID offset (invalid-1)
     * Default Value  = -1 */
    int32_t animIdOffset;

    /* 所持ソウル率
     *   敵周回効果用。設定されているキャラから外にソウルが出て行く時に適用されます。
     * Rune Possession Amount %
     *   For enemy lap effect. It is applied when the soul goes out from the set character.
     * Default Value  = 1 */
    float haveSoulRate;

    /* ターゲット優先度加算分
     *   マルチプレイ時、敵から優先的にターゲットとして狙われるようになる。プライオリティの加算。０がデフォルト。プラス値でよく狙われるようになる。マイナスは、－１まで。
     * Target Priority
     *   Chance for an enemy to switch aggro targets to/away the effect's owner. Values range from -1 to 1. +1 = 100% chance to target owner instead of current target, -1 = 100% chance to target somebody else instead of current target (effect owner). */
    float targetPriority;

    /* 見られる方：視覚倍率
     *   見つかりやすさを倍率で補正する
     * Enemy Vision Adjustment
     *   Correct the ease of finding by a magnification
     * Default Value  = 1 */
    float sightSearchEnemyRate;

    /* 聞かせる方：AI音半径倍率
     *   発するAI音の大きさを倍率で補正する
     * Enemy Listen Adjustment
     *   Correct the loudness of the AI sound emitted by the magnification
     * Default Value  = 1 */
    float hearingSearchEnemyRate;

    /* グラビティ率
     *   グラビティ率
     * Gravity %
     *   Gravity rate
     * Default Value  = 1 */
    float grabityRate;

    /* 毒耐性変化倍率
     *   毒耐性値に設定された倍率をかける
     * Aux Resist %: Poison
     *   Multiply the poison resistance value by the set multiplier
     * Default Value  = 1 */
    float registPoizonChangeRate;

    /* 疫病耐性変化倍率
     *   疫病耐性値に設定された倍率をかける
     * Aux Resist %: Scarlet Rot
     *   Multiply the plague resistance value by the set magnification
     * Default Value  = 1 */
    float registDiseaseChangeRate;

    /* 出血耐性変化倍率
     *   出血耐性値に設定された倍率をかける
     * Aux Resist %: Blood Loss
     *   Multiply the bleeding resistance value by the set magnification
     * Default Value  = 1 */
    float registBloodChangeRate;

    /* 呪耐性変化倍率
     *   呪耐性値に設定された倍率をかける
     * Aux Resist %: Death Blight
     *   Multiply the spell resistance value by the set multiplier
     * Default Value  = 1 */
    float registCurseChangeRate;

    /* ソウルスティール係数
     *   NPCがソウルスティールで奪われるHPに対する防御力
     * Soul Steal %
     *   Defense against HP robbed by NPCs in Soul Steel */
    float soulStealRate;

    /* 防御：寿命係数
     * Effect Duration % */
    float lifeReductionRate;

    /* HP回復量係数
     *   HPが減るときは、効かない。
     * HP Recovery Effectiveness %
     *   It doesn't work when HP decreases. */
    float hpRecoverRate;

    /* 差し替える特殊効果
     *   寿命が尽きた時に追加される特殊効果ID(-1は無視)
     * Chain SpEffect ID
     *   Special effect ID added at the end of life (-1 is ignored)
     * Default Value  = -1 */
    int32_t replaceSpEffectId;

    /* 周期発生特殊効果
     *   発動周期毎に発生する特殊効果ID(-1は無視)
     * Cycle SpEffect ID
     *   Special effect ID that occurs in each activation cycle (-1 is ignored)
     * Default Value  = -1 */
    int32_t cycleOccurrenceSpEffectId;

    /* 攻撃発生特殊効果
     *   攻撃Hit時に発生する特殊効果ID(-1は無視)
     * Attack SpEffect ID
     *   Special effect ID that occurs when hitting an attack (-1 is ignored)
     * Default Value  = -1 */
    int32_t atkOccurrenceSpEffectId;

    /* ガード時はじき防御力アップ倍率
     *   ガード時のはじき防御力補正値
     * Guard Defense - Weapon Repel Power %
     *   Repellent defense correction value when guarding
     * Default Value  = 1 */
    float guardDefFlickPowerRate;

    /* ガード時スタミナカット倍率
     *   ガード時のスタミナカット率補正値
     * Guard Stability %
     *   Stamina cut rate correction value when guarding
     * Default Value  = 1 */
    float guardStaminaCutRate;

    /* 視線通過：発動時間[ms]
     *   視線通過：発動時間[ms]（邪眼用）
     * Raycast Passed Time
     *   Passing the line of sight: Activation time [ms] (for evil eye)
     * Default Value  = -1 */
    int16_t rayCastPassedTime;

    /* 対サブカテゴリパラメータ変化1
     *   対サブカテゴリパラメータ変化1
     * Conditional Category [1]
     *   Vs to subcategory parameter change 1 */
    uint8_t magicSubCategoryChange1;

    /* 対サブカテゴリパラメータ変化2
     *   対サブカテゴリパラメータ変化2
     * Conditional Category [2]
     *   Vs to subcategory parameter change 2 */
    uint8_t magicSubCategoryChange2;

    /* 弓飛距離補正[％]
     *   武器の飛距離補正に加算される補正値
     * Bow Distance %
     *   Correction value added to the flight distance correction of the weapon */
    int16_t bowDistRate;

    /* 特殊効果カテゴリ
     *   特殊効果の上書きなどの挙動を決めるカテゴリ
     * Effect Category
     *   Categories that determine behavior such as overwriting special effects */
    uint16_t spCategory;

    /* カテゴリ内優先度
     *   同一カテゴリ内での優先度（低い方が優先）
     * Category Priority
     *   Priority within the same category (lower one has priority) */
    uint8_t categoryPriority;

    /* 保存カテゴリ
     *   特殊効果を保存するカテゴリ
     * Save Category
     *   Category to save special effects
     * Default Value  = -1 */
    int8_t saveCategory;

    /* 魔法登録枠変化　魔法スロット
     *   魔法登録枠を指定数増やすことが出来る
     * Magic Attunement Slot
     *   You can increase the specified number of magic registration slots */
    uint8_t changeMagicSlot;

    /* 奇跡登録枠変化　奇跡スロット
     *   軌跡登録枠を指定数増やすことが出来る
     * Miracle Attunement Slot
     *   You can increase the specified number of trajectory registration frames. */
    uint8_t changeMiracleSlot;

    /* 人間性ダメージ値
     *   人間性値に与えるダメージ値
     * Humanity Damage
     *   Damage value given to human nature value */
    int8_t heroPointDamage;

    /* はじき防御力_上書き
     *   はじき防御力を上書きする値を設定
     * Weapon Repel Defence +
     *   Set a value that overwrites the repelling defense */
    uint8_t defFlickPower;

    /* はじき時ダメージ減衰率[%]_上書き
     *   はじき時のダメージ減衰率を上書きする値を設定
     * Weapon Repel Absorption %
     *   Set a value that overwrites the damage attenuation rate at the time of repelling */
    uint8_t flickDamageCutRate;

    /* 出血ダメージ補正倍率
     *   状態変化タイプ[出血]のPointダメージ、％ダメージの時のみ使用される補正値
     * Damage Correction %: Blood Loss
     *   Point damage of state change type [bleeding], correction value used only when% damage
     * Default Value  = 100 */
    uint8_t bloodDamageRate;

    /* DL_ダメージなし（0）
     *   ダメージLv0を差し替えるタイプを指定
     * Damage Level: No Impact
     *   Specify the type to replace the damage Lv0 */
    int8_t dmgLv_None;

    /* DL_小（1）
     *   ダメージLv1を差し替えるタイプを指定
     * Damage Level: Small Impact
     *   Specify the type to replace the damage Lv1 */
    int8_t dmgLv_S;

    /* DL_中（2）
     *   ダメージLv2を差し替えるタイプを指定
     * Damage Level: Medium Impact
     *   Specify the type to replace the damage Lv2 */
    int8_t dmgLv_M;

    /* DL_大（3）
     *   ダメージLv3を差し替えるタイプを指定
     * Damage Level: Large Impact
     *   Specify the type to replace the damage Lv3 */
    int8_t dmgLv_L;

    /* DL_吹っ飛び（4）
     *   ダメージLv4を差し替えるタイプを指定
     * Damage Level: Medium Blow
     *   Specify the type to replace the damage Lv4 */
    int8_t dmgLv_BlowM;

    /* DL_プッシュ（5）
     *   ダメージLv5を差し替えるタイプを指定
     * Damage Level: Push
     *   Specify the type to replace the damage Lv5 */
    int8_t dmgLv_Push;

    /* DL_叩きつけ（6）
     *   ダメージLv6を差し替えるタイプを指定
     * Damage Level: Strike
     *   Specify the type to replace the damage Lv6 */
    int8_t dmgLv_Strike;

    /* DL_小吹っ飛び（7）
     *   ダメージLv7を差し替えるタイプを指定
     * Damage Level: Small Blow
     *   Specify the type to replace the damage Lv7 */
    int8_t dmgLv_BlowS;

    /* DL_極小（8）
     *   ダメージLv8を差し替えるタイプを指定
     * Damage Level: Minimal
     *   Specify the type to replace the damage Lv8 */
    int8_t dmgLv_Min;

    /* DL_打ち上げ（9）
     *   ダメージLv9を差し替えるタイプを指定
     * Damage Level: Uppercut
     *   Specify the type to replace the damage Lv9 */
    int8_t dmgLv_Uppercut;

    /* DL_特大吹っ飛び(10)
     *   ダメージLv10を差し替えるタイプを指定
     * Damage Level: Blow Backward
     *   Specify the type to replace the damage Lv10 */
    int8_t dmgLv_BlowLL;

    /* DL_ブレス(11)
     *   ダメージLv11を差し替えるタイプを指定
     * Damage Level: Breath
     *   Specify the type to replace the damage Lv11 */
    int8_t dmgLv_Breath;

    /* 物理属性
     *   特殊効果に設定する物理属性
     * Attack Attribute
     *   Physical attributes to set for special effects
     * Default Value  = 254 */
    uint8_t atkAttribute;

    /* 特殊属性
     *   特殊効果に設定する特殊属性
     * SpEffect Attribute
     *   Special attributes to set for special effects
     * Default Value  = 254 */
    uint8_t spAttribute;

    /* 状態変化タイプ
     *   状態変化の判定フラグ
     * State Info
     *   State change judgment flag */
    uint16_t stateInfo;

    /* 対武器パラメータ変化
     *   どの武器に対して効果を発揮するかを指定する。制限無しの場合は敵も含めた全ての攻撃・防御が対象
     * Weapon Parameter Change
     *   Specify which weapon is effective. If there is no limit, all attacks and defenses including enemies are targeted */
    uint8_t wepParamChange;

    /* 移動タイプ
     *   移動タイプ。移動速度を変更する。
     * Move Type
     *   Movement type. Change the movement speed. */
    uint8_t moveType;

    /* 防御：寿命減少タイプ
     * Effect Duration Multiplier - State Info */
    uint16_t lifeReductionType;

    /* 投げ条件
     *   投げ条件。投げマスクに影響する。
     * Throw Trigger
     *   Throwing conditions. Affects the throwing mask. */
    uint8_t throwCondition;

    /* 行動判定IDに加算する条件値
     *   行動判定ＩＤに値を加算する条件値(Def:-1)
     * Add Behavior Judge ID - Trigger
     *   Condition value to add a value to the action judgment ID (Def: -1)
     * Default Value  = -1 */
    int8_t addBehaviorJudgeId_condition;

    /* 冷気ダメージ補正倍率
     *   状態変化タイプ[冷気]のPointダメージ、％ダメージの時のみ使用される補正値
     * Damage Correction %: Frostbite
     *   Correction value used only for point damage and% damage of state change type [cold air]
     * Default Value  = 100 */
    uint8_t freezeDamageRate;

    /* 効果対象：所属　自分
     *   この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
     * Target Self
     *   Only the target for which this judgment is checked is effective, the default is  */
    uint8_t effectTargetSelf:1;

    /* 効果対象：所属　味方
     *   この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
     * Target Friend
     *   Only the target for which this judgment is checked is effective, the default is  */
    uint8_t effectTargetFriend:1;

    /* 効果対象：所属　敵
     *   この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
     * Target Enemy
     *   Only the target for which this judgment is checked is effective, the default is  */
    uint8_t effectTargetEnemy:1;

    /* 効果対象：操作　PC
     *   この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
     * Target Player
     *   Only the target for which this judgment is checked is effective, the default is  */
    uint8_t effectTargetPlayer:1;

    /* 効果対象：操作　AI
     *   この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
     * Target AI
     *   Only the target for which this judgment is checked is effective, the default is  */
    uint8_t effectTargetAI:1;

    /* 効果対象：状態　生存
     *   この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
     * Target Live
     *   Only the target for which this judgment is checked is effective, the default is  */
    uint8_t effectTargetLive:1;

    /* 効果対象：状態　全ゴースト
     *   この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
     * Target Ghost
     *   Only the target for which this judgment is checked is effective, the default is  */
    uint8_t effectTargetGhost:1;

    /* 睡眠無効
     *   この効果がかかっていると睡眠にかからなくなる
     * Disable Sleep
     *   If this effect is applied, you will not sleep */
    uint8_t disableSleep:1;

    /* 発狂無効
     *   この効果がかかっていると発狂にかからなくなる
     * Disable Madness
     *   With this effect, you won't go mad */
    uint8_t disableMadness:1;

    /* 効果対象：攻撃者に発動
     *   ダメージ後に攻撃者に特殊効果を適用（防御側には入れない）
     * Target Attacker
     *   Apply special effects to attackers after damage (cannot enter defenders) */
    uint8_t effectTargetAttacker:1;

    /* 発動してなくてもアイコン表示
     *   発動待ちの状態でもアイコンを表示する。
     * Display Icon when Inactive
     *   The icon is displayed even in the state of waiting for activation. */
    uint8_t dispIconNonactive:1;

    /* リゲインゲージを発生させるか
     *   リゲインゲージを発生させるか
     * Generate HP Regain Gauge
     *   Whether to generate a regain gauge */
    uint8_t regainGaugeDamage:1;

    /* 魔力補正するか？
     *   魔力補正するか？
     * Use Intelligence Correction
     *   Do you want to correct the magic power? */
    uint8_t bAdjustMagicAblity:1;

    /* 信仰補正するか？
     *   信仰補正するか？
     * Use Faith Correction
     *   Do you correct your faith? */
    uint8_t bAdjustFaithAblity:1;

    /* 周回ボーナス用か？
     *   ゲームクリア周回ボーナス用かどうか。
     * Enable for Game Clear
     *   Whether it is for the game clear lap bonus. */
    uint8_t bGameClearBonus:1;

    /* 対魔法パラメータ変化
     *   魔法に対して効果を発揮するかしないかを設定する
     * Affects Sorcery
     *   Set whether or not it is effective against magic */
    uint8_t magParamChange:1;

    /* 対奇跡パラメータ変化
     *   奇跡に対して効果を発揮するかしないかを設定する
     * Affects Incantation
     *   Set whether or not it is effective against miracles */
    uint8_t miracleParamChange:1;

    /* 所持ソウルクリアするか
     *   所持ソウルが0になります。
     * Clear Held Runes
     *   Possession soul becomes 0. */
    uint8_t clearSoul:1;

    /* SOSサイン　判定フラグ
     *   チェックが付いている場合、発動時にSOSサイン要求を発行
     * Request: Friendly Phantom Summon
     *   If checked, issue an SOS sign request when activated */
    uint8_t requestSOS:1;

    /* ブラックSOSサイン　判定フラグ
     *   チェックが付いている場合、発動時にブラックSOSサイン要求を発行
     * Request: Hostile Phantom Summon
     *   If checked, issue a black SOS sign request when activated */
    uint8_t requestBlackSOS:1;

    /* 侵入_Aリクエスト　判定フラグ
     *   チェックが付いている場合、発動時に侵入_Aリクエストを発行
     * Request: Invasion
     *   If checked, issue an intrusion_A request when activated */
    uint8_t requestForceJoinBlackSOS:1;

    /* キック　判定フラグ
     *   チェックが付いている場合、発動時にキック要求を発行
     * Request: Kick
     *   If checked, a kick request will be issued at the time of activation. */
    uint8_t requestKickSession:1;

    /* 退出　判定フラグ
     *   チェックが付いている場合、発動時に退出要求を発行
     * Request: Return to Own World
     *   If checked, an exit request will be issued at the time of activation. */
    uint8_t requestLeaveSession:1;

    /* NPCへの侵入　判定フラグ
     *   チェックが付いている場合、発動時にNPCへの侵入要求を発行
     * Request: NPC Invasion
     *   If checked, an intrusion request to the NPC will be issued at the time of activation. */
    uint8_t requestNpcInveda:1;

    /* 成仏不可　判定フラグ
     *   死体状態になれるかどうか。このチェックが付いていると、死亡状態にならない
     * Is No Dead
     *   Whether you can be corpse. With this check, you will not be dead */
    uint8_t noDead:1;

    /* 最大HPが増減しても、現在HPは影響しないか？
     *   最大HPが増減しても、現在HPは影響しないか？
     * Current HP independent Max HP
     *   Does HP now affect even if the maximum HP increases or decreases? */
    uint8_t bCurrHPIndependeMaxHP:1;

    /* 腐食無視
     *   【状態変化タイプ】が【腐食】による【耐久度】減少を無視する
     * Ignore Durability Loss
     *   [State change type] ignores [Durability] decrease due to [Corrosion] */
    uint8_t corrosionIgnore:1;

    /* 視覚索敵カット無視
     *   視覚索敵無効を無視する
     * Ignore Vision Reductions
     *   Ignore visual search invalidity */
    uint8_t sightSearchCutIgnore:1;

    /* 聴覚索敵カット無視
     *   聴覚索敵無効を無視する
     * Ignore Listen Reductions
     *   Ignore auditory search invalidity */
    uint8_t hearingSearchCutIgnore:1;

    /* アンチマジック無効
     *   アンチマジック範囲でも魔法を使用できる
     * Ignore Anti-Magic Effect
     *   You can use magic even in the anti-magic range */
    uint8_t antiMagicIgnore:1;

    /* 偽ターゲット無効_幻聴系
     *   発生した偽ターゲットに引っかからなくなる
     * Ignore Fake Targets
     *   Don't get caught in the fake target that occurred */
    uint8_t fakeTargetIgnore:1;

    /* 偽ターゲット無効_人系
     *   発生した人系の偽ターゲットに引っかからなくなる
     * Ignore Fake Human Targets
     *   You will not be caught by the fake target of the human system that occurred */
    uint8_t fakeTargetIgnoreUndead:1;

    /* 偽ターゲット無効_獣系
     *   発生した獣系の偽ターゲットに引っかからなくなる
     * Ignore Fake Animal Targets
     *   You will not be caught by the fake target of the beast system that occurred */
    uint8_t fakeTargetIgnoreAnimal:1;

    /* グラビティ無効
     *   グラビティ効果無効
     * Ignore Gravity Change
     *   Gravity effect disabled */
    uint8_t grabityIgnore:1;

    /* 毒無効
     *   この効果がかかっていると毒にかからなくなる
     * Disable Poison
     *   If this effect is applied, it will not be poisoned. */
    uint8_t disablePoison:1;

    /* 疫病無効
     *   この効果がかかっていると疫病にかからなくなる
     * Disable Scarlet Rot
     *   If this effect is applied, you will not get plague */
    uint8_t disableDisease:1;

    /* 出血無効
     *   この効果がかかっていると出血にかからなくなる
     * Disable Blood Loss
     *   With this effect, you won't get bleeding */
    uint8_t disableBlood:1;

    /* 呪無効
     *   この効果がかかっていると呪いにかからなくなる
     * Disable Death Blight
     *   With this effect, you won't be cursed */
    uint8_t disableCurse:1;

    /* 魅了有効
     *   この効果がかかっていると魅了にかかるようになる
     * Enable Charm
     *   If this effect is applied, you will be fascinated. */
    uint8_t enableCharm:1;

    /* 寿命延長するか？
     *   TAEによるフラグ設定時に寿命延長するか？
     * Enable Lifetime
     *   Will the life be extended when the flag is set by TAE? */
    uint8_t enableLifeTime:1;

    /* 筋力補正するか？
     *   筋力補正するか？
     * Use Strength Correction
     *   Do you want to correct your strength? */
    uint8_t bAdjustStrengthAblity:1;

    /* 技量補正するか？
     *   技量補正するか？
     * Use Dexterity Correction
     *   Do you want to correct your workmanship? */
    uint8_t bAdjustAgilityAblity:1;

    /* 篝火回復で消えるか
     *   篝火回復で消えるか
     * Erase on Bonfire Rest
     *   Will it be extinguished by bonfire recovery? */
    uint8_t eraseOnBonfireRecover:1;

    /* 対投げパラメータ変化
     *   投げ攻撃に対して効果を発揮するかしないかを設定する
     * Throw Attack Param Change
     *   Set whether or not it is effective against throwing attacks */
    uint8_t throwAttackParamChange:1;

    /* 闘技場退出　判定フラグ
     *   チェックが付いている場合、発動時に闘技場退出要求を発行
     * Request: Leave Arena
     *   If checked, a request to leave the arena will be issued at the time of activation. */
    uint8_t requestLeaveColiseumSession:1;

    /* 寿命延長効果で延長するか？
     *   寿命延長効果が掛かっている時に延長対象になるかどうか
     * Has Effect Duration Adjustment Applied
     *   Whether to be eligible for extension when the life extension effect is applied */
    uint8_t isExtendSpEffectLife:1;

    /* 敵を把握しているか？
     *   敵を把握しているか？：[発動条件](邪眼使用者用)
     * Has Target
     *   Do you know the enemy? : [Activation condition] (for evil eye users) */
    uint8_t hasTarget:1;

    /* 発動時リプランニングするか？
     *   発動時リプランニングするか
     * Cancel on Fire Damage
     *   Whether to replan at the time of activation */
    uint8_t replanningOnFire:1;

    /* 誓約0
     *   誓約0
     * Trigger for Vow Type [0]
     *   Pledge 0 */
    uint8_t vowType0:1;

    /* 誓約1
     *   誓約1
     * Trigger for Vow Type [1]
     *   Pledge 1 */
    uint8_t vowType1:1;

    /* 誓約2
     *   誓約2
     * Trigger for Vow Type [2]
     *   Pledge 2 */
    uint8_t vowType2:1;

    /* 誓約3
     *   誓約3
     * Trigger for Vow Type [3]
     *   Pledge 3 */
    uint8_t vowType3:1;

    /* 誓約4
     *   誓約4
     * Trigger for Vow Type [4]
     *   Pledge 4 */
    uint8_t vowType4:1;

    /* 誓約5
     *   誓約5
     * Trigger for Vow Type [5]
     *   Pledge 5 */
    uint8_t vowType5:1;

    /* 誓約6
     *   誓約6
     * Trigger for Vow Type [6]
     *   Pledge 6 */
    uint8_t vowType6:1;

    /* 誓約7
     *   誓約7
     * Trigger for Vow Type [7]
     *   Pledge 7 */
    uint8_t vowType7:1;

    /* 誓約8
     *   誓約8
     * Trigger for Vow Type [8]
     *   Pledge 8 */
    uint8_t vowType8:1;

    /* 誓約9
     *   誓約9
     * Trigger for Vow Type [9]
     *   Pledge 9 */
    uint8_t vowType9:1;

    /* 誓約10
     *   誓約10
     * Trigger for Vow Type [10]
     *   Pledge 10 */
    uint8_t vowType10:1;

    /* 誓約11
     *   誓約11
     * Trigger for Vow Type [11]
     *   Pledge 11 */
    uint8_t vowType11:1;

    /* 誓約12
     *   誓約12
     * Trigger for Vow Type [12]
     *   Pledge 12 */
    uint8_t vowType12:1;

    /* 誓約13
     *   誓約13
     * Trigger for Vow Type [13]
     *   Pledge 13 */
    uint8_t vowType13:1;

    /* 誓約14
     *   誓約14
     * Trigger for Vow Type [14]
     *   Pledge 14 */
    uint8_t vowType14:1;

    /* 誓約15
     *   誓約15
     * Trigger for Vow Type [15]
     *   Pledge 15 */
    uint8_t vowType15:1;

    /* 攻撃側ダメージレベル差し替え
     *   攻撃側のダメージレベルがこの値に指し換わる
     * Change Attacker Damage Level
     *   The damage level of the attacking side changes to this value */
    int8_t repAtkDmgLv;

    /* 見る方：視覚倍率
     *   見つけやすさを倍率で補正する
     * AI Vision Correction
     *   Correct the ease of finding with a magnification
     * Default Value  = 1 */
    float sightSearchRate;

    /* 効果対象：●敵対
     *   この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
     * Trigger for Opponent
     *   Only the target for which this judgment is checked is effective, the default is  */
    uint8_t effectTargetOpposeTarget:1;

    /* 効果対象：○味方
     *   この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
     * Trigger for Friendly
     *   Only the target for which this judgment is checked is effective, the default is  */
    uint8_t effectTargetFriendlyTarget:1;

    /* 効果対象：自分
     *   この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
     * Trigger for Self
     *   Only the target for which this judgment is checked is effective, the default is  */
    uint8_t effectTargetSelfTarget:1;

    /* 効果対象：PC馬
     *   この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
     * Trigger for Horse
     *   Only the target for which this judgment is checked is effective, the default is  */
    uint8_t effectTargetPcHorse:1;

    /* 効果対象：PC亡者のみ
     *   この判定にチェックが入っている対象のみ効果を発揮する、デフォルトは×
     * Trigger for Dead Player
     *   Only the target for which this judgment is checked is effective, the default is  */
    uint8_t effectTargetPcDeceased:1;

    /* 寿命短縮効果で短縮するか？
     *   寿命短縮効果が掛かっている時に短縮対象になるかどうか
     * Can Duration be Reduced
     *   Whether it will be shortened when the life shortening effect is applied */
    uint8_t isContractSpEffectLife:1;

    /* 待ち状態に入ると削除
     *   待ち状態になった瞬間に削除するか？
     * Delete in Wait Mode
     *   Do you want to delete it the moment you are in a waiting state? */
    uint8_t isWaitModeDelete:1;

    /* 無敵時でも発動するか
     *   状態変化タイプ「無敵時でも発動機能を適応」が掛かっているときのみ、無敵状態でもこの特殊効果からのダメージを適応するか
     * Apply through No Damage
     *   Whether to apply the damage from this special effect even in the invincible state only when the state change type Apply the activation function even when invincible is applied. */
    uint8_t isIgnoreNoDamage:1;

    /* チームタイプ変更
     *   指定したチームタイプに上書きする
     * Team Type
     *   Overwrites the specified team type. Requires State Info 132
     * Default Value  = -1 */
    int8_t changeTeamType;

    /* ダミポリID
     *   ダミポリID。ダミポリID範囲は0～999.1000,10000の位はカテゴリ番号.
     * Bullet Behavior ID - DmyPoly ID
     *   Damipoli ID. Damipoli ID range is 0 to 999.1000, 10000 is the category number.
     * Default Value  = -1 */
    int16_t dmypolyId;

    /* 特殊効果VfxId_０
     *   特殊効果VfxId(-1無効)
     * Effect VFX [0]
     *   Special effect VfxId (-1 disabled)
     * Default Value  = -1 */
    int32_t vfxId;

    /* 元気玉上限時発動特殊効果Id
     *   元気玉上限時発動特殊効果Id
     * Accumulator - Over Value - SpEffect ID
     *   Special effect Id activated at the upper limit of the spirit ball
     * Default Value  = -1 */
    int32_t accumuOverFireId;

    /* 元気玉上限値
     *   元気玉上限値
     * Accumulator - Over Value
     *   Genkitama upper limit
     * Default Value  = -1 */
    int32_t accumuOverVal;

    /* 元気玉下限時発動特殊効果Id
     *   元気玉下限時発動特殊効果Id
     * Accumulator - Under Value - SpEffect ID
     *   Special effect Id activated at the lower limit of the spirit ball
     * Default Value  = -1 */
    int32_t accumuUnderFireId;

    /* 元気玉下限値
     *   元気玉下限値
     * Accumulator - Under Value
     *   Genkitama lower limit
     * Default Value  = -1 */
    int32_t accumuUnderVal;

    /* 元気玉蓄積値
     *   元気玉蓄積値
     * Accumulator - Increment Value
     *   Genkitama accumulation value */
    int32_t accumuVal;

    /* 見る方：視覚角度（高さ）上書き[deg]
     *   見つけやすさの角度を上書きする
     * Vision - Overwrite Height Angle
     *   Override the findability angle x. Requires State Info 267 */
    uint8_t eye_angX;

    /* 見る方：視覚角度（幅）上書き[deg]
     *   見つけやすさの角度を上書きする
     * Vision - Overwrite Width Angle
     *   Override the findability angle y. Requires State Info 267 */
    uint8_t eye_angY;

    /* 亡者度 変更
     *   この値分亡者度を加算する
     * Add Hollowing Level
     *   Add this value to the degree of death */
    int16_t addDeceasedLv;

    /* 特殊効果VfxId_１
     *   特殊効果VfxId１(-1無効)
     * Effect VFX [1]
     *   Special effect VfxId1 (-1 invalid)
     * Default Value  = -1 */
    int32_t vfxId1;

    /* 特殊効果VfxId_２
     *   特殊効果VfxId２(-1無効)
     * Effect VFX [2]
     *   Special effect VfxId2 (-1 invalid)
     * Default Value  = -1 */
    int32_t vfxId2;

    /* 特殊効果VfxId_３
     *   特殊効果VfxId３(-1無効)
     * Effect VFX [3]
     *   Special effect VfxId3 (-1 invalid)
     * Default Value  = -1 */
    int32_t vfxId3;

    /* 特殊効果VfxId_４
     *   特殊効果VfxId４(-1無効)
     * Effect VFX [4]
     *   Special effect VfxId4 (-1 invalid)
     * Default Value  = -1 */
    int32_t vfxId4;

    /* 特殊効果VfxId_５
     *   特殊効果VfxId５(-1無効)
     * Effect VFX [5]
     *   Special effect VfxId5 (-1 invalid)
     * Default Value  = -1 */
    int32_t vfxId5;

    /* 特殊効果VfxId_６
     *   特殊効果VfxId６(-1無効)
     * Effect VFX [6]
     *   Special effect VfxId6 (-1 invalid)
     * Default Value  = -1 */
    int32_t vfxId6;

    /* 特殊効果VfxId_７
     *   特殊効果VfxId７(-1無効)
     * Effect VFX [7]
     *   Special effect VfxId7 (-1 invalid)
     * Default Value  = -1 */
    int32_t vfxId7;

    /* 冷気耐性攻撃力[point]
     *   ヒットした時に、対象の【冷気耐性値】に加算する数値
     * Aux Inflict +: Frostbite
     *   Numerical value to be added to the target [Cold air resistance value] when hit. Requires State Info 260 */
    int32_t freezeAttackPower;

    /* 発生AI音ID
     *   設定された値のAI音パラメータを発生させる
     * Generated AI Sound ID
     *   Generates AI sound parameters with set values */
    int32_t AppearAiSoundId;

    /* 追加フットエフェクト識別子
     *   特殊効果時に追加で発生させるフットエフェクトの識別子。XYYZZZのZZZ
     * Automatic Foot Effect - SFX ID Offset
     *   The identifier of the foot effect that is additionally generated during special effects. XYYZZZ ZZZ
     * Default Value  = -1 */
    int16_t addFootEffectSfxId;

    /* 技量キャンセル用仮想ステータス
     *   「技量キャンセル」のTAEフラグの終了タイミングを計算する時に、この値を追加して計算する
     * Cast Speed +
     *   Add this value when calculating the end timing of the TAE flag of Skill Cancel. */
    int8_t dexterityCancelSystemOnlyAddDexterity;

    /* チーム攻撃影響力_上書き
     *   対象の【チーム攻撃影響力】の値を、上書きして変更する。デフォルト値（-1）のときは変更しない。
     * Team Attack Effectivity
     *   Overwrite and change the target [Team Attack Influence] value. Do not change the default value (-1).
     * Default Value  = -1 */
    int8_t teamOffenseEffectivity;

    /* 強靭度 被ダメージ倍率
     *   強靭度版カット率
     * Absorption %: Toughness
     *   Toughness version cut rate
     * Default Value  = 1 */
    float toughnessDamageCutRate;

    /* 特攻Aダメージ倍率補正
     *   特攻Aダメージ倍率に補正をかけます。１が通常。
     * Damage Multiplier %: Type A
     *   Special Attack A Damage multiplier is corrected. 1 is normal.
     * Default Value  = 1 */
    float weakDmgRateA;

    /* 特攻Bダメージ倍率補正
     *   特攻Bダメージ倍率に補正をかけます。１が通常。
     * Damage Multiplier %: Type B
     *   Special attack B Damage multiplier is corrected. 1 is normal.
     * Default Value  = 1 */
    float weakDmgRateB;

    /* 特攻Cダメージ倍率補正
     *   特攻Cダメージ倍率に補正をかけます。１が通常。
     * Damage Multiplier %: Type C
     *   Special attack C Damage multiplier is corrected. 1 is normal.
     * Default Value  = 1 */
    float weakDmgRateC;

    /* 特攻Dダメージ倍率補正
     *   特攻Dダメージ倍率に補正をかけます。１が通常。
     * Damage Multiplier %: Type D
     *   Special attack D Damage multiplier is corrected. 1 is normal.
     * Default Value  = 1 */
    float weakDmgRateD;

    /* 特攻Eダメージ倍率補正
     *   特攻Eダメージ倍率に補正をかけます。１が通常。
     * Damage Multiplier %: Type E
     *   Special attack E Damage multiplier is corrected. 1 is normal.
     * Default Value  = 1 */
    float weakDmgRateE;

    /* 特攻Fダメージ倍率補正
     *   特攻Fダメージ倍率に補正をかけます。１が通常。
     * Damage Multiplier %: Type F
     *   Special attack F Damage multiplier is corrected. 1 is normal.
     * Default Value  = 1 */
    float weakDmgRateF;

    /* 防御側：闇ダメージ倍率
     *   闇ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
     * Absorption %: Holy
     *   Dark damage multiplier: Correct the calculated damage by XX times. 1 is normal.
     * Default Value  = 1 */
    float darkDamageCutRate;

    /* 闇防御力倍率
     *   闇防御力に設定した数値をかけます
     * Defence %: Holy
     *   Multiply the darkness defense by the set value
     * Default Value  = 1 */
    float darkDiffenceRate;

    /* 闇防御力[point]
     *   闇防御力に設定した数値を加減算する
     * Defence +: Holy
     *   Add or subtract the value set for darkness defense */
    int32_t darkDiffence;

    /* 攻撃側：闇ダメージ倍率
     *   闇ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
     * Attack %: Holy
     *   Dark damage multiplier: Correct the calculated damage by XX times. 1 is normal.
     * Default Value  = 1 */
    float darkAttackRate;

    /* 闇攻撃力倍率
     *   闇攻撃力に設定した数値をかけます
     * Power %: Holy
     *   Multiply the dark attack power by the set value
     * Default Value  = 1 */
    float darkAttackPowerRate;

    /* 闇攻撃力[point]
     *   闇攻撃力に設定した数値を加減算する
     * Damage +: Holy
     *   Add or subtract the value set for the dark attack power */
    int32_t darkAttackPower;

    /* 暗闇丸見え半径[m]
     *   暗闇丸見え半径[m]。この距離内にいる場合は暗所でも通常距離で見えるようになります
     * Full View in Darkness - Radius
     *   Radius of full view of darkness [m]. If you are within this distance, you will be able to see at normal distance even in the dark. */
    float antiDarkSightRadius;

    /* 暗闇丸見えダミポリID
     *   暗闇丸見えダミポリID(-1:マスター)。このダミポリを中心に丸見え領域を作成します
     * Full View in Darkness - Dummy Poly ID
     *   Damipoli ID (-1: Master) with full view of darkness. Create a full view area around this Damipoli
     * Default Value  = -1 */
    int32_t antiDarkSightDmypolyId;

    /* 発動条件　残りHP比率が一定以上[%]
     *   指定された値以上のHPを持っている時にしか発動しない
     * Trigger on HP Above %
     *   Activates only when you have HP above the specified value
     * Default Value  = -1 */
    float conditionHpRate;

    /* 消費スタミナ倍率
     *   行動パラメータの消費スタミナの値にかける倍率
     * Weapon Stamina Consumption %
     *   Multiply by multiplying the consumption stamina value of the behavior parameter
     * Default Value  = 1 */
    float consumeStaminaRate;

    /* アイテムドロップ補正
     *   設定された値が【アイテムドロップ補正】に加算される 
     * Item Discovery %
     *   The set value is added to [Item Drop Correction]. Requires State Info 66 */
    float itemDropRate;

    /* 毒耐性変化[point]
     *   状態耐性値を増減させる
     * Aux Resist +: Poison
     *   Increase or decrease the state resistance value */
    int32_t changePoisonResistPoint;

    /* 疫病耐性変化[point]
     *   状態耐性値を増減させる
     * Aux Resist +: Scarlet Rot
     *   Increase or decrease the state resistance value */
    int32_t changeDiseaseResistPoint;

    /* 出血耐性変化[point]
     *   状態耐性値を増減させる
     * Aux Resist +: Blood Loss
     *   Increase or decrease the state resistance value */
    int32_t changeBloodResistPoint;

    /* 呪耐性変化[point]
     *   状態耐性値を増減させる
     * Aux Resist +: Death Blight
     *   Increase or decrease the state resistance value */
    int32_t changeCurseResistPoint;

    /* 冷気耐性変化[point]
     *   状態耐性値を増減させる
     * Aux Resist +: Frostbite
     *   Increase or decrease the state resistance value */
    int32_t changeFreezeResistPoint;

    /* 攻撃側：斬撃ダメージ倍率
     *   斬撃ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
     * Attack %: Slash
     *   Slash damage ratio: Correct the calculated damage by XX times. 1 is normal.
     * Default Value  = 1 */
    float slashAttackRate;

    /* 攻撃側：打撃ダメージ倍率
     *   打撃ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
     * Attack %: Strike
     *   Batter damage ratio: The calculated damage is corrected by XX times. 1 is normal.
     * Default Value  = 1 */
    float blowAttackRate;

    /* 攻撃側：刺突ダメージ倍率
     *   刺突ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
     * Attack %: Thrust
     *   Puncture damage ratio: Correct the calculated damage by XX times. 1 is normal.
     * Default Value  = 1 */
    float thrustAttackRate;

    /* 攻撃側：無属性ダメージ倍率
     *   無属性ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
     * Attack %: Standard
     *   Non-attribute damage ratio: Correct the calculated damage by XX times. 1 is normal.
     * Default Value  = 1 */
    float neutralAttackRate;

    /* 斬撃攻撃力倍率
     *   斬撃攻撃力に設定した数値をかけます
     * Power %: Slash
     *   Multiply the slashing attack power by the set value
     * Default Value  = 1 */
    float slashAttackPowerRate;

    /* 打撃攻撃力倍率
     *   打撃攻撃力に設定した数値をかけます
     * Power %: Strike
     *   Multiply the hit attack power by the set value
     * Default Value  = 1 */
    float blowAttackPowerRate;

    /* 刺突攻撃力倍率
     *   刺突攻撃力に設定した数値をかけます
     * Power %: Thrust
     *   Multiply the piercing attack power by the set value
     * Default Value  = 1 */
    float thrustAttackPowerRate;

    /* 無属性攻撃力倍率
     *   無属性攻撃力に設定した数値をかけます
     * Power %: Standard
     *   Multiply the non-attribute attack power by the set value
     * Default Value  = 1 */
    float neutralAttackPowerRate;

    /* 斬撃攻撃力[point]
     *   斬撃攻撃力に設定した数値を加減算する
     * Damage +: Slash
     *   Add or subtract the value set for the slashing attack power */
    int32_t slashAttackPower;

    /* 打撃攻撃力[point]
     *   打撃攻撃力に設定した数値を加減算する
     * Damage +: Strike
     *   Add or subtract the value set for the batter attack power */
    int32_t blowAttackPower;

    /* 刺突攻撃力[point]
     *   刺突攻撃力に設定した数値を加減算する
     * Damage +: Thrust
     *   Add or subtract the value set for the piercing attack power */
    int32_t thrustAttackPower;

    /* 無属性攻撃力[point]
     *   無属性攻撃力に設定した数値を加減算する
     * Damage +: Standard
     *   Add or subtract the value set for non-attribute attack power */
    int32_t neutralAttackPower;

    /* 筋力補正変化[point]
     *   武器の補正値を加減算する
     * Correction +: STR
     *   Add or subtract the correction value of the weapon */
    int32_t changeStrengthPoint;

    /* 俊敏補正変化[point]
     *   武器の補正値を加減算する
     * Correction +: DEX
     *   Add or subtract the correction value of the weapon */
    int32_t changeAgilityPoint;

    /* 魔力補正変化[point]
     *   武器の補正値を加減算する
     * Correction +: INT
     *   Add or subtract the correction value of the weapon */
    int32_t changeMagicPoint;

    /* 信仰補正変化[point]
     *   武器の補正値を加減算する
     * Correction +: FTH
     *   Add or subtract the correction value of the weapon */
    int32_t changeFaithPoint;

    /* 運補正変化[point]
     *   武器の補正値を加減算する
     * Correction +: ARC
     *   Add or subtract the correction value of the weapon */
    int32_t changeLuckPoint;

    /* アーツポイント回復 筋力系
     *   アーツポイント筋力を回復させる
     * Weapon Art Restore: STR
     *   Arts Point Restores strength */
    int8_t recoverArtsPoint_Str;

    /* アーツポイント回復 技量系
     *   アーツポイント技量を回復させる
     * Weapon Art Restore: DEX
     *   Restores arts point workmanship */
    int8_t recoverArtsPoint_Dex;

    /* アーツポイント回復 魔法系
     *   アーツポイント魔法を回復させる
     * Weapon Art Restore: INT
     *   Restores arts point magic */
    int8_t recoverArtsPoint_Magic;

    /* アーツポイント回復 奇跡系
     *   アーツポイント奇跡を回復させる
     * Weapon Art Restore: FTH
     *   Recover arts point miracles */
    int8_t recoverArtsPoint_Miracle;

    /* 発狂ダメージ補正倍率
     *   状態変化タイプ[発狂]のPointダメージ、％ダメージの時のみ使用される補正値
     * Damage Correction %: Madness
     *   Correction value used only for point damage and% damage of state change type [madness]
     * Default Value  = 100 */
    uint8_t madnessDamageRate;

    /* 状態異常攻撃力倍率補正を適応するか
     *   ○なら攻撃パラの状態異常攻撃力倍率補正を適応します。
     * Use Status Ailment Attack Power Correction
     *   If , the abnormal state attack power multiplier correction of the attack para is applied. */
    uint8_t isUseStatusAilmentAtkPowerCorrect:1;

    /* 攻撃パラメータの攻撃力倍率補正を適応するか
     *   ○なら攻撃パラの攻撃力倍率補正を適応します。
     * Use AtkParam Attack Power Correction
     *   If , the attack power multiplier correction of the attack para is applied. */
    uint8_t isUseAtkParamAtkPowerCorrect:1;

    /* 死亡時に削除しない
     *   ○ならキャラが死亡しても削除しません。主に死亡エフェクトに使います。
     * Don't Delete on Dead
     *   If it is , it will not be deleted even if the character dies. Mainly used for death effects. */
    uint8_t dontDeleteOnDead:1;

    /* 冷気無効
     *   この効果がかかっていると冷気にかからなくなる
     * Disable Frostbite
     *   When this effect is applied, it will not be cold */
    uint8_t disableFreeze:1;

    /* ネット同期しない
     *   ネット同期しない。ローカルに掛けるようになる、という意味ではなく、単にネット送信しない。例えばリモートキャラはローカル発動しないので、その場合何も起こらない。
     * Do not Sync in Multiplayer
     *   Do not synchronize with the net. It does not mean that you will be able to call it locally, but simply do not send it online. For example, a remote character does not activate locally, so nothing happens in that case. */
    uint8_t isDisableNetSync:1;

    /* 対呪術パラメータ変化
     *   呪術に対して効果を発揮するかしないかを設定する
     * Affects Pyromancy
     *   Set whether or not it is effective against spells */
    uint8_t shamanParamChange:1;

    /* 被索敵状態の通知停止
     *   自軍をターゲットしている通知を停止するかどうか(EventMakerでの判定やバディ小隊で使用)
     * Stop Platoon Notifications
     *   Whether to stop notifications targeting your army (used by EventMaker decisions and buddy platoons) */
    uint8_t isStopSearchedNotify:1;

    /* 雨遮蔽外の時のみかかる
     *   ○なら遮蔽判定されているときは掛からない（×は常に掛かる）
     * Apply outside of Rain Shield
     *   If it is , it will not be applied when it is judged to be shielded ( is always applied) */
    uint8_t isCheckAboveShadowTest:1;

    /* 行動判定IDに加算する加算値
     *   行動判定IDの加算値 ０の場合は行動を切り替えるのではなく、行動しなくなります。
     * Add Behavior Judgment ID - Addition Value
     *   If the addition value of the action judgment ID is 0, the action is not switched and the action is stopped. */
    uint16_t addBehaviorJudgeId_add;

    /* SA値_被ダメージ倍率
     *   SAダメージかかる倍率
     * Absorption %: Poise Damage
     *   Multiplier for SA damage
     * Default Value  = 1 */
    float saReceiveDamageRate;

    /* 防御側 プレイヤー 物理ダメージ補正倍率
     *   プレイヤーから受けるダメージ値に対するダメージ補正。
     * PVP Absorption %: Physical
     *   Damage correction for the damage value received from the player.
     * Default Value  = 1 */
    float defPlayerDmgCorrectRate_Physics;

    /* 防御側 プレイヤー 魔法ダメージ補正倍率
     *   プレイヤーから受けるダメージ値に対するダメージ補正。
     * PVP Absorption %: Magic
     *   Damage correction for the damage value received from the player.
     * Default Value  = 1 */
    float defPlayerDmgCorrectRate_Magic;

    /* 防御側 プレイヤー 炎ダメージ補正倍率
     *   プレイヤーから受けるダメージ値に対するダメージ補正。
     * PVP Absorption %: Fire
     *   Damage correction for the damage value received from the player.
     * Default Value  = 1 */
    float defPlayerDmgCorrectRate_Fire;

    /* 防御側 プレイヤー 雷ダメージ補正倍率
     *   プレイヤーから受けるダメージ値に対するダメージ補正。
     * PVP Absorption %: Lightning
     *   Damage correction for the damage value received from the player.
     * Default Value  = 1 */
    float defPlayerDmgCorrectRate_Thunder;

    /* 防御側 プレイヤー 闇ダメージ補正倍率
     *   プレイヤーから受けるダメージ値に対するダメージ補正。
     * PVP Absorption %: Holy
     *   Damage correction for the damage value received from the player.
     * Default Value  = 1 */
    float defPlayerDmgCorrectRate_Dark;

    /* 防御側 敵 物理ダメージ補正倍率
     *   敵から受けるダメージ値に対するダメージ補正。
     * Absorption %: Physical
     *   Damage correction for the damage value received from the enemy.
     * Default Value  = 1 */
    float defEnemyDmgCorrectRate_Physics;

    /* 防御側 敵 魔法ダメージ補正倍率
     *   敵から受けるダメージ値に対するダメージ補正。
     * Absorption %: Magic
     *   Damage correction for the damage value received from the enemy.
     * Default Value  = 1 */
    float defEnemyDmgCorrectRate_Magic;

    /* 防御側 敵 炎ダメージ補正倍率
     *   敵から受けるダメージ値に対するダメージ補正。
     * Absorption %: Fire
     *   Damage correction for the damage value received from the enemy.
     * Default Value  = 1 */
    float defEnemyDmgCorrectRate_Fire;

    /* 防御側 敵 雷ダメージ補正倍率
     *   敵から受けるダメージ値に対するダメージ補正。
     * Absorption %: Lightning
     *   Damage correction for the damage value received from the enemy.
     * Default Value  = 1 */
    float defEnemyDmgCorrectRate_Thunder;

    /* 防御側 敵 闇ダメージ補正倍率
     *   敵から受けるダメージ値に対するダメージ補正。
     * Absorption %: Holy
     *   Damage correction for the damage value received from the enemy.
     * Default Value  = 1 */
    float defEnemyDmgCorrectRate_Dark;

    /* 防御側 オブジェクトダメージ補正倍率
     *   OBJから受けるダメージ値に対するダメージ補正。
     * Absorption %: Object
     *   Damage correction for the damage value received from OBJ.
     * Default Value  = 1 */
    float defObjDmgCorrectRate;

    /* 攻撃側 プレイヤー 物理ダメージ補正倍率
     *   プレイヤーに与えるダメージ値に対するダメージ補正。
     * PVP Damage %: Physical
     *   Damage correction for the damage value given to the player.
     * Default Value  = 1 */
    float atkPlayerDmgCorrectRate_Physics;

    /* 攻撃側 プレイヤー 魔法ダメージ補正倍率
     *   プレイヤーに与えるダメージ値に対するダメージ補正。
     * PVP Damage %: Magic
     *   Damage correction for the damage value given to the player.
     * Default Value  = 1 */
    float atkPlayerDmgCorrectRate_Magic;

    /* 攻撃側 プレイヤー 炎ダメージ補正倍率
     *   プレイヤーに与えるダメージ値に対するダメージ補正。
     * PVP Damage %: Fire
     *   Damage correction for the damage value given to the player.
     * Default Value  = 1 */
    float atkPlayerDmgCorrectRate_Fire;

    /* 攻撃側 プレイヤー 雷ダメージ補正倍率
     *   プレイヤーに与えるダメージ値に対するダメージ補正。
     * PVP Damage %: Lightning
     *   Damage correction for the damage value given to the player.
     * Default Value  = 1 */
    float atkPlayerDmgCorrectRate_Thunder;

    /* 攻撃側 プレイヤー 闇ダメージ補正倍率
     *   プレイヤーに与えるダメージ値に対するダメージ補正。
     * PVP Damage %: Holy
     *   Damage correction for the damage value given to the player.
     * Default Value  = 1 */
    float atkPlayerDmgCorrectRate_Dark;

    /* 攻撃側 敵 物理ダメージ補正倍率
     *   敵に与えるダメージ値に対するダメージ補正。
     * Damage %: Physical
     *   Damage correction for the damage value given to the enemy.
     * Default Value  = 1 */
    float atkEnemyDmgCorrectRate_Physics;

    /* 攻撃側 敵 魔法ダメージ補正倍率
     *   敵に与えるダメージ値に対するダメージ補正。
     * Damage %: Magic
     *   Damage correction for the damage value given to the enemy.
     * Default Value  = 1 */
    float atkEnemyDmgCorrectRate_Magic;

    /* 攻撃側 敵 炎ダメージ補正倍率
     *   敵に与えるダメージ値に対するダメージ補正。
     * Damage %: Fire
     *   Damage correction for the damage value given to the enemy.
     * Default Value  = 1 */
    float atkEnemyDmgCorrectRate_Fire;

    /* 攻撃側 敵 雷ダメージ補正倍率
     *   敵に与えるダメージ値に対するダメージ補正。
     * Damage %: Lightning
     *   Damage correction for the damage value given to the enemy.
     * Default Value  = 1 */
    float atkEnemyDmgCorrectRate_Thunder;

    /* 攻撃側 敵 闇ダメージ補正倍率
     *   敵に与えるダメージ値に対するダメージ補正。
     * Damage %: Holy
     *   Damage correction for the damage value given to the enemy.
     * Default Value  = 1 */
    float atkEnemyDmgCorrectRate_Dark;

    /* 冷気耐性変化倍率
     *   冷気耐性値に設定された倍率をかける
     * Aux Resist %: Frostbite
     *   Multiply the cold resistance value by the set magnification
     * Default Value  = 1 */
    float registFreezeChangeRate;

    /* 発動条件状態変化タイプ1
     *   発動条件状態変化タイプ1
     * Trigger on State Info [1]
     *   Trigger condition state change type 1 */
    uint16_t invocationConditionsStateChange1;

    /* 発動条件状態変化タイプ2
     *   発動条件状態変化タイプ2
     * Trigger on State Info [2]
     *   Trigger condition state change type 2 */
    uint16_t invocationConditionsStateChange2;

    /* 発動条件状態変化タイプ3
     *   発動条件状態変化タイプ3
     * Trigger on State Info [3]
     *   Trigger condition state change type 3 */
    uint16_t invocationConditionsStateChange3;

    /* 聞く方：可聴AI音レベル上書き
     *   どれくらい耳が良いのかを上書きする
     * Listen - AI Sound Level
     *   Overwrite how good your ears are
     * Default Value  = -1 */
    int16_t hearingAiSoundLevel;

    /* カプセルサイズ倍率
     *   キャラカプセルの高さに掛かる倍率
     * Proxy Height Capsule %
     *   Magnification over the height of the character capsule
     * Default Value  = 1 */
    float chrProxyHeightRate;

    /* 索敵度加算補正_見る側
     *   索敵度加算補正_見る側
     * Search Awareness - Addition Correction - Self
     *   Search side addition correction_viewer */
    float addAwarePointCorrectValue_forMe;

    /* 索敵度加算補正_見られる側
     *   索敵度加算補正_見られる側
     * Search Awareness - Addition Correction - Target
     *   Searching degree addition correction _ side to be seen */
    float addAwarePointCorrectValue_forTarget;

    /* 見られる方：視覚加算
     *   見つかりやすさを実数で補正する
     * Vision Search - Enemy Addition
     *   Correct the ease of finding with a real number */
    float sightSearchEnemyAdd;

    /* 見る方：視覚加算
     *   見つけやすさを実数で補正する
     * Vision Search Addition
     *   Correct the ease of finding with a real number */
    float sightSearchAdd;

    /* 聞く方：AI音半径加算
     *   AI音の聞こえ具合を実数で補正する
     * Listen Search Addition
     *   Correct the hearing of AI sounds with real numbers */
    float hearingSearchAdd;

    /* 聞く方：AI音半径倍率
     *   AI音の聞こえ具合を倍率で補正する
     * Listen Search Correction
     *   Correct the audibility of AI sound by magnification
     * Default Value  = 1 */
    float hearingSearchRate;

    /* 聞かせる方：AI音半径加算
     *   発するAI音の大きさを実数で補正する
     * Listen Search - Enemy Addition
     *   Correct the loudness of the emitted AI sound with a real number */
    float hearingSearchEnemyAdd;

    /* 販売価格補正：倍率
     *   販売価格補正：倍率
     * Sale Price Correction %
     *   Sales price correction: Magnification
     * Default Value  = 1 */
    float value_Magnification;

    /* アーツ消費MP倍率
     *   アーツ消費MP倍率[%]
     * Skill FP Consumption %
     *   Arts MP consumption multiplier [%]
     * Default Value  = 1 */
    float artsConsumptionRate;

    /* 魔法消費MP倍率
     *   魔法消費MP倍率[%]
     * Sorcery FP Consumption %
     *   Magic consumption MP multiplier [%]
     * Default Value  = 1 */
    float magicConsumptionRate;

    /* 呪術消費MP倍率
     *   呪術消費MP倍率[%]
     * Pyromancy FP Consumption %
     *   Magic consumption MP multiplier [%]
     * Default Value  = 1 */
    float shamanConsumptionRate;

    /* 奇跡消費MP倍率
     *   奇跡消費MP倍率[%]
     * Incantation FP Consumption %
     *   Miracle consumption MP magnification [%]
     * Default Value  = 1 */
    float miracleConsumptionRate;

    /* エスト瓶HPダメージ量[%]
     *   一度の発動で最大HPの何%分を加算（または減算）するかを設定
     * HP Flask - HP Restore %
     *   Set what percentage of the maximum HP to add (or subtract) with one activation */
    int32_t changeHpEstusFlaskRate;

    /* エスト瓶HPダメージ量[point]
     *   一度の発動で何ポイント加算（または減算）するかを設定
     * HP Flask - HP Restore +
     *   Set how many points to add (or subtract) with one activation */
    int32_t changeHpEstusFlaskPoint;

    /* エスト瓶MPダメージ量[%] 
     *   一度の発動で最大MPの何%分を加算（または減算）するかを設定
     * FP Flask - FP Restore %
     *   Set what percentage of the maximum MP to add (or subtract) with one activation */
    int32_t changeMpEstusFlaskRate;

    /* エスト瓶MPダメージ量[point] 
     *   一度の発動で何ポイント加算（または減算）するかを設定
     * FP Flask - FP Restore +
     *   Set how many points to add (or subtract) with one activation */
    int32_t changeMpEstusFlaskPoint;

    /* エスト瓶HPダメージ倍率 
     *   HPエスト瓶のダメージ量に対して補正をかける
     * HP Flask - HP Restore Correction
     *   Correct the damage amount of the HP Est bottle
     * Default Value  = 1 */
    float changeHpEstusFlaskCorrectRate;

    /* エスト瓶MPダメージ倍率 
     *   MPエスト瓶のダメージ量に対して補正をかける
     * FP Flask - HP Restore Correction
     *   Correct the damage amount of MP Est Bottle
     * Default Value  = 1 */
    float changeMpEstusFlaskCorrectRate;

    /* HPドレイン発動特殊効果
     *   状態変化タイプ「HPドレイン」の特殊効果が有効の時に、敵を倒した際に同じ特殊効果の「HPドレイン発動特殊効果」に設定されている特殊効果IDを呼び出す(0：無視)
     * Kill SpEffect ID
     *   When the special effect of the state change type HP drain is enabled, when the enemy is defeated, the special effect ID set in the HP drain activation special effect of the same special effect is called (0: ignore). */
    int32_t applyIdOnGetSoul;

    /* 寿命延長倍率
     *   状態変化タイプ「寿命延長」の延長係数
     * Extend SpEffect Duration %
     *   Extension coefficient of state change type life extension
     * Default Value  = 1 */
    float extendLifeRate;

    /* 寿命短縮倍率
     *   状態変化タイプ「寿命短縮」の短縮係数
     * Contract SpEffect Duration %
     *   Shortening coefficient of state change type life shortening
     * Default Value  = 1 */
    float contractLifeRate;

    /* 被ダメージ オブジェクト攻撃力倍率
     *   OBJから受けるダメージに対して攻撃力を補正する。（ダメージ補正ではない）
     * Absorption %: Object Damage
     *   Corrects the attack power against the damage received from OBJ. (Not damage compensation)
     * Default Value  = 1 */
    float defObjectAttackPowerRate;

    /* 特殊効果消失時にキャラのペイントデカールを削除するグループID
     *   特殊効果が消失した時（寿命/何かに上書きされる/消される…など）に、同じグループIDの特殊効果がかかっていなければペイントデカールを削除する。
     * Decal Deletion Group ID
     *   When the special effect disappears (lifetime / overwritten / erased ... etc.), the paint decal is deleted if the special effect of the same group ID is not applied.
     * Default Value  = -1 */
    int16_t effectEndDeleteDecalGroupId;

    /* 生命力追加値
     *   成長ステータスに値を加える
     * Vigor
     *   Add value to growth status */
    int8_t addLifeForceStatus;

    /* 精神力追加値
     *   成長ステータスに値を加える
     * Mind
     *   Add value to growth status */
    int8_t addWillpowerStatus;

    /* 持久力追加値
     *   成長ステータスに値を加える
     * Endurance
     *   Add value to growth status */
    int8_t addEndureStatus;

    /* 体力追加値
     *   成長ステータスに値を加える
     * Vitality
     *   Add value to growth status */
    int8_t addVitalityStatus;

    /* 筋力追加値
     *   成長ステータスに値を加える
     * Strength
     *   Add value to growth status */
    int8_t addStrengthStatus;

    /* 技量追加値
     *   成長ステータスに値を加える
     * Dexterity
     *   Add value to growth status */
    int8_t addDexterityStatus;

    /* 理力追加値
     *   成長ステータスに値を加える
     * Intelligence
     *   Add value to growth status */
    int8_t addMagicStatus;

    /* 信仰追加値
     *   成長ステータスに値を加える
     * Faith
     *   Add value to growth status */
    int8_t addFaithStatus;

    /* 運追加値
     *   成長ステータスに値を加える
     * Arcane
     *   Addalue to growth status */
    int8_t addLuckStatus;

    /* 削除条件ダメージ
     *   特殊効果を削除する条件のダメージ理由
     * Delete Criteria Damage
     *   Reason for damage under the condition to remove special effects */
    uint8_t deleteCriteriaDamage;

    /* 対サブカテゴリパラメータ変化3
     *   対サブカテゴリパラメータ変化3
     * Conditional Category [3]
     *   Vs to subcategory parameter change 3 */
    uint8_t magicSubCategoryChange3;

    /* 特殊属性バリエーション値
     *   特殊効果に設定する特殊属性と組み合わせて状態異常SFX,SEなどにバリエーションを持たせるために使用する値です。SEQ16473
     * SpEffect Attribute Variation Value
     *   This value is used to give variation to abnormal state SFX, SE, etc. in combination with the special attribute set for the special effect. SEQ16473 */
    uint8_t spAttributeVariationValue;

    /* はじき攻撃力_上書き
     *   はじき攻撃力を上書きする値を設定
     * Weapon Repel Power +
     *   Set a value that overwrites the repelling attack power */
    uint8_t atkFlickPower;

    /* 濡れる条件の水位設定
     *   TimeAct「どの水位で濡れるか」と組み合わせて特殊効果に掛かるかどうかを判定する
     * Wet Condition Depth
     *   TimeAct Determines whether special effects are applied in combination with at what water level you get wet */
    uint8_t wetConditionDepth;

    /* SA回復速度変化
     *   SA耐久度の回復速度を変化させる
     * Poise Recovery Time %
     *   Change the recovery speed of SA durability
     * Default Value  = 1 */
    float changeSaRecoveryVelocity;

    /* リゲイン倍率
     *   リゲイン倍率
     * HP Regain Correction %
     *   Regain magnification
     * Default Value  = 1 */
    float regainRate;

    /* SA攻撃力倍率
     *   SA攻撃力倍率
     * Poise Damage %
     *   SA attack power multiplier
     * Default Value  = 1 */
    float saAttackPowerRate;

    /* 睡眠耐性攻撃力[point]
     *   ヒットした時に、対象の【睡眠耐性値】に加算する数値
     * Aux Inflict +: Sleep
     *   Numerical value to be added to the target's [Sleep tolerance] when hit */
    int32_t sleepAttackPower;

    /* 発狂耐性攻撃力[point]
     *   ヒットした時に、対象の【発狂耐性値】に加算する数値
     * Aux Inflict +: Madness
     *   A number to be added to the target's [madness resistance value] when it hits */
    int32_t madnessAttackPower;

    /* 睡眠耐性変化倍率
     *   睡眠耐性値に設定された倍率をかける
     * Aux Resist %: Sleep
     *   Multiply the sleep tolerance value by the set magnification
     * Default Value  = 1 */
    float registSleepChangeRate;

    /* 発狂耐性変化倍率
     *   発狂耐性値に設定された倍率をかける
     * Aux Resist %: Madness
     *   Multiply the madness resistance value by the set multiplier
     * Default Value  = 1 */
    float registMadnessChangeRate;

    /* 睡眠耐性変化[point]
     *   状態耐性値を増減させる
     * Aux Resist +: Sleep
     *   Increase or decrease the state resistance value */
    int32_t changeSleepResistPoint;

    /* 発狂耐性変化[point]
     *   状態耐性値を増減させる
     * Aux Resist +: Madness
     *   Increase or decrease the state resistance value */
    int32_t changeMadnessResistPoint;

    /* 睡眠ダメージ補正倍率
     *   状態変化タイプ[睡眠]のPointダメージ、％ダメージの時のみ使用される補正値
     * Damage Correction %: Sleep
     *   Point damage of state change type [Sleep], correction value used only when% damage
     * Default Value  = 100 */
    uint8_t sleepDamageRate;

    /* 対部位パラメータ変化
     *   攻撃がヒットした部位によって効果を制限する。ダメージ計算の防御系の項目のみ制限対象となる
     * Apply Parts Group
     *   The effect is limited by the part where the attack hits. Only defensive items in damage calculation are subject to restriction */
    uint8_t applyPartsGroup;

    /* ターゲットクリア
     *   特殊効果が掛かっている間ターゲットを認識しない（騎乗ターゲット除く
     * Clear Target
     *   Does not recognize the target while the special effect is applied (excluding the riding target) */
    uint8_t clearTarget:1;

    /* 偽ターゲット無効_亜人系
     *   発生した亜人系の偽ターゲットに引っかからなくなる
     * Ignore Fake Target - Human
     *   You will not be caught by the fake target of the subhuman system that occurred */
    uint8_t fakeTargetIgnoreAjin:1;

    /* 偽ターゲット無効_幻影アーツ系
     *   発生した幻影アーツ系の偽ターゲットに引っかからなくなる
     * Ignore Fake Target - Phantom
     *   You will not be caught by the fake target of the phantom arts system that occurred */
    uint8_t fakeTargetIgnoreMirageArts:1;

    /* 侵入_Bリクエスト　判定フラグ
     *   チェックが付いている場合、発動時に侵入_Bリクエストを発行
     * Force Invasion
     *   If checked, issue an intrusion_B request when activated */
    uint8_t requestForceJoinBlackSOS_B:1;

    /* Is Destined Death HP Mult
     *   Makes portion of HP bar in UI black when used with max HP multipliers. */
    uint8_t isDestinedDeathHpMult:1;

    /* Is HP Burn Effect
     *   Determines whether this effect applies Destined Death/Black Flame HP Burn. */
    uint8_t isHpBurnEffect:1;

    /* Unknown 0x352:6 */
    uint8_t unknown_0x352_6:1;

    /* Unknown 0x352:7 */
    uint8_t unknown_0x352_7:1;

    /* Unknown 0x353:0 */
    uint8_t unknown_0x353_0:1;

    /* Unknown 0x353:1 */
    uint8_t unknown_0x353_1:1;

    /* Unknown 0x353:2 */
    uint8_t unknown_0x353_2:1;

    /* Unknown 0x353:3 */
    uint8_t unknown_0x353_3:1;

    /* Unknown 0x353:4 */
    uint8_t unknown_0x353_4:1;

    /* Unknown 0x353:5 */
    char unknown_0x353_5:3;

    /* 最大SA加算値[point]
     *   スーパーアーマー値に加算する値
     * Poise +
     *   Value to add to the super armor value */
    float changeSuperArmorPoint;

    /* SAダメージ量[point]
     *   一度の発動で何ポイント減算（または加算）するかを設定
     * Apply Poise Damage +
     *   Set how many points to subtract (or add) with one activation */
    float changeSaPoint;

    /* 巨大敵持ち上げ高さ上書き[m]
     *   巨大敵持ち上げ高さ上書き[m]
     * Giant Enemy Height Overwrite
     *   Giant enemy lift height overwrite [m] */
    float hugeEnemyPickupHeightOverwrite;

    /* 防御側：毒耐性ダメージ倍率
     *   毒耐性ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
     * Aux Damage Correction %: Poison
     *   Poison resistance damage ratio: Correct the calculated damage by XX times. 1 is normal.
     * Default Value  = 1 */
    float poisonDefDamageRate;

    /* 防御側：疫病耐性ダメージ倍率
     *   疫病耐性ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
     * Aux Damage Correction %: Scarlet Rot
     *   Epidemic resistance damage ratio: Correct the calculated damage by XX times. 1 is normal.
     * Default Value  = 1 */
    float diseaseDefDamageRate;

    /* 防御側：出血耐性ダメージ倍率
     *   出血耐性ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
     * Aux Damage Correction %: Blood Loss
     *   Bleeding resistance damage ratio: Correct the calculated damage by XX times. 1 is normal.
     * Default Value  = 1 */
    float bloodDefDamageRate;

    /* 防御側：呪耐性ダメージ倍率
     *   呪耐性ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
     * Aux Damage Correction %: Death Blight
     *   Curse resistance damage multiplier: Corrects the calculated damage by XX times. 1 is normal.
     * Default Value  = 1 */
    float curseDefDamageRate;

    /* 防御側：冷気耐性ダメージ倍率
     *   冷気耐性ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
     * Aux Damage Correction %: Frostbite
     *   Cold resistance damage ratio: Correct the calculated damage by XX times. 1 is normal.
     * Default Value  = 1 */
    float freezeDefDamageRate;

    /* 防御側：睡眠耐性ダメージ倍率
     *   睡眠耐性ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
     * Aux Damage Correction %: Sleep
     *   Sleep resistance damage ratio: Correct the calculated damage by XX times. 1 is normal.
     * Default Value  = 1 */
    float sleepDefDamageRate;

    /* 防御側：発狂耐性ダメージ倍率
     *   発狂耐性ダメージ倍率：算出したダメージに×○倍で補正をかける。１が通常。
     * Aux Damage Correction %: Madness
     *   Madness resistance damage multiplier: Correct the calculated damage by XX times. 1 is normal.
     * Default Value  = 1 */
    float madnessDefDamageRate;

    /* 何があっても帰宅する距離[m]_上書き
     *   何があっても帰宅する距離[m]_上書き
     * Override - Max Back Home Distance
     *   Distance to go home no matter what [m] _ overwrite */
    uint16_t overwrite_maxBackhomeDist;

    /* 戦闘しつつ帰宅する距離[m]_上書き
     *   戦闘しつつ帰宅する距離[m]_上書き
     * Override - Back Home Distance
     *   Distance to return home while fighting [m] _ Overwrite */
    uint16_t overwrite_backhomeDist;

    /* 巣に帰るのをあきらめて戦闘する距離[m]_上書き
     *   巣に帰るのをあきらめて戦闘する距離[m]_上書き 
     * Override - Back Home Battle Distance
     *   Distance to give up and fight to return to the nest [m] _ overwrite */
    uint16_t overwrite_backhomeBattleDist;

    /* 帰宅時：ターゲットを見ている距離[m]_上書き
     *   帰宅時：ターゲットを見ている距離[m]_上書き
     * Override - Look Target Distance
     *   When returning home: Distance to see the target [m] _ Overwrite */
    uint16_t overwrite_BackHome_LookTargetDist;

    /* アイテム消費MP倍率
     *   アイテム消費MP倍率
     * Item FP Consumption %
     *   Item consumption MP multiplier
     * Default Value  = 1 */
    float goodsConsumptionRate;

    /* pad
     * Guard Stamina Multiplier
     *   Multiplies stamina lost when blocking an attack
     * Default Value  = 1 */
    float guardStaminaMult;

    /* Spirit Summon Death SpEffect ID
     *   Special effect ID added at the end of life of spirit summon (-1 is ignored) */
    int32_t spiritDeathSpEffectId;
};
