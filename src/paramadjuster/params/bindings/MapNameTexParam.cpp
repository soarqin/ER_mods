#include "../luabindings.h"
#include "../defs/MapNameTexParam.h"

namespace paramadjuster::params {

void registerMapNameTexParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MapNameTexParam"]; usertype) return;
        auto indexerMapNameTexParam = state->new_usertype<ParamTableIndexer<MapNameTexParam>>("MapNameTexParamTableIndexer");
        indexerMapNameTexParam["count"] = sol::property(&ParamTableIndexer<MapNameTexParam>::count);
        indexerMapNameTexParam["__index"] = &ParamTableIndexer<MapNameTexParam>::at;
        indexerMapNameTexParam["id"] = &ParamTableIndexer<MapNameTexParam>::paramId;
        indexerMapNameTexParam["get"] = &ParamTableIndexer<MapNameTexParam>::get;
        auto utMapNameTexParam = state->new_usertype<MapNameTexParam>("MapNameTexParam");
        utMapNameTexParam["disableParam_NT"] = sol::property([](MapNameTexParam &param) -> uint8_t { return param.disableParam_NT; }, [](MapNameTexParam &param, uint8_t value) { param.disableParam_NT = value; });
        utMapNameTexParam["srcR"] = &MapNameTexParam::srcR;
        utMapNameTexParam["srcG"] = &MapNameTexParam::srcG;
        utMapNameTexParam["srcB"] = &MapNameTexParam::srcB;
        utMapNameTexParam["mapNameId"] = &MapNameTexParam::mapNameId;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<MapNameTexParam>>(gParamMgr.findTable(L"MapNameTexParam")); };
    paramsTable["MapNameTexParam"] = tableLoader;
}

}
