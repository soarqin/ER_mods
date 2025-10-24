#include "../luabindings.h"
#include "../defs/MapGdRegionInfo.h"

namespace paramadjuster::params {

void registerMapGdRegionInfo(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MapGdRegionInfo"]; usertype) return;
        auto indexerMapGdRegionInfo = state->new_usertype<ParamTableIndexer<MapGdRegionInfo>>("MapGdRegionInfoTableIndexer");
        indexerMapGdRegionInfo["count"] = sol::property(&ParamTableIndexer<MapGdRegionInfo>::count);
        indexerMapGdRegionInfo["__index"] = &ParamTableIndexer<MapGdRegionInfo>::at;
        indexerMapGdRegionInfo["id"] = &ParamTableIndexer<MapGdRegionInfo>::paramId;
        indexerMapGdRegionInfo["get"] = &ParamTableIndexer<MapGdRegionInfo>::get;
        auto utMapGdRegionInfo = state->new_usertype<MapGdRegionInfo>("MapGdRegionInfo");
        utMapGdRegionInfo["disableParam_NT"] = sol::property([](MapGdRegionInfo &param) -> uint8_t { return param.disableParam_NT; }, [](MapGdRegionInfo &param, uint8_t value) { param.disableParam_NT = value; });
        utMapGdRegionInfo["mapRegionId"] = &MapGdRegionInfo::mapRegionId;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<MapGdRegionInfo>>(gParamMgr.findTable(L"MapGdRegionInfo")); };
    paramsTable["MapGdRegionInfoParam"] = tableLoader;
}

}
