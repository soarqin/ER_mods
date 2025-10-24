#include "../luabindings.h"
#include "../defs/WorldMapPieceParam.h"

namespace paramadjuster::params {

void registerWorldMapPieceParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WorldMapPieceParam"]; usertype) return;
        auto indexerWorldMapPieceParam = state->new_usertype<ParamTableIndexer<WorldMapPieceParam>>("WorldMapPieceParamTableIndexer");
        indexerWorldMapPieceParam["count"] = sol::property(&ParamTableIndexer<WorldMapPieceParam>::count);
        indexerWorldMapPieceParam["__index"] = &ParamTableIndexer<WorldMapPieceParam>::at;
        indexerWorldMapPieceParam["id"] = &ParamTableIndexer<WorldMapPieceParam>::paramId;
        indexerWorldMapPieceParam["get"] = &ParamTableIndexer<WorldMapPieceParam>::get;
        auto utWorldMapPieceParam = state->new_usertype<WorldMapPieceParam>("WorldMapPieceParam");
        utWorldMapPieceParam["disableParam_NT"] = sol::property([](WorldMapPieceParam &param) -> uint8_t { return param.disableParam_NT; }, [](WorldMapPieceParam &param, uint8_t value) { param.disableParam_NT = value; });
        utWorldMapPieceParam["openEventFlagId"] = &WorldMapPieceParam::openEventFlagId;
        utWorldMapPieceParam["openTravelAreaLeft"] = &WorldMapPieceParam::openTravelAreaLeft;
        utWorldMapPieceParam["openTravelAreaRight"] = &WorldMapPieceParam::openTravelAreaRight;
        utWorldMapPieceParam["openTravelAreaTop"] = &WorldMapPieceParam::openTravelAreaTop;
        utWorldMapPieceParam["openTravelAreaBottom"] = &WorldMapPieceParam::openTravelAreaBottom;
        utWorldMapPieceParam["acquisitionEventFlagId"] = &WorldMapPieceParam::acquisitionEventFlagId;
        utWorldMapPieceParam["acquisitionEventScale"] = &WorldMapPieceParam::acquisitionEventScale;
        utWorldMapPieceParam["acquisitionEventCenterX"] = &WorldMapPieceParam::acquisitionEventCenterX;
        utWorldMapPieceParam["acquisitionEventCenterY"] = &WorldMapPieceParam::acquisitionEventCenterY;
        utWorldMapPieceParam["acquisitionEventResScale"] = &WorldMapPieceParam::acquisitionEventResScale;
        utWorldMapPieceParam["acquisitionEventResOffsetX"] = &WorldMapPieceParam::acquisitionEventResOffsetX;
        utWorldMapPieceParam["acquisitionEventResOffsetY"] = &WorldMapPieceParam::acquisitionEventResOffsetY;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<WorldMapPieceParam>>(gParamMgr.findTable(L"WorldMapPieceParam")); };
    paramsTable["WorldMapPieceParam"] = tableLoader;
}

}
