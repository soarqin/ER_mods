#include "../luabindings.h"
#include "../defs/CommonSystemParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<CommonSystemParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerCommonSystemParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["CommonSystemParam"]; usertype) return;
        auto indexerCommonSystemParam = state->new_usertype<ParamTableIndexer<CommonSystemParam>>("CommonSystemParamTableIndexer");
        indexerCommonSystemParam["count"] = sol::property(&ParamTableIndexer<CommonSystemParam>::count);
        indexerCommonSystemParam["__index"] = &ParamTableIndexer<CommonSystemParam>::at;
        indexerCommonSystemParam["id"] = &ParamTableIndexer<CommonSystemParam>::paramId;
        indexerCommonSystemParam["get"] = &ParamTableIndexer<CommonSystemParam>::get;
        indexerCommonSystemParam["exportToCsv"] = &ParamTableIndexer<CommonSystemParam>::exportToCsv;
        indexerCommonSystemParam["importFromCsv"] = &ParamTableIndexer<CommonSystemParam>::importFromCsv;
        auto utCommonSystemParam = state->new_usertype<CommonSystemParam>("CommonSystemParam");
        utCommonSystemParam["mapSaveMapNameIdOnGameStart"] = &CommonSystemParam::mapSaveMapNameIdOnGameStart;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<CommonSystemParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<CommonSystemParam>>(nullptr);
        indexer->setFieldNames({
            {"mapSaveMapNameIdOnGameStart", false},
        });
        return indexer;
    };
    paramsTable["CommonSystemParam"] = [tableLoader]() -> auto { return tableLoader(L"CommonSystemParam"); };
}

template<> void ParamTableIndexer<CommonSystemParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,mapSaveMapNameIdOnGameStart\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u\n",
            this->paramId(i),
            param->mapSaveMapNameIdOnGameStart
        );
    }
    fclose(f);
}

}
