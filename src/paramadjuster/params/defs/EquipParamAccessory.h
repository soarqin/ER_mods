#pragma once

#include <cstdint>

/* Defines Talismans. */
struct EquipParamAccessory {
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

    /* 呼び出しID
     *   装飾品から呼び出すID
     * Reference ID
     *   ID called from decorations
     * Default Value  = -1 */
    int32_t refId;

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

    /* 行動ID
     *   行動ID(=Skill)
     * Behavior ID
     *   Action ID (= Skill) */
    int32_t behaviorId;

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

    /* sortID
     * Sort ID */
    int32_t sortId;

    /* QWCID
     * QWC ID
     * Default Value  = -1 */
    int32_t qwcId;

    /* 装備モデル番号
     *   装備モデルの番号
     * Equip Model ID
     *   Equipment model number */
    uint16_t equipModelId;

    /* アイコンID
     *   メニューアイコンID
     * Icon ID
     *   Menu icon ID */
    uint16_t iconId;

    /* ショップレベル
     *   お店で販売できるレベル
     * Shop Level
     *   Level that can be sold at the store */
    int16_t shopLv;

    /* トロフィー
     * Achievement Grade ID
     * Default Value  = -1 */
    int16_t trophySGradeId;

    /* トロフィーSEQ番号
     *   トロフィーのSEQ番号
     * Achievement Sequential ID
     *   Trophy SEQ number
     * Default Value  = -1 */
    int16_t trophySeqId;

    /* 装備モデル種別
     *   装備モデルの種別
     * Equip Model Category
     *   Equipment model type */
    uint8_t equipModelCategory;

    /* 装備モデル性別
     *   装備モデルの性別
     * Equip Model Gender
     *   Gender of equipment model */
    uint8_t equipModelGender;

    /* 装飾カテゴリ
     *   防具のカテゴリ
     * Accessory Type
     *   Armor category */
    uint8_t accessoryCategory;

    /* IDカテゴリ
     *   ↓のIDのカテゴリ[攻撃、飛び道具、特殊]
     * Reference Type
     *    ID category [Attack, Projectile, Special] */
    uint8_t refCategory;

    /* 特殊効果カテゴリ
     *   スキルや、魔法、アイテムなどで、パラメータが変動する効果（エンチャントウェポンなど）があるので、│定した効果が、「武器攻撃のみをパワーアップする」といった効果に対応できるように行動ごとに設定するバリスタなど、設定の必要のないものは「なし」を設定する

     * SpEffect Category
     *   Since there are effects (enchantment weapons, etc.) whose parameters fluctuate depending on skills, magic, items, etc., set each action so that the determined effect can correspond to the effect such as power up only weapon attack. Set None for items that do not need to be set, such as varistor. */
    uint8_t spEffectCategory;

    /* ソートアイテム種別ID
     *   ソートアイテム種別ID。ソート「アイテム種別順」にて、同じIDは同じグループとしてまとめて表示されます
     * Sort Group ID
     *   Sort item type ID. In the sort Item type order, the same ID is displayed together as the same group.
     * Default Value  = 255 */
    uint8_t sortGroupId;

    /* ベイグラント時アイテム抽選ID_マップ用
     *   -1：ベイグラントなし 0：抽選なし 1～：抽選あり
     * Vagrant Item Lot ID
     *   -1: No vagrant 0: No lottery 1 ~: With lottery */
    int32_t vagrantItemLotId;

    /* ベイグラントボーナス敵ドロップアイテム抽選ID_マップ用
     *   -1：ドロップなし 0：抽選なし 1～：抽選あり
     * Vagrant Bonus Item Lot ID
     *   -1: No drop 0: No lottery 1 ~: With lottery */
    int32_t vagrantBonusEneDropItemLotId;

    /* ベイグラントアイテム敵ドロップアイテム抽選ID_マップ用
     *   -1：ドロップなし 0：抽選なし 1～：抽選あり
     * Vagrant Enemy Item Lot ID
     *   -1: No drop 0: No lottery 1 ~: With lottery */
    int32_t vagrantItemEneDropItemLotId;

    /* 預けれるか
     *   倉庫へ預けれるか
     * Is Depositable
     *   Can you deposit it in the warehouse? */
    uint8_t isDeposit:1;

    /* 外すと壊れるか
     *   装備して外す時に壊れるか
     * Is Destroyed on Unequip
     *   Will it break when equipped and removed? */
    uint8_t isEquipOutBrake:1;

    /* マルチドロップ共有禁止か
     *   マルチドロップ共有禁止か
     * Is Dropping Disabled in Multiplayer
     *   Is multi-drop sharing prohibited? */
    uint8_t disableMultiDropShare:1;

    /* 捨てれるか
     *   アイテムを捨てれるか？TRUE=捨てれる
     * Is Discardable
     *   Can you throw away the item? TRUE = thrown away */
    uint8_t isDiscard:1;

    /* その場に置けるか
     *   アイテムをその場に置けるか？TRUE=置ける
     * Is Droppable
     *   Can I put the item on the spot? TRUE = can be placed */
    uint8_t isDrop:1;

    /* 取得ログ表示条件
     *   アイテム取得時にアイテム取得ログに表示するか（未入力: ○）
     * Item Acquisition Log Condition Type
     *   Whether to display in the item acquisition log when acquiring the item (not entered: )
     * Default Value  = 1 */
    uint8_t showLogCondType:1;

    /* 取得ダイアログ表示条件
     *   アイテム取得時にアイテム取得ダイアログに表示するか（未入力: newのみ）
     * Item Acquisition Dialog Condition Type
     *   Whether to display it in the item acquisition dialog when acquiring an item (not entered: new only)
     * Default Value  = 2 */
    uint8_t showDialogCondType:2;

    /* レア度
     *   アイテム取得ログで使うレア度
     * Rarity
     *   Rarity used in item acquisition logs */
    uint8_t rarity;

    /* pad
     *   （旧ログ用アイコンID） */
    char pad2[2];

    /* 販売価格
     *   販売価格
     * Sale Price
     *   Selling price
     * Default Value  = -1 */
    int32_t saleValue;

    /* 装着グループID
     *   同じグループの物は同時装備不可能
     * Accessory Group
     *   Items of the same group cannot be equipped at the same time
     * Default Value  = -1 */
    int16_t accessoryGroup;

    /* pad
     *   pad */
    char pad3[1];

    /* コンプトロフィーSEQ番号
     *   コンプリート系トロフィのSEQ番号
     * Number of Completed Achievement ID
     *   SEQ number of complete trophy
     * Default Value  = -1 */
    int8_t compTrophySedId;

    /* 常駐特殊効果ID1
     *   常駐特殊効果ID1
     * SpEffect ID [1]
     *   Resident special effect ID1 */
    int32_t residentSpEffectId1;

    /* 常駐特殊効果ID2
     *   常駐特殊効果ID2
     * SpEffect ID [2]
     *   Resident special effect ID2 */
    int32_t residentSpEffectId2;

    /* 常駐特殊効果ID3
     *   常駐特殊効果ID3
     * SpEffect ID [3]
     *   Resident special effect ID3 */
    int32_t residentSpEffectId3;

    /* 常駐特殊効果ID4
     *   常駐特殊効果ID4
     * SpEffect ID [4]
     *   Resident special effect ID4 */
    int32_t residentSpEffectId4;

    /* pad
     *   pad */
    char pad1[4];
};
