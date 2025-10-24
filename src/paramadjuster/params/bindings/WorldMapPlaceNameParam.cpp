#include "../luabindings.h"
#include "../defs/WorldMapPlaceNameParam.h"

namespace paramadjuster::params {

void registerWorldMapPlaceNameParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WorldMapPlaceNameParam"]; usertype) return;
        auto indexerWorldMapPlaceNameParam = state->new_usertype<ParamTableIndexer<WorldMapPlaceNameParam>>("WorldMapPlaceNameParamTableIndexer");
        indexerWorldMapPlaceNameParam["count"] = sol::property(&ParamTableIndexer<WorldMapPlaceNameParam>::count);
        indexerWorldMapPlaceNameParam["__index"] = &ParamTableIndexer<WorldMapPlaceNameParam>::at;
        indexerWorldMapPlaceNameParam["id"] = &ParamTableIndexer<WorldMapPlaceNameParam>::paramId;
        indexerWorldMapPlaceNameParam["get"] = &ParamTableIndexer<WorldMapPlaceNameParam>::get;
        auto utWorldMapPlaceNameParam = state->new_usertype<WorldMapPlaceNameParam>("WorldMapPlaceNameParam");
        utWorldMapPlaceNameParam["disableParam_NT"] = sol::property([](WorldMapPlaceNameParam &param) -> uint8_t { return param.disableParam_NT; }, [](WorldMapPlaceNameParam &param, uint8_t value) { param.disableParam_NT = value; });
        utWorldMapPlaceNameParam["worldMapPieceId"] = &WorldMapPlaceNameParam::worldMapPieceId;
        utWorldMapPlaceNameParam["textId"] = &WorldMapPlaceNameParam::textId;
        utWorldMapPlaceNameParam["areaNo"] = &WorldMapPlaceNameParam::areaNo;
        utWorldMapPlaceNameParam["gridXNo"] = &WorldMapPlaceNameParam::gridXNo;
        utWorldMapPlaceNameParam["gridZNo"] = &WorldMapPlaceNameParam::gridZNo;
        utWorldMapPlaceNameParam["posX"] = &WorldMapPlaceNameParam::posX;
        utWorldMapPlaceNameParam["posY"] = &WorldMapPlaceNameParam::posY;
        utWorldMapPlaceNameParam["posZ"] = &WorldMapPlaceNameParam::posZ;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<WorldMapPlaceNameParam>>(gParamMgr.findTable(L"WorldMapPlaceNameParam")); };
    paramsTable["WorldMapPlaceNameParam"] = tableLoader;
}

}
