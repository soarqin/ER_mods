#pragma once

#include <cstdint>

struct DefaultKeyAssign {
    /* パッド0
     *   下位抑制パッド0
     * Pad 0
     *   Lower suppression pad 0 */
    uint8_t priority0:1;

    /* GUIフレームワーク用
     *   下位抑制GUIフレームワーク用パッド
     * For GUI framework
     *   Pad for lower suppression GUI framework */
    uint8_t priority1:1;

    /* パッド2
     *   下位抑制パッド2
     * Pad 2
     *   Lower suppression pad 2 */
    uint8_t priority2:1;

    /* デバッグメニューモード切替
     *   下位抑制デバッグメニューモード切替パッド
     * Debug menu mode switching
     *   Lower suppression debug menu mode switching pad */
    uint8_t priority3:1;

    /* パッド4
     *   下位抑制パッド4
     * Pad 4
     *   Lower suppression pad 4 */
    uint8_t priority4:1;

    /* パッドデバッグメニュー
     *   下位抑制パッドデバッグメニューパッド
     * Pad debug menu
     *   Lower suppression pad Debug menu pad */
    uint8_t priority5:1;

    /* パッド6
     *   下位抑制パッド6
     * Pad 6
     *   Lower suppression pad 6 */
    uint8_t priority6:1;

    /* パッド7
     *   下位抑制パッド7
     * Pad 7
     *   Lower suppression pad 7 */
    uint8_t priority7:1;

    /* パッド8
     *   下位抑制パッド8
     * Pad 8
     *   Lower suppression pad 8 */
    uint8_t priority8:1;

    /* パッド9
     *   下位抑制パッド9
     * Pad 9
     *   Lower suppression pad 9 */
    uint8_t priority9:1;

    /* パッド10
     *   下位抑制パッド10
     * Pad 10
     *   Lower suppression pad 10 */
    uint8_t priority10:1;

    /* パッド11
     *   下位抑制パッド11
     * Pad 11
     *   Lower suppression pad 11 */
    uint8_t priority11:1;

    /* パッド12
     *   下位抑制パッド12
     * Pad 12
     *   Lower suppression pad 12 */
    uint8_t priority12:1;

    /* パッド13
     *   下位抑制パッド13
     * Pad 13
     *   Lower suppression pad 13 */
    uint8_t priority13:1;

    /* パッド14
     *   下位抑制パッド14
     * Pad 14
     *   Lower suppression pad 14 */
    uint8_t priority14:1;

    /* パッド15
     *   下位抑制パッド15
     * Pad 15
     *   Lower suppression pad 15 */
    uint8_t priority15:1;

    /* パッド16
     *   下位抑制パッド16
     * Pad 16
     *   Lower suppression pad 16 */
    uint8_t priority16:1;

    /* パッド17
     *   下位抑制パッド17
     * Pad 17
     *   Lower suppression pad 17 */
    uint8_t priority17:1;

    /* パッド18
     *   下位抑制パッド18
     * Pad 18
     *   Lower suppression pad 18 */
    uint8_t priority18:1;

    /* パッド19
     *   下位抑制パッド19
     * Pad 19
     *   Lower suppression pad 19 */
    uint8_t priority19:1;

    /* パッド20
     *   下位抑制パッド20
     * Pad 20
     *   Lower suppression pad 20 */
    uint8_t priority20:1;

    /* パッド21
     *   下位抑制パッド21
     * Pad 21
     *   Lower suppression pad 21 */
    uint8_t priority21:1;

    /* パッド22
     *   下位抑制パッド22
     * Pad 22
     *   Lower suppression pad 22 */
    uint8_t priority22:1;

    /* パッド23
     *   下位抑制パッド23
     * Pad 23
     *   Lower suppression pad 23 */
    uint8_t priority23:1;

    /* パッド24
     *   下位抑制パッド24
     * Pad 24
     *   Lower suppression pad 24 */
    uint8_t priority24:1;

    /* パッド25
     *   下位抑制パッド25
     * Pad 25
     *   Lower suppression pad 25 */
    uint8_t priority25:1;

    /* パッド26
     *   下位抑制パッド26
     * Pad 26
     *   Lower suppression pad 26 */
    uint8_t priority26:1;

    /* パッド27
     *   下位抑制パッド27
     * Pad 27
     *   Lower suppression pad 27 */
    uint8_t priority27:1;

    /* パッド28
     *   下位抑制パッド28
     * Pad 28
     *   Lower suppression pad 28 */
    uint8_t priority28:1;

    /* パッド29
     *   下位抑制パッド29
     * Pad 29
     *   Lower suppression pad 29 */
    uint8_t priority29:1;

    /* パッド30
     *   下位抑制パッド30
     * Pad 30
     *   Lower suppression pad 30 */
    uint8_t priority30:1;

    /* パッド31
     *   下位抑制パッド31
     * Pad 31
     *   Lower suppression pad 31 */
    uint8_t priority31:1;

    /* ダミー */
    char dummy[12];

    /* パッド物理キー
     *   パッド物理キー
     * Pad physical key
     *   Pad physical key
     * Default Value  = -1 */
    int32_t phyisicalKey_0;

    /* 押され方
     *   押され方
     * How to be pushed
     *   How to be pushed */
    uint8_t traitsType_0;

    /* アナログ→デジタル変換方法
     *   アナログ→デジタル変換方法
     * Analog-to-digital conversion method
     *   Analog-to-digital conversion method */
    uint8_t a2dOperator_0;

    /* 適用ターゲット
     *   反映ターゲット
     * Applicable target
     *   Reflection target */
    uint8_t applyTarget_0;

    /* デジタル・アナログ
     *   デジタルorアナログ
     * Digital / analog
     *   Digital or analog */
    uint8_t isAnalog_0:1;

    /* Win64
     *   Win64で使用されるか
     * Win64
     *   Will it be used in Win64?
     * Default Value  = 1 */
    uint8_t enableWin64_0:1;

    /* PS4
     *   PS4で使用されるか
     * PS4
     *   Will it be used on PS4
     * Default Value  = 1 */
    uint8_t enablePS4_0:1;

    /* XboxOne
     *   XboxOneで使用されるか
     * Xbox One
     *   Will it be used on Xbox One
     * Default Value  = 1 */
    uint8_t enableXboxOne_0:1;

    /* 時間
     *   時間
     * time
     *   time */
    float time1_0;

    /* リピート用インターバル時間
     *   リピート用インターバル時間
     * Interval time for repeat
     *   Interval time for repeat */
    float time2_0;

    /* アナログ→デジタル変換閾値
     *   アナログ→デジタル変換閾値
     * Analog-to-digital conversion threshold
     *   Analog-to-digital conversion threshold
     * Default Value  = 0.5 */
    float a2dThreshold_0;

    /* パッド物理キー
     *   パッド物理キー
     * Pad physical key
     *   Pad physical key
     * Default Value  = -1 */
    int32_t phyisicalKey_1;

    /* 押され方
     *   押され方
     * How to be pushed
     *   How to be pushed */
    uint8_t traitsType_1;

    /* アナログ→デジタル変換方法
     *   アナログ→デジタル変換方法
     * Analog-to-digital conversion method
     *   Analog-to-digital conversion method */
    uint8_t a2dOperator_1;

    /* 適用ターゲット
     *   反映ターゲット
     * Applicable target
     *   Reflection target */
    uint8_t applyTarget_1;

    /* デジタル・アナログ
     *   デジタルorアナログ
     * Digital / analog
     *   Digital or analog */
    uint8_t isAnalog_1:1;

    /* Win64
     *   Win64で使用されるか
     * Win64
     *   Will it be used in Win64?
     * Default Value  = 1 */
    uint8_t enableWin64_1:1;

    /* PS4
     *   PS4で使用されるか
     * PS4
     *   Will it be used on PS4
     * Default Value  = 1 */
    uint8_t enablePS4_1:1;

    /* XboxOne
     *   XboxOneで使用されるか
     * Xbox One
     *   Will it be used on Xbox One
     * Default Value  = 1 */
    uint8_t enableXboxOne_1:1;

    /* 時間
     *   時間
     * time
     *   time */
    float time1_1;

    /* リピート用インターバル時間
     *   リピート用インターバル時間
     * Interval time for repeat
     *   Interval time for repeat */
    float time2_1;

    /* アナログ→デジタル変換閾値
     *   アナログ→デジタル変換閾値
     * Analog-to-digital conversion threshold
     *   Analog-to-digital conversion threshold
     * Default Value  = 0.5 */
    float a2dThreshold_1;

    /* パッド物理キー
     *   パッド物理キー
     * Pad physical key
     *   Pad physical key
     * Default Value  = -1 */
    int32_t phyisicalKey_2;

    /* 押され方
     *   押され方
     * How to be pushed
     *   How to be pushed */
    uint8_t traitsType_2;

    /* アナログ→デジタル変換方法
     *   アナログ→デジタル変換方法
     * Analog-to-digital conversion method
     *   Analog-to-digital conversion method */
    uint8_t a2dOperator_2;

    /* 適用ターゲット
     *   反映ターゲット
     * Applicable target
     *   Reflection target */
    uint8_t applyTarget_2;

    /* デジタル・アナログ
     *   デジタルorアナログ
     * Digital / analog
     *   Digital or analog */
    uint8_t isAnalog_2:1;

    /* Win64
     *   Win64で使用されるか
     * Win64
     *   Will it be used in Win64?
     * Default Value  = 1 */
    uint8_t enableWin64_2:1;

    /* PS4
     *   PS4で使用されるか
     * PS4
     *   Will it be used on PS4
     * Default Value  = 1 */
    uint8_t enablePS4_2:1;

    /* XboxOne
     *   XboxOneで使用されるか
     * Xbox One
     *   Will it be used on Xbox One
     * Default Value  = 1 */
    uint8_t enableXboxOne_2:1;

    /* 時間
     *   時間
     * time
     *   time */
    float time1_2;

    /* リピート用インターバル時間
     *   リピート用インターバル時間
     * Interval time for repeat
     *   Interval time for repeat */
    float time2_2;

    /* アナログ→デジタル変換閾値
     *   アナログ→デジタル変換閾値
     * Analog-to-digital conversion threshold
     *   Analog-to-digital conversion threshold
     * Default Value  = 0.5 */
    float a2dThreshold_2;

    /* パッド物理キー
     *   パッド物理キー
     * Pad physical key
     *   Pad physical key
     * Default Value  = -1 */
    int32_t phyisicalKey_3;

    /* 押され方
     *   押され方
     * How to be pushed
     *   How to be pushed */
    uint8_t traitsType_3;

    /* アナログ→デジタル変換方法
     *   アナログ→デジタル変換方法
     * Analog-to-digital conversion method
     *   Analog-to-digital conversion method */
    uint8_t a2dOperator_3;

    /* 適用ターゲット
     *   反映ターゲット
     * Applicable target
     *   Reflection target */
    uint8_t applyTarget_3;

    /* デジタル・アナログ
     *   デジタルorアナログ
     * Digital / analog
     *   Digital or analog */
    uint8_t isAnalog_3:1;

    /* Win64
     *   Win64で使用されるか
     * Win64
     *   Will it be used in Win64?
     * Default Value  = 1 */
    uint8_t enableWin64_3:1;

    /* PS4
     *   PS4で使用されるか
     * PS4
     *   Will it be used on PS4
     * Default Value  = 1 */
    uint8_t enablePS4_3:1;

    /* XboxOne
     *   XboxOneで使用されるか
     * Xbox One
     *   Will it be used on Xbox One
     * Default Value  = 1 */
    uint8_t enableXboxOne_3:1;

    /* 時間
     *   時間
     * time
     *   time */
    float time1_3;

    /* リピート用インターバル時間
     *   リピート用インターバル時間
     * Interval time for repeat
     *   Interval time for repeat */
    float time2_3;

    /* アナログ→デジタル変換閾値
     *   アナログ→デジタル変換閾値
     * Analog-to-digital conversion threshold
     *   Analog-to-digital conversion threshold
     * Default Value  = 0.5 */
    float a2dThreshold_3;

    /* PC物理キー
     *   PC物理キー
     * PC physical key
     *   PC physical key
     * Default Value  = -1 */
    int32_t phyisicalKey_4;

    /* 押され方
     *   押され方
     * How to be pushed
     *   How to be pushed */
    uint8_t traitsType_4;

    /* アナログ→デジタル変換方法
     *   アナログ→デジタル変換方法
     * Analog-to-digital conversion method
     *   Analog-to-digital conversion method */
    uint8_t a2dOperator_4;

    /* 適用ターゲット
     *   反映ターゲット
     * Applicable target
     *   Reflection target */
    uint8_t applyTarget_4;

    /* デジタル・アナログ
     *   デジタルorアナログ
     * Digital / analog
     *   Digital or analog */
    uint8_t isAnalog_4:1;

    /* Win64
     *   Win64で使用されるか
     * Win64
     *   Will it be used in Win64?
     * Default Value  = 1 */
    uint8_t enableWin64_4:1;

    /* PS4
     *   PS4で使用されるか
     * PS4
     *   Will it be used on PS4
     * Default Value  = 1 */
    uint8_t enablePS4_4:1;

    /* XboxOne
     *   XboxOneで使用されるか
     * Xbox One
     *   Will it be used on Xbox One
     * Default Value  = 1 */
    uint8_t enableXboxOne_4:1;

    /* 時間
     *   時間
     * time
     *   time */
    float time1_4;

    /* リピート用インターバル時間
     *   リピート用インターバル時間
     * Interval time for repeat
     *   Interval time for repeat */
    float time2_4;

    /* アナログ→デジタル変換閾値
     *   アナログ→デジタル変換閾値
     * Analog-to-digital conversion threshold
     *   Analog-to-digital conversion threshold
     * Default Value  = 0.5 */
    float a2dThreshold_4;

    /* PC物理キー
     *   PC物理キー
     * PC physical key
     *   PC physical key
     * Default Value  = -1 */
    int32_t phyisicalKey_5;

    /* 押され方
     *   押され方
     * How to be pushed
     *   How to be pushed */
    uint8_t traitsType_5;

    /* アナログ→デジタル変換方法
     *   アナログ→デジタル変換方法
     * Analog-to-digital conversion method
     *   Analog-to-digital conversion method */
    uint8_t a2dOperator_5;

    /* 適用ターゲット
     *   反映ターゲット
     * Applicable target
     *   Reflection target */
    uint8_t applyTarget_5;

    /* デジタル・アナログ
     *   デジタルorアナログ
     * Digital / analog
     *   Digital or analog */
    uint8_t isAnalog_5:1;

    /* Win64
     *   Win64で使用されるか
     * Win64
     *   Will it be used in Win64?
     * Default Value  = 1 */
    uint8_t enableWin64_5:1;

    /* PS4
     *   PS4で使用されるか
     * PS4
     *   Will it be used on PS4
     * Default Value  = 1 */
    uint8_t enablePS4_5:1;

    /* XboxOne
     *   XboxOneで使用されるか
     * Xbox One
     *   Will it be used on Xbox One
     * Default Value  = 1 */
    uint8_t enableXboxOne_5:1;

    /* 時間
     *   時間
     * time
     *   time */
    float time1_5;

    /* リピート用インターバル時間
     *   リピート用インターバル時間
     * Interval time for repeat
     *   Interval time for repeat */
    float time2_5;

    /* アナログ→デジタル変換閾値
     *   アナログ→デジタル変換閾値
     * Analog-to-digital conversion threshold
     *   Analog-to-digital conversion threshold
     * Default Value  = 0.5 */
    float a2dThreshold_5;

    /* PC物理キー
     *   PC物理キー
     * PC physical key
     *   PC physical key
     * Default Value  = -1 */
    int32_t phyisicalKey_6;

    /* 押され方
     *   押され方
     * How to be pushed
     *   How to be pushed */
    uint8_t traitsType_6;

    /* アナログ→デジタル変換方法
     *   アナログ→デジタル変換方法
     * Analog-to-digital conversion method
     *   Analog-to-digital conversion method */
    uint8_t a2dOperator_6;

    /* 適用ターゲット
     *   反映ターゲット
     * Applicable target
     *   Reflection target */
    uint8_t applyTarget_6;

    /* デジタル・アナログ
     *   デジタルorアナログ
     * Digital / analog
     *   Digital or analog */
    uint8_t isAnalog_6:1;

    /* Win64
     *   Win64で使用されるか
     * Win64
     *   Will it be used in Win64?
     * Default Value  = 1 */
    uint8_t enableWin64_6:1;

    /* PS4
     *   PS4で使用されるか
     * PS4
     *   Will it be used on PS4
     * Default Value  = 1 */
    uint8_t enablePS4_6:1;

    /* XboxOne
     *   XboxOneで使用されるか
     * Xbox One
     *   Will it be used on Xbox One
     * Default Value  = 1 */
    uint8_t enableXboxOne_6:1;

    /* 時間
     *   時間
     * time
     *   time */
    float time1_6;

    /* リピート用インターバル時間
     *   リピート用インターバル時間
     * Interval time for repeat
     *   Interval time for repeat */
    float time2_6;

    /* アナログ→デジタル変換閾値
     *   アナログ→デジタル変換閾値
     * Analog-to-digital conversion threshold
     *   Analog-to-digital conversion threshold
     * Default Value  = 0.5 */
    float a2dThreshold_6;

    /* PC物理キー
     *   PC物理キー
     * PC physical key
     *   PC physical key
     * Default Value  = -1 */
    int32_t phyisicalKey_7;

    /* 押され方
     *   押され方
     * How to be pushed
     *   How to be pushed */
    uint8_t traitsType_7;

    /* アナログ→デジタル変換方法
     *   アナログ→デジタル変換方法
     * Analog-to-digital conversion method
     *   Analog-to-digital conversion method */
    uint8_t a2dOperator_7;

    /* 適用ターゲット
     *   反映ターゲット
     * Applicable target
     *   Reflection target */
    uint8_t applyTarget_7;

    /* デジタル・アナログ
     *   デジタルorアナログ
     * Digital / analog
     *   Digital or analog */
    uint8_t isAnalog_7:1;

    /* Win64
     *   Win64で使用されるか
     * Win64
     *   Will it be used in Win64?
     * Default Value  = 1 */
    uint8_t enableWin64_7:1;

    /* PS4
     *   PS4で使用されるか
     * PS4
     *   Will it be used on PS4
     * Default Value  = 1 */
    uint8_t enablePS4_7:1;

    /* XboxOne
     *   XboxOneで使用されるか
     * Xbox One
     *   Will it be used on Xbox One
     * Default Value  = 1 */
    uint8_t enableXboxOne_7:1;

    /* 時間
     *   時間
     * time
     *   time */
    float time1_7;

    /* リピート用インターバル時間
     *   リピート用インターバル時間
     * Interval time for repeat
     *   Interval time for repeat */
    float time2_7;

    /* アナログ→デジタル変換閾値
     *   アナログ→デジタル変換閾値
     * Analog-to-digital conversion threshold
     *   Analog-to-digital conversion threshold
     * Default Value  = 0.5 */
    float a2dThreshold_7;
};
