#pragma once

#include <cstdint>

/* Defines an item, both consumable and key items.
 * Note that many key items are placebo and the item's effect is granted through scripting. Passive effects from ownership are not defined here. */
struct EquipParamGoods {
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

    /* 呼び出しID0(デフォルト)
     *   アイテムから呼び出されるID0(デフォルト)
     * Reference ID
     *   ID0 called from the item (default)
     * Default Value  = -1 */
    int32_t refId_default;

    /* SFXバリエーションID
     *   ＳＦＸのバリエーションを指定（TimeActEditorのＩＤと組み合わせて、ＳＦＸを特定するのに使用する）
     * SFX Variation ID
     *   Specify SFX variation (used to identify SFX in combination with TimeActEditor ID)
     * Default Value  = -1 */
    int32_t sfxVariationId;

    /* 重量[kg]
     *   重量[kg]
     * Weight
     *   Weight [kg]
     * Default Value  = 1 */
    float weight;

    /* 基本価格
     *   基本価格
     * Basic Price
     *   Basic price */
    int32_t basicPrice;

    /* 売却価格
     *   販売価格
     * Sell Value
     *   Selling price */
    int32_t sellValue;

    /* 行動ID
     *   道具を使ったときに発生する効果を設定します
     * Behavior ID
     *   Set the effect that occurs when using a tool */
    int32_t behaviorId;

    /* 差し替えアイテムID
     *   差し替えるときのアイテムID
     * Replace Item ID
     *   Item ID when replacing
     * Default Value  = -1 */
    int32_t replaceItemId;

    /* ソートID
     *   ソートID(-1:集めない)
     * Sort ID
     *   Sort ID (-1 Do not collect) */
    int32_t sortId;

    /* 表示差し替え先アイテムID
     *   条件付きで表示を別の道具IDに差し替える。ゲームデータ側の道具IDは変わらない
     * Appearance Replace Item ID
     *   Conditionally replace the display with another tool ID. The tool ID on the game data side does not change
     * Default Value  = -1 */
    int32_t appearanceReplaceItemId;

    /* YES/NOメッセージID
     *   YesNoダイアログ表示時に使用するメッセージID
     * Dialog Message ID
     *   YesNo Message ID used when displaying the dialog
     * Default Value  = -1 */
    int32_t yesNoDialogMessageId;

    /* 使用可能条件_状態変化タイプ
     *   設定した状態変化タイプの特殊効果が掛かったときだけ、使用許可する
     * Use Enable SpEffect Type
     *   Allow to use only when the special effect of the set state change type is applied */
    uint16_t useEnableSpEffectType;

    /* 壺グループID
     *   壺グループIDに0以上が設定されている「消費アイテム」は同じ壺グループIDの「壺」の個数だけ所持可能
     * Pot Group ID
     *   Consumable items for which 0 or more is set for the pot group ID can be possessed by the number of pots with the same pot group ID.
     * Default Value  = -1 */
    int8_t potGroupId;

    /* PAD
     *   旧(巻物と紐づいた魔法ID) */
    char pad[1];

    /* アイコンID
     *   メニュー用アイコンID
     * Icon ID
     *   Menu icon ID */
    uint16_t iconId;

    /* モデルID
     *   モデルID
     * Model ID
     *   Model ID */
    uint16_t modelId;

    /* ショップレベル
     *   お店で販売できるレベル
     * Shop Level
     *   Level that can be sold at the store */
    int16_t shopLv;

    /* コンプトロフィーSEQ番号
     *   コンプリート系トロフィのSEQ番号
     * Achivement ID
     *   SEQ number of complete trophy
     * Default Value  = -1 */
    int16_t compTrophySedId;

    /* トロフィーSEQ番号
     *   トロフィーのSEQ番号
     * Achivement Sequential ID
     *   Trophy SEQ number
     * Default Value  = -1 */
    int16_t trophySeqId;

    /* 最大所持数
     *   最大所持数
     * Max Amount
     *   Maximum number of possessions */
    int16_t maxNum;

    /* 消費人間性
     *   消費人間性
     * Consume Humanity
     *   Consumer nature */
    uint8_t consumeHeroPoint;

    /* 技量オーバー開始値
     *   技量オーバー開始値
     * Over Dexterity
     *   Skill over start value */
    uint8_t overDexterity;

    /* 道具のタイプ
     *   道具の種類
     * Goods Type
     *   Types of tools */
    uint8_t goodsType;

    /* IDカテゴリ
     *   ↓のIDのカテゴリ[攻撃、飛び道具、特殊]
     * Reference Type
     *    ID category - Attack, Projectile, Special */
    uint8_t refCategory;

    /* 特殊効果カテゴリ
     *   スキルや、魔法、アイテムなどで、パラメータが変動する効果（エンチャントウェポンなど）があるので、│定した効果が、「武器攻撃のみをパワーアップする」といった効果に対応できるように行動ごとに設定するバリスタなど、設定の必要のないものは「なし」を設定する

     * SpEffect Category
     *   Since there are effects (enchantment weapons, etc.) whose parameters fluctuate depending on skills, magic, items, etc., set each action so that the determined effect can correspond to the effect such as power up only weapon attack. Set None for items that do not need to be set, such as varistor. */
    uint8_t spEffectCategory;

    uint8_t unknown_0x40;

    /* 道具使用時アニメ
     *   道具を使ったときに再生するアニメを設定します
     * Goods Use Animation
     *   Set the animation to play when using the tool */
    uint8_t goodsUseAnim;

    /* メニュー開くか
     *   アイテム使用時に開くメニュータイプ
     * Interaction Menu Type
     *   Menu type that opens when using an item */
    uint8_t opmeMenuType;

    /* 使用禁止条件_特殊効果カテゴリ
     *   かかっている特殊効果によって使用可能かを制御する為に指定
     * Use Limit Category
     *   This item is usable if any active spEffect with the following spCategories are active. */
    uint8_t useLimitCategory;

    /* 差し替えカテゴリ
     *   呼び出しIDに加算しる条件カテゴリ
     * Replace Category
     *   Condition category to add to call ID */
    uint8_t replaceCategory;

    /* リザーブ */
    char reserve4[2];

    /* 生存使用可
     *   生存プレイヤー使用可能か
     * Enable Host Player
     *   Is it possible to use a surviving player? */
    uint8_t enable_live:1;

    /* グレイ使用可
     *   グレイゴースト使用可能か
     * Enable as Gray Phantom
     *   Can Gray Ghost be used? */
    uint8_t enable_gray:1;

    /* 白使用可
     *   ホワイトゴースト使用可能か
     * Enable as White Phantom
     *   Can white ghost be used? */
    uint8_t enable_white:1;

    /* 黒使用可
     *   ブラックゴーストしよう可能か
     * Enable as Black Phantom
     *   Is it possible to do a black ghost? */
    uint8_t enable_black:1;

    /* マルチプレイ可
     *   マルチプレイ中に使用可能か？
     * Enable in Multiplayer
     *   Can it be used during multiplayer? */
    uint8_t enable_multi:1;

    /* オフラインで使用不可
     *   オフライン中に使用不可か？
     * Enable Online Only
     *   Is it unavailable while offline? */
    uint8_t disable_offline:1;

    /* 装備可能
     *   装備できるかどうか
     * Is Equippable
     *   Whether it can be equipped */
    uint8_t isEquip:1;

    /* 消耗品か
     *   使用時に消耗するか(所持数が減るか)
     * Is Consumed
     *   Will it be consumed when used (whether the number of possessions will decrease) */
    uint8_t isConsume:1;

    /* 自動装備するか？
     *   拾った時に自動で装備するか？
     * Is Auto Equipped
     *   Will it be equipped automatically when picked up? */
    uint8_t isAutoEquip:1;

    /* 設置型アイテムか？
     *   設置型アイテムか？
     * Is Guidance Item
     *   Is it a stationary item? */
    uint8_t isEstablishment:1;

    /* 1個しか持てないか
     *   1個しか持てないアイテムか
     * Is Unique Item
     *   Is it an item that you can only have one? */
    uint8_t isOnlyOne:1;

    /* 捨てれるか
     *   アイテムを捨てれるか？TRUE=捨てれる
     * Can Discard
     *   Can you throw away the item? TRUE = thrown away */
    uint8_t isDiscard:1;

    /* 預けれるか
     *   倉庫に預けれるか
     * Can Deposit
     *   Can you leave it in the warehouse? */
    uint8_t isDeposit:1;

    /* 右素手に使えないか
     *   右手武器が素手の場合に使用不可か
     * Disable if Right Hand is Empty
     *   Can't be used when the right-handed weapon is bare-handed? */
    uint8_t isDisableHand:1;

    /* 周回時削除するか
     *   周回時削除するか
     * Remove Item on Game Clear
     *   Whether to delete at the time of lap */
    uint8_t isRemoveItem_forGameClear:1;

    /* 補充アイテムか
     *   補充可能アイテムを判別するのに使用します
     * Is Regenerative Item
     *   Used to determine replenishable items */
    uint8_t isSuppleItem:1;

    /* 補充済みアイテムか
     *   補充済みアイテムを判別するのに使用します
     * Is Full Regenerative Item
     *   Used to determine replenished items */
    uint8_t isFullSuppleItem:1;

    /* エンチャントするか？
     *   武器にエンチャントするか？
     * Is Enhancement Item
     *   Do you want to enchant your weapon? */
    uint8_t isEnhance:1;

    /* 修理アイテムか
     *   修理するアイテムか？
     * Can Repair Item
     *   Is it an item to repair? */
    uint8_t isFixItem:1;

    /* マルチドロップ共有禁止か
     *   マルチドロップ共有禁止か
     * Disable Dropping in Multiplayer
     *   Is multi-drop sharing prohibited? */
    uint8_t disableMultiDropShare:1;

    /* 闘技場で使用禁止か
     *   闘技場で使用禁止か
     * Disable Usage in Multiplayer Arena
     *   Is it prohibited to use in the arena? */
    uint8_t disableUseAtColiseum:1;

    /* 闘技場以外で使用禁止か
     *   闘技場以外で使用禁止か
     * Disable Usage outside of Multiplayer Arena
     *   Is it prohibited to use outside the arena? */
    uint8_t disableUseAtOutOfColiseum:1;

    /* 早いキャンセル可能か
     *   早いキャンセル可能か
     * Can Cancel Application Early
     *   Is it possible to cancel early? */
    uint8_t isEnableFastUseItem:1;

    /* 特殊効果を反映するか
     *   （能力値補正など）特殊効果を反映するか
     * Apply SpEffect Modifiers
     *   Whether to reflect special effects (such as ability value correction) */
    uint8_t isApplySpecialEffect:1;

    /* 個数増減を同期させるID
     *   アイテムの個数が変更された際に、同じIDを設定したアイテムも一緒に変更を行います。 0：同期しない
     * Synchronized Item Usage ID
     *   When the number of items is changed, the items with the same ID will be changed at the same time. 0 Not synchronized */
    uint8_t syncNumVaryId;

    /* 呼び出しID1
     *   アイテムから呼び出されるID1
     * Reference ID - Left Hand
     *   ID1 called from the item
     * Default Value  = -1 */
    int32_t refId_1;

    /* 参照仮想武器ID
     *   道具使用時に参照する武器ID
     * Weapon Reference ID
     *   Weapon ID to refer to when using the tool
     * Default Value  = -1 */
    int32_t refVirtualWepId;

    /* ベイグラント時アイテム抽選ID_マップ用
     *   -1：ベイグラントなし 0：抽選なし 1～：抽選あり
     * Vagrant Item Lot ID
     *   -1 No vagrant 0 No lottery 1  With lottery */
    int32_t vagrantItemLotId;

    /* ベイグラントボーナス敵ドロップアイテム抽選ID_マップ用
     *   -1：ドロップなし 0：抽選なし 1～：抽選あり
     * Vagrant Enemy Item Lot ID
     *   -1 No drop 0 No lottery 1  With lottery */
    int32_t vagrantBonusEneDropItemLotId;

    /* ベイグラントアイテム敵ドロップアイテム抽選ID_マップ用
     *   -1：ドロップなし 0：抽選なし 1～：抽選あり
     * Vagrant Bonus Item Lot ID
     *   -1 No drop 0 No lottery 1  With lottery */
    int32_t vagrantItemEneDropItemLotId;

    /* 手持ちSFXID
     *   アイテムを使用しようとし、効果が発動するまでのSFXID
     * Usage VFX - Cast
     *   SFXID until the effect is activated when you try to use the item
     * Default Value  = -1 */
    int32_t castSfxId;

    /* 発動SFXID
     *   アイテムが発動したときのSFXID
     * Usage VFX  - Activate
     *   SFX ID when the item is activated
     * Default Value  = -1 */
    int32_t fireSfxId;

    /* 効果SFXID
     *   アイテムが発動後、効果中のSFXID
     * Usage VFX - Effect
     *   After the item is activated, the SFX ID in effect
     * Default Value  = -1 */
    int32_t effectSfxId;

    /* 大ルーン発動中使用可
     *   大ルーン発動状態で使用可能か
     * Usable with Great Rune Active
     *   Can it be used with a large rune activated? */
    uint8_t enable_ActiveBigRune:1;

    /* 篝火ワープアイテムか
     *   TRUEの時に状態変化タイプの「ワープ禁止」がかかっていればそのアイテムを使用不可にする機能を外す
     * Is Bonfire Warp Item
     *   If the state change type Warp Prohibition is applied when TRUE, remove the function to disable the item. */
    uint8_t isBonfireWarpItem:1;

    /* はしご中使用可能か
     *   はしご中に使用可能なアイテムはここにチェックを入れます
     * Enable on Ladder
     *   Check here for items available in the ladder */
    uint8_t enable_Ladder:1;

    /* マルチプレイ準備中可
     *   セッション確率～初期同期の間でアイテムを使用できるかどうか
     * Usable before Multiplayer Session
     *   Whether items can be used between session probability and initial synchronization */
    uint8_t isUseMultiPlayPreparation:1;

    /* まとめて使えるか
     *   まとめて使えるか
     * Usable in Multiplayer
     *   Can it be used together? */
    uint8_t canMultiUse:1;

    /* 盾エンチャントか
     *   盾エンチャントか
     * Is Shield Enchantment
     *   Is it a shield enchantment? */
    uint8_t isShieldEnchant:1;

    /* ワープ禁止対象か
     *   これがTRUEの時に、状態変化タイプの「ワープ禁止」がかかっていればそのアイテムを使用不可にする 
     * Is Warp Prohibited
     *   When this is TRUE, disable the item if the state change type Warp Prohibition is applied. */
    uint8_t isWarpProhibited:1;

    /* 切断ペナルティが発生しているときのみ使用可能
     *   クライアント切断ペナルティが発生しているときのみ使用可能なアイテムかどうかを判断できるようにするためのフラグ
     * Usable if Disconnect Penalty is Active
     *   A flag that allows you to determine if an item is only available when a client disconnect penalty is incurred. */
    uint8_t isUseMultiPenaltyOnly:1;

    /* 補充タイプ
     *   補充アイテム/補充済みアイテムを補充する際の補充タイプ。
     * Regenerative Item Type
     *   Replenishment item / Replenishment type when replenishing a replenished item. */
    uint8_t suppleType;

    /* 自動補充タイプ
     *   自動補充する/しないの可否およびデフォルト設定をコントロールします
     * Auto Replenishment Type
     *   Controls whether or not to automatically replenish and default settings */
    uint8_t autoReplenishType;

    /* その場に置けるか
     *   アイテムをその場に置けるか？TRUE=置ける
     * Can be Dropped
     *   Can I put the item on the spot? TRUE = can be placed */
    uint8_t isDrop:1;

    /* 取得ログ表示条件
     *   アイテム取得時にアイテム取得ログに表示するか（未入力: ○）
     * Item Acquisition Log Condition Type
     *   Whether to display in the item acquisition log when acquiring the item (not entered )
     * Default Value  = 1 */
    uint8_t showLogCondType:1;

    /* 馬呼びアイテムか
     *   馬を召喚するアイテムか？馬が死亡、PCが馬禁止エリアに居る場合は使用不可
     * Is Horse Summon
     *   Is it an item that summons a horse? Cannot be used if the horse died or the PC is in a horse-prohibited area */
    uint8_t isSummonHorse:1;

    /* 取得ダイアログ表示条件
     *   アイテム取得時にアイテム取得ダイアログに表示するか（未入力: newのみ）
     * Item Acquisition Dialog Condition Type
     *   Whether to display it in the item acquisition dialog when acquiring an item (not entered new only)
     * Default Value  = 2 */
    uint8_t showDialogCondType:2;

    /* ネムリ収集アイテムか
     *   ネムリ収集アイテムか
     * Is Sleep Collection Item
     *   Is it a Nemuri collection item? */
    uint8_t isSleepCollectionItem:1;

    /* 騎乗中使用可能か
     *   騎乗中使用可能か
     * Enabled while Riding
     *   Can it be used while riding? */
    uint8_t enableRiding:1;

    /* 非騎乗中使用禁止か
     *   非騎乗中使用禁止か
     * Disabled while Riding
     *   Is it prohibited to use while not riding? */
    uint8_t disableRiding:1;

    /* 倉庫所持数
     *   倉庫所持数
     * Max Number Stored in Itembox
     *   Number of warehouses */
    int16_t maxRepositoryNum;

    /* ソートアイテム種別ID
     *   ソートアイテム種別ID。ソート「アイテム種別順」にて、同じIDは同じグループとしてまとめて表示されます
     * Sort Group ID
     *   Sort item type ID. In the sort Item type order, the same ID is displayed together as the same group.
     * Default Value  = 255 */
    uint8_t sortGroupId;

    /* 攻撃禁止区域で使用できるか
     *   攻撃禁止区域で使用できるか
     * Enabled in No Attack Region
     *   Can it be used in an attack-prohibited area?
     * Default Value  = 1 */
    uint8_t isUseNoAttackRegion:1;

    uint8_t unknown_0x73_1:1;

    /* Replenish after quick match
     *   Should amount of this item be stored and replenished after quick match? */
    uint8_t quickMatchReplenish:1;

    /* pad
     *   （旧ログ用アイコン） */
    char pad1:5;

    /* 販売価格
     *   販売価格
     * Sale Value
     *   Selling price
     * Default Value  = -1 */
    int32_t saleValue;

    /* レア度
     *   アイテム取得ログで使うレア度
     * Rarity
     *   Rarity used in item acquisition logs */
    uint8_t rarity;

    /* バディアイテムか
     *   バディアイテム用のアイテム使用制限がかかるかどうか
     * Use Limit Category (Spirit Summon)
     *   This item is usable if any active spEffect with the following spCategories are active. */
    uint8_t useLimitSummonBuddy;

    /* 使用禁止条件_状態変化タイプ
     *   かかっている特殊効果の状態変化タイプによって使用可能かを制御する為に指定
     * Use Limit - SpEffect Type
     *   Specified to control whether it can be used depending on the state change type of the special effect applied */
    uint16_t useLimitSpEffectType;

    /* AI使用判断ID
     *   AI使用判断ID
     * AI Usage Judgment ID
     *   AI usage judgment ID
     * Default Value  = -1 */
    int32_t aiUseJudgeId;

    /* 消費MP
     *   消費MP
     * FP Cost
     *   MP consumption */
    int16_t consumeMP;

    /* 消費HP
     *   消費HP
     * HP Cost
     *   HP consumed
     * Default Value  = -1 */
    int16_t consumeHP;

    /* 強化先道具ID
     *   強化先道具ID
     * Reinforcement Goods ID
     *   Strengthening tool ID
     * Default Value  = -1 */
    int32_t reinforceGoodsId;

    /* 強化時素材ID
     *   強化時素材ID
     * Reinforcement Material ID
     *   Material ID at the time of strengthening
     * Default Value  = -1 */
    int32_t reinforceMaterialId;

    /* 強化価格
     *   強化価格
     * Reinforcement Cost
     *   Enhanced price */
    int32_t reinforcePrice;

    /* 誓約0使用レベル
     *   誓約0使用レベル
     * Use Level - Vow Level [0]
     *   Pledge 0 usage level */
    int8_t useLevel_vowType0;

    /* 誓約1使用レベル
     *   誓約1使用レベル
     * Use Level - Vow Level [1]
     *   Pledge 1 usage level */
    int8_t useLevel_vowType1;

    /* 誓約2使用レベル
     *   誓約2使用レベル
     * Use Level - Vow Level [2]
     *   Pledge 2 usage level */
    int8_t useLevel_vowType2;

    /* 誓約3使用レベル
     *   誓約3使用レベル
     * Use Level - Vow Level [3]
     *   Pledge 3 usage level */
    int8_t useLevel_vowType3;

    /* 誓約4使用レベル
     *   誓約4使用レベル
     * Use Level - Vow Level [4]
     *   Pledge 4 usage level */
    int8_t useLevel_vowType4;

    /* 誓約5使用レベル
     *   誓約5使用レベル
     * Use Level - Vow Level [5]
     *   Pledge 5 usage level */
    int8_t useLevel_vowType5;

    /* 誓約6使用レベル
     *   誓約6使用レベル
     * Use Level - Vow Level [6]
     *   Pledge 6 usage level */
    int8_t useLevel_vowType6;

    /* 誓約7使用レベル
     *   誓約7使用レベル
     * Use Level - Vow Level [7]
     *   Pledge 7 usage level */
    int8_t useLevel_vowType7;

    /* 誓約8使用レベル
     *   誓約8使用レベル
     * Use Level - Vow Level [8]
     *   Pledge 8 usage level */
    int8_t useLevel_vowType8;

    /* 誓約9使用レベル
     *   誓約9使用レベル
     * Use Level - Vow Level [9]
     *   Pledge 9 usage level */
    int8_t useLevel_vowType9;

    /* 誓約10使用レベル
     *   誓約10使用レベル
     * Use Level - Vow Level [10]
     *   Pledge 10 usage level */
    int8_t useLevel_vowType10;

    /* 誓約11使用レベル
     *   誓約11使用レベル
     * Use Level - Vow Level [11]
     *   Pledge 11 usage level */
    int8_t useLevel_vowType11;

    /* 誓約12使用レベル
     *   誓約12使用レベル
     * Use Level - Vow Level [12]
     *   Pledge 12 usage level */
    int8_t useLevel_vowType12;

    /* 誓約13使用レベル
     *   誓約13使用レベル
     * Use Level - Vow Level [13]
     *   Pledge 13 usage level */
    int8_t useLevel_vowType13;

    /* 誓約14使用レベル
     *   誓約14使用レベル
     * Use Level - Vow Level [14]
     *   Pledge 14 usage level */
    int8_t useLevel_vowType14;

    /* 誓約15使用レベル
     *   誓約15使用レベル
     * Use Level - Vow Level [15]
     *   Pledge 15 usage level */
    int8_t useLevel_vowType15;

    /* 使用適正レベル
     *   使用適正レベル
     * Use Level
     *   Appropriate level of use */
    uint16_t useLevel;

    /* 予約領域
     *   予約領域 */
    char reserve5[2];

    /* アイテム入手チュートリアル判定フラグID
     *   初めてアイテム入手した時のチュートリアル用のイベントフラグID。アイテム入手時にフラグON。
     * Item Get Tutorial Flag ID
     *   Event flag ID for the tutorial when you first get the item. Flag ON when item is obtained. */
    uint32_t itemGetTutorialFlagId;

    /* 予約領域
     *   予約領域 */
    char reserve3[8];
};
