#include "../luabindings.h"
#include "../defs/HitEffectSfxConceptParam.h"

namespace paramadjuster::params {

void registerHitEffectSfxConceptParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["HitEffectSfxConceptParam"]; usertype) return;
        auto indexerHitEffectSfxConceptParam = state->new_usertype<ParamTableIndexer<HitEffectSfxConceptParam>>("HitEffectSfxConceptParamTableIndexer");
        indexerHitEffectSfxConceptParam["count"] = sol::property(&ParamTableIndexer<HitEffectSfxConceptParam>::count);
        indexerHitEffectSfxConceptParam["__index"] = &ParamTableIndexer<HitEffectSfxConceptParam>::at;
        indexerHitEffectSfxConceptParam["id"] = &ParamTableIndexer<HitEffectSfxConceptParam>::paramId;
        indexerHitEffectSfxConceptParam["get"] = &ParamTableIndexer<HitEffectSfxConceptParam>::get;
        auto utHitEffectSfxConceptParam = state->new_usertype<HitEffectSfxConceptParam>("HitEffectSfxConceptParam");
        utHitEffectSfxConceptParam["atkIron_1"] = &HitEffectSfxConceptParam::atkIron_1;
        utHitEffectSfxConceptParam["atkIron_2"] = &HitEffectSfxConceptParam::atkIron_2;
        utHitEffectSfxConceptParam["atkLeather_1"] = &HitEffectSfxConceptParam::atkLeather_1;
        utHitEffectSfxConceptParam["atkLeather_2"] = &HitEffectSfxConceptParam::atkLeather_2;
        utHitEffectSfxConceptParam["atkWood_1"] = &HitEffectSfxConceptParam::atkWood_1;
        utHitEffectSfxConceptParam["atkWood_2"] = &HitEffectSfxConceptParam::atkWood_2;
        utHitEffectSfxConceptParam["atkBody_1"] = &HitEffectSfxConceptParam::atkBody_1;
        utHitEffectSfxConceptParam["atkBody_2"] = &HitEffectSfxConceptParam::atkBody_2;
        utHitEffectSfxConceptParam["atkStone_1"] = &HitEffectSfxConceptParam::atkStone_1;
        utHitEffectSfxConceptParam["atkStone_2"] = &HitEffectSfxConceptParam::atkStone_2;
        utHitEffectSfxConceptParam["atkNone_1"] = &HitEffectSfxConceptParam::atkNone_1;
        utHitEffectSfxConceptParam["atkNone_2"] = &HitEffectSfxConceptParam::atkNone_2;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<HitEffectSfxConceptParam>>(gParamMgr.findTable(L"HitEffectSfxConceptParam")); };
    paramsTable["HitEffectSfxConceptParam"] = tableLoader;
}

}
