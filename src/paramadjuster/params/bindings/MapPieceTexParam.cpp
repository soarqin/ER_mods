#include "../luabindings.h"
#include "../defs/MapPieceTexParam.h"

namespace paramadjuster::params {

void registerMapPieceTexParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MapPieceTexParam"]; usertype) return;
        auto indexerMapPieceTexParam = state->new_usertype<ParamTableIndexer<MapPieceTexParam>>("MapPieceTexParamTableIndexer");
        indexerMapPieceTexParam["count"] = sol::property(&ParamTableIndexer<MapPieceTexParam>::count);
        indexerMapPieceTexParam["__index"] = &ParamTableIndexer<MapPieceTexParam>::at;
        indexerMapPieceTexParam["id"] = &ParamTableIndexer<MapPieceTexParam>::paramId;
        indexerMapPieceTexParam["get"] = &ParamTableIndexer<MapPieceTexParam>::get;
        auto utMapPieceTexParam = state->new_usertype<MapPieceTexParam>("MapPieceTexParam");
        utMapPieceTexParam["disableParam_NT"] = sol::property([](MapPieceTexParam &param) -> uint8_t { return param.disableParam_NT; }, [](MapPieceTexParam &param, uint8_t value) { param.disableParam_NT = value; });
        utMapPieceTexParam["srcR"] = &MapPieceTexParam::srcR;
        utMapPieceTexParam["srcG"] = &MapPieceTexParam::srcG;
        utMapPieceTexParam["srcB"] = &MapPieceTexParam::srcB;
        utMapPieceTexParam["saveMapNameId"] = &MapPieceTexParam::saveMapNameId;
        utMapPieceTexParam["multiPlayAreaId"] = &MapPieceTexParam::multiPlayAreaId;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<MapPieceTexParam>>(gParamMgr.findTable(L"MapPieceTexParam")); };
    paramsTable["MapPieceTexParam"] = tableLoader;
}

}
