#pragma once

#include <cstdint>

struct WeatherLotParam {
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

    /* 天候種類0
     *   天候種類0
     * Weather Type [0]
     *   Weather type 0
     * Default Value  = -1 */
    int16_t weatherType0;

    /* 天候種類1
     *   天候種類1
     * Weather Type [1]
     *   Weather type 1
     * Default Value  = -1 */
    int16_t weatherType1;

    /* 天候種類2
     *   天候種類2
     * Weather Type [2]
     *   Weather type 2
     * Default Value  = -1 */
    int16_t weatherType2;

    /* 天候種類3
     *   天候種類3
     * Weather Type [3]
     *   Weather type 3
     * Default Value  = -1 */
    int16_t weatherType3;

    /* 天候種類4
     *   天候種類4
     * Weather Type [4]
     *   Weather type 4
     * Default Value  = -1 */
    int16_t weatherType4;

    /* 天候種類5
     *   天候種類5
     * Weather Type [5]
     *   Weather type 5
     * Default Value  = -1 */
    int16_t weatherType5;

    /* 天候種類6
     *   天候種類6
     * Weather Type [6]
     *   Weather type 6
     * Default Value  = -1 */
    int16_t weatherType6;

    /* 天候種類7
     *   天候種類7
     * Weather Type [7]
     *   Weather type 7
     * Default Value  = -1 */
    int16_t weatherType7;

    /* 天候種類8
     *   天候種類8
     * Weather Type [8]
     *   Weather type 8
     * Default Value  = -1 */
    int16_t weatherType8;

    /* 天候種類9
     *   天候種類9
     * Weather Type [9]
     *   Weather type 9
     * Default Value  = -1 */
    int16_t weatherType9;

    /* 天候種類10
     *   天候種類10
     * Weather Type [10]
     *   Weather type 10
     * Default Value  = -1 */
    int16_t weatherType10;

    /* 天候種類11
     *   天候種類11
     * Weather Type [11]
     *   Weather type 11
     * Default Value  = -1 */
    int16_t weatherType11;

    /* 天候種類12
     *   天候種類12
     * Weather Type [12]
     *   Weather type 12
     * Default Value  = -1 */
    int16_t weatherType12;

    /* 天候種類13
     *   天候種類13
     * Weather Type [13]
     *   Weather type 13
     * Default Value  = -1 */
    int16_t weatherType13;

    /* 天候種類14
     *   天候種類14
     * Weather Type [14]
     *   Weather type 14
     * Default Value  = -1 */
    int16_t weatherType14;

    /* 天候種類15
     *   天候種類15
     * Weather Type [15]
     *   Weather type 15
     * Default Value  = -1 */
    int16_t weatherType15;

    /* 抽選ウェイト0
     *   抽選ウェイト0
     * Lottery Weight [0]
     *   Lottery weight 0 */
    uint16_t lotteryWeight0;

    /* 抽選ウェイト1
     *   抽選ウェイト1
     * Lottery Weight [1]
     *   Lottery weight 1 */
    uint16_t lotteryWeight1;

    /* 抽選ウェイト2
     *   抽選ウェイト2
     * Lottery Weight [2]
     *   Lottery weight 2 */
    uint16_t lotteryWeight2;

    /* 抽選ウェイト3
     *   抽選ウェイト3
     * Lottery Weight [3]
     *   Lottery weight 3 */
    uint16_t lotteryWeight3;

    /* 抽選ウェイト4
     *   抽選ウェイト4
     * Lottery Weight [4]
     *   Lottery weight 4 */
    uint16_t lotteryWeight4;

    /* 抽選ウェイト5
     *   抽選ウェイト5
     * Lottery Weight [5]
     *   Lottery weight 5 */
    uint16_t lotteryWeight5;

    /* 抽選ウェイト6
     *   抽選ウェイト6
     * Lottery Weight [6]
     *   Lottery weight 6 */
    uint16_t lotteryWeight6;

    /* 抽選ウェイト7
     *   抽選ウェイト7
     * Lottery Weight [7]
     *   Lottery weight 7 */
    uint16_t lotteryWeight7;

    /* 抽選ウェイト8
     *   抽選ウェイト8
     * Lottery Weight [8]
     *   Lottery weight 8 */
    uint16_t lotteryWeight8;

    /* 抽選ウェイト9
     *   抽選ウェイト9
     * Lottery Weight [9]
     *   Lottery weight 9 */
    uint16_t lotteryWeight9;

    /* 抽選ウェイト10
     *   抽選ウェイト10
     * Lottery Weight [10]
     *   Lottery weight 10 */
    uint16_t lotteryWeight10;

    /* 抽選ウェイト11
     *   抽選ウェイト11
     * Lottery Weight [11]
     *   Lottery weight 11 */
    uint16_t lotteryWeight11;

    /* 抽選ウェイト12
     *   抽選ウェイト12
     * Lottery Weight [12]
     *   Lottery weight 12 */
    uint16_t lotteryWeight12;

    /* 抽選ウェイト13
     *   抽選ウェイト13
     * Lottery Weight [13]
     *   Lottery weight 13 */
    uint16_t lotteryWeight13;

    /* 抽選ウェイト14
     *   抽選ウェイト14
     * Lottery Weight [14]
     *   Lottery weight 14 */
    uint16_t lotteryWeight14;

    /* 抽選ウェイト15
     *   抽選ウェイト15
     * Lottery Weight [15]
     *   Lottery weight 15 */
    uint16_t lotteryWeight15;

    /* 時間帯条件リスト
     *   時間帯条件リスト
     * Timezone Limit
     *   Time zone condition list */
    uint8_t timezoneLimit;

    /* 直接時間指定_開始_時
     *   直接時間指定_開始_時
     * Timezone Start Hour
     *   Direct time specification_start_hour */
    uint8_t timezoneStartHour;

    /* 直接時間指定_開始_分
     *   直接時間指定_開始_分
     * Timezone Start Minute
     *   Direct time specification_start_minute */
    uint8_t timezoneStartMinute;

    /* 直接時間指定_開始_時
     *   直接時間指定_開始_時
     * Timezone End Hour
     *   Direct time specification_start_hour */
    uint8_t timezoneEndHour;

    /* 直接時間指定_開始_分
     *   直接時間指定_開始_分
     * Timezone End Minute
     *   Direct time specification_start_minute */
    uint8_t timezoneEndMinute;

    /* リザーブ
     *   予約領域 */
    char reserve[9];
};
