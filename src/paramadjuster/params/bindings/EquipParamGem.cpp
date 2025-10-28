#include "../luabindings.h"
#include "../defs/EquipParamGem.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<EquipParamGem>::exportToCsvImpl(const std::wstring &csvPath);

void registerEquipParamGem(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["EquipParamGem"]; usertype) return;
        auto indexerEquipParamGem = state->new_usertype<ParamTableIndexer<EquipParamGem>>("EquipParamGemTableIndexer");
        indexerEquipParamGem["count"] = sol::property(&ParamTableIndexer<EquipParamGem>::count);
        indexerEquipParamGem["__index"] = &ParamTableIndexer<EquipParamGem>::at;
        indexerEquipParamGem["id"] = &ParamTableIndexer<EquipParamGem>::paramId;
        indexerEquipParamGem["get"] = &ParamTableIndexer<EquipParamGem>::get;
        indexerEquipParamGem["exportToCsv"] = &ParamTableIndexer<EquipParamGem>::exportToCsv;
        indexerEquipParamGem["importFromCsv"] = &ParamTableIndexer<EquipParamGem>::importFromCsv;
        auto utEquipParamGem = state->new_usertype<EquipParamGem>("EquipParamGem");
        utEquipParamGem["disableParam_NT"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.disableParam_NT; }, [](EquipParamGem &param, uint8_t value) { param.disableParam_NT = value; });
        utEquipParamGem["iconId"] = &EquipParamGem::iconId;
        utEquipParamGem["rank"] = &EquipParamGem::rank;
        utEquipParamGem["sortGroupId"] = &EquipParamGem::sortGroupId;
        utEquipParamGem["spEffectId0"] = &EquipParamGem::spEffectId0;
        utEquipParamGem["spEffectId1"] = &EquipParamGem::spEffectId1;
        utEquipParamGem["spEffectId2"] = &EquipParamGem::spEffectId2;
        utEquipParamGem["itemGetTutorialFlagId"] = &EquipParamGem::itemGetTutorialFlagId;
        utEquipParamGem["swordArtsParamId"] = &EquipParamGem::swordArtsParamId;
        utEquipParamGem["mountValue"] = &EquipParamGem::mountValue;
        utEquipParamGem["sellValue"] = &EquipParamGem::sellValue;
        utEquipParamGem["saleValue"] = &EquipParamGem::saleValue;
        utEquipParamGem["sortId"] = &EquipParamGem::sortId;
        utEquipParamGem["compTrophySedId"] = &EquipParamGem::compTrophySedId;
        utEquipParamGem["trophySeqId"] = &EquipParamGem::trophySeqId;
        utEquipParamGem["configurableWepAttr00"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.configurableWepAttr00; }, [](EquipParamGem &param, uint8_t value) { param.configurableWepAttr00 = value; });
        utEquipParamGem["configurableWepAttr01"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.configurableWepAttr01; }, [](EquipParamGem &param, uint8_t value) { param.configurableWepAttr01 = value; });
        utEquipParamGem["configurableWepAttr02"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.configurableWepAttr02; }, [](EquipParamGem &param, uint8_t value) { param.configurableWepAttr02 = value; });
        utEquipParamGem["configurableWepAttr03"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.configurableWepAttr03; }, [](EquipParamGem &param, uint8_t value) { param.configurableWepAttr03 = value; });
        utEquipParamGem["configurableWepAttr04"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.configurableWepAttr04; }, [](EquipParamGem &param, uint8_t value) { param.configurableWepAttr04 = value; });
        utEquipParamGem["configurableWepAttr05"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.configurableWepAttr05; }, [](EquipParamGem &param, uint8_t value) { param.configurableWepAttr05 = value; });
        utEquipParamGem["configurableWepAttr06"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.configurableWepAttr06; }, [](EquipParamGem &param, uint8_t value) { param.configurableWepAttr06 = value; });
        utEquipParamGem["configurableWepAttr07"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.configurableWepAttr07; }, [](EquipParamGem &param, uint8_t value) { param.configurableWepAttr07 = value; });
        utEquipParamGem["configurableWepAttr08"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.configurableWepAttr08; }, [](EquipParamGem &param, uint8_t value) { param.configurableWepAttr08 = value; });
        utEquipParamGem["configurableWepAttr09"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.configurableWepAttr09; }, [](EquipParamGem &param, uint8_t value) { param.configurableWepAttr09 = value; });
        utEquipParamGem["configurableWepAttr10"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.configurableWepAttr10; }, [](EquipParamGem &param, uint8_t value) { param.configurableWepAttr10 = value; });
        utEquipParamGem["configurableWepAttr11"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.configurableWepAttr11; }, [](EquipParamGem &param, uint8_t value) { param.configurableWepAttr11 = value; });
        utEquipParamGem["configurableWepAttr12"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.configurableWepAttr12; }, [](EquipParamGem &param, uint8_t value) { param.configurableWepAttr12 = value; });
        utEquipParamGem["configurableWepAttr13"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.configurableWepAttr13; }, [](EquipParamGem &param, uint8_t value) { param.configurableWepAttr13 = value; });
        utEquipParamGem["configurableWepAttr14"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.configurableWepAttr14; }, [](EquipParamGem &param, uint8_t value) { param.configurableWepAttr14 = value; });
        utEquipParamGem["configurableWepAttr15"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.configurableWepAttr15; }, [](EquipParamGem &param, uint8_t value) { param.configurableWepAttr15 = value; });
        utEquipParamGem["rarity"] = &EquipParamGem::rarity;
        utEquipParamGem["configurableWepAttr16"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.configurableWepAttr16; }, [](EquipParamGem &param, uint8_t value) { param.configurableWepAttr16 = value; });
        utEquipParamGem["configurableWepAttr17"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.configurableWepAttr17; }, [](EquipParamGem &param, uint8_t value) { param.configurableWepAttr17 = value; });
        utEquipParamGem["configurableWepAttr18"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.configurableWepAttr18; }, [](EquipParamGem &param, uint8_t value) { param.configurableWepAttr18 = value; });
        utEquipParamGem["configurableWepAttr19"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.configurableWepAttr19; }, [](EquipParamGem &param, uint8_t value) { param.configurableWepAttr19 = value; });
        utEquipParamGem["configurableWepAttr20"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.configurableWepAttr20; }, [](EquipParamGem &param, uint8_t value) { param.configurableWepAttr20 = value; });
        utEquipParamGem["configurableWepAttr21"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.configurableWepAttr21; }, [](EquipParamGem &param, uint8_t value) { param.configurableWepAttr21 = value; });
        utEquipParamGem["configurableWepAttr22"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.configurableWepAttr22; }, [](EquipParamGem &param, uint8_t value) { param.configurableWepAttr22 = value; });
        utEquipParamGem["configurableWepAttr23"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.configurableWepAttr23; }, [](EquipParamGem &param, uint8_t value) { param.configurableWepAttr23 = value; });
        utEquipParamGem["isDiscard"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.isDiscard; }, [](EquipParamGem &param, uint8_t value) { param.isDiscard = value; });
        utEquipParamGem["isDrop"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.isDrop; }, [](EquipParamGem &param, uint8_t value) { param.isDrop = value; });
        utEquipParamGem["isDeposit"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.isDeposit; }, [](EquipParamGem &param, uint8_t value) { param.isDeposit = value; });
        utEquipParamGem["disableMultiDropShare"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.disableMultiDropShare; }, [](EquipParamGem &param, uint8_t value) { param.disableMultiDropShare = value; });
        utEquipParamGem["showDialogCondType"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.showDialogCondType; }, [](EquipParamGem &param, uint8_t value) { param.showDialogCondType = value; });
        utEquipParamGem["showLogCondType"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.showLogCondType; }, [](EquipParamGem &param, uint8_t value) { param.showLogCondType = value; });
        utEquipParamGem["defaultWepAttr"] = &EquipParamGem::defaultWepAttr;
        utEquipParamGem["isSpecialSwordArt"] = &EquipParamGem::isSpecialSwordArt;
        utEquipParamGem["canMountWep_Dagger"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_Dagger; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_Dagger = value; });
        utEquipParamGem["canMountWep_SwordNormal"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_SwordNormal; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_SwordNormal = value; });
        utEquipParamGem["canMountWep_SwordLarge"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_SwordLarge; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_SwordLarge = value; });
        utEquipParamGem["canMountWep_SwordGigantic"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_SwordGigantic; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_SwordGigantic = value; });
        utEquipParamGem["canMountWep_SaberNormal"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_SaberNormal; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_SaberNormal = value; });
        utEquipParamGem["canMountWep_SaberLarge"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_SaberLarge; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_SaberLarge = value; });
        utEquipParamGem["canMountWep_katana"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_katana; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_katana = value; });
        utEquipParamGem["canMountWep_SwordDoubleEdge"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_SwordDoubleEdge; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_SwordDoubleEdge = value; });
        utEquipParamGem["canMountWep_SwordPierce"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_SwordPierce; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_SwordPierce = value; });
        utEquipParamGem["canMountWep_RapierHeavy"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_RapierHeavy; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_RapierHeavy = value; });
        utEquipParamGem["canMountWep_AxeNormal"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_AxeNormal; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_AxeNormal = value; });
        utEquipParamGem["canMountWep_AxeLarge"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_AxeLarge; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_AxeLarge = value; });
        utEquipParamGem["canMountWep_HammerNormal"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_HammerNormal; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_HammerNormal = value; });
        utEquipParamGem["canMountWep_HammerLarge"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_HammerLarge; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_HammerLarge = value; });
        utEquipParamGem["canMountWep_Flail"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_Flail; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_Flail = value; });
        utEquipParamGem["canMountWep_SpearNormal"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_SpearNormal; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_SpearNormal = value; });
        utEquipParamGem["canMountWep_SpearLarge"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_SpearLarge; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_SpearLarge = value; });
        utEquipParamGem["canMountWep_SpearHeavy"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_SpearHeavy; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_SpearHeavy = value; });
        utEquipParamGem["canMountWep_SpearAxe"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_SpearAxe; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_SpearAxe = value; });
        utEquipParamGem["canMountWep_Sickle"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_Sickle; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_Sickle = value; });
        utEquipParamGem["canMountWep_Knuckle"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_Knuckle; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_Knuckle = value; });
        utEquipParamGem["canMountWep_Claw"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_Claw; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_Claw = value; });
        utEquipParamGem["canMountWep_Whip"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_Whip; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_Whip = value; });
        utEquipParamGem["canMountWep_AxhammerLarge"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_AxhammerLarge; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_AxhammerLarge = value; });
        utEquipParamGem["canMountWep_BowSmall"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_BowSmall; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_BowSmall = value; });
        utEquipParamGem["canMountWep_BowNormal"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_BowNormal; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_BowNormal = value; });
        utEquipParamGem["canMountWep_BowLarge"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_BowLarge; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_BowLarge = value; });
        utEquipParamGem["canMountWep_ClossBow"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_ClossBow; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_ClossBow = value; });
        utEquipParamGem["canMountWep_Ballista"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_Ballista; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_Ballista = value; });
        utEquipParamGem["canMountWep_Staff"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_Staff; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_Staff = value; });
        utEquipParamGem["canMountWep_Sorcery"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_Sorcery; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_Sorcery = value; });
        utEquipParamGem["canMountWep_Talisman"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_Talisman; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_Talisman = value; });
        utEquipParamGem["canMountWep_ShieldSmall"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_ShieldSmall; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_ShieldSmall = value; });
        utEquipParamGem["canMountWep_ShieldNormal"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_ShieldNormal; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_ShieldNormal = value; });
        utEquipParamGem["canMountWep_ShieldLarge"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_ShieldLarge; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_ShieldLarge = value; });
        utEquipParamGem["canMountWep_Torch"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_Torch; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_Torch = value; });
        utEquipParamGem["canMountWep_HandToHand"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_HandToHand; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_HandToHand = value; });
        utEquipParamGem["canMountWep_PerfumeBottle"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_PerfumeBottle; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_PerfumeBottle = value; });
        utEquipParamGem["canMountWep_ThrustingShield"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_ThrustingShield; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_ThrustingShield = value; });
        utEquipParamGem["canMountWep_ThrowingWeapon"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_ThrowingWeapon; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_ThrowingWeapon = value; });
        utEquipParamGem["canMountWep_ReverseHandSword"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_ReverseHandSword; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_ReverseHandSword = value; });
        utEquipParamGem["canMountWep_LightGreatsword"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_LightGreatsword; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_LightGreatsword = value; });
        utEquipParamGem["canMountWep_GreatKatana"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_GreatKatana; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_GreatKatana = value; });
        utEquipParamGem["canMountWep_BeastClaw"] = sol::property([](EquipParamGem &param) -> uint8_t { return param.canMountWep_BeastClaw; }, [](EquipParamGem &param, uint8_t value) { param.canMountWep_BeastClaw = value; });
        utEquipParamGem["spEffectMsgId0"] = &EquipParamGem::spEffectMsgId0;
        utEquipParamGem["spEffectMsgId1"] = &EquipParamGem::spEffectMsgId1;
        utEquipParamGem["spEffectId_forAtk0"] = &EquipParamGem::spEffectId_forAtk0;
        utEquipParamGem["spEffectId_forAtk1"] = &EquipParamGem::spEffectId_forAtk1;
        utEquipParamGem["spEffectId_forAtk2"] = &EquipParamGem::spEffectId_forAtk2;
        utEquipParamGem["mountWepTextId"] = &EquipParamGem::mountWepTextId;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<EquipParamGem>>(state, L"EquipParamGem");
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"iconId", false},
            {"rank", false},
            {"sortGroupId", false},
            {"spEffectId0", false},
            {"spEffectId1", false},
            {"spEffectId2", false},
            {"itemGetTutorialFlagId", false},
            {"swordArtsParamId", false},
            {"mountValue", false},
            {"sellValue", false},
            {"saleValue", false},
            {"sortId", false},
            {"compTrophySedId", false},
            {"trophySeqId", false},
            {"configurableWepAttr00", false},
            {"configurableWepAttr01", false},
            {"configurableWepAttr02", false},
            {"configurableWepAttr03", false},
            {"configurableWepAttr04", false},
            {"configurableWepAttr05", false},
            {"configurableWepAttr06", false},
            {"configurableWepAttr07", false},
            {"configurableWepAttr08", false},
            {"configurableWepAttr09", false},
            {"configurableWepAttr10", false},
            {"configurableWepAttr11", false},
            {"configurableWepAttr12", false},
            {"configurableWepAttr13", false},
            {"configurableWepAttr14", false},
            {"configurableWepAttr15", false},
            {"rarity", false},
            {"configurableWepAttr16", false},
            {"configurableWepAttr17", false},
            {"configurableWepAttr18", false},
            {"configurableWepAttr19", false},
            {"configurableWepAttr20", false},
            {"configurableWepAttr21", false},
            {"configurableWepAttr22", false},
            {"configurableWepAttr23", false},
            {"isDiscard", false},
            {"isDrop", false},
            {"isDeposit", false},
            {"disableMultiDropShare", false},
            {"showDialogCondType", false},
            {"showLogCondType", false},
            {"defaultWepAttr", false},
            {"isSpecialSwordArt", false},
            {"canMountWep_Dagger", false},
            {"canMountWep_SwordNormal", false},
            {"canMountWep_SwordLarge", false},
            {"canMountWep_SwordGigantic", false},
            {"canMountWep_SaberNormal", false},
            {"canMountWep_SaberLarge", false},
            {"canMountWep_katana", false},
            {"canMountWep_SwordDoubleEdge", false},
            {"canMountWep_SwordPierce", false},
            {"canMountWep_RapierHeavy", false},
            {"canMountWep_AxeNormal", false},
            {"canMountWep_AxeLarge", false},
            {"canMountWep_HammerNormal", false},
            {"canMountWep_HammerLarge", false},
            {"canMountWep_Flail", false},
            {"canMountWep_SpearNormal", false},
            {"canMountWep_SpearLarge", false},
            {"canMountWep_SpearHeavy", false},
            {"canMountWep_SpearAxe", false},
            {"canMountWep_Sickle", false},
            {"canMountWep_Knuckle", false},
            {"canMountWep_Claw", false},
            {"canMountWep_Whip", false},
            {"canMountWep_AxhammerLarge", false},
            {"canMountWep_BowSmall", false},
            {"canMountWep_BowNormal", false},
            {"canMountWep_BowLarge", false},
            {"canMountWep_ClossBow", false},
            {"canMountWep_Ballista", false},
            {"canMountWep_Staff", false},
            {"canMountWep_Sorcery", false},
            {"canMountWep_Talisman", false},
            {"canMountWep_ShieldSmall", false},
            {"canMountWep_ShieldNormal", false},
            {"canMountWep_ShieldLarge", false},
            {"canMountWep_Torch", false},
            {"canMountWep_HandToHand", false},
            {"canMountWep_PerfumeBottle", false},
            {"canMountWep_ThrustingShield", false},
            {"canMountWep_ThrowingWeapon", false},
            {"canMountWep_ReverseHandSword", false},
            {"canMountWep_LightGreatsword", false},
            {"canMountWep_GreatKatana", false},
            {"canMountWep_BeastClaw", false},
            {"spEffectMsgId0", false},
            {"spEffectMsgId1", false},
            {"spEffectId_forAtk0", false},
            {"spEffectId_forAtk1", false},
            {"spEffectId_forAtk2", false},
            {"mountWepTextId", false},
        });
        return indexer;
    };
    paramsTable["EquipParamGem"] = tableLoader;
}

template<> void ParamTableIndexer<EquipParamGem>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,iconId,rank,sortGroupId,spEffectId0,spEffectId1,spEffectId2,itemGetTutorialFlagId,swordArtsParamId,mountValue,sellValue,saleValue,sortId,compTrophySedId,trophySeqId,configurableWepAttr00,configurableWepAttr01,configurableWepAttr02,configurableWepAttr03,configurableWepAttr04,configurableWepAttr05,configurableWepAttr06,configurableWepAttr07,configurableWepAttr08,configurableWepAttr09,configurableWepAttr10,configurableWepAttr11,configurableWepAttr12,configurableWepAttr13,configurableWepAttr14,configurableWepAttr15,rarity,configurableWepAttr16,configurableWepAttr17,configurableWepAttr18,configurableWepAttr19,configurableWepAttr20,configurableWepAttr21,configurableWepAttr22,configurableWepAttr23,isDiscard,isDrop,isDeposit,disableMultiDropShare,showDialogCondType,showLogCondType,defaultWepAttr,isSpecialSwordArt,canMountWep_Dagger,canMountWep_SwordNormal,canMountWep_SwordLarge,canMountWep_SwordGigantic,canMountWep_SaberNormal,canMountWep_SaberLarge,canMountWep_katana,canMountWep_SwordDoubleEdge,canMountWep_SwordPierce,canMountWep_RapierHeavy,canMountWep_AxeNormal,canMountWep_AxeLarge,canMountWep_HammerNormal,canMountWep_HammerLarge,canMountWep_Flail,canMountWep_SpearNormal,canMountWep_SpearLarge,canMountWep_SpearHeavy,canMountWep_SpearAxe,canMountWep_Sickle,canMountWep_Knuckle,canMountWep_Claw,canMountWep_Whip,canMountWep_AxhammerLarge,canMountWep_BowSmall,canMountWep_BowNormal,canMountWep_BowLarge,canMountWep_ClossBow,canMountWep_Ballista,canMountWep_Staff,canMountWep_Sorcery,canMountWep_Talisman,canMountWep_ShieldSmall,canMountWep_ShieldNormal,canMountWep_ShieldLarge,canMountWep_Torch,canMountWep_HandToHand,canMountWep_PerfumeBottle,canMountWep_ThrustingShield,canMountWep_ThrowingWeapon,canMountWep_ReverseHandSword,canMountWep_LightGreatsword,canMountWep_GreatKatana,canMountWep_BeastClaw,spEffectMsgId0,spEffectMsgId1,spEffectId_forAtk0,spEffectId_forAtk1,spEffectId_forAtk2,mountWepTextId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%d,%u,%d,%d,%d,%u,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%d,%d,%d,%d\n",
            this->paramId(i),
            param->disableParam_NT,
            param->iconId,
            param->rank,
            param->sortGroupId,
            param->spEffectId0,
            param->spEffectId1,
            param->spEffectId2,
            param->itemGetTutorialFlagId,
            param->swordArtsParamId,
            param->mountValue,
            param->sellValue,
            param->saleValue,
            param->sortId,
            param->compTrophySedId,
            param->trophySeqId,
            param->configurableWepAttr00,
            param->configurableWepAttr01,
            param->configurableWepAttr02,
            param->configurableWepAttr03,
            param->configurableWepAttr04,
            param->configurableWepAttr05,
            param->configurableWepAttr06,
            param->configurableWepAttr07,
            param->configurableWepAttr08,
            param->configurableWepAttr09,
            param->configurableWepAttr10,
            param->configurableWepAttr11,
            param->configurableWepAttr12,
            param->configurableWepAttr13,
            param->configurableWepAttr14,
            param->configurableWepAttr15,
            param->rarity,
            param->configurableWepAttr16,
            param->configurableWepAttr17,
            param->configurableWepAttr18,
            param->configurableWepAttr19,
            param->configurableWepAttr20,
            param->configurableWepAttr21,
            param->configurableWepAttr22,
            param->configurableWepAttr23,
            param->isDiscard,
            param->isDrop,
            param->isDeposit,
            param->disableMultiDropShare,
            param->showDialogCondType,
            param->showLogCondType,
            param->defaultWepAttr,
            param->isSpecialSwordArt,
            param->canMountWep_Dagger,
            param->canMountWep_SwordNormal,
            param->canMountWep_SwordLarge,
            param->canMountWep_SwordGigantic,
            param->canMountWep_SaberNormal,
            param->canMountWep_SaberLarge,
            param->canMountWep_katana,
            param->canMountWep_SwordDoubleEdge,
            param->canMountWep_SwordPierce,
            param->canMountWep_RapierHeavy,
            param->canMountWep_AxeNormal,
            param->canMountWep_AxeLarge,
            param->canMountWep_HammerNormal,
            param->canMountWep_HammerLarge,
            param->canMountWep_Flail,
            param->canMountWep_SpearNormal,
            param->canMountWep_SpearLarge,
            param->canMountWep_SpearHeavy,
            param->canMountWep_SpearAxe,
            param->canMountWep_Sickle,
            param->canMountWep_Knuckle,
            param->canMountWep_Claw,
            param->canMountWep_Whip,
            param->canMountWep_AxhammerLarge,
            param->canMountWep_BowSmall,
            param->canMountWep_BowNormal,
            param->canMountWep_BowLarge,
            param->canMountWep_ClossBow,
            param->canMountWep_Ballista,
            param->canMountWep_Staff,
            param->canMountWep_Sorcery,
            param->canMountWep_Talisman,
            param->canMountWep_ShieldSmall,
            param->canMountWep_ShieldNormal,
            param->canMountWep_ShieldLarge,
            param->canMountWep_Torch,
            param->canMountWep_HandToHand,
            param->canMountWep_PerfumeBottle,
            param->canMountWep_ThrustingShield,
            param->canMountWep_ThrowingWeapon,
            param->canMountWep_ReverseHandSword,
            param->canMountWep_LightGreatsword,
            param->canMountWep_GreatKatana,
            param->canMountWep_BeastClaw,
            param->spEffectMsgId0,
            param->spEffectMsgId1,
            param->spEffectId_forAtk0,
            param->spEffectId_forAtk1,
            param->spEffectId_forAtk2,
            param->mountWepTextId
        );
    }
    fclose(f);
}

}
