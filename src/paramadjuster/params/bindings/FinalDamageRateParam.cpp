#include "../luabindings.h"
#include "../defs/FinalDamageRateParam.h"

namespace paramadjuster::params {

void registerFinalDamageRateParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["FinalDamageRateParam"]; usertype) return;
        auto indexerFinalDamageRateParam = state->new_usertype<ParamTableIndexer<FinalDamageRateParam>>("FinalDamageRateParamTableIndexer");
        indexerFinalDamageRateParam["count"] = sol::property(&ParamTableIndexer<FinalDamageRateParam>::count);
        indexerFinalDamageRateParam["__index"] = &ParamTableIndexer<FinalDamageRateParam>::at;
        indexerFinalDamageRateParam["id"] = &ParamTableIndexer<FinalDamageRateParam>::paramId;
        indexerFinalDamageRateParam["get"] = &ParamTableIndexer<FinalDamageRateParam>::get;
        auto utFinalDamageRateParam = state->new_usertype<FinalDamageRateParam>("FinalDamageRateParam");
        utFinalDamageRateParam["physRate"] = &FinalDamageRateParam::physRate;
        utFinalDamageRateParam["magRate"] = &FinalDamageRateParam::magRate;
        utFinalDamageRateParam["fireRate"] = &FinalDamageRateParam::fireRate;
        utFinalDamageRateParam["thunRate"] = &FinalDamageRateParam::thunRate;
        utFinalDamageRateParam["darkRate"] = &FinalDamageRateParam::darkRate;
        utFinalDamageRateParam["staminaRate"] = &FinalDamageRateParam::staminaRate;
        utFinalDamageRateParam["saRate"] = &FinalDamageRateParam::saRate;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<FinalDamageRateParam>>(gParamMgr.findTable(L"FinalDamageRateParam")); };
    paramsTable["FinalDamageRateParam"] = tableLoader;
}

}
