#pragma once

#include <cstdint>

/* Defines all types of equippable Armor, including no armor. Responsible for model masks. */
struct EquipParamProtector {
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

    /* ソートID
     *   ソートID(プログラム内で強化レベルを加味しているので s32 では７桁が限界)
     * Sort ID
     *   Sort ID (7 digits is the limit for s32 because the enhancement level is added in the program) */
    int32_t sortId {};

    /* 徘徊装備ID
     *   徘徊ゴースト用の差し替え装備ID.
     * Wandering Equip ID
     *   Replacement equipment ID for wandering ghosts. */
    uint32_t wanderingEquipId {};

    /* 睡眠耐性
     *   睡眠状態異常へのかかりにくさ
     * Resist - Sleep
     *   Difficulty in getting sleep abnormalities */
    uint16_t resistSleep {};

    /* 発狂耐性
     *   発狂状態異常へのかかりにくさ
     * Resist - Madness
     *   Difficulty in getting mad */
    uint16_t resistMadness {};

    /* SA耐久値
     *   スーパーアーマー耐久力
     * Poise Durability
     *   Super armor endurance */
    float saDurability {};

    /* 強靭度 補正倍率
     *   強靭度の基本値を補正する倍率です
     * Toughness Correction
     *   It is a magnification that corrects the basic value of toughness. */
    float toughnessCorrectRate {};

    /* 修理価格
     *   修理基本価格
     * Repair Price
     *   Basic repair price */
    int32_t fixPrice {};

    /* 基本価格
     *   基本価格
     * Basic Price
     *   Basic price */
    int32_t basicPrice {};

    /* 売却価格
     *   販売価格
     * Sell Value
     *   Selling price */
    int32_t sellValue {};

    /* 重量[kg]
     *   重量[kg].
     * Weight
     *   Weight [kg].
     * Default Value  = 1 */
    float weight = 1;

    /* 常駐特殊効果ID1
     *   常駐特殊効果ID1
     * Resident SpEffect ID [1]
     *   Resident special effect ID1 */
    int32_t residentSpEffectId {};

    /* 常駐特殊効果ID2
     *   常駐特殊効果ID2
     * Resident SpEffect ID [2]
     *   Resident special effect ID2 */
    int32_t residentSpEffectId2 {};

    /* 常駐特殊効果ID3
     *   常駐特殊効果ID3
     * Resident SpEffect ID [3]
     *   Resident special effect ID3 */
    int32_t residentSpEffectId3 {};

    /* 素材ID
     *   武器強化に必要な素材パラメータID
     * Upgrade Material ID
     *   Material parameter ID required for weapon enhancement
     * Default Value  = -1 */
    int32_t materialSetId = -1;

    /* 部位ダメージ率
     *   部位ダメージ率
     * Weak Parts Damage %
     *   Part damage rate
     * Default Value  = 1 */
    float partsDamageRate = 1;

    /* SA回復時間補正値
     *   スーパーアーマー回復時間の補正値
     * Poise Recovery Correction
     *   Super Armor Recovery Time Correction Value */
    float corectSARecover {};

    /* 派生元
     *   この防具の強化元防具ID
     * Origin Armor +0
     *   Strengthening of this armor Original armor ID
     * Default Value  = -1 */
    int32_t originEquipPro = -1;

    /* 派生元 強化+1
     *   この防具の強化元防具ID1
     * Origin Armor +1
     *   Strengthening this armor Original armor ID1
     * Default Value  = -1 */
    int32_t originEquipPro1 = -1;

    /* 派生元 強化+2
     *   この防具の強化元防具ID2
     * Origin Armor +2
     *   Strengthening this armor Original armor ID2
     * Default Value  = -1 */
    int32_t originEquipPro2 = -1;

    /* 派生元 強化+3
     *   この防具の強化元防具ID3
     * Origin Armor +3
     *   Strengthening this armor Original armor ID3
     * Default Value  = -1 */
    int32_t originEquipPro3 = -1;

    /* 派生元 強化+4
     *   この防具の強化元防具ID4
     * Origin Armor +4
     *   Strengthening this armor Original armor ID4
     * Default Value  = -1 */
    int32_t originEquipPro4 = -1;

    /* 派生元 強化+5
     *   この防具の強化元防具ID5
     * Origin Armor +5
     *   Strengthening this armor Original armor ID5
     * Default Value  = -1 */
    int32_t originEquipPro5 = -1;

    /* 派生元 強化+6
     *   この防具の強化元防具ID6
     * Origin Armor +6
     *   Strengthening this armor Original armor ID6
     * Default Value  = -1 */
    int32_t originEquipPro6 = -1;

    /* 派生元 強化+7
     *   この防具の強化元防具ID7
     * Origin Armor +7
     *   Strengthening this armor Original armor ID7
     * Default Value  = -1 */
    int32_t originEquipPro7 = -1;

    /* 派生元 強化+8
     *   この防具の強化元防具ID8
     * Origin Armor +8
     *   Strengthening this armor Original armor ID8
     * Default Value  = -1 */
    int32_t originEquipPro8 = -1;

    /* 派生元 強化+9
     *   この防具の強化元防具ID9
     * Origin Armor +9
     *   Strengthening this armor Original armor ID9
     * Default Value  = -1 */
    int32_t originEquipPro9 = -1;

    /* 派生元 強化+10
     *   この防具の強化元防具ID10
     * Origin Armor +10
     *   Strengthening this armor Original armor ID10
     * Default Value  = -1 */
    int32_t originEquipPro10 = -1;

    /* 派生元 強化+11
     *   この防具の強化元防具ID11
     * Origin Armor +11
     *   Strengthening this armor Original armor ID11
     * Default Value  = -1 */
    int32_t originEquipPro11 = -1;

    /* 派生元 強化+12
     *   この防具の強化元防具ID12
     * Origin Armor +12
     *   Strengthening this armor Original armor ID12
     * Default Value  = -1 */
    int32_t originEquipPro12 = -1;

    /* 派生元 強化+13
     *   この防具の強化元防具ID13
     * Origin Armor +13
     *   Strengthening this armor Original armor ID13
     * Default Value  = -1 */
    int32_t originEquipPro13 = -1;

    /* 派生元 強化+14
     *   この防具の強化元防具ID14
     * Origin Armor +14
     *   Strengthening this armor Original armor ID14
     * Default Value  = -1 */
    int32_t originEquipPro14 = -1;

    /* 派生元 強化+15
     *   この防具の強化元防具ID15
     * Origin Armor +15
     *   Strengthening this armor Original armor ID15
     * Default Value  = -1 */
    int32_t originEquipPro15 = -1;

    /* 男横顔拡大スケール
     * Facescale - Male - Scale X
     * Default Value  = 1 */
    float faceScaleM_ScaleX = 1;

    /* 男前顔拡大スケール
     * Facescale - Male - Scale Z
     * Default Value  = 1 */
    float faceScaleM_ScaleZ = 1;

    /* 男横顔拡大最大倍率
     * Facescale - Male - Max X
     * Default Value  = 1 */
    float faceScaleM_MaxX = 1;

    /* 男前顔拡大最大倍率
     * Facescale - Male - Max Z
     * Default Value  = 1 */
    float faceScaleM_MaxZ = 1;

    /* 女横顔拡大スケール
     * Facescale - Female - Scale X
     * Default Value  = 1 */
    float faceScaleF_ScaleX = 1;

    /* 女前顔拡大スケール
     * Facescale - Female - Scale Z
     * Default Value  = 1 */
    float faceScaleF_ScaleZ = 1;

    /* 女横顔拡大最大倍率
     * Facescale - Female - Max X
     * Default Value  = 1 */
    float faceScaleF_MaxX = 1;

    /* 女前顔拡大最大倍率
     * Facescale - Female - Max Z
     * Default Value  = 1 */
    float faceScaleF_MaxZ = 1;

    /* QWCID
     *   QWCのパラメタID
     * QWC ID
     *   QWC parameter ID
     * Default Value  = -1 */
    int32_t qwcId = -1;

    /* 装備モデル番号
     *   装備モデルの番号.
     * Equip Model ID
     *   Equipment model number. */
    uint16_t equipModelId {};

    /* 男用アイコンID
     *   男用メニューアイコンID.
     * Icon ID - Male
     *   Men's menu icon ID. */
    uint16_t iconIdM {};

    /* 女用アイコンID
     *   女用メニューアイコンID.
     * Icon ID - Female
     *   Women's menu icon ID. */
    uint16_t iconIdF {};

    /* ノックバックカット率
     *   ノックバックの減少値.
     * Knockback
     *   Knockback reduction value. */
    uint16_t knockBack {};

    /* ノックバック反発率
     *   ノックバックの反発率.
     * Knockback Bounce Rate
     *   Knockback repulsion rate. */
    uint16_t knockbackBounceRate {};

    /* 耐久度
     *   初期耐久度.
     * Durability
     *   Initial durability.
     * Default Value  = 100 */
    uint16_t durability = 100;

    /* 耐久度最大値
     *   新品耐久度.
     * Max Durability
     *   New durability.
     * Default Value  = 100 */
    uint16_t durabilityMax = 100;

    /* pad */
    char pad03[2] {};

    /* はじき防御力
     *   敵の攻撃のはじき返し判定に利用.
     * Weapon Repel Power
     *   Used to determine the repulsion of enemy attacks. */
    uint16_t defFlickPower {};

    /* 物理防御力
     *   物理攻撃のダメージ防御.
     * Defence - Physical
     *   Physical attack damage protection.
     * Default Value  = 100 */
    uint16_t defensePhysics = 100;

    /* 魔法防御力
     *   魔法攻撃のダメージ防御.
     * Defence - Magic
     *   Magic attack damage protection.
     * Default Value  = 100 */
    uint16_t defenseMagic = 100;

    /* 炎防御力
     *   炎攻撃のダメージ防御.
     * Defence - Fire
     *   Fire attack damage protection.
     * Default Value  = 100 */
    uint16_t defenseFire = 100;

    /* 電撃防御力
     *   電撃攻撃のダメージ防御.
     * Defence - Lightning
     *   Damage protection for electric shock attacks.
     * Default Value  = 100 */
    uint16_t defenseThunder = 100;

    /* 斬撃防御力
     *   攻撃タイプを見て、斬撃属性のときは、防御力を減少させる
     * Defence - Slash
     *   Look at the attack type, and if it is a slashing attribute, reduce the defense power */
    int16_t defenseSlash {};

    /* 打撃防御力
     *   攻撃属性を見て、打撃属性のときは、防御力を減少させる.
     * Defence - Strike
     *   Look at the attack attribute, and if it is a hit attribute, reduce the defense power. */
    int16_t defenseBlow {};

    /* 刺突防御力
     *   攻撃属性を見て、打撃属性のときは、防御力を減少させる.
     * Defence - Thrust
     *   Look at the attack attribute, and if it is a hit attribute, reduce the defense power. */
    int16_t defenseThrust {};

    /* 毒耐性
     *   毒状態異常へのかかりにくさ
     * Resist - Poison
     *   Difficulty in getting poisonous
     * Default Value  = 100 */
    uint16_t resistPoison = 100;

    /* 疫病耐性
     *   疫病状態異常へのかかりにくさ
     * Resist - Scarlet Rot
     *   Difficulty in getting sick
     * Default Value  = 100 */
    uint16_t resistDisease = 100;

    /* 出血耐性
     *   出血状態異常へのかかりにくさ
     * Resist - Blood Loss
     *   Difficulty in getting bleeding abnormalities
     * Default Value  = 100 */
    uint16_t resistBlood = 100;

    /* 呪耐性
     *   呪い状態異常へのかかりにくさ
     * Resist - Death Blight
     *   Difficulty in getting a curse condition
     * Default Value  = 100 */
    uint16_t resistCurse = 100;

    /* 強化タイプID
     *   強化タイプID
     * Reinforce Type ID
     *   Enhanced type ID */
    int16_t reinforceTypeId {};

    /* トロフィー
     *   トロフィーシステムに関係あるか？
     * Achievement ID
     *   Is it related to the trophy system?
     * Default Value  = -1 */
    int16_t trophySGradeId = -1;

    /* ショップレベル
     *   お店で販売できるレベル
     * Shop Level
     *   Level that can be sold at the store */
    int16_t shopLv {};

    /* ノックバックパラメータID
     *   ノックバックで使用するパラメータのID
     * Knockback Param ID
     *   ID of the parameter used for knockback */
    uint8_t knockbackParamId {};

    /* はじき時ダメージ減衰率[%]
     *   はじき時のダメージ減衰率に使用
     * Weapon Repel Damage %
     *   Used for damage attenuation rate when repelling */
    uint8_t flickDamageCutRate {};

    /* 装備モデル種別
     *   装備モデルの種別.
     * Equip Model Category
     *   Equipment model type.
     * Default Value  = 1 */
    uint8_t equipModelCategory = 1;

    /* 装備モデル性別
     *   装備モデルの性別.
     * Equip Model Gender
     *   Gender of equipment model. */
    uint8_t equipModelGender {};

    /* 防具カテゴリ
     *   防具のカテゴリ.
     * Armor Category
     *   Armor category. */
    uint8_t protectorCategory {};

    /* レア度
     *   アイテム取得ログで使うレア度
     * Rarity
     *   Rarity used in item acquisition logs */
    uint8_t rarity {};

    /* ソートアイテム種別ID
     *   ソートアイテム種別ID。ソート「アイテム種別順」にて、同じIDは同じグループとしてまとめて表示されます
     * Sort Group ID
     *   Sort item type ID. In the sort Item type order, the same ID is displayed together as the same group.
     * Default Value  = 255 */
    uint8_t sortGroupId = 255;

    /* 部位ダメージ適用攻撃
     *   部位ダメージ判定を行う攻撃タイプを設定
     * Parts Damage Type
     *   Set the attack type to judge the part damage */
    uint8_t partsDmgType {};

    /* パディング */
    char pad04[2] {};

    /* 預けれるか
     *   倉庫に預けれるか
     * Can Deposit
     *   Can you leave it in the warehouse? */
    uint8_t isDeposit:1 {};

    /* 頭装備
     *   頭装備か.
     * Is Head Equipment
     *   Is it head equipment? */
    uint8_t headEquip:1 {};

    /* 胴装備
     *   胴装備か.
     * Is Body Equipment
     *   Is it torso equipment? */
    uint8_t bodyEquip:1 {};

    /* 腕装備
     *   腕装備か.
     * Is Arm Equipment
     *   Is it arm equipment? */
    uint8_t armEquip:1 {};

    /* 脚装備
     *   脚装備か.
     * Is Leg Equipment
     *   Is it leg equipment? */
    uint8_t legEquip:1 {};

    /* 顔スケールを使用するか
     *   顔スケールを使用するか
     * Use Facescale
     *   Whether to use a face scale */
    uint8_t useFaceScale:1 {};

    /* 弱点アニメをスキップするか
     *   弱点ダメージアニメ再生をスキップするかどうか。アニメを再生しないだけで「部位ダメージ率」「防御材質」は弱点として扱われます。
     * Skip Weak Damage Anim
     *   Weakness damage Whether to skip animation playback. Part damage rate and defense material are treated as weak points just by not playing the animation. */
    uint8_t isSkipWeakDamageAnim:1 {};

    /* パディング */
    char pad06:1 {};

    /* 弱点防御材質バリエーション値
     *   弱点防御材質と組み合わせて状態異常、ダメージSFX,SEのバリエーション分けに使用する値です。SEQ16473
     * Defence Material - Variation Value - Weak
     *   It is a value used for variation of abnormal condition, damage SFX, SE in combination with weak point defense material. SEQ16473 */
    uint8_t defenseMaterialVariationValue_Weak {};

    /* フットデカール識別子2
     *   自動フットエフェクトのデカールID。床材質も考慮される。防具カテゴリ」が「脚」のときのみ利用される。
     * Auto Foot Effect Decal Base ID [2]
     *   Decal ID for automatic foot effects. Floor material is also considered. Only used when the armor category is legs.
     * Default Value  = -1 */
    int16_t autoFootEffectDecalBaseId2 = -1;

    /* フットデカール識別子3
     *   自動フットエフェクトのデカールID。床材質も考慮される。防具カテゴリ」が「脚」のときのみ利用される。
     * Auto Foot Effect Decal Base ID [3]
     *   Decal ID for automatic foot effects. Floor material is also considered. Only used when the armor category is legs.
     * Default Value  = -1 */
    int16_t autoFootEffectDecalBaseId3 = -1;

    /* 防御材質バリエーション値
     *   防御材質と組み合わせて状態異常、ダメージSFX,SEのバリエーション分けに使用する値です。SEQ16473
     * Defence Material - Variation Value
     *   It is a value used in combination with the defense material to classify abnormal conditions, damage SFX, and SE. SEQ16473 */
    uint8_t defenseMaterialVariationValue {};

    /* 捨てれるか
     *   アイテムを捨てれるか？TRUE=捨てれる
     * Can Discard
     *   Can you throw away the item? TRUE = thrown away */
    uint8_t isDiscard:1 {};

    /* その場に置けるか
     *   アイテムをその場に置けるか？TRUE=置ける
     * Can Drop
     *   Can I put the item on the spot? TRUE = can be placed */
    uint8_t isDrop:1 {};

    /* マルチドロップ共有禁止か
     *   マルチドロップ共有禁止か
     * Cannot Drop in Multiplayer
     *   Is multi-drop sharing prohibited? */
    uint8_t disableMultiDropShare:1 {};

    /* DLC用シンプルモデルありか
     *   ＤＬＣ用シンプルモデルが存在しているか
     * Simple Model for DLC1
     *   Is there a simple model for DLC? */
    uint8_t simpleModelForDlc:1 {};

    /* 取得ログ表示条件
     *   アイテム取得時にアイテム取得ログに表示するか（未入力: ○）
     * Item Acquisition Log Condition Type
     *   Whether to display in the item acquisition log when acquiring the item (not entered: )
     * Default Value  = 1 */
    uint8_t showLogCondType:1 = 1;

    /* 取得ダイアログ表示条件
     *   アイテム取得時にアイテム取得ダイアログに表示するか（未入力: newのみ）
     * Item Acquisition Dialog Condition Type 
     *   Whether to display it in the item acquisition dialog when acquiring an item (not entered: new only)
     * Default Value  = 2 */
    uint8_t showDialogCondType:2 = 2;

    /* パディング */
    char pad:1 {};

    /* 無属性ダメージ倍率
     *   無属性ダメージ倍率
     * Absorption - Physical
     *   Non-attribute damage multiplier
     * Default Value  = 1 */
    float neutralDamageCutRate = 1;

    /* 斬撃ダメージ倍率
     *   斬撃ダメージ倍率
     * Absorption - Slash
     *   Slash damage multiplier
     * Default Value  = 1 */
    float slashDamageCutRate = 1;

    /* 打撃ダメージ倍率
     *   打撃ダメージ倍率
     * Absorption - Strike
     *   Batter damage multiplier
     * Default Value  = 1 */
    float blowDamageCutRate = 1;

    /* 刺突ダメージ倍率
     *   刺突ダメージ倍率
     * Absorption - Thrust
     *   Puncture damage ratio
     * Default Value  = 1 */
    float thrustDamageCutRate = 1;

    /* 魔法ダメージ倍率
     *   魔法ダメージ倍率
     * Absorption - Magic
     *   Magic damage multiplier
     * Default Value  = 1 */
    float magicDamageCutRate = 1;

    /* 火炎ダメージ倍率
     *   火炎ダメージ倍率
     * Absorption - Fire
     *   Flame damage multiplier
     * Default Value  = 1 */
    float fireDamageCutRate = 1;

    /* 電撃ダメージ倍率
     *   電撃ダメージ倍率
     * Absorption - Lightning
     *   Electric shock damage ratio
     * Default Value  = 1 */
    float thunderDamageCutRate = 1;

    /* 防御材質1【SFX】
     *   移動/防御時のSFX用.1
     * Defence Material SFX [1]
     *   For SFX when moving / defending. 1
     * Default Value  = 50 */
    uint16_t defenseMaterialSfx1 = 50;

    /* 弱点防御材質1【SFX】
     *   弱点部位ダメージ時のSFX用1
     * Defence Material SFX - Weakness [1]
     *   For SFX when weak points are damaged 1
     * Default Value  = 50 */
    uint16_t defenseMaterialSfx_Weak1 = 50;

    /* 防御材質1【SE】
     *   移動/防御時のSE用.1
     * Defence Material - SE [1]
     *   For SE when moving / defending. 1
     * Default Value  = 50 */
    uint16_t defenseMaterial1 = 50;

    /* 弱点防御材質1【SE】
     *   弱点部位ダメージ時のSE用1
     * Defence Material SE - Weakness [1]
     *   For SE when weak points are damaged 1
     * Default Value  = 50 */
    uint16_t defenseMaterial_Weak1 = 50;

    /* 防御材質2【SFX】
     *   移動/防御時のSFX用.2
     * Defence Material SFX [2]
     *   For SFX when moving / defending. 2
     * Default Value  = 50 */
    uint16_t defenseMaterialSfx2 = 50;

    /* 弱点防御材質2【SFX】
     *   弱点部位ダメージ時のSFX用2
     * Defence Material SFX - Weakness [2]
     *   2 for SFX when weak points are damaged
     * Default Value  = 50 */
    uint16_t defenseMaterialSfx_Weak2 = 50;

    /* 足装備材質【SE】
     *   足装備SE用材質。足装備のみ参照される。(【GR】SEQ10061) 「139:なし」の場合は防御材質1【SE】が参照される
     * Foot Material SE
     *   Material for foot equipment SE. Only foot equipment is referenced. ([GR] SEQ10061) In the case of 139: None, the defense material 1 [SE] is referred to.
     * Default Value  = 139 */
    uint16_t footMaterialSe = 139;

    /* 弱点防御材質2【SE】
     *   弱点部位ダメージ時のSE用2
     * Defence Material SE - Weakness [2]
     *   2 for SE when weak points are damaged
     * Default Value  = 50 */
    uint16_t defenseMaterial_Weak2 = 50;

    /* フットデカール識別子1
     *   自動フットエフェクトのデカールID。床材質も考慮される。防具カテゴリ」が「脚」のときのみ利用される。
     * Auto Foot Effect Decal Base ID [1]
     *   Decal ID for automatic foot effects. Floor material is also considered. Only used when the armor category is legs.
     * Default Value  = -1 */
    int32_t autoFootEffectDecalBaseId1 = -1;

    /* 強靭度 被ダメージ倍率
     *   強靭度版カット率
     * Toughness Absorption
     *   Toughness version cut rate
     * Default Value  = 1 */
    float toughnessDamageCutRate = 1;

    /* 強靭度 回復時間補正値
     *   強靭度の回復時間用の補正値
     * Toughness Recovery Correction
     *   Correction value for toughness recovery time */
    float toughnessRecoverCorrection {};

    /* 闇ダメージ倍率
     *   闇ダメージ倍率
     * Absorption - Holy
     *   Dark damage multiplier
     * Default Value  = 1 */
    float darkDamageCutRate = 1;

    /* 闇防御力
     *   闇攻撃のダメージ防御.
     * Defence - Holy
     *   Dark attack damage protection.
     * Default Value  = 100 */
    uint16_t defenseDark = 100;

    /* PAD_元_#48#非表示
     *   元_#48#非表示 */
    char invisibleFlag48:1 {};

    /* PAD_元_#49#非表示
     *   元_#49#非表示 */
    char invisibleFlag49:1 {};

    /* PAD_元_#50#非表示
     *   元_#50#非表示 */
    char invisibleFlag50:1 {};

    /* PAD_元_#51#非表示
     *   元_#51#非表示 */
    char invisibleFlag51:1 {};

    /* PAD_元_#52#非表示
     *   元_#52#非表示 */
    char invisibleFlag52:1 {};

    /* PAD_元_#53#非表示
     *   元_#53#非表示 */
    char invisibleFlag53:1 {};

    /* PAD_元_#54#非表示
     *   元_#54#非表示 */
    char invisibleFlag54:1 {};

    /* PAD_元_#55#非表示
     *   元_#55#非表示 */
    char invisibleFlag55:1 {};

    /* PAD_元_#56#非表示
     *   元_#56#非表示 */
    char invisibleFlag56:1 {};

    /* PAD_元_#57#非表示
     *   元_#57#非表示 */
    char invisibleFlag57:1 {};

    /* PAD_元_#58#非表示
     *   元_#58#非表示 */
    char invisibleFlag58:1 {};

    /* PAD_元_#59#非表示
     *   元_#59#非表示 */
    char invisibleFlag59:1 {};

    /* PAD_元_#60#非表示
     *   元_#60#非表示 */
    char invisibleFlag60:1 {};

    /* PAD_元_#61#非表示
     *   元_#61#非表示 */
    char invisibleFlag61:1 {};

    /* PAD_元_#62#非表示
     *   元_#62#非表示 */
    char invisibleFlag62:1 {};

    /* PAD_元_#63#非表示
     *   元_#63#非表示 */
    char invisibleFlag63:1 {};

    /* PAD_元_#64#非表示
     *   元_#64#非表示 */
    char invisibleFlag64:1 {};

    /* PAD_元_#65#非表示
     *   元_#65#非表示 */
    char invisibleFlag65:1 {};

    /* PAD_元_#66#非表示
     *   元_#66#非表示 */
    char invisibleFlag66:1 {};

    /* PAD_元_#67#非表示
     *   元_#67#非表示 */
    char invisibleFlag67:1 {};

    /* PAD_元_#68#非表示
     *   元_#68#非表示 */
    char invisibleFlag68:1 {};

    /* PAD_元_#69#非表示
     *   元_#69#非表示 */
    char invisibleFlag69:1 {};

    /* PAD_元_#70#非表示
     *   元_#70#非表示 */
    char invisibleFlag70:1 {};

    /* PAD_元_#71#非表示
     *   元_#71#非表示 */
    char invisibleFlag71:1 {};

    /* PAD_元_#72#非表示
     *   元_#72#非表示 */
    char invisibleFlag72:1 {};

    /* PAD_元_#73#非表示
     *   元_#73#非表示 */
    char invisibleFlag73:1 {};

    /* PAD_元_#74#非表示
     *   元_#74#非表示 */
    char invisibleFlag74:1 {};

    /* PAD_元_#75#非表示
     *   元_#75#非表示 */
    char invisibleFlag75:1 {};

    /* PAD_元_#76#非表示
     *   元_#76#非表示 */
    char invisibleFlag76:1 {};

    /* PAD_元_#77#非表示
     *   元_#77#非表示 */
    char invisibleFlag77:1 {};

    /* PAD_元_#78#非表示
     *   元_#78#非表示 */
    char invisibleFlag78:1 {};

    /* PAD_元_#79#非表示
     *   元_#79#非表示 */
    char invisibleFlag79:1 {};

    /* PAD_元_#80#非表示
     *   元_#80#非表示 */
    char invisibleFlag80:1 {};

    /* パディング */
    char padbit:7 {};

    /* 姿勢制御ID(胴)
     *   姿勢制御ID(胴)
     * Posture Control ID
     *   Attitude control ID (torso) */
    uint8_t postureControlId {};

    /* pad */
    char pad2[4] {};

    /* 販売価格
     *   販売価格
     * Shop Price
     *   Selling price
     * Default Value  = -1 */
    int32_t saleValue = -1;

    /* 冷気耐性
     *   冷気状態異常へのかかりにくさ
     * Resist - Frost
     *   Difficulty in getting cold air condition abnormal */
    uint16_t resistFreeze {};

    /* #00#非表示(男女指定)
     *   前髪の先
     * Mask 00 - Upper face */
    uint8_t invisibleFlag_SexVer00 {};

    /* #01#非表示(男女指定)
     *   前髪の根元
     * Mask 01 - Chin */
    uint8_t invisibleFlag_SexVer01 {};

    /* #02#非表示(男女指定)
     *   もみあげ
     * Mask 02 - Nose and cheeks */
    uint8_t invisibleFlag_SexVer02 {};

    /* #03#非表示(男女指定)
     *   頭頂部
     * Mask 03 - Ears and top of head */
    uint8_t invisibleFlag_SexVer03 {};

    /* #04#非表示(男女指定)
     *   頭頂部
     * Mask 04 - Neck */
    uint8_t invisibleFlag_SexVer04 {};

    /* #05#非表示(男女指定)
     *   後ろ髪
     * Mask 05 - Lower neck */
    uint8_t invisibleFlag_SexVer05 {};

    /* #06#非表示(男女指定)
     *   後ろ髪の先
     * Mask 06 - Chest */
    uint8_t invisibleFlag_SexVer06 {};

    /* #07#非表示(男女指定)
     * Mask 07 - Upper elbows */
    uint8_t invisibleFlag_SexVer07 {};

    /* #08#非表示(男女指定)
     * Mask 08 - Shoulders */
    uint8_t invisibleFlag_SexVer08 {};

    /* #09#非表示(男女指定)
     * Mask 09 - Lower elbows */
    uint8_t invisibleFlag_SexVer09 {};

    /* #10#非表示(男女指定)
     *   襟
     * Mask 10 - Lower arms */
    uint8_t invisibleFlag_SexVer10 {};

    /* #11#非表示(男女指定)
     *   襟回り
     * Mask 11 - Right hand */
    uint8_t invisibleFlag_SexVer11 {};

    /* #12#非表示(男女指定)
     * Mask 12 - Waist */
    uint8_t invisibleFlag_SexVer12 {};

    /* #13#非表示(男女指定)
     * Mask 13 - Left hand */
    uint8_t invisibleFlag_SexVer13 {};

    /* #14#非表示(男女指定)
     * Mask 14 - Knees */
    uint8_t invisibleFlag_SexVer14 {};

    /* #15#非表示(男女指定)
     *   頭巾の裾
     * Mask 15 - Lower legs */
    uint8_t invisibleFlag_SexVer15 {};

    /* #16#非表示(男女指定)
     * Mask 16 - Feet */
    uint8_t invisibleFlag_SexVer16 {};

    /* #17#非表示(男女指定)
     * Mask 17 - Eyepatch */
    uint8_t invisibleFlag_SexVer17 {};

    /* #18#非表示(男女指定)
     * Mask 18 - Unknown
     *   Set on most gauntlets */
    uint8_t invisibleFlag_SexVer18 {};

    /* #19#非表示(男女指定)
     * Mask 19 - Unknown
     *   Set on most chests and legs */
    uint8_t invisibleFlag_SexVer19 {};

    /* #20#非表示(男女指定)
     *   袖A
     * Mask 20 - [ARMS] Long Gloves (Lower Arm) */
    uint8_t invisibleFlag_SexVer20 {};

    /* #21#非表示(男女指定)
     *   袖B
     * Mask 21 - [ARMS] Long Gloves (Full Length) */
    uint8_t invisibleFlag_SexVer21 {};

    /* #22#非表示(男女指定)
     * Mask 22 - Unknown
     *   Set on bare chest */
    uint8_t invisibleFlag_SexVer22 {};

    /* #23#非表示(男女指定)
     * Mask 23 - [BODY] Scarf / High Collar (Compressed) */
    uint8_t invisibleFlag_SexVer23 {};

    /* #24#非表示(男女指定)
     * Mask 24 - [BODY] Sleeves (Bunched to Elbow) */
    uint8_t invisibleFlag_SexVer24 {};

    /* #25#非表示(男女指定)
     *   腕
     * Mask 25 - [BODY] Sleeves (Bunched Midway) */
    uint8_t invisibleFlag_SexVer25 {};

    /* #26#非表示(男女指定)
     * Mask 26 - [BODY] Sleeves (Full) */
    uint8_t invisibleFlag_SexVer26 {};

    /* #27#非表示(男女指定)
     * Mask 27 - [BODY] Large Sleeves (Bunched to Elbow) */
    uint8_t invisibleFlag_SexVer27 {};

    /* #28#非表示(男女指定)
     * Mask 28 - [BODY] Large Sleeves (Full) */
    uint8_t invisibleFlag_SexVer28 {};

    /* #29#非表示(男女指定)
     * Mask 29 - [BODY] Sleeves (Wrist Bracelets) */
    uint8_t invisibleFlag_SexVer29 {};

    /* #30#非表示(男女指定)
     *   ベルト
     * Mask 30 - [BODY] Couter / Elbow Armor
     *   belt */
    uint8_t invisibleFlag_SexVer30 {};

    /* #31#非表示(男女指定)
     * Mask 31 - [BODY] Couter / Elbow Armor (Higher Up) */
    uint8_t invisibleFlag_SexVer31 {};

    /* #32#非表示(男女指定)
     * Mask 32 - [BODY] Small Collar */
    uint8_t invisibleFlag_SexVer32 {};

    /* #33#非表示(男女指定)
     * Mask 33 - [BODY] Small Collar (Compressed) */
    uint8_t invisibleFlag_SexVer33 {};

    /* #34#非表示(男女指定)
     * Mask 34 - [BODY] Scarf / High Collar (Full) */
    uint8_t invisibleFlag_SexVer34 {};

    /* #35#非表示(男女指定)
     * Mask 35 - [BODY] Lower Abdomen Cover */
    uint8_t invisibleFlag_SexVer35 {};

    /* #36#非表示(男女指定)
     * Mask 36 - [BODY] Small Hood (Down) */
    uint8_t invisibleFlag_SexVer36 {};

    /* #37#非表示(男女指定)
     * Mask 37 - [BODY] Small Hood (Up) */
    uint8_t invisibleFlag_SexVer37 {};

    /* #38#非表示(男女指定)
     * Mask 38 - [BODY] Left Pauldron / Shoulder */
    uint8_t invisibleFlag_SexVer38 {};

    /* #39#非表示(男女指定)
     * Mask 39 - [BODY] Right Pauldron / Shoulder */
    uint8_t invisibleFlag_SexVer39 {};

    /* #40#非表示(男女指定)
     * Mask 40 - [BODY] Cowl */
    uint8_t invisibleFlag_SexVer40 {};

    /* #41#非表示(男女指定)
     * Mask 41 - [BODY] Cowl (Long) */
    uint8_t invisibleFlag_SexVer41 {};

    /* #42#非表示(男女指定)
     * Mask 42 - [BODY] Cowl (Mid) */
    uint8_t invisibleFlag_SexVer42 {};

    /* #43#非表示(男女指定)
     * Mask 43 - [BODY] Cowl (Compressed) */
    uint8_t invisibleFlag_SexVer43 {};

    /* #44#非表示(男女指定)
     * Mask 44 - [HEAD] Gorget / Neckpiece */
    uint8_t invisibleFlag_SexVer44 {};

    /* #45#非表示(男女指定)
     * Mask 45 - [HEAD] Gorget / Neckpiece (Compressed) */
    uint8_t invisibleFlag_SexVer45 {};

    /* #46#非表示(男女指定)
     * Mask 46 - [HEAD] Long Hood / Plume (Low) */
    uint8_t invisibleFlag_SexVer46 {};

    /* #47#非表示(男女指定)
     * Mask 47 - [HEAD] Long Hood / Plume (Mid) */
    uint8_t invisibleFlag_SexVer47 {};

    /* #48#非表示(男女指定)
     * Mask 48 - [HEAD] Long Hood / Plume (High) */
    uint8_t invisibleFlag_SexVer48 {};

    /* #49#非表示(男女指定)
     * Mask 49 - [HEAD] Long Hood / Plume (Short) */
    uint8_t invisibleFlag_SexVer49 {};

    /* #50#非表示(男女指定)
     * Mask 50 - [LEGS] High Waistbelt */
    uint8_t invisibleFlag_SexVer50 {};

    /* #51#非表示(男女指定)
     * Mask 51 - [LEGS] Leggings */
    uint8_t invisibleFlag_SexVer51 {};

    /* #52#非表示(男女指定)
     * Mask 52 - [LEGS] Leggings (Compressed) */
    uint8_t invisibleFlag_SexVer52 {};

    /* #53#非表示(男女指定)
     * Mask 53 - [LEGS] Kneepads */
    uint8_t invisibleFlag_SexVer53 {};

    /* #54#非表示(男女指定)
     * Mask 54 - [LEGS] Kneepads (Compressed) */
    uint8_t invisibleFlag_SexVer54 {};

    /* #55#非表示(男女指定)
     * Mask 55 - [LEGS] Waistbelt */
    uint8_t invisibleFlag_SexVer55 {};

    /* #56#非表示(男女指定)
     * Mask 56 - [LEGS] Waistbelt (Compressed) */
    uint8_t invisibleFlag_SexVer56 {};

    /* #57#非表示(男女指定)
     * Mask 57 - [LEGS] Waistcloth */
    uint8_t invisibleFlag_SexVer57 {};

    /* #58#非表示(男女指定)
     * Mask 58 - [LEGS] Wiastcloth (Compressed) */
    uint8_t invisibleFlag_SexVer58 {};

    /* #59#非表示(男女指定)
     * Mask 59 - [LEGS] Pants Big Thighs */
    uint8_t invisibleFlag_SexVer59 {};

    /* #60#非表示(男女指定)
     * Mask 60 - Hair (Front) */
    uint8_t invisibleFlag_SexVer60 {};

    /* #61#非表示(男女指定)
     * Mask 61 - Hair (Forehead) */
    uint8_t invisibleFlag_SexVer61 {};

    /* #62#非表示(男女指定)
     * Mask 62 - Hair (Under Helmet) */
    uint8_t invisibleFlag_SexVer62 {};

    /* #63#非表示(男女指定)
     * Mask 63 - Hair (Over Headband) */
    uint8_t invisibleFlag_SexVer63 {};

    /* #64#非表示(男女指定)
     * Mask 64 - Hair (Full) */
    uint8_t invisibleFlag_SexVer64 {};

    /* #65#非表示(男女指定)
     * Mask 65 - Hair (Back of Head) */
    uint8_t invisibleFlag_SexVer65 {};

    /* #66#非表示(男女指定)
     * Mask 66 - Long Hair Braid / Tail (Low) */
    uint8_t invisibleFlag_SexVer66 {};

    /* #67#非表示(男女指定)
     * Mask 67 - Long Hair Braid / Tail (High) */
    uint8_t invisibleFlag_SexVer67 {};

    /* #68#非表示(男女指定)
     * Mask 68 - Long Hair Braid / Tail (Highest) */
    uint8_t invisibleFlag_SexVer68 {};

    /* #69#非表示(男女指定)
     * Mask 69 - Long Hair Braid / Tail (Lowest, Shortest) */
    uint8_t invisibleFlag_SexVer69 {};

    /* #70#非表示(男女指定)
     * Mask 70 - [HEAD] Gorget / Neckpiece (Large) */
    uint8_t invisibleFlag_SexVer70 {};

    /* #71#非表示(男女指定)
     * Mask 71 - [BODY] Long Shirt (Bunched up to Belt) */
    uint8_t invisibleFlag_SexVer71 {};

    /* #72#非表示(男女指定)
     * Mask 72 - [BODY] Long Shirt (Full Length over Waist) */
    uint8_t invisibleFlag_SexVer72 {};

    /* #73#非表示(男女指定)
     * Mask 73 - Bare Torso and Upper Arms */
    uint8_t invisibleFlag_SexVer73 {};

    /* #74#非表示(男女指定)
     * Mask 74 - [BODY] Gravekeeper Cloak Hood (Down) */
    uint8_t invisibleFlag_SexVer74 {};

    /* #75#非表示(男女指定)
     * Mask 75 - [BODY] Gravekeeper Cloak Hood (Up) */
    uint8_t invisibleFlag_SexVer75 {};

    /* #76#非表示(男女指定)
     * Mask 76 - Lower Neck Warp */
    uint8_t invisibleFlag_SexVer76 {};

    /* #77#非表示(男女指定)
     * Mask 77 - Unknown */
    uint8_t invisibleFlag_SexVer77 {};

    /* #78#非表示(男女指定)
     * Mask 78 - Beard Jaw */
    uint8_t invisibleFlag_SexVer78 {};

    /* #79#非表示(男女指定)
     * Mask 79 - Beard Chin */
    uint8_t invisibleFlag_SexVer79 {};

    /* #80#非表示(男女指定)
     * Mask 80 - Beard Stubble */
    uint8_t invisibleFlag_SexVer80 {};

    /* #81#非表示(男女指定)
     * Mask 81 - Unknown
     *   Used by chest armors */
    uint8_t invisibleFlag_SexVer81 {};

    /* #82#非表示(男女指定)
     * Mask 82 - Unknown
     *   Used by chest armors */
    uint8_t invisibleFlag_SexVer82 {};

    /* #83#非表示(男女指定)
     * Mask 83 - Unknown
     *   Used by chest armors */
    uint8_t invisibleFlag_SexVer83 {};

    /* #84#非表示(男女指定)
     * Mask 84 - Unknown
     *   Used by chest armors */
    uint8_t invisibleFlag_SexVer84 {};

    /* #85#非表示(男女指定)
     * Mask 85 - Unknown
     *   Used by chest armors */
    uint8_t invisibleFlag_SexVer85 {};

    /* #86#非表示(男女指定)
     * Mask 86 - Unknown
     *   Used by chest armors */
    uint8_t invisibleFlag_SexVer86 {};

    /* #87#非表示(男女指定)
     * Mask 87 - Unknown
     *   Used by chest armors */
    uint8_t invisibleFlag_SexVer87 {};

    /* #88#非表示(男女指定)
     * Mask 88 - Unknown
     *   Used by chest armors */
    uint8_t invisibleFlag_SexVer88 {};

    /* #89#非表示(男女指定)
     * Mask 89 - Unknown
     *   Used by chest armors */
    uint8_t invisibleFlag_SexVer89 {};

    /* #90#非表示(男女指定)
     * Mask 90 - Unknown
     *   Used by chest armors */
    uint8_t invisibleFlag_SexVer90 {};

    /* #91#非表示(男女指定)
     * Mask 91 - Unknown
     *   Used by chest armors */
    uint8_t invisibleFlag_SexVer91 {};

    /* #92#非表示(男女指定)
     * Mask 92 - Unknown
     *   Used by chest armors */
    uint8_t invisibleFlag_SexVer92 {};

    /* #93#非表示(男女指定)
     * Mask 93 - Unknown
     *   Used by chest armors */
    uint8_t invisibleFlag_SexVer93 {};

    /* #94#非表示(男女指定)
     * Mask 94 - Unknown
     *   Used by chest armors */
    uint8_t invisibleFlag_SexVer94 {};

    /* #95#非表示(男女指定)
     * Mask 95 - Unknown */
    uint8_t invisibleFlag_SexVer95 {};

    /* パディング
     *   パディング */
    char pad404[14] {};
};
