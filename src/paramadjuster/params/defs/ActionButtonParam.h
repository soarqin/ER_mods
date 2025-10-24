#pragma once

#include <cstdint>

/* Determines the parameters used for interactable prompts. */
struct ActionButtonParam {
    /* 範囲タイプ
     *   範囲形状(円柱、角柱、カプセル)
     * Region Type
     *   Range shape (cylinder, prism, capsule) */
    uint8_t regionType;

    /* カテゴリ
     *   カテゴリ。名前の左側の数字は複数のアクションボタンが重なっていた場合の優先度(0に近い程優先表示)。
     * Category
     *   category. The number on the left side of the name is the priority when multiple action buttons overlap (the closer it is to 0, the higher the priority is displayed). */
    uint8_t category;

    /* パディング1 */
    char padding1[2];

    /* ダミポリ1
     *   範囲の底面の中心となるダミポリIDを指定する　ダミポリがない場合 or -1が入力されている場合は、中心座標が基準になる
     * Dummy Poly [1]
     *   Specify the dummy polygon ID that is the center of the bottom of the range. If there is no dummy polygon or -1 is entered, the center coordinates will be the reference.
     * Default Value  = -1 */
    int32_t dummyPoly1;

    /* ダミポリ2
     *   範囲タイプがカプセルの場合のみ使用　ダミポリ2つで線分を作る追加ダミポリ(カプセル)
     * Dummy Poly [2]
     *   Used only when the range type is a capsule. Additional dummy polygon (capsule) that creates a line segment with two dummy polygons
     * Default Value  = -1 */
    int32_t dummyPoly2;

    /* 半径
     *   半径(円柱・カプセル)
     * Radius
     *   Radius (cylinder / capsule) */
    float radius;

    /* 角度
     *   角度(円柱)
     * Angle
     *   Angle (cylinder)
     * Default Value  = 180 */
    int32_t angle;

    /* 奥行き
     *   奥行き(角柱)
     * Depth
     *   Depth (prism) */
    float depth;

    /* 幅
     *   幅(角柱)
     * Width
     *   Width (prism) */
    float width;

    /* 高さ
     *   高さ(円柱・角柱)
     * Height
     *   Height (cylinder / prism) */
    float height;

    /* 底面高さオフセット
     *   底面のY座標をどれだけ上下させるか(円柱・角柱)
     * Bottom Height Offset
     *   How much to raise or lower the Y coordinate of the bottom (cylinder / prism) */
    float baseHeightOffset;

    /* 角度差判定タイプ
     *   角度差判定タイプ(円柱・角柱)
     * Angle Difference Check Type
     *   Angle difference judgment type (cylinder / prism) */
    uint8_t angleCheckType;

    /* パディング2 */
    char padding2[3];

    /* 許容角度差
     *   許容角度差(円柱・角柱)
     * Allowable Angle Difference
     *   Allowable angle difference (cylinder / prism)
     * Default Value  = 180 */
    int32_t allowAngle;

    /* アクションスポットダミポリ
     *   アクションスポットの位置となるダミポリIDを指定する ダミポリがない場合 or -1が入力されている場合は、中心座標が基準となる
     * Action Spot Dummy Polygon
     *   If there is no dummy polygon that specifies the dummy polygon ID that will be the position of the action spot, or if -1 is entered, the center coordinates will be the reference.
     * Default Value  = -1 */
    int32_t spotDummyPoly;

    /* テキストボックスタイプ
     *   テキストボックスタイプ
     * Textbox Type
     *   Text box type */
    uint8_t textBoxType;

    /* パディング3 */
    char padding3[2];

    /* パディング5 */
    char padding5:1;

    /* 騎乗時無効か
     *   この項目がYESだと騎乗時にアクションボタンが出なくなり、判定も行われない
     * Is Invalid when Riding
     *   If enabled, this action will not appear whilst in the 'riding' state. */
    uint8_t isInvalidForRide:1;

    /* 騎乗時グレーアウトか
     *   この項目がYESだと騎乗時にアクションボタンがグレーアウトし、判定も行われない
     * Is Grayed Out when Riding
     *   If enabled, this action will be grayed out whilst in the 'riding' state. */
    uint8_t isGrayoutForRide:1;

    /* しゃがみ時無効か
     *   この項目がYESだとしゃがみ時にアクションボタンが出なくなり、判定も行われない
     * Invalid for Crouching
     *   If enabled, this action will not appear whilst in the 'crouching' state. */
    uint8_t isInvalidForCrouching:1;

    /* しゃがみ時グレーアウトか
     *   この項目がYESだとしゃがみ時にアクションボタンがグレーアウトし、判定も行われない
     * Greyout for Crouching
     *   If enabled, this action will be grayed out whilst in the 'crouching' state. */
    uint8_t isGrayoutForCrouching:1;

    /* パディング4 */
    char padding4:3;

    /* テキストID
     *   表示するテキストID
     * Text ID
     *   The FMG Entry ID to display.
     * Default Value  = -1 */
    int32_t textId;

    /* 無効フラグ
     *   このフラグがONだとアクションボタンが出ず、判定も行われない
     * Invalid Event Flag
     *   If the event flag is ON, then this action will not appear. */
    uint32_t invalidFlag;

    /* グレーアウトフラグ
     *   このフラグがONだとアクションボタンがグレーアウトし、判定も行われない
     * Grayout Event Flag
     *   If the event flag is ON, then this action will be grayed out. */
    uint32_t grayoutFlag;

    /* 騎乗時差し替えアクションボタンID
     *   騎乗中はこのアクションボタンIDのパラメータに差し替える（-1：差し替え無し）
     * Override Button ID for Ride
     *   Replace with this action button ID parameter while riding (-1: No replacement)
     * Default Value  = -1 */
    int32_t overrideActionButtonIdForRide;

    /* 実行後無効時間
     *   実行後無効時間(-値で無限)
     * Execution Invalid Time
     *   Invalid time after execution (-infinite by value) */
    float execInvalidTime;

    /* パディング6 */
    char padding6[28];
};
