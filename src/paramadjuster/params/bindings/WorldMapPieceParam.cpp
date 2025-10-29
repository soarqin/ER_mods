#include "../luabindings.h"
#include "../defs/WorldMapPieceParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<WorldMapPieceParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerWorldMapPieceParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WorldMapPieceParam"]; usertype) return;
        auto indexerWorldMapPieceParam = state->new_usertype<ParamTableIndexer<WorldMapPieceParam>>("WorldMapPieceParamTableIndexer");
        indexerWorldMapPieceParam["count"] = sol::property(&ParamTableIndexer<WorldMapPieceParam>::count);
        indexerWorldMapPieceParam["__index"] = &ParamTableIndexer<WorldMapPieceParam>::at;
        indexerWorldMapPieceParam["id"] = &ParamTableIndexer<WorldMapPieceParam>::paramId;
        indexerWorldMapPieceParam["get"] = &ParamTableIndexer<WorldMapPieceParam>::get;
        indexerWorldMapPieceParam["exportToCsv"] = &ParamTableIndexer<WorldMapPieceParam>::exportToCsv;
        indexerWorldMapPieceParam["importFromCsv"] = &ParamTableIndexer<WorldMapPieceParam>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<WorldMapPieceParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<WorldMapPieceParam>>(nullptr);
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"openEventFlagId", false},
            {"openTravelAreaLeft", false},
            {"openTravelAreaRight", false},
            {"openTravelAreaTop", false},
            {"openTravelAreaBottom", false},
            {"acquisitionEventFlagId", false},
            {"acquisitionEventScale", false},
            {"acquisitionEventCenterX", false},
            {"acquisitionEventCenterY", false},
            {"acquisitionEventResScale", false},
            {"acquisitionEventResOffsetX", false},
            {"acquisitionEventResOffsetY", false},
        });
        return indexer;
    };
    paramsTable["WorldMapPieceParam"] = [tableLoader]() -> auto { return tableLoader(L"WorldMapPieceParam"); };
}

template<> void ParamTableIndexer<WorldMapPieceParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,openEventFlagId,openTravelAreaLeft,openTravelAreaRight,openTravelAreaTop,openTravelAreaBottom,acquisitionEventFlagId,acquisitionEventScale,acquisitionEventCenterX,acquisitionEventCenterY,acquisitionEventResScale,acquisitionEventResOffsetX,acquisitionEventResOffsetY\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%g,%g,%g,%g,%u,%g,%g,%g,%g,%g,%g\n",
            this->paramId(i),
            param->disableParam_NT,
            param->openEventFlagId,
            param->openTravelAreaLeft,
            param->openTravelAreaRight,
            param->openTravelAreaTop,
            param->openTravelAreaBottom,
            param->acquisitionEventFlagId,
            param->acquisitionEventScale,
            param->acquisitionEventCenterX,
            param->acquisitionEventCenterY,
            param->acquisitionEventResScale,
            param->acquisitionEventResOffsetX,
            param->acquisitionEventResOffsetY
        );
    }
    fclose(f);
}

}
