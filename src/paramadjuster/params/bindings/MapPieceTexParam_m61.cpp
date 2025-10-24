#include "../luabindings.h"
#include "../defs/MapPieceTexParam_m61.h"

namespace paramadjuster::params {

void registerMapPieceTexParam_m61(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MapPieceTexParam_m61"]; usertype) return;
        auto indexerMapPieceTexParam_m61 = state->new_usertype<ParamTableIndexer<MapPieceTexParam_m61>>("MapPieceTexParam_m61TableIndexer");
        indexerMapPieceTexParam_m61["count"] = sol::property(&ParamTableIndexer<MapPieceTexParam_m61>::count);
        indexerMapPieceTexParam_m61["__index"] = &ParamTableIndexer<MapPieceTexParam_m61>::at;
        indexerMapPieceTexParam_m61["id"] = &ParamTableIndexer<MapPieceTexParam_m61>::paramId;
        indexerMapPieceTexParam_m61["get"] = &ParamTableIndexer<MapPieceTexParam_m61>::get;
        auto utMapPieceTexParam_m61 = state->new_usertype<MapPieceTexParam_m61>("MapPieceTexParam_m61");
        utMapPieceTexParam_m61["disableParam_NT"] = sol::property([](MapPieceTexParam_m61 &param) -> uint8_t { return param.disableParam_NT; }, [](MapPieceTexParam_m61 &param, uint8_t value) { param.disableParam_NT = value; });
        utMapPieceTexParam_m61["srcR"] = &MapPieceTexParam_m61::srcR;
        utMapPieceTexParam_m61["srcG"] = &MapPieceTexParam_m61::srcG;
        utMapPieceTexParam_m61["srcB"] = &MapPieceTexParam_m61::srcB;
        utMapPieceTexParam_m61["saveMapNameId"] = &MapPieceTexParam_m61::saveMapNameId;
        utMapPieceTexParam_m61["multiPlayAreaId"] = &MapPieceTexParam_m61::multiPlayAreaId;
        utMapPieceTexParam_m61["unknown_0x10"] = &MapPieceTexParam_m61::unknown_0x10;
        utMapPieceTexParam_m61["unknown_0x14"] = &MapPieceTexParam_m61::unknown_0x14;
        utMapPieceTexParam_m61["unknown_0x18"] = &MapPieceTexParam_m61::unknown_0x18;
        utMapPieceTexParam_m61["unknown_0x1c"] = &MapPieceTexParam_m61::unknown_0x1c;
        utMapPieceTexParam_m61["unknownPlayRegion_1"] = &MapPieceTexParam_m61::unknownPlayRegion_1;
        utMapPieceTexParam_m61["unknownPlayRegion_2"] = &MapPieceTexParam_m61::unknownPlayRegion_2;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<MapPieceTexParam_m61>>(gParamMgr.findTable(L"MapPieceTexParam_m61")); };
    paramsTable["MapPieceTexParam_m61"] = tableLoader;
}

}
