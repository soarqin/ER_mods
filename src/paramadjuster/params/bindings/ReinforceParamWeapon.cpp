#include "../luabindings.h"
#include "../defs/ReinforceParamWeapon.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<ReinforceParamWeapon>::exportToCsvImpl(const std::wstring &csvPath);

void registerReinforceParamWeapon(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ReinforceParamWeapon"]; usertype) return;
        auto indexerReinforceParamWeapon = state->new_usertype<ParamTableIndexer<ReinforceParamWeapon>>("ReinforceParamWeaponTableIndexer");
        indexerReinforceParamWeapon["count"] = sol::property(&ParamTableIndexer<ReinforceParamWeapon>::count);
        indexerReinforceParamWeapon["__index"] = &ParamTableIndexer<ReinforceParamWeapon>::at;
        indexerReinforceParamWeapon["id"] = &ParamTableIndexer<ReinforceParamWeapon>::paramId;
        indexerReinforceParamWeapon["get"] = &ParamTableIndexer<ReinforceParamWeapon>::get;
        indexerReinforceParamWeapon["exportToCsv"] = &ParamTableIndexer<ReinforceParamWeapon>::exportToCsv;
        indexerReinforceParamWeapon["importFromCsv"] = &ParamTableIndexer<ReinforceParamWeapon>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<ReinforceParamWeapon>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<ReinforceParamWeapon>>(nullptr);
        indexer->setFieldNames({
            {"physicsAtkRate", false},
            {"magicAtkRate", false},
            {"fireAtkRate", false},
            {"thunderAtkRate", false},
            {"staminaAtkRate", false},
            {"saWeaponAtkRate", false},
            {"saDurabilityRate", false},
            {"correctStrengthRate", false},
            {"correctAgilityRate", false},
            {"correctMagicRate", false},
            {"correctFaithRate", false},
            {"physicsGuardCutRate", false},
            {"magicGuardCutRate", false},
            {"fireGuardCutRate", false},
            {"thunderGuardCutRate", false},
            {"poisonGuardResistRate", false},
            {"diseaseGuardResistRate", false},
            {"bloodGuardResistRate", false},
            {"curseGuardResistRate", false},
            {"staminaGuardDefRate", false},
            {"spEffectId1", false},
            {"spEffectId2", false},
            {"spEffectId3", false},
            {"residentSpEffectId1", false},
            {"residentSpEffectId2", false},
            {"residentSpEffectId3", false},
            {"materialSetId", false},
            {"maxReinforceLevel", false},
            {"darkAtkRate", false},
            {"darkGuardCutRate", false},
            {"correctLuckRate", false},
            {"freezeGuardDefRate", false},
            {"reinforcePriceRate", false},
            {"baseChangePriceRate", false},
            {"enableGemRank", false},
            {"sleepGuardDefRate", false},
            {"madnessGuardDefRate", false},
            {"baseAtkRate", false},
        });
        return indexer;
    };
    paramsTable["ReinforceParamWeapon"] = [tableLoader]() -> auto { return tableLoader(L"ReinforceParamWeapon"); };
}

template<> void ParamTableIndexer<ReinforceParamWeapon>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,physicsAtkRate,magicAtkRate,fireAtkRate,thunderAtkRate,staminaAtkRate,saWeaponAtkRate,saDurabilityRate,correctStrengthRate,correctAgilityRate,correctMagicRate,correctFaithRate,physicsGuardCutRate,magicGuardCutRate,fireGuardCutRate,thunderGuardCutRate");
    fwprintf(f, L",poisonGuardResistRate,diseaseGuardResistRate,bloodGuardResistRate,curseGuardResistRate,staminaGuardDefRate,spEffectId1,spEffectId2,spEffectId3,residentSpEffectId1,residentSpEffectId2,residentSpEffectId3,materialSetId,maxReinforceLevel,darkAtkRate,darkGuardCutRate,correctLuckRate");
    fwprintf(f, L",freezeGuardDefRate,reinforcePriceRate,baseChangePriceRate,enableGemRank,sleepGuardDefRate,madnessGuardDefRate,baseAtkRate\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%u,%u,%u,%u,%u,%u,%u,%u,%g,%g,%g,%g,%g,%g,%d,%g,%g,%g\n",
            this->paramId(i),
            param->physicsAtkRate,
            param->magicAtkRate,
            param->fireAtkRate,
            param->thunderAtkRate,
            param->staminaAtkRate,
            param->saWeaponAtkRate,
            param->saDurabilityRate,
            param->correctStrengthRate,
            param->correctAgilityRate,
            param->correctMagicRate,
            param->correctFaithRate,
            param->physicsGuardCutRate,
            param->magicGuardCutRate,
            param->fireGuardCutRate,
            param->thunderGuardCutRate,
            param->poisonGuardResistRate,
            param->diseaseGuardResistRate,
            param->bloodGuardResistRate,
            param->curseGuardResistRate,
            param->staminaGuardDefRate,
            param->spEffectId1,
            param->spEffectId2,
            param->spEffectId3,
            param->residentSpEffectId1,
            param->residentSpEffectId2,
            param->residentSpEffectId3,
            param->materialSetId,
            param->maxReinforceLevel,
            param->darkAtkRate,
            param->darkGuardCutRate,
            param->correctLuckRate,
            param->freezeGuardDefRate,
            param->reinforcePriceRate,
            param->baseChangePriceRate,
            param->enableGemRank,
            param->sleepGuardDefRate,
            param->madnessGuardDefRate,
            param->baseAtkRate
        );
    }
    fclose(f);
}

}
