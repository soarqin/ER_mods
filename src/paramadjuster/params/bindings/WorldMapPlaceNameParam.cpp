#include "../luabindings.h"
#include "../defs/WorldMapPlaceNameParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<WorldMapPlaceNameParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerWorldMapPlaceNameParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WorldMapPlaceNameParam"]; usertype) return;
        auto indexerWorldMapPlaceNameParam = state->new_usertype<ParamTableIndexer<WorldMapPlaceNameParam>>("WorldMapPlaceNameParamTableIndexer");
        indexerWorldMapPlaceNameParam["count"] = sol::property(&ParamTableIndexer<WorldMapPlaceNameParam>::count);
        indexerWorldMapPlaceNameParam["__index"] = &ParamTableIndexer<WorldMapPlaceNameParam>::at;
        indexerWorldMapPlaceNameParam["id"] = &ParamTableIndexer<WorldMapPlaceNameParam>::paramId;
        indexerWorldMapPlaceNameParam["get"] = &ParamTableIndexer<WorldMapPlaceNameParam>::get;
        indexerWorldMapPlaceNameParam["exportToCsv"] = &ParamTableIndexer<WorldMapPlaceNameParam>::exportToCsv;
        indexerWorldMapPlaceNameParam["importFromCsv"] = &ParamTableIndexer<WorldMapPlaceNameParam>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<WorldMapPlaceNameParam>>(state, L"WorldMapPlaceNameParam");
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"worldMapPieceId", false},
            {"textId", false},
            {"areaNo", false},
            {"gridXNo", false},
            {"gridZNo", false},
            {"posX", false},
            {"posY", false},
            {"posZ", false},
        });
        return indexer;
    };
    paramsTable["WorldMapPlaceNameParam"] = tableLoader;
}

template<> void ParamTableIndexer<WorldMapPlaceNameParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,worldMapPieceId,textId,areaNo,gridXNo,gridZNo,posX,posY,posZ\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%d,%d,%u,%u,%u,%g,%g,%g\n",
            this->paramId(i),
            param->disableParam_NT,
            param->worldMapPieceId,
            param->textId,
            param->areaNo,
            param->gridXNo,
            param->gridZNo,
            param->posX,
            param->posY,
            param->posZ
        );
    }
    fclose(f);
}

}
