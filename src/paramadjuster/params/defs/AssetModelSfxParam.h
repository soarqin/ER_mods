#pragma once

#include <cstdint>

struct AssetModelSfxParam {
    /* 0:SfxID
     *   0:SfxID
     * SFX ID [0]
     *   0: SfxID
     * Default Value  = -1 */
    int32_t sfxId_0 = -1;

    /* 0：ダミポリID
     *   0：ダミポリID
     * Dummy Poly ID [0]
     *   0: Damipoli ID
     * Default Value  = -1 */
    int32_t dmypolyId_0 = -1;

    /* 0:予約
     *   0:予約 */
    char reserve_0[8] {};

    /* 1:SfxID
     *   1:SfxID
     * SFX ID [1]
     *   1: SfxID
     * Default Value  = -1 */
    int32_t sfxId_1 = -1;

    /* 1：ダミポリID
     *   1：ダミポリID
     * Dummy Poly ID [1]
     *   1: Damipoli ID
     * Default Value  = -1 */
    int32_t dmypolyId_1 = -1;

    /* 1:予約
     *   1:予約 */
    char reserve_1[8] {};

    /* 2:SfxID
     *   2:SfxID
     * SFX ID [2]
     *   2: SfxID
     * Default Value  = -1 */
    int32_t sfxId_2 = -1;

    /* 2：ダミポリID
     *   2：ダミポリID
     * Dummy Poly ID [2]
     *   2: Damipoli ID
     * Default Value  = -1 */
    int32_t dmypolyId_2 = -1;

    /* 2:予約
     *   2:予約 */
    char reserve_2[8] {};

    /* 3:SfxID
     *   3:SfxID
     * SFX ID [3]
     *   3: SfxID
     * Default Value  = -1 */
    int32_t sfxId_3 = -1;

    /* 3：ダミポリID
     *   3：ダミポリID
     * Dummy Poly ID [3]
     *   3: Damipoli ID
     * Default Value  = -1 */
    int32_t dmypolyId_3 = -1;

    /* 3:予約
     *   3:予約 */
    char reserve_3[8] {};

    /* 4:SfxID
     *   4:SfxID
     * SFX ID [4]
     *   4: SfxID
     * Default Value  = -1 */
    int32_t sfxId_4 = -1;

    /* 4：ダミポリID
     *   4：ダミポリID
     * Dummy Poly ID [4]
     *   4: Damipoli ID
     * Default Value  = -1 */
    int32_t dmypolyId_4 = -1;

    /* 4:予約
     *   4:予約 */
    char reserve_4[8] {};

    /* 5:SfxID
     *   5:SfxID
     * SFX ID [5]
     *   5: SfxID
     * Default Value  = -1 */
    int32_t sfxId_5 = -1;

    /* 5：ダミポリID
     *   5：ダミポリID
     * Dummy Poly ID [5]
     *   5: Damipoli ID
     * Default Value  = -1 */
    int32_t dmypolyId_5 = -1;

    /* 5:予約
     *   5:予約 */
    char reserve_5[8] {};

    /* 6:SfxID
     *   6:SfxID
     * SFX ID [6]
     *   6: SfxID
     * Default Value  = -1 */
    int32_t sfxId_6 = -1;

    /* 6：ダミポリID
     *   6：ダミポリID
     * Dummy Poly ID [6]
     *   6: Damipoli ID
     * Default Value  = -1 */
    int32_t dmypolyId_6 = -1;

    /* 6:予約
     *   6:予約 */
    char reserve_6[8] {};

    /* 7:SfxID
     *   7:SfxID
     * SFX ID [7]
     *   7: SfxID
     * Default Value  = -1 */
    int32_t sfxId_7 = -1;

    /* 7：ダミポリID
     *   7：ダミポリID
     * Dummy Poly ID [7]
     *   7: Damipoli ID
     * Default Value  = -1 */
    int32_t dmypolyId_7 = -1;

    /* イラディアンスボリュームへの影響を無効化
     *   有効にするとイラディアンスボリューム撮影への影響を無効化します
     * Is Irradiance Volume Disabled
     *   When enabled, the effect on irradiance volume shooting is disabled. */
    uint8_t isDisableIV {};

    /* 7:予約
     *   7:予約 */
    char reserve_7[7] {};
};
