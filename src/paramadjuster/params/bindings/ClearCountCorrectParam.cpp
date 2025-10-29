#include "../luabindings.h"
#include "../defs/ClearCountCorrectParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<ClearCountCorrectParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerClearCountCorrectParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ClearCountCorrectParam"]; usertype) return;
        auto indexerClearCountCorrectParam = state->new_usertype<ParamTableIndexer<ClearCountCorrectParam>>("ClearCountCorrectParamTableIndexer");
        indexerClearCountCorrectParam["count"] = sol::property(&ParamTableIndexer<ClearCountCorrectParam>::count);
        indexerClearCountCorrectParam["__index"] = &ParamTableIndexer<ClearCountCorrectParam>::at;
        indexerClearCountCorrectParam["id"] = &ParamTableIndexer<ClearCountCorrectParam>::paramId;
        indexerClearCountCorrectParam["get"] = &ParamTableIndexer<ClearCountCorrectParam>::get;
        indexerClearCountCorrectParam["exportToCsv"] = &ParamTableIndexer<ClearCountCorrectParam>::exportToCsv;
        indexerClearCountCorrectParam["importFromCsv"] = &ParamTableIndexer<ClearCountCorrectParam>::importFromCsv;
        auto utClearCountCorrectParam = state->new_usertype<ClearCountCorrectParam>("ClearCountCorrectParam");
        utClearCountCorrectParam["MaxHpRate"] = &ClearCountCorrectParam::MaxHpRate;
        utClearCountCorrectParam["MaxMpRate"] = &ClearCountCorrectParam::MaxMpRate;
        utClearCountCorrectParam["MaxStaminaRate"] = &ClearCountCorrectParam::MaxStaminaRate;
        utClearCountCorrectParam["PhysicsAttackRate"] = &ClearCountCorrectParam::PhysicsAttackRate;
        utClearCountCorrectParam["SlashAttackRate"] = &ClearCountCorrectParam::SlashAttackRate;
        utClearCountCorrectParam["BlowAttackRate"] = &ClearCountCorrectParam::BlowAttackRate;
        utClearCountCorrectParam["ThrustAttackRate"] = &ClearCountCorrectParam::ThrustAttackRate;
        utClearCountCorrectParam["NeturalAttackRate"] = &ClearCountCorrectParam::NeturalAttackRate;
        utClearCountCorrectParam["MagicAttackRate"] = &ClearCountCorrectParam::MagicAttackRate;
        utClearCountCorrectParam["FireAttackRate"] = &ClearCountCorrectParam::FireAttackRate;
        utClearCountCorrectParam["ThunderAttackRate"] = &ClearCountCorrectParam::ThunderAttackRate;
        utClearCountCorrectParam["DarkAttackRate"] = &ClearCountCorrectParam::DarkAttackRate;
        utClearCountCorrectParam["PhysicsDefenseRate"] = &ClearCountCorrectParam::PhysicsDefenseRate;
        utClearCountCorrectParam["MagicDefenseRate"] = &ClearCountCorrectParam::MagicDefenseRate;
        utClearCountCorrectParam["FireDefenseRate"] = &ClearCountCorrectParam::FireDefenseRate;
        utClearCountCorrectParam["ThunderDefenseRate"] = &ClearCountCorrectParam::ThunderDefenseRate;
        utClearCountCorrectParam["DarkDefenseRate"] = &ClearCountCorrectParam::DarkDefenseRate;
        utClearCountCorrectParam["StaminaAttackRate"] = &ClearCountCorrectParam::StaminaAttackRate;
        utClearCountCorrectParam["SoulRate"] = &ClearCountCorrectParam::SoulRate;
        utClearCountCorrectParam["PoisionResistRate"] = &ClearCountCorrectParam::PoisionResistRate;
        utClearCountCorrectParam["DiseaseResistRate"] = &ClearCountCorrectParam::DiseaseResistRate;
        utClearCountCorrectParam["BloodResistRate"] = &ClearCountCorrectParam::BloodResistRate;
        utClearCountCorrectParam["CurseResistRate"] = &ClearCountCorrectParam::CurseResistRate;
        utClearCountCorrectParam["FreezeResistRate"] = &ClearCountCorrectParam::FreezeResistRate;
        utClearCountCorrectParam["BloodDamageRate"] = &ClearCountCorrectParam::BloodDamageRate;
        utClearCountCorrectParam["SuperArmorDamageRate"] = &ClearCountCorrectParam::SuperArmorDamageRate;
        utClearCountCorrectParam["FreezeDamageRate"] = &ClearCountCorrectParam::FreezeDamageRate;
        utClearCountCorrectParam["SleepResistRate"] = &ClearCountCorrectParam::SleepResistRate;
        utClearCountCorrectParam["MadnessResistRate"] = &ClearCountCorrectParam::MadnessResistRate;
        utClearCountCorrectParam["SleepDamageRate"] = &ClearCountCorrectParam::SleepDamageRate;
        utClearCountCorrectParam["MadnessDamageRate"] = &ClearCountCorrectParam::MadnessDamageRate;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<ClearCountCorrectParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<ClearCountCorrectParam>>(nullptr);
        indexer->setFieldNames({
            {"MaxHpRate", false},
            {"MaxMpRate", false},
            {"MaxStaminaRate", false},
            {"PhysicsAttackRate", false},
            {"SlashAttackRate", false},
            {"BlowAttackRate", false},
            {"ThrustAttackRate", false},
            {"NeturalAttackRate", false},
            {"MagicAttackRate", false},
            {"FireAttackRate", false},
            {"ThunderAttackRate", false},
            {"DarkAttackRate", false},
            {"PhysicsDefenseRate", false},
            {"MagicDefenseRate", false},
            {"FireDefenseRate", false},
            {"ThunderDefenseRate", false},
            {"DarkDefenseRate", false},
            {"StaminaAttackRate", false},
            {"SoulRate", false},
            {"PoisionResistRate", false},
            {"DiseaseResistRate", false},
            {"BloodResistRate", false},
            {"CurseResistRate", false},
            {"FreezeResistRate", false},
            {"BloodDamageRate", false},
            {"SuperArmorDamageRate", false},
            {"FreezeDamageRate", false},
            {"SleepResistRate", false},
            {"MadnessResistRate", false},
            {"SleepDamageRate", false},
            {"MadnessDamageRate", false},
        });
        return indexer;
    };
    paramsTable["ClearCountCorrectParam"] = [tableLoader]() -> auto { return tableLoader(L"ClearCountCorrectParam"); };
}

template<> void ParamTableIndexer<ClearCountCorrectParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,MaxHpRate,MaxMpRate,MaxStaminaRate,PhysicsAttackRate,SlashAttackRate,BlowAttackRate,ThrustAttackRate,NeturalAttackRate,MagicAttackRate,FireAttackRate,ThunderAttackRate,DarkAttackRate,PhysicsDefenseRate,MagicDefenseRate,FireDefenseRate,ThunderDefenseRate,DarkDefenseRate,StaminaAttackRate,SoulRate,PoisionResistRate,DiseaseResistRate,BloodResistRate,CurseResistRate,FreezeResistRate,BloodDamageRate,SuperArmorDamageRate,FreezeDamageRate,SleepResistRate,MadnessResistRate,SleepDamageRate,MadnessDamageRate\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g\n",
            this->paramId(i),
            param->MaxHpRate,
            param->MaxMpRate,
            param->MaxStaminaRate,
            param->PhysicsAttackRate,
            param->SlashAttackRate,
            param->BlowAttackRate,
            param->ThrustAttackRate,
            param->NeturalAttackRate,
            param->MagicAttackRate,
            param->FireAttackRate,
            param->ThunderAttackRate,
            param->DarkAttackRate,
            param->PhysicsDefenseRate,
            param->MagicDefenseRate,
            param->FireDefenseRate,
            param->ThunderDefenseRate,
            param->DarkDefenseRate,
            param->StaminaAttackRate,
            param->SoulRate,
            param->PoisionResistRate,
            param->DiseaseResistRate,
            param->BloodResistRate,
            param->CurseResistRate,
            param->FreezeResistRate,
            param->BloodDamageRate,
            param->SuperArmorDamageRate,
            param->FreezeDamageRate,
            param->SleepResistRate,
            param->MadnessResistRate,
            param->SleepDamageRate,
            param->MadnessDamageRate
        );
    }
    fclose(f);
}

}
