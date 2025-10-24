#pragma once

#include <cstdint>

struct ObjActParam {
    /* アクション有効時のMsgID
     *   アクションが有効時に表示するメニューのMsgIDです。
     * Action Enabled - Message ID
     *   The MsgID of the menu displayed when the action is enabled.
     * Default Value  = -1 */
    int32_t actionEnableMsgId;

    /* アクション失敗時のMsgID
     *   アクションが失敗時に表示するメニューのMsgIDです。
     * Action Failed - Message ID
     *   The MsgID of the menu to display when the action fails.
     * Default Value  = -1 */
    int32_t actionFailedMsgId;

    /* 特殊条件パス用イベントフラグ
     *   特殊条件を無条件パスするためのイベントフラグ.
     * Unconditional Qualified Event Flag ID
     *   Event flags for unconditionally passing special conditions. */
    uint32_t spQualifiedPassEventFlag;

    /* プレイヤのアニメID0
     *   プレイヤーキャラのアクション時のアニメIDです。
     * Player Animation ID
     *   This is the animation ID for the action of the player character. */
    uint32_t playerAnimId;

    /* キャラのアニメID0
     *   敵などのアクション時のアニメID
     * Character Animation ID
     *   Anime ID at the time of action such as enemy */
    uint32_t chrAnimId;

    /* アクションの有効距離[cm]
     *   アクションの有効距離です。
     * Valid Distance
     *   The effective distance of the action.
     * Default Value  = 150 */
    uint16_t validDist;

    /* 特殊条件のID
     *   特殊条件のID
     * (DEPRECATED) Conditional Qualified ID [1]
     *   Special condition ID */
    uint16_t spQualifiedId_old;

    /* 特殊条件のID 2
     *   特殊条件のIDその2
     * (DEPRECATED) Conditional Qualified ID [2]
     *   Special condition ID part 2 */
    uint16_t spQualifiedId2_old;

    /* オブジェのダミポリID0
     *   オブジェクトのアクション位置となるダミポリIDです
     * Object Dummy Poly ID
     *   Damipoli ID that is the action position of the object */
    uint8_t objDummyId;

    /* イベントキックを同期させるか
     *   ObjAct実行判定で使用されるイベントを同期させるか。基本×に設定する。アクターが重要ではない場合のみ○に設定しても良い。
     * Is Event Execution Synchronized
     *   ObjAct Whether to synchronize the events used in the execution judgment. Set to basic . It may be set to  only when the actor is not important. */
    uint8_t isEventKickSync;

    /* オブジェのアニメID0
     *   オブジェクトのアクション時のアニメＩＤです。
     * Object Animation ID
     *   This is the animation ID for the action of the object. */
    uint32_t objAnimId;

    /* プレイヤのアクション有効角度
     *   プレイヤのアクションの有効角度です。プレイヤの向きベクトルとオブジェへの方向ベクトルの有効角度差
     * Valid Player Angle
     *   The effective angle of the player's action. Effective angle difference between the player's orientation vector and the orientation vector to the object
     * Default Value  = 30 */
    uint8_t validPlayerAngle;

    /* 特殊条件のタイプ
     *   特殊条件の種類
     * Qualified ID Type [1]
     *   Types of special conditions */
    uint8_t spQualifiedType;

    /* 特殊条件のタイプ2
     *   特殊条件の種類2
     * Qualified ID Type [2]
     *   Type of special condition 2 */
    uint8_t spQualifiedType2;

    /* オブジェのアクション有効角度
     *   オブジェのアクション有効角度です。オブジェのアクションベクトルとキャラベクトルの有効角度差
     * Valid Object Angle
     *   The action effective angle of the object. Effective angle difference between the action vector of the object and the character vector
     * Default Value  = 30 */
    uint8_t validObjAngle;

    /* キャラの吸着タイプ
     *   オブジェアクション時のキャラの吸着方法です
     * Character Absorb Type
     *   It is a method of adsorbing characters during object action. */
    uint8_t chrSorbType;

    /* イベント発動タイミング
     *   イベントの実行タイミング
     * Event Execution Timing
     *   Event execution timing */
    uint8_t eventKickTiming;

    char pad1[2];

    /* アクションボタンパラメータID
     *   アクションボタンパラメータID
     * Action Button Param ID
     *   Action button parameter ID
     * Default Value  = -1 */
    int32_t actionButtonParamId;

    /* 宝有効化ディレイ(秒)
     *   オブジェアクション実行から宝有効化までの秒数。オブジェアクトのオブジェタイプ「宝箱」専用の設定。
     * Treasure Enable Delay
     *   The number of seconds from the execution of the object action to the activation of the treasure. A setting exclusively for the object type treasure box of the object act. */
    float enableTreasureDelaySec;

    /* 実行前SFX用ダミポリID
     *   オブジェアクト実行前のときにこのダミポリIDからSFXを出す。-1なら原点から出す。
     * Pre-action SFX Dummy Poly ID
     *   Issue SFX from this Damipoli ID before executing the object. If it is -1, start from the origin.
     * Default Value  = -1 */
    int32_t preActionSfxDmypolyId;

    /* 実行前SFXID
     *   オブジェアクト実行前のときに出すSFX。-1なら出さない。
     * Pre-action SFX ID
     *   SFX issued before executing the object. If it is -1, it will not be issued.
     * Default Value  = -1 */
    int32_t preActionSfxId;

    /* Conditional Qualified ID [1]
     *   Special condition ID */
    int32_t spQualifiedId_new;

    /* Conditional Qualified ID [2]
     *   Special condition ID part 2 */
    int32_t spQualifiedId2_new;

    char pad2[32];
};
