#include "../luabindings.h"
#include "../defs/MapGdRegionInfo.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<MapGdRegionInfo>::exportToCsvImpl(const std::wstring &csvPath);

void registerMapGdRegionInfo(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MapGdRegionInfo"]; usertype) return;
        auto indexerMapGdRegionInfo = state->new_usertype<ParamTableIndexer<MapGdRegionInfo>>("MapGdRegionInfoTableIndexer");
        indexerMapGdRegionInfo["count"] = sol::property(&ParamTableIndexer<MapGdRegionInfo>::count);
        indexerMapGdRegionInfo["__index"] = &ParamTableIndexer<MapGdRegionInfo>::at;
        indexerMapGdRegionInfo["id"] = &ParamTableIndexer<MapGdRegionInfo>::paramId;
        indexerMapGdRegionInfo["get"] = &ParamTableIndexer<MapGdRegionInfo>::get;
        indexerMapGdRegionInfo["exportToCsv"] = &ParamTableIndexer<MapGdRegionInfo>::exportToCsv;
        indexerMapGdRegionInfo["importFromCsv"] = &ParamTableIndexer<MapGdRegionInfo>::importFromCsv;
        auto utMapGdRegionInfo = state->new_usertype<MapGdRegionInfo>("MapGdRegionInfo");
        utMapGdRegionInfo["disableParam_NT"] = sol::property([](MapGdRegionInfo &param) -> uint8_t { return param.disableParam_NT; }, [](MapGdRegionInfo &param, uint8_t value) { param.disableParam_NT = value; });
        utMapGdRegionInfo["mapRegionId"] = &MapGdRegionInfo::mapRegionId;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<MapGdRegionInfo>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<MapGdRegionInfo>>(nullptr);
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"mapRegionId", false},
        });
        return indexer;
    };
    paramsTable["MapGdRegionInfoParam"] = [tableLoader]() -> auto { return tableLoader(L"MapGdRegionInfoParam"); };
}

template<> void ParamTableIndexer<MapGdRegionInfo>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,mapRegionId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u\n",
            this->paramId(i),
            param->disableParam_NT,
            param->mapRegionId
        );
    }
    fclose(f);
}

}
