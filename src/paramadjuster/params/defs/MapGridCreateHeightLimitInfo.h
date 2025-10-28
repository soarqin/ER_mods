#pragma once

#include <cstdint>

struct MapGridCreateHeightLimitInfo {
    /* グリッド構築可能高さMin[m]
     *   グリッド構築可能高さ最小値[m]。(LOD2単位)
     * Min Height - Grid Creation (LOD2)
     *   Minimum height that can be built in the grid [m]. (LOD 2 units)
     * Default Value  = -99999 */
    float GridEnableCreateHeightMin = -99999;

    /* グリッド構築可能高さMax[m]
     *   グリッド構築可能高さ最大値[m]。(LOD2単位)
     * Max Height - Grid Creation (LOD2)
     *   Maximum height that can be constructed in the grid [m]. (LOD 2 units)
     * Default Value  = 99999 */
    float GridEnableCreateHeightMax = 99999;

    /* リザーブ
     *   リザーブ */
    char Reserve[24] {};
};
