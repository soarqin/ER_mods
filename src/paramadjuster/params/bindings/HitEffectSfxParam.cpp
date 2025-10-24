#include "../luabindings.h"
#include "../defs/HitEffectSfxParam.h"

namespace paramadjuster::params {

void registerHitEffectSfxParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["HitEffectSfxParam"]; usertype) return;
        auto indexerHitEffectSfxParam = state->new_usertype<ParamTableIndexer<HitEffectSfxParam>>("HitEffectSfxParamTableIndexer");
        indexerHitEffectSfxParam["count"] = sol::property(&ParamTableIndexer<HitEffectSfxParam>::count);
        indexerHitEffectSfxParam["__index"] = &ParamTableIndexer<HitEffectSfxParam>::at;
        indexerHitEffectSfxParam["id"] = &ParamTableIndexer<HitEffectSfxParam>::paramId;
        indexerHitEffectSfxParam["get"] = &ParamTableIndexer<HitEffectSfxParam>::get;
        auto utHitEffectSfxParam = state->new_usertype<HitEffectSfxParam>("HitEffectSfxParam");
        utHitEffectSfxParam["Slash_Normal"] = &HitEffectSfxParam::Slash_Normal;
        utHitEffectSfxParam["Slash_S"] = &HitEffectSfxParam::Slash_S;
        utHitEffectSfxParam["Slash_L"] = &HitEffectSfxParam::Slash_L;
        utHitEffectSfxParam["Slash_Specific1"] = &HitEffectSfxParam::Slash_Specific1;
        utHitEffectSfxParam["Slash_Specific2"] = &HitEffectSfxParam::Slash_Specific2;
        utHitEffectSfxParam["Blow_Normal"] = &HitEffectSfxParam::Blow_Normal;
        utHitEffectSfxParam["Blow_S"] = &HitEffectSfxParam::Blow_S;
        utHitEffectSfxParam["Blow_L"] = &HitEffectSfxParam::Blow_L;
        utHitEffectSfxParam["Blow_Specific1"] = &HitEffectSfxParam::Blow_Specific1;
        utHitEffectSfxParam["Blow_Specific2"] = &HitEffectSfxParam::Blow_Specific2;
        utHitEffectSfxParam["Thrust_Normal"] = &HitEffectSfxParam::Thrust_Normal;
        utHitEffectSfxParam["Thrust_S"] = &HitEffectSfxParam::Thrust_S;
        utHitEffectSfxParam["Thrust_L"] = &HitEffectSfxParam::Thrust_L;
        utHitEffectSfxParam["Thrust_Specific1"] = &HitEffectSfxParam::Thrust_Specific1;
        utHitEffectSfxParam["Thrust_Specific2"] = &HitEffectSfxParam::Thrust_Specific2;
        utHitEffectSfxParam["Neutral_Normal"] = &HitEffectSfxParam::Neutral_Normal;
        utHitEffectSfxParam["Neutral_S"] = &HitEffectSfxParam::Neutral_S;
        utHitEffectSfxParam["Neutral_L"] = &HitEffectSfxParam::Neutral_L;
        utHitEffectSfxParam["Neutral_Specific1"] = &HitEffectSfxParam::Neutral_Specific1;
        utHitEffectSfxParam["Neutral_Specific2"] = &HitEffectSfxParam::Neutral_Specific2;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<HitEffectSfxParam>>(gParamMgr.findTable(L"HitEffectSfxParam")); };
    paramsTable["HitEffectSfxParam"] = tableLoader;
}

}
