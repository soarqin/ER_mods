#pragma once

#include <cstdint>

struct SeMaterialConvertParam {
    /* SE材質ID
     *   SFX材質ID（３桁）からSE材質ID（２桁）への変換
     * SE Material ID
     *   Conversion from SFX material ID (3 digits) to SE material ID (2 digits) */
    uint8_t seMaterialId;

    /* パディング
     *   パディング */
    char pad[3];
};
