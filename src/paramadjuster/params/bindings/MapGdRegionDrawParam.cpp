#include "../luabindings.h"
#include "../defs/MapGdRegionDrawParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<MapGdRegionDrawParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerMapGdRegionDrawParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MapGdRegionDrawParam"]; usertype) return;
        auto indexerMapGdRegionDrawParam = state->new_usertype<ParamTableIndexer<MapGdRegionDrawParam>>("MapGdRegionDrawParamTableIndexer");
        indexerMapGdRegionDrawParam["count"] = sol::property(&ParamTableIndexer<MapGdRegionDrawParam>::count);
        indexerMapGdRegionDrawParam["__index"] = &ParamTableIndexer<MapGdRegionDrawParam>::at;
        indexerMapGdRegionDrawParam["id"] = &ParamTableIndexer<MapGdRegionDrawParam>::paramId;
        indexerMapGdRegionDrawParam["get"] = &ParamTableIndexer<MapGdRegionDrawParam>::get;
        indexerMapGdRegionDrawParam["exportToCsv"] = &ParamTableIndexer<MapGdRegionDrawParam>::exportToCsv;
        indexerMapGdRegionDrawParam["importFromCsv"] = &ParamTableIndexer<MapGdRegionDrawParam>::importFromCsv;
        auto utMapGdRegionDrawParam = state->new_usertype<MapGdRegionDrawParam>("MapGdRegionDrawParam");
        utMapGdRegionDrawParam["disableParam_NT"] = sol::property([](MapGdRegionDrawParam &param) -> uint8_t { return param.disableParam_NT; }, [](MapGdRegionDrawParam &param, uint8_t value) { param.disableParam_NT = value; });
        utMapGdRegionDrawParam["overrideIVLocalLightScale"] = &MapGdRegionDrawParam::overrideIVLocalLightScale;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<MapGdRegionDrawParam>>(state, L"MapGdRegionDrawParam");
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"overrideIVLocalLightScale", false},
        });
        return indexer;
    };
    paramsTable["MapGdRegionDrawParam"] = tableLoader;
}

template<> void ParamTableIndexer<MapGdRegionDrawParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,overrideIVLocalLightScale\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%g\n",
            this->paramId(i),
            param->disableParam_NT,
            param->overrideIVLocalLightScale
        );
    }
    fclose(f);
}

}
