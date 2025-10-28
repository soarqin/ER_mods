#include "../luabindings.h"
#include "../defs/MultiPlayCorrectionParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<MultiPlayCorrectionParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerMultiPlayCorrectionParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MultiPlayCorrectionParam"]; usertype) return;
        auto indexerMultiPlayCorrectionParam = state->new_usertype<ParamTableIndexer<MultiPlayCorrectionParam>>("MultiPlayCorrectionParamTableIndexer");
        indexerMultiPlayCorrectionParam["count"] = sol::property(&ParamTableIndexer<MultiPlayCorrectionParam>::count);
        indexerMultiPlayCorrectionParam["__index"] = &ParamTableIndexer<MultiPlayCorrectionParam>::at;
        indexerMultiPlayCorrectionParam["id"] = &ParamTableIndexer<MultiPlayCorrectionParam>::paramId;
        indexerMultiPlayCorrectionParam["get"] = &ParamTableIndexer<MultiPlayCorrectionParam>::get;
        indexerMultiPlayCorrectionParam["exportToCsv"] = &ParamTableIndexer<MultiPlayCorrectionParam>::exportToCsv;
        indexerMultiPlayCorrectionParam["importFromCsv"] = &ParamTableIndexer<MultiPlayCorrectionParam>::importFromCsv;
        auto utMultiPlayCorrectionParam = state->new_usertype<MultiPlayCorrectionParam>("MultiPlayCorrectionParam");
        utMultiPlayCorrectionParam["disableParam_NT"] = sol::property([](MultiPlayCorrectionParam &param) -> uint8_t { return param.disableParam_NT; }, [](MultiPlayCorrectionParam &param, uint8_t value) { param.disableParam_NT = value; });
        utMultiPlayCorrectionParam["client1SpEffectId"] = &MultiPlayCorrectionParam::client1SpEffectId;
        utMultiPlayCorrectionParam["client2SpEffectId"] = &MultiPlayCorrectionParam::client2SpEffectId;
        utMultiPlayCorrectionParam["client3SpEffectId"] = &MultiPlayCorrectionParam::client3SpEffectId;
        utMultiPlayCorrectionParam["bOverrideSpEffect"] = &MultiPlayCorrectionParam::bOverrideSpEffect;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<MultiPlayCorrectionParam>>(state, L"MultiPlayCorrectionParam");
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"client1SpEffectId", false},
            {"client2SpEffectId", false},
            {"client3SpEffectId", false},
            {"bOverrideSpEffect", false},
        });
        return indexer;
    };
    paramsTable["MultiPlayCorrectionParam"] = tableLoader;
}

template<> void ParamTableIndexer<MultiPlayCorrectionParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,client1SpEffectId,client2SpEffectId,client3SpEffectId,bOverrideSpEffect\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%d,%d,%d,%u\n",
            this->paramId(i),
            param->disableParam_NT,
            param->client1SpEffectId,
            param->client2SpEffectId,
            param->client3SpEffectId,
            param->bOverrideSpEffect
        );
    }
    fclose(f);
}

}
