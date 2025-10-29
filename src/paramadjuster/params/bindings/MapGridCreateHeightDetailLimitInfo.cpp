#include "../luabindings.h"
#include "../defs/MapGridCreateHeightDetailLimitInfo.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<MapGridCreateHeightDetailLimitInfo>::exportToCsvImpl(const std::wstring &csvPath);

void registerMapGridCreateHeightDetailLimitInfo(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MapGridCreateHeightDetailLimitInfo"]; usertype) return;
        auto indexerMapGridCreateHeightDetailLimitInfo = state->new_usertype<ParamTableIndexer<MapGridCreateHeightDetailLimitInfo>>("MapGridCreateHeightDetailLimitInfoTableIndexer");
        indexerMapGridCreateHeightDetailLimitInfo["count"] = sol::property(&ParamTableIndexer<MapGridCreateHeightDetailLimitInfo>::count);
        indexerMapGridCreateHeightDetailLimitInfo["__index"] = &ParamTableIndexer<MapGridCreateHeightDetailLimitInfo>::at;
        indexerMapGridCreateHeightDetailLimitInfo["id"] = &ParamTableIndexer<MapGridCreateHeightDetailLimitInfo>::paramId;
        indexerMapGridCreateHeightDetailLimitInfo["get"] = &ParamTableIndexer<MapGridCreateHeightDetailLimitInfo>::get;
        indexerMapGridCreateHeightDetailLimitInfo["exportToCsv"] = &ParamTableIndexer<MapGridCreateHeightDetailLimitInfo>::exportToCsv;
        indexerMapGridCreateHeightDetailLimitInfo["importFromCsv"] = &ParamTableIndexer<MapGridCreateHeightDetailLimitInfo>::importFromCsv;
        auto utMapGridCreateHeightDetailLimitInfo = state->new_usertype<MapGridCreateHeightDetailLimitInfo>("MapGridCreateHeightDetailLimitInfo");
        utMapGridCreateHeightDetailLimitInfo["mapId"] = &MapGridCreateHeightDetailLimitInfo::mapId;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x4"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x4;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x8"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x8;
        utMapGridCreateHeightDetailLimitInfo["unknown_0xc"] = &MapGridCreateHeightDetailLimitInfo::unknown_0xc;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x10"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x10;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x14"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x14;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x18"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x18;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x1c"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x1c;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x20"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x20;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x24"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x24;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x28"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x28;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x2c"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x2c;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x2d"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x2d;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x2e"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x2e;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x2f"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x2f;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x30"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x30;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x31"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x31;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x32"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x32;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x34"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x34;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x38"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x38;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x3c"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x3c;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<MapGridCreateHeightDetailLimitInfo>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<MapGridCreateHeightDetailLimitInfo>>(nullptr);
        indexer->setFieldNames({
            {"mapId", false},
            {"unknown_0x4", false},
            {"unknown_0x8", false},
            {"unknown_0xc", false},
            {"unknown_0x10", false},
            {"unknown_0x14", false},
            {"unknown_0x18", false},
            {"unknown_0x1c", false},
            {"unknown_0x20", false},
            {"unknown_0x24", false},
            {"unknown_0x28", false},
            {"unknown_0x2c", false},
            {"unknown_0x2d", false},
            {"unknown_0x2e", false},
            {"unknown_0x2f", false},
            {"unknown_0x30", false},
            {"unknown_0x31", false},
            {"unknown_0x32", false},
            {"unknown_0x34", false},
            {"unknown_0x38", false},
            {"unknown_0x3c", false},
        });
        return indexer;
    };
    paramsTable["MapGridCreateHeightDetailLimitInfo"] = [tableLoader]() -> auto { return tableLoader(L"MapGridCreateHeightDetailLimitInfo"); };
}

template<> void ParamTableIndexer<MapGridCreateHeightDetailLimitInfo>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,mapId,unknown_0x4,unknown_0x8,unknown_0xc,unknown_0x10,unknown_0x14,unknown_0x18,unknown_0x1c,unknown_0x20,unknown_0x24,unknown_0x28,unknown_0x2c,unknown_0x2d,unknown_0x2e,unknown_0x2f,unknown_0x30,unknown_0x31,unknown_0x32,unknown_0x34,unknown_0x38,unknown_0x3c\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%d,%d,%d\n",
            this->paramId(i),
            param->mapId,
            param->unknown_0x4,
            param->unknown_0x8,
            param->unknown_0xc,
            param->unknown_0x10,
            param->unknown_0x14,
            param->unknown_0x18,
            param->unknown_0x1c,
            param->unknown_0x20,
            param->unknown_0x24,
            param->unknown_0x28,
            param->unknown_0x2c,
            param->unknown_0x2d,
            param->unknown_0x2e,
            param->unknown_0x2f,
            param->unknown_0x30,
            param->unknown_0x31,
            param->unknown_0x32,
            param->unknown_0x34,
            param->unknown_0x38,
            param->unknown_0x3c
        );
    }
    fclose(f);
}

}
