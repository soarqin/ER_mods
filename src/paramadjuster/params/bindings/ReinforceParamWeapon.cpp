#include "../luabindings.h"
#include "../defs/ReinforceParamWeapon.h"

namespace paramadjuster::params {

void registerReinforceParamWeapon(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ReinforceParamWeapon"]; usertype) return;
        auto indexerReinforceParamWeapon = state->new_usertype<ParamTableIndexer<ReinforceParamWeapon>>("ReinforceParamWeaponTableIndexer");
        indexerReinforceParamWeapon["count"] = sol::property(&ParamTableIndexer<ReinforceParamWeapon>::count);
        indexerReinforceParamWeapon["__index"] = &ParamTableIndexer<ReinforceParamWeapon>::at;
        indexerReinforceParamWeapon["id"] = &ParamTableIndexer<ReinforceParamWeapon>::paramId;
        indexerReinforceParamWeapon["get"] = &ParamTableIndexer<ReinforceParamWeapon>::get;
        auto utReinforceParamWeapon = state->new_usertype<ReinforceParamWeapon>("ReinforceParamWeapon");
        utReinforceParamWeapon["physicsAtkRate"] = &ReinforceParamWeapon::physicsAtkRate;
        utReinforceParamWeapon["magicAtkRate"] = &ReinforceParamWeapon::magicAtkRate;
        utReinforceParamWeapon["fireAtkRate"] = &ReinforceParamWeapon::fireAtkRate;
        utReinforceParamWeapon["thunderAtkRate"] = &ReinforceParamWeapon::thunderAtkRate;
        utReinforceParamWeapon["staminaAtkRate"] = &ReinforceParamWeapon::staminaAtkRate;
        utReinforceParamWeapon["saWeaponAtkRate"] = &ReinforceParamWeapon::saWeaponAtkRate;
        utReinforceParamWeapon["saDurabilityRate"] = &ReinforceParamWeapon::saDurabilityRate;
        utReinforceParamWeapon["correctStrengthRate"] = &ReinforceParamWeapon::correctStrengthRate;
        utReinforceParamWeapon["correctAgilityRate"] = &ReinforceParamWeapon::correctAgilityRate;
        utReinforceParamWeapon["correctMagicRate"] = &ReinforceParamWeapon::correctMagicRate;
        utReinforceParamWeapon["correctFaithRate"] = &ReinforceParamWeapon::correctFaithRate;
        utReinforceParamWeapon["physicsGuardCutRate"] = &ReinforceParamWeapon::physicsGuardCutRate;
        utReinforceParamWeapon["magicGuardCutRate"] = &ReinforceParamWeapon::magicGuardCutRate;
        utReinforceParamWeapon["fireGuardCutRate"] = &ReinforceParamWeapon::fireGuardCutRate;
        utReinforceParamWeapon["thunderGuardCutRate"] = &ReinforceParamWeapon::thunderGuardCutRate;
        utReinforceParamWeapon["poisonGuardResistRate"] = &ReinforceParamWeapon::poisonGuardResistRate;
        utReinforceParamWeapon["diseaseGuardResistRate"] = &ReinforceParamWeapon::diseaseGuardResistRate;
        utReinforceParamWeapon["bloodGuardResistRate"] = &ReinforceParamWeapon::bloodGuardResistRate;
        utReinforceParamWeapon["curseGuardResistRate"] = &ReinforceParamWeapon::curseGuardResistRate;
        utReinforceParamWeapon["staminaGuardDefRate"] = &ReinforceParamWeapon::staminaGuardDefRate;
        utReinforceParamWeapon["spEffectId1"] = &ReinforceParamWeapon::spEffectId1;
        utReinforceParamWeapon["spEffectId2"] = &ReinforceParamWeapon::spEffectId2;
        utReinforceParamWeapon["spEffectId3"] = &ReinforceParamWeapon::spEffectId3;
        utReinforceParamWeapon["residentSpEffectId1"] = &ReinforceParamWeapon::residentSpEffectId1;
        utReinforceParamWeapon["residentSpEffectId2"] = &ReinforceParamWeapon::residentSpEffectId2;
        utReinforceParamWeapon["residentSpEffectId3"] = &ReinforceParamWeapon::residentSpEffectId3;
        utReinforceParamWeapon["materialSetId"] = &ReinforceParamWeapon::materialSetId;
        utReinforceParamWeapon["maxReinforceLevel"] = &ReinforceParamWeapon::maxReinforceLevel;
        utReinforceParamWeapon["darkAtkRate"] = &ReinforceParamWeapon::darkAtkRate;
        utReinforceParamWeapon["darkGuardCutRate"] = &ReinforceParamWeapon::darkGuardCutRate;
        utReinforceParamWeapon["correctLuckRate"] = &ReinforceParamWeapon::correctLuckRate;
        utReinforceParamWeapon["freezeGuardDefRate"] = &ReinforceParamWeapon::freezeGuardDefRate;
        utReinforceParamWeapon["reinforcePriceRate"] = &ReinforceParamWeapon::reinforcePriceRate;
        utReinforceParamWeapon["baseChangePriceRate"] = &ReinforceParamWeapon::baseChangePriceRate;
        utReinforceParamWeapon["enableGemRank"] = &ReinforceParamWeapon::enableGemRank;
        utReinforceParamWeapon["sleepGuardDefRate"] = &ReinforceParamWeapon::sleepGuardDefRate;
        utReinforceParamWeapon["madnessGuardDefRate"] = &ReinforceParamWeapon::madnessGuardDefRate;
        utReinforceParamWeapon["baseAtkRate"] = &ReinforceParamWeapon::baseAtkRate;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<ReinforceParamWeapon>>(gParamMgr.findTable(L"ReinforceParamWeapon")); };
    paramsTable["ReinforceParamWeapon"] = tableLoader;
}

}
