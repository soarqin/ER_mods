#include "../luabindings.h"
#include "../defs/MapGridCreateHeightLimitInfo.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<MapGridCreateHeightLimitInfo>::exportToCsvImpl(const std::wstring &csvPath);

void registerMapGridCreateHeightLimitInfo(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MapGridCreateHeightLimitInfo"]; usertype) return;
        auto indexerMapGridCreateHeightLimitInfo = state->new_usertype<ParamTableIndexer<MapGridCreateHeightLimitInfo>>("MapGridCreateHeightLimitInfoTableIndexer");
        indexerMapGridCreateHeightLimitInfo["count"] = sol::property(&ParamTableIndexer<MapGridCreateHeightLimitInfo>::count);
        indexerMapGridCreateHeightLimitInfo["__index"] = &ParamTableIndexer<MapGridCreateHeightLimitInfo>::at;
        indexerMapGridCreateHeightLimitInfo["id"] = &ParamTableIndexer<MapGridCreateHeightLimitInfo>::paramId;
        indexerMapGridCreateHeightLimitInfo["get"] = &ParamTableIndexer<MapGridCreateHeightLimitInfo>::get;
        indexerMapGridCreateHeightLimitInfo["exportToCsv"] = &ParamTableIndexer<MapGridCreateHeightLimitInfo>::exportToCsv;
        indexerMapGridCreateHeightLimitInfo["importFromCsv"] = &ParamTableIndexer<MapGridCreateHeightLimitInfo>::importFromCsv;
        auto utMapGridCreateHeightLimitInfo = state->new_usertype<MapGridCreateHeightLimitInfo>("MapGridCreateHeightLimitInfo");
        utMapGridCreateHeightLimitInfo["GridEnableCreateHeightMin"] = &MapGridCreateHeightLimitInfo::GridEnableCreateHeightMin;
        utMapGridCreateHeightLimitInfo["GridEnableCreateHeightMax"] = &MapGridCreateHeightLimitInfo::GridEnableCreateHeightMax;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<MapGridCreateHeightLimitInfo>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<MapGridCreateHeightLimitInfo>>(nullptr);
        indexer->setFieldNames({
            {"GridEnableCreateHeightMin", false},
            {"GridEnableCreateHeightMax", false},
        });
        return indexer;
    };
    paramsTable["MapGridCreateHeightLimitInfoParam"] = [tableLoader]() -> auto { return tableLoader(L"MapGridCreateHeightLimitInfoParam"); };
}

template<> void ParamTableIndexer<MapGridCreateHeightLimitInfo>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,GridEnableCreateHeightMin,GridEnableCreateHeightMax\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g,%g\n",
            this->paramId(i),
            param->GridEnableCreateHeightMin,
            param->GridEnableCreateHeightMax
        );
    }
    fclose(f);
}

}
