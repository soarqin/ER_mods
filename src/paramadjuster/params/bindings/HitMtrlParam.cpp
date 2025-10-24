#include "../luabindings.h"
#include "../defs/HitMtrlParam.h"

namespace paramadjuster::params {

void registerHitMtrlParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["HitMtrlParam"]; usertype) return;
        auto indexerHitMtrlParam = state->new_usertype<ParamTableIndexer<HitMtrlParam>>("HitMtrlParamTableIndexer");
        indexerHitMtrlParam["count"] = sol::property(&ParamTableIndexer<HitMtrlParam>::count);
        indexerHitMtrlParam["__index"] = &ParamTableIndexer<HitMtrlParam>::at;
        indexerHitMtrlParam["id"] = &ParamTableIndexer<HitMtrlParam>::paramId;
        indexerHitMtrlParam["get"] = &ParamTableIndexer<HitMtrlParam>::get;
        auto utHitMtrlParam = state->new_usertype<HitMtrlParam>("HitMtrlParam");
        utHitMtrlParam["aiVolumeRate"] = &HitMtrlParam::aiVolumeRate;
        utHitMtrlParam["spEffectIdOnHit0"] = &HitMtrlParam::spEffectIdOnHit0;
        utHitMtrlParam["spEffectIdOnHit1"] = &HitMtrlParam::spEffectIdOnHit1;
        utHitMtrlParam["footEffectHeightType"] = sol::property([](HitMtrlParam &param) -> uint8_t { return param.footEffectHeightType; }, [](HitMtrlParam &param, uint8_t value) { param.footEffectHeightType = value; });
        utHitMtrlParam["footEffectDirType"] = sol::property([](HitMtrlParam &param) -> uint8_t { return param.footEffectDirType; }, [](HitMtrlParam &param, uint8_t value) { param.footEffectDirType = value; });
        utHitMtrlParam["floorHeightType"] = sol::property([](HitMtrlParam &param) -> uint8_t { return param.floorHeightType; }, [](HitMtrlParam &param, uint8_t value) { param.floorHeightType = value; });
        utHitMtrlParam["disableFallDamage"] = sol::property([](HitMtrlParam &param) -> uint8_t { return param.disableFallDamage; }, [](HitMtrlParam &param, uint8_t value) { param.disableFallDamage = value; });
        utHitMtrlParam["isHardnessForSoundReverb"] = sol::property([](HitMtrlParam &param) -> uint8_t { return param.isHardnessForSoundReverb; }, [](HitMtrlParam &param, uint8_t value) { param.isHardnessForSoundReverb = value; });
        utHitMtrlParam["hardnessType"] = &HitMtrlParam::hardnessType;
        utHitMtrlParam["spEffectIdOnHit0_ClearCount_2"] = &HitMtrlParam::spEffectIdOnHit0_ClearCount_2;
        utHitMtrlParam["spEffectIdOnHit0_ClearCount_3"] = &HitMtrlParam::spEffectIdOnHit0_ClearCount_3;
        utHitMtrlParam["spEffectIdOnHit0_ClearCount_4"] = &HitMtrlParam::spEffectIdOnHit0_ClearCount_4;
        utHitMtrlParam["spEffectIdOnHit0_ClearCount_5"] = &HitMtrlParam::spEffectIdOnHit0_ClearCount_5;
        utHitMtrlParam["spEffectIdOnHit0_ClearCount_6"] = &HitMtrlParam::spEffectIdOnHit0_ClearCount_6;
        utHitMtrlParam["spEffectIdOnHit0_ClearCount_7"] = &HitMtrlParam::spEffectIdOnHit0_ClearCount_7;
        utHitMtrlParam["spEffectIdOnHit0_ClearCount_8"] = &HitMtrlParam::spEffectIdOnHit0_ClearCount_8;
        utHitMtrlParam["spEffectIdOnHit1_ClearCount_2"] = &HitMtrlParam::spEffectIdOnHit1_ClearCount_2;
        utHitMtrlParam["spEffectIdOnHit1_ClearCount_3"] = &HitMtrlParam::spEffectIdOnHit1_ClearCount_3;
        utHitMtrlParam["spEffectIdOnHit1_ClearCount_4"] = &HitMtrlParam::spEffectIdOnHit1_ClearCount_4;
        utHitMtrlParam["spEffectIdOnHit1_ClearCount_5"] = &HitMtrlParam::spEffectIdOnHit1_ClearCount_5;
        utHitMtrlParam["spEffectIdOnHit1_ClearCount_6"] = &HitMtrlParam::spEffectIdOnHit1_ClearCount_6;
        utHitMtrlParam["spEffectIdOnHit1_ClearCount_7"] = &HitMtrlParam::spEffectIdOnHit1_ClearCount_7;
        utHitMtrlParam["spEffectIdOnHit1_ClearCount_8"] = &HitMtrlParam::spEffectIdOnHit1_ClearCount_8;
        utHitMtrlParam["replaceMateiralId_Rain"] = &HitMtrlParam::replaceMateiralId_Rain;
        utHitMtrlParam["spEffectId_forWet00"] = &HitMtrlParam::spEffectId_forWet00;
        utHitMtrlParam["spEffectId_forWet01"] = &HitMtrlParam::spEffectId_forWet01;
        utHitMtrlParam["spEffectId_forWet02"] = &HitMtrlParam::spEffectId_forWet02;
        utHitMtrlParam["spEffectId_forWet03"] = &HitMtrlParam::spEffectId_forWet03;
        utHitMtrlParam["spEffectId_forWet04"] = &HitMtrlParam::spEffectId_forWet04;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<HitMtrlParam>>(gParamMgr.findTable(L"HitMtrlParam")); };
    paramsTable["HitMtrlParam"] = tableLoader;
}

}
