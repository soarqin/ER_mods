#include "../luabindings.h"
#include "../defs/MapGdRegionDrawParam.h"

namespace paramadjuster::params {

void registerMapGdRegionDrawParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MapGdRegionDrawParam"]; usertype) return;
        auto indexerMapGdRegionDrawParam = state->new_usertype<ParamTableIndexer<MapGdRegionDrawParam>>("MapGdRegionDrawParamTableIndexer");
        indexerMapGdRegionDrawParam["count"] = sol::property(&ParamTableIndexer<MapGdRegionDrawParam>::count);
        indexerMapGdRegionDrawParam["__index"] = &ParamTableIndexer<MapGdRegionDrawParam>::at;
        indexerMapGdRegionDrawParam["id"] = &ParamTableIndexer<MapGdRegionDrawParam>::paramId;
        indexerMapGdRegionDrawParam["get"] = &ParamTableIndexer<MapGdRegionDrawParam>::get;
        auto utMapGdRegionDrawParam = state->new_usertype<MapGdRegionDrawParam>("MapGdRegionDrawParam");
        utMapGdRegionDrawParam["disableParam_NT"] = sol::property([](MapGdRegionDrawParam &param) -> uint8_t { return param.disableParam_NT; }, [](MapGdRegionDrawParam &param, uint8_t value) { param.disableParam_NT = value; });
        utMapGdRegionDrawParam["overrideIVLocalLightScale"] = &MapGdRegionDrawParam::overrideIVLocalLightScale;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<MapGdRegionDrawParam>>(gParamMgr.findTable(L"MapGdRegionDrawParam")); };
    paramsTable["MapGdRegionDrawParam"] = tableLoader;
}

}
