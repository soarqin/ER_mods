#include "../luabindings.h"
#include "../defs/MapPieceTexParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<MapPieceTexParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerMapPieceTexParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MapPieceTexParam"]; usertype) return;
        auto indexerMapPieceTexParam = state->new_usertype<ParamTableIndexer<MapPieceTexParam>>("MapPieceTexParamTableIndexer");
        indexerMapPieceTexParam["count"] = sol::property(&ParamTableIndexer<MapPieceTexParam>::count);
        indexerMapPieceTexParam["__index"] = &ParamTableIndexer<MapPieceTexParam>::at;
        indexerMapPieceTexParam["id"] = &ParamTableIndexer<MapPieceTexParam>::paramId;
        indexerMapPieceTexParam["get"] = &ParamTableIndexer<MapPieceTexParam>::get;
        indexerMapPieceTexParam["exportToCsv"] = &ParamTableIndexer<MapPieceTexParam>::exportToCsv;
        indexerMapPieceTexParam["importFromCsv"] = &ParamTableIndexer<MapPieceTexParam>::importFromCsv;
        auto utMapPieceTexParam = state->new_usertype<MapPieceTexParam>("MapPieceTexParam");
        utMapPieceTexParam["disableParam_NT"] = sol::property([](MapPieceTexParam &param) -> uint8_t { return param.disableParam_NT; }, [](MapPieceTexParam &param, uint8_t value) { param.disableParam_NT = value; });
        utMapPieceTexParam["srcR"] = &MapPieceTexParam::srcR;
        utMapPieceTexParam["srcG"] = &MapPieceTexParam::srcG;
        utMapPieceTexParam["srcB"] = &MapPieceTexParam::srcB;
        utMapPieceTexParam["saveMapNameId"] = &MapPieceTexParam::saveMapNameId;
        utMapPieceTexParam["multiPlayAreaId"] = &MapPieceTexParam::multiPlayAreaId;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<MapPieceTexParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<MapPieceTexParam>>(nullptr);
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"srcR", false},
            {"srcG", false},
            {"srcB", false},
            {"saveMapNameId", false},
            {"multiPlayAreaId", false},
        });
        return indexer;
    };
    paramsTable["MapPieceTexParam"] = [tableLoader]() -> auto { return tableLoader(L"MapPieceTexParam"); };
}

template<> void ParamTableIndexer<MapPieceTexParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,srcR,srcG,srcB,saveMapNameId,multiPlayAreaId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%u,%d,%d\n",
            this->paramId(i),
            param->disableParam_NT,
            param->srcR,
            param->srcG,
            param->srcB,
            param->saveMapNameId,
            param->multiPlayAreaId
        );
    }
    fclose(f);
}

}
