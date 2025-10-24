#include "../luabindings.h"
#include "../defs/MapNameTexParam_m61.h"

namespace paramadjuster::params {

void registerMapNameTexParam_m61(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MapNameTexParam_m61"]; usertype) return;
        auto indexerMapNameTexParam_m61 = state->new_usertype<ParamTableIndexer<MapNameTexParam_m61>>("MapNameTexParam_m61TableIndexer");
        indexerMapNameTexParam_m61["count"] = sol::property(&ParamTableIndexer<MapNameTexParam_m61>::count);
        indexerMapNameTexParam_m61["__index"] = &ParamTableIndexer<MapNameTexParam_m61>::at;
        indexerMapNameTexParam_m61["id"] = &ParamTableIndexer<MapNameTexParam_m61>::paramId;
        indexerMapNameTexParam_m61["get"] = &ParamTableIndexer<MapNameTexParam_m61>::get;
        auto utMapNameTexParam_m61 = state->new_usertype<MapNameTexParam_m61>("MapNameTexParam_m61");
        utMapNameTexParam_m61["disableParam_NT"] = sol::property([](MapNameTexParam_m61 &param) -> uint8_t { return param.disableParam_NT; }, [](MapNameTexParam_m61 &param, uint8_t value) { param.disableParam_NT = value; });
        utMapNameTexParam_m61["srcR"] = &MapNameTexParam_m61::srcR;
        utMapNameTexParam_m61["srcG"] = &MapNameTexParam_m61::srcG;
        utMapNameTexParam_m61["srcB"] = &MapNameTexParam_m61::srcB;
        utMapNameTexParam_m61["mapNameId"] = &MapNameTexParam_m61::mapNameId;
        utMapNameTexParam_m61["unknown_0xc"] = &MapNameTexParam_m61::unknown_0xc;
        utMapNameTexParam_m61["unknown_0x10"] = &MapNameTexParam_m61::unknown_0x10;
        utMapNameTexParam_m61["unknown_0x11"] = &MapNameTexParam_m61::unknown_0x11;
        utMapNameTexParam_m61["unknown_0x12"] = &MapNameTexParam_m61::unknown_0x12;
        utMapNameTexParam_m61["unknown_0x13"] = &MapNameTexParam_m61::unknown_0x13;
        utMapNameTexParam_m61["unknown_0x14"] = &MapNameTexParam_m61::unknown_0x14;
        utMapNameTexParam_m61["unknownTextID_1"] = &MapNameTexParam_m61::unknownTextID_1;
        utMapNameTexParam_m61["unknownTextID_2"] = &MapNameTexParam_m61::unknownTextID_2;
        utMapNameTexParam_m61["unknown_0x20"] = &MapNameTexParam_m61::unknown_0x20;
        utMapNameTexParam_m61["unknown_0x24"] = &MapNameTexParam_m61::unknown_0x24;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<MapNameTexParam_m61>>(gParamMgr.findTable(L"MapNameTexParam_m61")); };
    paramsTable["MapNameTexParam_m61"] = tableLoader;
}

}
