#include "../luabindings.h"
#include "../defs/SpEffectSetParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<SpEffectSetParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerSpEffectSetParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["SpEffectSetParam"]; usertype) return;
        auto indexerSpEffectSetParam = state->new_usertype<ParamTableIndexer<SpEffectSetParam>>("SpEffectSetParamTableIndexer");
        indexerSpEffectSetParam["count"] = sol::property(&ParamTableIndexer<SpEffectSetParam>::count);
        indexerSpEffectSetParam["__index"] = &ParamTableIndexer<SpEffectSetParam>::at;
        indexerSpEffectSetParam["id"] = &ParamTableIndexer<SpEffectSetParam>::paramId;
        indexerSpEffectSetParam["get"] = &ParamTableIndexer<SpEffectSetParam>::get;
        indexerSpEffectSetParam["exportToCsv"] = &ParamTableIndexer<SpEffectSetParam>::exportToCsv;
        indexerSpEffectSetParam["importFromCsv"] = &ParamTableIndexer<SpEffectSetParam>::importFromCsv;
        auto utSpEffectSetParam = state->new_usertype<SpEffectSetParam>("SpEffectSetParam");
        utSpEffectSetParam["spEffectId1"] = &SpEffectSetParam::spEffectId1;
        utSpEffectSetParam["spEffectId2"] = &SpEffectSetParam::spEffectId2;
        utSpEffectSetParam["spEffectId3"] = &SpEffectSetParam::spEffectId3;
        utSpEffectSetParam["spEffectId4"] = &SpEffectSetParam::spEffectId4;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<SpEffectSetParam>>(state, L"SpEffectSetParam");
        indexer->setFieldNames({
            {"spEffectId1", false},
            {"spEffectId2", false},
            {"spEffectId3", false},
            {"spEffectId4", false},
        });
        return indexer;
    };
    paramsTable["SpEffectSetParam"] = tableLoader;
}

template<> void ParamTableIndexer<SpEffectSetParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,spEffectId1,spEffectId2,spEffectId3,spEffectId4\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%d\n",
            this->paramId(i),
            param->spEffectId1,
            param->spEffectId2,
            param->spEffectId3,
            param->spEffectId4
        );
    }
    fclose(f);
}

}
