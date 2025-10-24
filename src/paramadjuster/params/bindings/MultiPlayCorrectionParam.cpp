#include "../luabindings.h"
#include "../defs/MultiPlayCorrectionParam.h"

namespace paramadjuster::params {

void registerMultiPlayCorrectionParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MultiPlayCorrectionParam"]; usertype) return;
        auto indexerMultiPlayCorrectionParam = state->new_usertype<ParamTableIndexer<MultiPlayCorrectionParam>>("MultiPlayCorrectionParamTableIndexer");
        indexerMultiPlayCorrectionParam["count"] = sol::property(&ParamTableIndexer<MultiPlayCorrectionParam>::count);
        indexerMultiPlayCorrectionParam["__index"] = &ParamTableIndexer<MultiPlayCorrectionParam>::at;
        indexerMultiPlayCorrectionParam["id"] = &ParamTableIndexer<MultiPlayCorrectionParam>::paramId;
        indexerMultiPlayCorrectionParam["get"] = &ParamTableIndexer<MultiPlayCorrectionParam>::get;
        auto utMultiPlayCorrectionParam = state->new_usertype<MultiPlayCorrectionParam>("MultiPlayCorrectionParam");
        utMultiPlayCorrectionParam["disableParam_NT"] = sol::property([](MultiPlayCorrectionParam &param) -> uint8_t { return param.disableParam_NT; }, [](MultiPlayCorrectionParam &param, uint8_t value) { param.disableParam_NT = value; });
        utMultiPlayCorrectionParam["client1SpEffectId"] = &MultiPlayCorrectionParam::client1SpEffectId;
        utMultiPlayCorrectionParam["client2SpEffectId"] = &MultiPlayCorrectionParam::client2SpEffectId;
        utMultiPlayCorrectionParam["client3SpEffectId"] = &MultiPlayCorrectionParam::client3SpEffectId;
        utMultiPlayCorrectionParam["bOverrideSpEffect"] = &MultiPlayCorrectionParam::bOverrideSpEffect;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<MultiPlayCorrectionParam>>(gParamMgr.findTable(L"MultiPlayCorrectionParam")); };
    paramsTable["MultiPlayCorrectionParam"] = tableLoader;
}

}
