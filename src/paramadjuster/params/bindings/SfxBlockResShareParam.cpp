#include "../luabindings.h"
#include "../defs/SfxBlockResShareParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<SfxBlockResShareParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerSfxBlockResShareParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["SfxBlockResShareParam"]; usertype) return;
        auto indexerSfxBlockResShareParam = state->new_usertype<ParamTableIndexer<SfxBlockResShareParam>>("SfxBlockResShareParamTableIndexer");
        indexerSfxBlockResShareParam["count"] = sol::property(&ParamTableIndexer<SfxBlockResShareParam>::count);
        indexerSfxBlockResShareParam["__index"] = &ParamTableIndexer<SfxBlockResShareParam>::at;
        indexerSfxBlockResShareParam["id"] = &ParamTableIndexer<SfxBlockResShareParam>::paramId;
        indexerSfxBlockResShareParam["get"] = &ParamTableIndexer<SfxBlockResShareParam>::get;
        indexerSfxBlockResShareParam["exportToCsv"] = &ParamTableIndexer<SfxBlockResShareParam>::exportToCsv;
        indexerSfxBlockResShareParam["importFromCsv"] = &ParamTableIndexer<SfxBlockResShareParam>::importFromCsv;
        auto utSfxBlockResShareParam = state->new_usertype<SfxBlockResShareParam>("SfxBlockResShareParam");
        utSfxBlockResShareParam["shareBlockRsMapUidVal"] = &SfxBlockResShareParam::shareBlockRsMapUidVal;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<SfxBlockResShareParam>>(state, L"SfxBlockResShareParam");
        indexer->setFieldNames({
            {"shareBlockRsMapUidVal", false},
        });
        return indexer;
    };
    paramsTable["SfxBlockResShareParam"] = tableLoader;
}

template<> void ParamTableIndexer<SfxBlockResShareParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,shareBlockRsMapUidVal\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u\n",
            this->paramId(i),
            param->shareBlockRsMapUidVal
        );
    }
    fclose(f);
}

}
