#include "../luabindings.h"
#include "../defs/SpEffectSetParam.h"

namespace paramadjuster::params {

void registerSpEffectSetParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["SpEffectSetParam"]; usertype) return;
        auto indexerSpEffectSetParam = state->new_usertype<ParamTableIndexer<SpEffectSetParam>>("SpEffectSetParamTableIndexer");
        indexerSpEffectSetParam["count"] = sol::property(&ParamTableIndexer<SpEffectSetParam>::count);
        indexerSpEffectSetParam["__index"] = &ParamTableIndexer<SpEffectSetParam>::at;
        indexerSpEffectSetParam["id"] = &ParamTableIndexer<SpEffectSetParam>::paramId;
        indexerSpEffectSetParam["get"] = &ParamTableIndexer<SpEffectSetParam>::get;
        auto utSpEffectSetParam = state->new_usertype<SpEffectSetParam>("SpEffectSetParam");
        utSpEffectSetParam["spEffectId1"] = &SpEffectSetParam::spEffectId1;
        utSpEffectSetParam["spEffectId2"] = &SpEffectSetParam::spEffectId2;
        utSpEffectSetParam["spEffectId3"] = &SpEffectSetParam::spEffectId3;
        utSpEffectSetParam["spEffectId4"] = &SpEffectSetParam::spEffectId4;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<SpEffectSetParam>>(gParamMgr.findTable(L"SpEffectSetParam")); };
    paramsTable["SpEffectSetParam"] = tableLoader;
}

}
