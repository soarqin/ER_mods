#include "../luabindings.h"
#include "../defs/SeActivationRangeParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<SeActivationRangeParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerSeActivationRangeParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["SeActivationRangeParam"]; usertype) return;
        auto indexerSeActivationRangeParam = state->new_usertype<ParamTableIndexer<SeActivationRangeParam>>("SeActivationRangeParamTableIndexer");
        indexerSeActivationRangeParam["count"] = sol::property(&ParamTableIndexer<SeActivationRangeParam>::count);
        indexerSeActivationRangeParam["__index"] = &ParamTableIndexer<SeActivationRangeParam>::at;
        indexerSeActivationRangeParam["id"] = &ParamTableIndexer<SeActivationRangeParam>::paramId;
        indexerSeActivationRangeParam["get"] = &ParamTableIndexer<SeActivationRangeParam>::get;
        indexerSeActivationRangeParam["exportToCsv"] = &ParamTableIndexer<SeActivationRangeParam>::exportToCsv;
        indexerSeActivationRangeParam["importFromCsv"] = &ParamTableIndexer<SeActivationRangeParam>::importFromCsv;
        auto utSeActivationRangeParam = state->new_usertype<SeActivationRangeParam>("SeActivationRangeParam");
        utSeActivationRangeParam["activateRange"] = &SeActivationRangeParam::activateRange;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<SeActivationRangeParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<SeActivationRangeParam>>(nullptr);
        indexer->setFieldNames({
            {"activateRange", false},
        });
        return indexer;
    };
    paramsTable["SeActivationRangeParam"] = [tableLoader]() -> auto { return tableLoader(L"SeActivationRangeParam"); };
}

template<> void ParamTableIndexer<SeActivationRangeParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,activateRange\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g\n",
            this->paramId(i),
            param->activateRange
        );
    }
    fclose(f);
}

}
