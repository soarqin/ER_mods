#include "../luabindings.h"
#include "../defs/ClearCountCorrectParam.h"

namespace paramadjuster::params {

void registerClearCountCorrectParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ClearCountCorrectParam"]; usertype) return;
        auto indexerClearCountCorrectParam = state->new_usertype<ParamTableIndexer<ClearCountCorrectParam>>("ClearCountCorrectParamTableIndexer");
        indexerClearCountCorrectParam["count"] = sol::property(&ParamTableIndexer<ClearCountCorrectParam>::count);
        indexerClearCountCorrectParam["__index"] = &ParamTableIndexer<ClearCountCorrectParam>::at;
        indexerClearCountCorrectParam["id"] = &ParamTableIndexer<ClearCountCorrectParam>::paramId;
        indexerClearCountCorrectParam["get"] = &ParamTableIndexer<ClearCountCorrectParam>::get;
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
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<ClearCountCorrectParam>>(gParamMgr.findTable(L"ClearCountCorrectParam")); };
    paramsTable["ClearCountCorrectParam"] = tableLoader;
}

}
