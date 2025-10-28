#include "../luabindings.h"
#include "../defs/MapNameTexParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<MapNameTexParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerMapNameTexParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MapNameTexParam"]; usertype) return;
        auto indexerMapNameTexParam = state->new_usertype<ParamTableIndexer<MapNameTexParam>>("MapNameTexParamTableIndexer");
        indexerMapNameTexParam["count"] = sol::property(&ParamTableIndexer<MapNameTexParam>::count);
        indexerMapNameTexParam["__index"] = &ParamTableIndexer<MapNameTexParam>::at;
        indexerMapNameTexParam["id"] = &ParamTableIndexer<MapNameTexParam>::paramId;
        indexerMapNameTexParam["get"] = &ParamTableIndexer<MapNameTexParam>::get;
        indexerMapNameTexParam["exportToCsv"] = &ParamTableIndexer<MapNameTexParam>::exportToCsv;
        indexerMapNameTexParam["importFromCsv"] = &ParamTableIndexer<MapNameTexParam>::importFromCsv;
        auto utMapNameTexParam = state->new_usertype<MapNameTexParam>("MapNameTexParam");
        utMapNameTexParam["disableParam_NT"] = sol::property([](MapNameTexParam &param) -> uint8_t { return param.disableParam_NT; }, [](MapNameTexParam &param, uint8_t value) { param.disableParam_NT = value; });
        utMapNameTexParam["srcR"] = &MapNameTexParam::srcR;
        utMapNameTexParam["srcG"] = &MapNameTexParam::srcG;
        utMapNameTexParam["srcB"] = &MapNameTexParam::srcB;
        utMapNameTexParam["mapNameId"] = &MapNameTexParam::mapNameId;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<MapNameTexParam>>(state, L"MapNameTexParam");
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"srcR", false},
            {"srcG", false},
            {"srcB", false},
            {"mapNameId", false},
        });
        return indexer;
    };
    paramsTable["MapNameTexParam"] = tableLoader;
}

template<> void ParamTableIndexer<MapNameTexParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,srcR,srcG,srcB,mapNameId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%u,%d\n",
            this->paramId(i),
            param->disableParam_NT,
            param->srcR,
            param->srcG,
            param->srcB,
            param->mapNameId
        );
    }
    fclose(f);
}

}
