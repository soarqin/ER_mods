#include "../luabindings.h"
#include "../defs/HitMtrlParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<HitMtrlParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerHitMtrlParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["HitMtrlParam"]; usertype) return;
        auto indexerHitMtrlParam = state->new_usertype<ParamTableIndexer<HitMtrlParam>>("HitMtrlParamTableIndexer");
        indexerHitMtrlParam["count"] = sol::property(&ParamTableIndexer<HitMtrlParam>::count);
        indexerHitMtrlParam["__index"] = &ParamTableIndexer<HitMtrlParam>::at;
        indexerHitMtrlParam["id"] = &ParamTableIndexer<HitMtrlParam>::paramId;
        indexerHitMtrlParam["get"] = &ParamTableIndexer<HitMtrlParam>::get;
        indexerHitMtrlParam["exportToCsv"] = &ParamTableIndexer<HitMtrlParam>::exportToCsv;
        indexerHitMtrlParam["importFromCsv"] = &ParamTableIndexer<HitMtrlParam>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<HitMtrlParam>>(state, L"HitMtrlParam");
        indexer->setFieldNames({
            {"aiVolumeRate", false},
            {"spEffectIdOnHit0", false},
            {"spEffectIdOnHit1", false},
            {"footEffectHeightType", false},
            {"footEffectDirType", false},
            {"floorHeightType", false},
            {"disableFallDamage", false},
            {"isHardnessForSoundReverb", false},
            {"hardnessType", false},
            {"spEffectIdOnHit0_ClearCount_2", false},
            {"spEffectIdOnHit0_ClearCount_3", false},
            {"spEffectIdOnHit0_ClearCount_4", false},
            {"spEffectIdOnHit0_ClearCount_5", false},
            {"spEffectIdOnHit0_ClearCount_6", false},
            {"spEffectIdOnHit0_ClearCount_7", false},
            {"spEffectIdOnHit0_ClearCount_8", false},
            {"spEffectIdOnHit1_ClearCount_2", false},
            {"spEffectIdOnHit1_ClearCount_3", false},
            {"spEffectIdOnHit1_ClearCount_4", false},
            {"spEffectIdOnHit1_ClearCount_5", false},
            {"spEffectIdOnHit1_ClearCount_6", false},
            {"spEffectIdOnHit1_ClearCount_7", false},
            {"spEffectIdOnHit1_ClearCount_8", false},
            {"replaceMateiralId_Rain", false},
            {"spEffectId_forWet00", false},
            {"spEffectId_forWet01", false},
            {"spEffectId_forWet02", false},
            {"spEffectId_forWet03", false},
            {"spEffectId_forWet04", false},
        });
        return indexer;
    };
    paramsTable["HitMtrlParam"] = tableLoader;
}

template<> void ParamTableIndexer<HitMtrlParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,aiVolumeRate,spEffectIdOnHit0,spEffectIdOnHit1,footEffectHeightType,footEffectDirType,floorHeightType,disableFallDamage,isHardnessForSoundReverb,hardnessType,spEffectIdOnHit0_ClearCount_2,spEffectIdOnHit0_ClearCount_3,spEffectIdOnHit0_ClearCount_4,spEffectIdOnHit0_ClearCount_5,spEffectIdOnHit0_ClearCount_6,spEffectIdOnHit0_ClearCount_7,spEffectIdOnHit0_ClearCount_8,spEffectIdOnHit1_ClearCount_2,spEffectIdOnHit1_ClearCount_3,spEffectIdOnHit1_ClearCount_4,spEffectIdOnHit1_ClearCount_5,spEffectIdOnHit1_ClearCount_6,spEffectIdOnHit1_ClearCount_7,spEffectIdOnHit1_ClearCount_8,replaceMateiralId_Rain,spEffectId_forWet00,spEffectId_forWet01,spEffectId_forWet02,spEffectId_forWet03,spEffectId_forWet04\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g,%d,%d,%u,%u,%u,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",
            this->paramId(i),
            param->aiVolumeRate,
            param->spEffectIdOnHit0,
            param->spEffectIdOnHit1,
            param->footEffectHeightType,
            param->footEffectDirType,
            param->floorHeightType,
            param->disableFallDamage,
            param->isHardnessForSoundReverb,
            param->hardnessType,
            param->spEffectIdOnHit0_ClearCount_2,
            param->spEffectIdOnHit0_ClearCount_3,
            param->spEffectIdOnHit0_ClearCount_4,
            param->spEffectIdOnHit0_ClearCount_5,
            param->spEffectIdOnHit0_ClearCount_6,
            param->spEffectIdOnHit0_ClearCount_7,
            param->spEffectIdOnHit0_ClearCount_8,
            param->spEffectIdOnHit1_ClearCount_2,
            param->spEffectIdOnHit1_ClearCount_3,
            param->spEffectIdOnHit1_ClearCount_4,
            param->spEffectIdOnHit1_ClearCount_5,
            param->spEffectIdOnHit1_ClearCount_6,
            param->spEffectIdOnHit1_ClearCount_7,
            param->spEffectIdOnHit1_ClearCount_8,
            param->replaceMateiralId_Rain,
            param->spEffectId_forWet00,
            param->spEffectId_forWet01,
            param->spEffectId_forWet02,
            param->spEffectId_forWet03,
            param->spEffectId_forWet04
        );
    }
    fclose(f);
}

}
