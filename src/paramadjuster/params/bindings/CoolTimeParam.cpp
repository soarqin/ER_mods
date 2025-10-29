#include "../luabindings.h"
#include "../defs/CoolTimeParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<CoolTimeParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerCoolTimeParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["CoolTimeParam"]; usertype) return;
        auto indexerCoolTimeParam = state->new_usertype<ParamTableIndexer<CoolTimeParam>>("CoolTimeParamTableIndexer");
        indexerCoolTimeParam["count"] = sol::property(&ParamTableIndexer<CoolTimeParam>::count);
        indexerCoolTimeParam["__index"] = &ParamTableIndexer<CoolTimeParam>::at;
        indexerCoolTimeParam["id"] = &ParamTableIndexer<CoolTimeParam>::paramId;
        indexerCoolTimeParam["get"] = &ParamTableIndexer<CoolTimeParam>::get;
        indexerCoolTimeParam["exportToCsv"] = &ParamTableIndexer<CoolTimeParam>::exportToCsv;
        indexerCoolTimeParam["importFromCsv"] = &ParamTableIndexer<CoolTimeParam>::importFromCsv;
        auto utCoolTimeParam = state->new_usertype<CoolTimeParam>("CoolTimeParam");
        utCoolTimeParam["limitationTime_0"] = &CoolTimeParam::limitationTime_0;
        utCoolTimeParam["observeTime_0"] = &CoolTimeParam::observeTime_0;
        utCoolTimeParam["limitationTime_1"] = &CoolTimeParam::limitationTime_1;
        utCoolTimeParam["observeTime_1"] = &CoolTimeParam::observeTime_1;
        utCoolTimeParam["limitationTime_2"] = &CoolTimeParam::limitationTime_2;
        utCoolTimeParam["observeTime_2"] = &CoolTimeParam::observeTime_2;
        utCoolTimeParam["limitationTime_3"] = &CoolTimeParam::limitationTime_3;
        utCoolTimeParam["observeTime_3"] = &CoolTimeParam::observeTime_3;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<CoolTimeParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<CoolTimeParam>>(nullptr);
        indexer->setFieldNames({
            {"limitationTime_0", false},
            {"observeTime_0", false},
            {"limitationTime_1", false},
            {"observeTime_1", false},
            {"limitationTime_2", false},
            {"observeTime_2", false},
            {"limitationTime_3", false},
            {"observeTime_3", false},
        });
        return indexer;
    };
    paramsTable["CoolTimeParam"] = [tableLoader]() -> auto { return tableLoader(L"CoolTimeParam"); };
}

template<> void ParamTableIndexer<CoolTimeParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,limitationTime_0,observeTime_0,limitationTime_1,observeTime_1,limitationTime_2,observeTime_2,limitationTime_3,observeTime_3\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g,%g,%g,%g,%g,%g,%g,%g\n",
            this->paramId(i),
            param->limitationTime_0,
            param->observeTime_0,
            param->limitationTime_1,
            param->observeTime_1,
            param->limitationTime_2,
            param->observeTime_2,
            param->limitationTime_3,
            param->observeTime_3
        );
    }
    fclose(f);
}

}
