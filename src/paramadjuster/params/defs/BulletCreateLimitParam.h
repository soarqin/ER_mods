#pragma once

#include <cstdint>

struct BulletCreateLimitParam {
    /* グループ内上限弾数
     *   同一グループ内での作成上限数
     * Max Amount - By Group
     *   Maximum number of creations in the same group */
    uint8_t limitNum_byGroup;

    /* オーナー毎に制限するか
     *   オーナー毎に制限するか
     * Is Limited for each Owner
     *   Is it restricted for each owner? */
    uint8_t isLimitEachOwner:1;

    /* パディング
     *   pad2 */
    char pad2:7;

    /* パディング
     *   pad3 */
    char pad[30];
};
