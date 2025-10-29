#include "../luabindings.h"
#include "../defs/EquipParamProtector.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<EquipParamProtector>::exportToCsvImpl(const std::wstring &csvPath);

void registerEquipParamProtector(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["EquipParamProtector"]; usertype) return;
        auto indexerEquipParamProtector = state->new_usertype<ParamTableIndexer<EquipParamProtector>>("EquipParamProtectorTableIndexer");
        indexerEquipParamProtector["count"] = sol::property(&ParamTableIndexer<EquipParamProtector>::count);
        indexerEquipParamProtector["__index"] = &ParamTableIndexer<EquipParamProtector>::at;
        indexerEquipParamProtector["id"] = &ParamTableIndexer<EquipParamProtector>::paramId;
        indexerEquipParamProtector["get"] = &ParamTableIndexer<EquipParamProtector>::get;
        indexerEquipParamProtector["exportToCsv"] = &ParamTableIndexer<EquipParamProtector>::exportToCsv;
        indexerEquipParamProtector["importFromCsv"] = &ParamTableIndexer<EquipParamProtector>::importFromCsv;
        auto utEquipParamProtector = state->new_usertype<EquipParamProtector>("EquipParamProtector");
        utEquipParamProtector["disableParam_NT"] = sol::property([](EquipParamProtector &param) -> uint8_t { return param.disableParam_NT; }, [](EquipParamProtector &param, uint8_t value) { param.disableParam_NT = value; });
        utEquipParamProtector["sortId"] = &EquipParamProtector::sortId;
        utEquipParamProtector["wanderingEquipId"] = &EquipParamProtector::wanderingEquipId;
        utEquipParamProtector["resistSleep"] = &EquipParamProtector::resistSleep;
        utEquipParamProtector["resistMadness"] = &EquipParamProtector::resistMadness;
        utEquipParamProtector["saDurability"] = &EquipParamProtector::saDurability;
        utEquipParamProtector["toughnessCorrectRate"] = &EquipParamProtector::toughnessCorrectRate;
        utEquipParamProtector["fixPrice"] = &EquipParamProtector::fixPrice;
        utEquipParamProtector["basicPrice"] = &EquipParamProtector::basicPrice;
        utEquipParamProtector["sellValue"] = &EquipParamProtector::sellValue;
        utEquipParamProtector["weight"] = &EquipParamProtector::weight;
        utEquipParamProtector["residentSpEffectId"] = &EquipParamProtector::residentSpEffectId;
        utEquipParamProtector["residentSpEffectId2"] = &EquipParamProtector::residentSpEffectId2;
        utEquipParamProtector["residentSpEffectId3"] = &EquipParamProtector::residentSpEffectId3;
        utEquipParamProtector["materialSetId"] = &EquipParamProtector::materialSetId;
        utEquipParamProtector["partsDamageRate"] = &EquipParamProtector::partsDamageRate;
        utEquipParamProtector["corectSARecover"] = &EquipParamProtector::corectSARecover;
        utEquipParamProtector["originEquipPro"] = &EquipParamProtector::originEquipPro;
        utEquipParamProtector["originEquipPro1"] = &EquipParamProtector::originEquipPro1;
        utEquipParamProtector["originEquipPro2"] = &EquipParamProtector::originEquipPro2;
        utEquipParamProtector["originEquipPro3"] = &EquipParamProtector::originEquipPro3;
        utEquipParamProtector["originEquipPro4"] = &EquipParamProtector::originEquipPro4;
        utEquipParamProtector["originEquipPro5"] = &EquipParamProtector::originEquipPro5;
        utEquipParamProtector["originEquipPro6"] = &EquipParamProtector::originEquipPro6;
        utEquipParamProtector["originEquipPro7"] = &EquipParamProtector::originEquipPro7;
        utEquipParamProtector["originEquipPro8"] = &EquipParamProtector::originEquipPro8;
        utEquipParamProtector["originEquipPro9"] = &EquipParamProtector::originEquipPro9;
        utEquipParamProtector["originEquipPro10"] = &EquipParamProtector::originEquipPro10;
        utEquipParamProtector["originEquipPro11"] = &EquipParamProtector::originEquipPro11;
        utEquipParamProtector["originEquipPro12"] = &EquipParamProtector::originEquipPro12;
        utEquipParamProtector["originEquipPro13"] = &EquipParamProtector::originEquipPro13;
        utEquipParamProtector["originEquipPro14"] = &EquipParamProtector::originEquipPro14;
        utEquipParamProtector["originEquipPro15"] = &EquipParamProtector::originEquipPro15;
        utEquipParamProtector["faceScaleM_ScaleX"] = &EquipParamProtector::faceScaleM_ScaleX;
        utEquipParamProtector["faceScaleM_ScaleZ"] = &EquipParamProtector::faceScaleM_ScaleZ;
        utEquipParamProtector["faceScaleM_MaxX"] = &EquipParamProtector::faceScaleM_MaxX;
        utEquipParamProtector["faceScaleM_MaxZ"] = &EquipParamProtector::faceScaleM_MaxZ;
        utEquipParamProtector["faceScaleF_ScaleX"] = &EquipParamProtector::faceScaleF_ScaleX;
        utEquipParamProtector["faceScaleF_ScaleZ"] = &EquipParamProtector::faceScaleF_ScaleZ;
        utEquipParamProtector["faceScaleF_MaxX"] = &EquipParamProtector::faceScaleF_MaxX;
        utEquipParamProtector["faceScaleF_MaxZ"] = &EquipParamProtector::faceScaleF_MaxZ;
        utEquipParamProtector["qwcId"] = &EquipParamProtector::qwcId;
        utEquipParamProtector["equipModelId"] = &EquipParamProtector::equipModelId;
        utEquipParamProtector["iconIdM"] = &EquipParamProtector::iconIdM;
        utEquipParamProtector["iconIdF"] = &EquipParamProtector::iconIdF;
        utEquipParamProtector["knockBack"] = &EquipParamProtector::knockBack;
        utEquipParamProtector["knockbackBounceRate"] = &EquipParamProtector::knockbackBounceRate;
        utEquipParamProtector["durability"] = &EquipParamProtector::durability;
        utEquipParamProtector["durabilityMax"] = &EquipParamProtector::durabilityMax;
        utEquipParamProtector["defFlickPower"] = &EquipParamProtector::defFlickPower;
        utEquipParamProtector["defensePhysics"] = &EquipParamProtector::defensePhysics;
        utEquipParamProtector["defenseMagic"] = &EquipParamProtector::defenseMagic;
        utEquipParamProtector["defenseFire"] = &EquipParamProtector::defenseFire;
        utEquipParamProtector["defenseThunder"] = &EquipParamProtector::defenseThunder;
        utEquipParamProtector["defenseSlash"] = &EquipParamProtector::defenseSlash;
        utEquipParamProtector["defenseBlow"] = &EquipParamProtector::defenseBlow;
        utEquipParamProtector["defenseThrust"] = &EquipParamProtector::defenseThrust;
        utEquipParamProtector["resistPoison"] = &EquipParamProtector::resistPoison;
        utEquipParamProtector["resistDisease"] = &EquipParamProtector::resistDisease;
        utEquipParamProtector["resistBlood"] = &EquipParamProtector::resistBlood;
        utEquipParamProtector["resistCurse"] = &EquipParamProtector::resistCurse;
        utEquipParamProtector["reinforceTypeId"] = &EquipParamProtector::reinforceTypeId;
        utEquipParamProtector["trophySGradeId"] = &EquipParamProtector::trophySGradeId;
        utEquipParamProtector["shopLv"] = &EquipParamProtector::shopLv;
        utEquipParamProtector["knockbackParamId"] = &EquipParamProtector::knockbackParamId;
        utEquipParamProtector["flickDamageCutRate"] = &EquipParamProtector::flickDamageCutRate;
        utEquipParamProtector["equipModelCategory"] = &EquipParamProtector::equipModelCategory;
        utEquipParamProtector["equipModelGender"] = &EquipParamProtector::equipModelGender;
        utEquipParamProtector["protectorCategory"] = &EquipParamProtector::protectorCategory;
        utEquipParamProtector["rarity"] = &EquipParamProtector::rarity;
        utEquipParamProtector["sortGroupId"] = &EquipParamProtector::sortGroupId;
        utEquipParamProtector["partsDmgType"] = &EquipParamProtector::partsDmgType;
        utEquipParamProtector["isDeposit"] = sol::property([](EquipParamProtector &param) -> uint8_t { return param.isDeposit; }, [](EquipParamProtector &param, uint8_t value) { param.isDeposit = value; });
        utEquipParamProtector["headEquip"] = sol::property([](EquipParamProtector &param) -> uint8_t { return param.headEquip; }, [](EquipParamProtector &param, uint8_t value) { param.headEquip = value; });
        utEquipParamProtector["bodyEquip"] = sol::property([](EquipParamProtector &param) -> uint8_t { return param.bodyEquip; }, [](EquipParamProtector &param, uint8_t value) { param.bodyEquip = value; });
        utEquipParamProtector["armEquip"] = sol::property([](EquipParamProtector &param) -> uint8_t { return param.armEquip; }, [](EquipParamProtector &param, uint8_t value) { param.armEquip = value; });
        utEquipParamProtector["legEquip"] = sol::property([](EquipParamProtector &param) -> uint8_t { return param.legEquip; }, [](EquipParamProtector &param, uint8_t value) { param.legEquip = value; });
        utEquipParamProtector["useFaceScale"] = sol::property([](EquipParamProtector &param) -> uint8_t { return param.useFaceScale; }, [](EquipParamProtector &param, uint8_t value) { param.useFaceScale = value; });
        utEquipParamProtector["isSkipWeakDamageAnim"] = sol::property([](EquipParamProtector &param) -> uint8_t { return param.isSkipWeakDamageAnim; }, [](EquipParamProtector &param, uint8_t value) { param.isSkipWeakDamageAnim = value; });
        utEquipParamProtector["defenseMaterialVariationValue_Weak"] = &EquipParamProtector::defenseMaterialVariationValue_Weak;
        utEquipParamProtector["autoFootEffectDecalBaseId2"] = &EquipParamProtector::autoFootEffectDecalBaseId2;
        utEquipParamProtector["autoFootEffectDecalBaseId3"] = &EquipParamProtector::autoFootEffectDecalBaseId3;
        utEquipParamProtector["defenseMaterialVariationValue"] = &EquipParamProtector::defenseMaterialVariationValue;
        utEquipParamProtector["isDiscard"] = sol::property([](EquipParamProtector &param) -> uint8_t { return param.isDiscard; }, [](EquipParamProtector &param, uint8_t value) { param.isDiscard = value; });
        utEquipParamProtector["isDrop"] = sol::property([](EquipParamProtector &param) -> uint8_t { return param.isDrop; }, [](EquipParamProtector &param, uint8_t value) { param.isDrop = value; });
        utEquipParamProtector["disableMultiDropShare"] = sol::property([](EquipParamProtector &param) -> uint8_t { return param.disableMultiDropShare; }, [](EquipParamProtector &param, uint8_t value) { param.disableMultiDropShare = value; });
        utEquipParamProtector["simpleModelForDlc"] = sol::property([](EquipParamProtector &param) -> uint8_t { return param.simpleModelForDlc; }, [](EquipParamProtector &param, uint8_t value) { param.simpleModelForDlc = value; });
        utEquipParamProtector["showLogCondType"] = sol::property([](EquipParamProtector &param) -> uint8_t { return param.showLogCondType; }, [](EquipParamProtector &param, uint8_t value) { param.showLogCondType = value; });
        utEquipParamProtector["showDialogCondType"] = sol::property([](EquipParamProtector &param) -> uint8_t { return param.showDialogCondType; }, [](EquipParamProtector &param, uint8_t value) { param.showDialogCondType = value; });
        utEquipParamProtector["neutralDamageCutRate"] = &EquipParamProtector::neutralDamageCutRate;
        utEquipParamProtector["slashDamageCutRate"] = &EquipParamProtector::slashDamageCutRate;
        utEquipParamProtector["blowDamageCutRate"] = &EquipParamProtector::blowDamageCutRate;
        utEquipParamProtector["thrustDamageCutRate"] = &EquipParamProtector::thrustDamageCutRate;
        utEquipParamProtector["magicDamageCutRate"] = &EquipParamProtector::magicDamageCutRate;
        utEquipParamProtector["fireDamageCutRate"] = &EquipParamProtector::fireDamageCutRate;
        utEquipParamProtector["thunderDamageCutRate"] = &EquipParamProtector::thunderDamageCutRate;
        utEquipParamProtector["defenseMaterialSfx1"] = &EquipParamProtector::defenseMaterialSfx1;
        utEquipParamProtector["defenseMaterialSfx_Weak1"] = &EquipParamProtector::defenseMaterialSfx_Weak1;
        utEquipParamProtector["defenseMaterial1"] = &EquipParamProtector::defenseMaterial1;
        utEquipParamProtector["defenseMaterial_Weak1"] = &EquipParamProtector::defenseMaterial_Weak1;
        utEquipParamProtector["defenseMaterialSfx2"] = &EquipParamProtector::defenseMaterialSfx2;
        utEquipParamProtector["defenseMaterialSfx_Weak2"] = &EquipParamProtector::defenseMaterialSfx_Weak2;
        utEquipParamProtector["footMaterialSe"] = &EquipParamProtector::footMaterialSe;
        utEquipParamProtector["defenseMaterial_Weak2"] = &EquipParamProtector::defenseMaterial_Weak2;
        utEquipParamProtector["autoFootEffectDecalBaseId1"] = &EquipParamProtector::autoFootEffectDecalBaseId1;
        utEquipParamProtector["toughnessDamageCutRate"] = &EquipParamProtector::toughnessDamageCutRate;
        utEquipParamProtector["toughnessRecoverCorrection"] = &EquipParamProtector::toughnessRecoverCorrection;
        utEquipParamProtector["darkDamageCutRate"] = &EquipParamProtector::darkDamageCutRate;
        utEquipParamProtector["defenseDark"] = &EquipParamProtector::defenseDark;
        utEquipParamProtector["postureControlId"] = &EquipParamProtector::postureControlId;
        utEquipParamProtector["saleValue"] = &EquipParamProtector::saleValue;
        utEquipParamProtector["resistFreeze"] = &EquipParamProtector::resistFreeze;
        utEquipParamProtector["invisibleFlag_SexVer00"] = &EquipParamProtector::invisibleFlag_SexVer00;
        utEquipParamProtector["invisibleFlag_SexVer01"] = &EquipParamProtector::invisibleFlag_SexVer01;
        utEquipParamProtector["invisibleFlag_SexVer02"] = &EquipParamProtector::invisibleFlag_SexVer02;
        utEquipParamProtector["invisibleFlag_SexVer03"] = &EquipParamProtector::invisibleFlag_SexVer03;
        utEquipParamProtector["invisibleFlag_SexVer04"] = &EquipParamProtector::invisibleFlag_SexVer04;
        utEquipParamProtector["invisibleFlag_SexVer05"] = &EquipParamProtector::invisibleFlag_SexVer05;
        utEquipParamProtector["invisibleFlag_SexVer06"] = &EquipParamProtector::invisibleFlag_SexVer06;
        utEquipParamProtector["invisibleFlag_SexVer07"] = &EquipParamProtector::invisibleFlag_SexVer07;
        utEquipParamProtector["invisibleFlag_SexVer08"] = &EquipParamProtector::invisibleFlag_SexVer08;
        utEquipParamProtector["invisibleFlag_SexVer09"] = &EquipParamProtector::invisibleFlag_SexVer09;
        utEquipParamProtector["invisibleFlag_SexVer10"] = &EquipParamProtector::invisibleFlag_SexVer10;
        utEquipParamProtector["invisibleFlag_SexVer11"] = &EquipParamProtector::invisibleFlag_SexVer11;
        utEquipParamProtector["invisibleFlag_SexVer12"] = &EquipParamProtector::invisibleFlag_SexVer12;
        utEquipParamProtector["invisibleFlag_SexVer13"] = &EquipParamProtector::invisibleFlag_SexVer13;
        utEquipParamProtector["invisibleFlag_SexVer14"] = &EquipParamProtector::invisibleFlag_SexVer14;
        utEquipParamProtector["invisibleFlag_SexVer15"] = &EquipParamProtector::invisibleFlag_SexVer15;
        utEquipParamProtector["invisibleFlag_SexVer16"] = &EquipParamProtector::invisibleFlag_SexVer16;
        utEquipParamProtector["invisibleFlag_SexVer17"] = &EquipParamProtector::invisibleFlag_SexVer17;
        utEquipParamProtector["invisibleFlag_SexVer18"] = &EquipParamProtector::invisibleFlag_SexVer18;
        utEquipParamProtector["invisibleFlag_SexVer19"] = &EquipParamProtector::invisibleFlag_SexVer19;
        utEquipParamProtector["invisibleFlag_SexVer20"] = &EquipParamProtector::invisibleFlag_SexVer20;
        utEquipParamProtector["invisibleFlag_SexVer21"] = &EquipParamProtector::invisibleFlag_SexVer21;
        utEquipParamProtector["invisibleFlag_SexVer22"] = &EquipParamProtector::invisibleFlag_SexVer22;
        utEquipParamProtector["invisibleFlag_SexVer23"] = &EquipParamProtector::invisibleFlag_SexVer23;
        utEquipParamProtector["invisibleFlag_SexVer24"] = &EquipParamProtector::invisibleFlag_SexVer24;
        utEquipParamProtector["invisibleFlag_SexVer25"] = &EquipParamProtector::invisibleFlag_SexVer25;
        utEquipParamProtector["invisibleFlag_SexVer26"] = &EquipParamProtector::invisibleFlag_SexVer26;
        utEquipParamProtector["invisibleFlag_SexVer27"] = &EquipParamProtector::invisibleFlag_SexVer27;
        utEquipParamProtector["invisibleFlag_SexVer28"] = &EquipParamProtector::invisibleFlag_SexVer28;
        utEquipParamProtector["invisibleFlag_SexVer29"] = &EquipParamProtector::invisibleFlag_SexVer29;
        utEquipParamProtector["invisibleFlag_SexVer30"] = &EquipParamProtector::invisibleFlag_SexVer30;
        utEquipParamProtector["invisibleFlag_SexVer31"] = &EquipParamProtector::invisibleFlag_SexVer31;
        utEquipParamProtector["invisibleFlag_SexVer32"] = &EquipParamProtector::invisibleFlag_SexVer32;
        utEquipParamProtector["invisibleFlag_SexVer33"] = &EquipParamProtector::invisibleFlag_SexVer33;
        utEquipParamProtector["invisibleFlag_SexVer34"] = &EquipParamProtector::invisibleFlag_SexVer34;
        utEquipParamProtector["invisibleFlag_SexVer35"] = &EquipParamProtector::invisibleFlag_SexVer35;
        utEquipParamProtector["invisibleFlag_SexVer36"] = &EquipParamProtector::invisibleFlag_SexVer36;
        utEquipParamProtector["invisibleFlag_SexVer37"] = &EquipParamProtector::invisibleFlag_SexVer37;
        utEquipParamProtector["invisibleFlag_SexVer38"] = &EquipParamProtector::invisibleFlag_SexVer38;
        utEquipParamProtector["invisibleFlag_SexVer39"] = &EquipParamProtector::invisibleFlag_SexVer39;
        utEquipParamProtector["invisibleFlag_SexVer40"] = &EquipParamProtector::invisibleFlag_SexVer40;
        utEquipParamProtector["invisibleFlag_SexVer41"] = &EquipParamProtector::invisibleFlag_SexVer41;
        utEquipParamProtector["invisibleFlag_SexVer42"] = &EquipParamProtector::invisibleFlag_SexVer42;
        utEquipParamProtector["invisibleFlag_SexVer43"] = &EquipParamProtector::invisibleFlag_SexVer43;
        utEquipParamProtector["invisibleFlag_SexVer44"] = &EquipParamProtector::invisibleFlag_SexVer44;
        utEquipParamProtector["invisibleFlag_SexVer45"] = &EquipParamProtector::invisibleFlag_SexVer45;
        utEquipParamProtector["invisibleFlag_SexVer46"] = &EquipParamProtector::invisibleFlag_SexVer46;
        utEquipParamProtector["invisibleFlag_SexVer47"] = &EquipParamProtector::invisibleFlag_SexVer47;
        utEquipParamProtector["invisibleFlag_SexVer48"] = &EquipParamProtector::invisibleFlag_SexVer48;
        utEquipParamProtector["invisibleFlag_SexVer49"] = &EquipParamProtector::invisibleFlag_SexVer49;
        utEquipParamProtector["invisibleFlag_SexVer50"] = &EquipParamProtector::invisibleFlag_SexVer50;
        utEquipParamProtector["invisibleFlag_SexVer51"] = &EquipParamProtector::invisibleFlag_SexVer51;
        utEquipParamProtector["invisibleFlag_SexVer52"] = &EquipParamProtector::invisibleFlag_SexVer52;
        utEquipParamProtector["invisibleFlag_SexVer53"] = &EquipParamProtector::invisibleFlag_SexVer53;
        utEquipParamProtector["invisibleFlag_SexVer54"] = &EquipParamProtector::invisibleFlag_SexVer54;
        utEquipParamProtector["invisibleFlag_SexVer55"] = &EquipParamProtector::invisibleFlag_SexVer55;
        utEquipParamProtector["invisibleFlag_SexVer56"] = &EquipParamProtector::invisibleFlag_SexVer56;
        utEquipParamProtector["invisibleFlag_SexVer57"] = &EquipParamProtector::invisibleFlag_SexVer57;
        utEquipParamProtector["invisibleFlag_SexVer58"] = &EquipParamProtector::invisibleFlag_SexVer58;
        utEquipParamProtector["invisibleFlag_SexVer59"] = &EquipParamProtector::invisibleFlag_SexVer59;
        utEquipParamProtector["invisibleFlag_SexVer60"] = &EquipParamProtector::invisibleFlag_SexVer60;
        utEquipParamProtector["invisibleFlag_SexVer61"] = &EquipParamProtector::invisibleFlag_SexVer61;
        utEquipParamProtector["invisibleFlag_SexVer62"] = &EquipParamProtector::invisibleFlag_SexVer62;
        utEquipParamProtector["invisibleFlag_SexVer63"] = &EquipParamProtector::invisibleFlag_SexVer63;
        utEquipParamProtector["invisibleFlag_SexVer64"] = &EquipParamProtector::invisibleFlag_SexVer64;
        utEquipParamProtector["invisibleFlag_SexVer65"] = &EquipParamProtector::invisibleFlag_SexVer65;
        utEquipParamProtector["invisibleFlag_SexVer66"] = &EquipParamProtector::invisibleFlag_SexVer66;
        utEquipParamProtector["invisibleFlag_SexVer67"] = &EquipParamProtector::invisibleFlag_SexVer67;
        utEquipParamProtector["invisibleFlag_SexVer68"] = &EquipParamProtector::invisibleFlag_SexVer68;
        utEquipParamProtector["invisibleFlag_SexVer69"] = &EquipParamProtector::invisibleFlag_SexVer69;
        utEquipParamProtector["invisibleFlag_SexVer70"] = &EquipParamProtector::invisibleFlag_SexVer70;
        utEquipParamProtector["invisibleFlag_SexVer71"] = &EquipParamProtector::invisibleFlag_SexVer71;
        utEquipParamProtector["invisibleFlag_SexVer72"] = &EquipParamProtector::invisibleFlag_SexVer72;
        utEquipParamProtector["invisibleFlag_SexVer73"] = &EquipParamProtector::invisibleFlag_SexVer73;
        utEquipParamProtector["invisibleFlag_SexVer74"] = &EquipParamProtector::invisibleFlag_SexVer74;
        utEquipParamProtector["invisibleFlag_SexVer75"] = &EquipParamProtector::invisibleFlag_SexVer75;
        utEquipParamProtector["invisibleFlag_SexVer76"] = &EquipParamProtector::invisibleFlag_SexVer76;
        utEquipParamProtector["invisibleFlag_SexVer77"] = &EquipParamProtector::invisibleFlag_SexVer77;
        utEquipParamProtector["invisibleFlag_SexVer78"] = &EquipParamProtector::invisibleFlag_SexVer78;
        utEquipParamProtector["invisibleFlag_SexVer79"] = &EquipParamProtector::invisibleFlag_SexVer79;
        utEquipParamProtector["invisibleFlag_SexVer80"] = &EquipParamProtector::invisibleFlag_SexVer80;
        utEquipParamProtector["invisibleFlag_SexVer81"] = &EquipParamProtector::invisibleFlag_SexVer81;
        utEquipParamProtector["invisibleFlag_SexVer82"] = &EquipParamProtector::invisibleFlag_SexVer82;
        utEquipParamProtector["invisibleFlag_SexVer83"] = &EquipParamProtector::invisibleFlag_SexVer83;
        utEquipParamProtector["invisibleFlag_SexVer84"] = &EquipParamProtector::invisibleFlag_SexVer84;
        utEquipParamProtector["invisibleFlag_SexVer85"] = &EquipParamProtector::invisibleFlag_SexVer85;
        utEquipParamProtector["invisibleFlag_SexVer86"] = &EquipParamProtector::invisibleFlag_SexVer86;
        utEquipParamProtector["invisibleFlag_SexVer87"] = &EquipParamProtector::invisibleFlag_SexVer87;
        utEquipParamProtector["invisibleFlag_SexVer88"] = &EquipParamProtector::invisibleFlag_SexVer88;
        utEquipParamProtector["invisibleFlag_SexVer89"] = &EquipParamProtector::invisibleFlag_SexVer89;
        utEquipParamProtector["invisibleFlag_SexVer90"] = &EquipParamProtector::invisibleFlag_SexVer90;
        utEquipParamProtector["invisibleFlag_SexVer91"] = &EquipParamProtector::invisibleFlag_SexVer91;
        utEquipParamProtector["invisibleFlag_SexVer92"] = &EquipParamProtector::invisibleFlag_SexVer92;
        utEquipParamProtector["invisibleFlag_SexVer93"] = &EquipParamProtector::invisibleFlag_SexVer93;
        utEquipParamProtector["invisibleFlag_SexVer94"] = &EquipParamProtector::invisibleFlag_SexVer94;
        utEquipParamProtector["invisibleFlag_SexVer95"] = &EquipParamProtector::invisibleFlag_SexVer95;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<EquipParamProtector>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<EquipParamProtector>>(nullptr);
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"sortId", false},
            {"wanderingEquipId", false},
            {"resistSleep", false},
            {"resistMadness", false},
            {"saDurability", false},
            {"toughnessCorrectRate", false},
            {"fixPrice", false},
            {"basicPrice", false},
            {"sellValue", false},
            {"weight", false},
            {"residentSpEffectId", false},
            {"residentSpEffectId2", false},
            {"residentSpEffectId3", false},
            {"materialSetId", false},
            {"partsDamageRate", false},
            {"corectSARecover", false},
            {"originEquipPro", false},
            {"originEquipPro1", false},
            {"originEquipPro2", false},
            {"originEquipPro3", false},
            {"originEquipPro4", false},
            {"originEquipPro5", false},
            {"originEquipPro6", false},
            {"originEquipPro7", false},
            {"originEquipPro8", false},
            {"originEquipPro9", false},
            {"originEquipPro10", false},
            {"originEquipPro11", false},
            {"originEquipPro12", false},
            {"originEquipPro13", false},
            {"originEquipPro14", false},
            {"originEquipPro15", false},
            {"faceScaleM_ScaleX", false},
            {"faceScaleM_ScaleZ", false},
            {"faceScaleM_MaxX", false},
            {"faceScaleM_MaxZ", false},
            {"faceScaleF_ScaleX", false},
            {"faceScaleF_ScaleZ", false},
            {"faceScaleF_MaxX", false},
            {"faceScaleF_MaxZ", false},
            {"qwcId", false},
            {"equipModelId", false},
            {"iconIdM", false},
            {"iconIdF", false},
            {"knockBack", false},
            {"knockbackBounceRate", false},
            {"durability", false},
            {"durabilityMax", false},
            {"defFlickPower", false},
            {"defensePhysics", false},
            {"defenseMagic", false},
            {"defenseFire", false},
            {"defenseThunder", false},
            {"defenseSlash", false},
            {"defenseBlow", false},
            {"defenseThrust", false},
            {"resistPoison", false},
            {"resistDisease", false},
            {"resistBlood", false},
            {"resistCurse", false},
            {"reinforceTypeId", false},
            {"trophySGradeId", false},
            {"shopLv", false},
            {"knockbackParamId", false},
            {"flickDamageCutRate", false},
            {"equipModelCategory", false},
            {"equipModelGender", false},
            {"protectorCategory", false},
            {"rarity", false},
            {"sortGroupId", false},
            {"partsDmgType", false},
            {"isDeposit", false},
            {"headEquip", false},
            {"bodyEquip", false},
            {"armEquip", false},
            {"legEquip", false},
            {"useFaceScale", false},
            {"isSkipWeakDamageAnim", false},
            {"defenseMaterialVariationValue_Weak", false},
            {"autoFootEffectDecalBaseId2", false},
            {"autoFootEffectDecalBaseId3", false},
            {"defenseMaterialVariationValue", false},
            {"isDiscard", false},
            {"isDrop", false},
            {"disableMultiDropShare", false},
            {"simpleModelForDlc", false},
            {"showLogCondType", false},
            {"showDialogCondType", false},
            {"neutralDamageCutRate", false},
            {"slashDamageCutRate", false},
            {"blowDamageCutRate", false},
            {"thrustDamageCutRate", false},
            {"magicDamageCutRate", false},
            {"fireDamageCutRate", false},
            {"thunderDamageCutRate", false},
            {"defenseMaterialSfx1", false},
            {"defenseMaterialSfx_Weak1", false},
            {"defenseMaterial1", false},
            {"defenseMaterial_Weak1", false},
            {"defenseMaterialSfx2", false},
            {"defenseMaterialSfx_Weak2", false},
            {"footMaterialSe", false},
            {"defenseMaterial_Weak2", false},
            {"autoFootEffectDecalBaseId1", false},
            {"toughnessDamageCutRate", false},
            {"toughnessRecoverCorrection", false},
            {"darkDamageCutRate", false},
            {"defenseDark", false},
            {"postureControlId", false},
            {"saleValue", false},
            {"resistFreeze", false},
            {"invisibleFlag_SexVer00", false},
            {"invisibleFlag_SexVer01", false},
            {"invisibleFlag_SexVer02", false},
            {"invisibleFlag_SexVer03", false},
            {"invisibleFlag_SexVer04", false},
            {"invisibleFlag_SexVer05", false},
            {"invisibleFlag_SexVer06", false},
            {"invisibleFlag_SexVer07", false},
            {"invisibleFlag_SexVer08", false},
            {"invisibleFlag_SexVer09", false},
            {"invisibleFlag_SexVer10", false},
            {"invisibleFlag_SexVer11", false},
            {"invisibleFlag_SexVer12", false},
            {"invisibleFlag_SexVer13", false},
            {"invisibleFlag_SexVer14", false},
            {"invisibleFlag_SexVer15", false},
            {"invisibleFlag_SexVer16", false},
            {"invisibleFlag_SexVer17", false},
            {"invisibleFlag_SexVer18", false},
            {"invisibleFlag_SexVer19", false},
            {"invisibleFlag_SexVer20", false},
            {"invisibleFlag_SexVer21", false},
            {"invisibleFlag_SexVer22", false},
            {"invisibleFlag_SexVer23", false},
            {"invisibleFlag_SexVer24", false},
            {"invisibleFlag_SexVer25", false},
            {"invisibleFlag_SexVer26", false},
            {"invisibleFlag_SexVer27", false},
            {"invisibleFlag_SexVer28", false},
            {"invisibleFlag_SexVer29", false},
            {"invisibleFlag_SexVer30", false},
            {"invisibleFlag_SexVer31", false},
            {"invisibleFlag_SexVer32", false},
            {"invisibleFlag_SexVer33", false},
            {"invisibleFlag_SexVer34", false},
            {"invisibleFlag_SexVer35", false},
            {"invisibleFlag_SexVer36", false},
            {"invisibleFlag_SexVer37", false},
            {"invisibleFlag_SexVer38", false},
            {"invisibleFlag_SexVer39", false},
            {"invisibleFlag_SexVer40", false},
            {"invisibleFlag_SexVer41", false},
            {"invisibleFlag_SexVer42", false},
            {"invisibleFlag_SexVer43", false},
            {"invisibleFlag_SexVer44", false},
            {"invisibleFlag_SexVer45", false},
            {"invisibleFlag_SexVer46", false},
            {"invisibleFlag_SexVer47", false},
            {"invisibleFlag_SexVer48", false},
            {"invisibleFlag_SexVer49", false},
            {"invisibleFlag_SexVer50", false},
            {"invisibleFlag_SexVer51", false},
            {"invisibleFlag_SexVer52", false},
            {"invisibleFlag_SexVer53", false},
            {"invisibleFlag_SexVer54", false},
            {"invisibleFlag_SexVer55", false},
            {"invisibleFlag_SexVer56", false},
            {"invisibleFlag_SexVer57", false},
            {"invisibleFlag_SexVer58", false},
            {"invisibleFlag_SexVer59", false},
            {"invisibleFlag_SexVer60", false},
            {"invisibleFlag_SexVer61", false},
            {"invisibleFlag_SexVer62", false},
            {"invisibleFlag_SexVer63", false},
            {"invisibleFlag_SexVer64", false},
            {"invisibleFlag_SexVer65", false},
            {"invisibleFlag_SexVer66", false},
            {"invisibleFlag_SexVer67", false},
            {"invisibleFlag_SexVer68", false},
            {"invisibleFlag_SexVer69", false},
            {"invisibleFlag_SexVer70", false},
            {"invisibleFlag_SexVer71", false},
            {"invisibleFlag_SexVer72", false},
            {"invisibleFlag_SexVer73", false},
            {"invisibleFlag_SexVer74", false},
            {"invisibleFlag_SexVer75", false},
            {"invisibleFlag_SexVer76", false},
            {"invisibleFlag_SexVer77", false},
            {"invisibleFlag_SexVer78", false},
            {"invisibleFlag_SexVer79", false},
            {"invisibleFlag_SexVer80", false},
            {"invisibleFlag_SexVer81", false},
            {"invisibleFlag_SexVer82", false},
            {"invisibleFlag_SexVer83", false},
            {"invisibleFlag_SexVer84", false},
            {"invisibleFlag_SexVer85", false},
            {"invisibleFlag_SexVer86", false},
            {"invisibleFlag_SexVer87", false},
            {"invisibleFlag_SexVer88", false},
            {"invisibleFlag_SexVer89", false},
            {"invisibleFlag_SexVer90", false},
            {"invisibleFlag_SexVer91", false},
            {"invisibleFlag_SexVer92", false},
            {"invisibleFlag_SexVer93", false},
            {"invisibleFlag_SexVer94", false},
            {"invisibleFlag_SexVer95", false},
        });
        return indexer;
    };
    paramsTable["EquipParamProtector"] = [tableLoader]() -> auto { return tableLoader(L"EquipParamProtector"); };
}

template<> void ParamTableIndexer<EquipParamProtector>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,sortId,wanderingEquipId,resistSleep,resistMadness,saDurability,toughnessCorrectRate,fixPrice,basicPrice,sellValue,weight,residentSpEffectId,residentSpEffectId2,residentSpEffectId3,materialSetId,partsDamageRate,corectSARecover,originEquipPro,originEquipPro1,originEquipPro2,originEquipPro3,originEquipPro4,originEquipPro5,originEquipPro6,originEquipPro7,originEquipPro8,originEquipPro9,originEquipPro10,originEquipPro11,originEquipPro12,originEquipPro13,originEquipPro14,originEquipPro15,faceScaleM_ScaleX,faceScaleM_ScaleZ,faceScaleM_MaxX,faceScaleM_MaxZ,faceScaleF_ScaleX,faceScaleF_ScaleZ,faceScaleF_MaxX,faceScaleF_MaxZ,qwcId,equipModelId,iconIdM,iconIdF,knockBack,knockbackBounceRate,durability,durabilityMax,defFlickPower,defensePhysics,defenseMagic,defenseFire,defenseThunder,defenseSlash,defenseBlow,defenseThrust,resistPoison,resistDisease,resistBlood,resistCurse,reinforceTypeId,trophySGradeId,shopLv,knockbackParamId,flickDamageCutRate,equipModelCategory,equipModelGender,protectorCategory,rarity,sortGroupId,partsDmgType,isDeposit,headEquip,bodyEquip,armEquip,legEquip,useFaceScale,isSkipWeakDamageAnim,defenseMaterialVariationValue_Weak,autoFootEffectDecalBaseId2,autoFootEffectDecalBaseId3,defenseMaterialVariationValue,isDiscard,isDrop,disableMultiDropShare,simpleModelForDlc,showLogCondType,showDialogCondType,neutralDamageCutRate,slashDamageCutRate,blowDamageCutRate,thrustDamageCutRate,magicDamageCutRate,fireDamageCutRate,thunderDamageCutRate,defenseMaterialSfx1,defenseMaterialSfx_Weak1,defenseMaterial1,defenseMaterial_Weak1,defenseMaterialSfx2,defenseMaterialSfx_Weak2,footMaterialSe,defenseMaterial_Weak2,autoFootEffectDecalBaseId1,toughnessDamageCutRate,toughnessRecoverCorrection,darkDamageCutRate,defenseDark,postureControlId,saleValue,resistFreeze,invisibleFlag_SexVer00,invisibleFlag_SexVer01,invisibleFlag_SexVer02,invisibleFlag_SexVer03,invisibleFlag_SexVer04,invisibleFlag_SexVer05,invisibleFlag_SexVer06,invisibleFlag_SexVer07,invisibleFlag_SexVer08,invisibleFlag_SexVer09,invisibleFlag_SexVer10,invisibleFlag_SexVer11,invisibleFlag_SexVer12,invisibleFlag_SexVer13,invisibleFlag_SexVer14,invisibleFlag_SexVer15,invisibleFlag_SexVer16,invisibleFlag_SexVer17,invisibleFlag_SexVer18,invisibleFlag_SexVer19,invisibleFlag_SexVer20,invisibleFlag_SexVer21,invisibleFlag_SexVer22,invisibleFlag_SexVer23,invisibleFlag_SexVer24,invisibleFlag_SexVer25,invisibleFlag_SexVer26,invisibleFlag_SexVer27,invisibleFlag_SexVer28,invisibleFlag_SexVer29,invisibleFlag_SexVer30,invisibleFlag_SexVer31,invisibleFlag_SexVer32,invisibleFlag_SexVer33,invisibleFlag_SexVer34,invisibleFlag_SexVer35,invisibleFlag_SexVer36,invisibleFlag_SexVer37,invisibleFlag_SexVer38,invisibleFlag_SexVer39,invisibleFlag_SexVer40,invisibleFlag_SexVer41,invisibleFlag_SexVer42,invisibleFlag_SexVer43,invisibleFlag_SexVer44,invisibleFlag_SexVer45,invisibleFlag_SexVer46,invisibleFlag_SexVer47,invisibleFlag_SexVer48,invisibleFlag_SexVer49,invisibleFlag_SexVer50,invisibleFlag_SexVer51,invisibleFlag_SexVer52,invisibleFlag_SexVer53,invisibleFlag_SexVer54,invisibleFlag_SexVer55,invisibleFlag_SexVer56,invisibleFlag_SexVer57,invisibleFlag_SexVer58,invisibleFlag_SexVer59,invisibleFlag_SexVer60,invisibleFlag_SexVer61,invisibleFlag_SexVer62,invisibleFlag_SexVer63,invisibleFlag_SexVer64,invisibleFlag_SexVer65,invisibleFlag_SexVer66,invisibleFlag_SexVer67,invisibleFlag_SexVer68,invisibleFlag_SexVer69,invisibleFlag_SexVer70,invisibleFlag_SexVer71,invisibleFlag_SexVer72,invisibleFlag_SexVer73,invisibleFlag_SexVer74,invisibleFlag_SexVer75,invisibleFlag_SexVer76,invisibleFlag_SexVer77,invisibleFlag_SexVer78,invisibleFlag_SexVer79,invisibleFlag_SexVer80,invisibleFlag_SexVer81,invisibleFlag_SexVer82,invisibleFlag_SexVer83,invisibleFlag_SexVer84,invisibleFlag_SexVer85,invisibleFlag_SexVer86,invisibleFlag_SexVer87,invisibleFlag_SexVer88,invisibleFlag_SexVer89,invisibleFlag_SexVer90,invisibleFlag_SexVer91,invisibleFlag_SexVer92,invisibleFlag_SexVer93,invisibleFlag_SexVer94,invisibleFlag_SexVer95\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%d,%u,%u,%u,%g,%g,%d,%d,%d,%g,%d,%d,%d,%d,%g,%g,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%g,%g,%g,%g,%g,%g,%g,%g,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%d,%u,%u,%u,%u,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%u,%u,%u,%u,%u,%u,%u,%g,%g,%g,%g,%g,%g,%g,%u,%u,%u,%u,%u,%u,%u,%u,%d,%g,%g,%g,%u,%u,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u\n",
            this->paramId(i),
            param->disableParam_NT,
            param->sortId,
            param->wanderingEquipId,
            param->resistSleep,
            param->resistMadness,
            param->saDurability,
            param->toughnessCorrectRate,
            param->fixPrice,
            param->basicPrice,
            param->sellValue,
            param->weight,
            param->residentSpEffectId,
            param->residentSpEffectId2,
            param->residentSpEffectId3,
            param->materialSetId,
            param->partsDamageRate,
            param->corectSARecover,
            param->originEquipPro,
            param->originEquipPro1,
            param->originEquipPro2,
            param->originEquipPro3,
            param->originEquipPro4,
            param->originEquipPro5,
            param->originEquipPro6,
            param->originEquipPro7,
            param->originEquipPro8,
            param->originEquipPro9,
            param->originEquipPro10,
            param->originEquipPro11,
            param->originEquipPro12,
            param->originEquipPro13,
            param->originEquipPro14,
            param->originEquipPro15,
            param->faceScaleM_ScaleX,
            param->faceScaleM_ScaleZ,
            param->faceScaleM_MaxX,
            param->faceScaleM_MaxZ,
            param->faceScaleF_ScaleX,
            param->faceScaleF_ScaleZ,
            param->faceScaleF_MaxX,
            param->faceScaleF_MaxZ,
            param->qwcId,
            param->equipModelId,
            param->iconIdM,
            param->iconIdF,
            param->knockBack,
            param->knockbackBounceRate,
            param->durability,
            param->durabilityMax,
            param->defFlickPower,
            param->defensePhysics,
            param->defenseMagic,
            param->defenseFire,
            param->defenseThunder,
            param->defenseSlash,
            param->defenseBlow,
            param->defenseThrust,
            param->resistPoison,
            param->resistDisease,
            param->resistBlood,
            param->resistCurse,
            param->reinforceTypeId,
            param->trophySGradeId,
            param->shopLv,
            param->knockbackParamId,
            param->flickDamageCutRate,
            param->equipModelCategory,
            param->equipModelGender,
            param->protectorCategory,
            param->rarity,
            param->sortGroupId,
            param->partsDmgType,
            param->isDeposit,
            param->headEquip,
            param->bodyEquip,
            param->armEquip,
            param->legEquip,
            param->useFaceScale,
            param->isSkipWeakDamageAnim,
            param->defenseMaterialVariationValue_Weak,
            param->autoFootEffectDecalBaseId2,
            param->autoFootEffectDecalBaseId3,
            param->defenseMaterialVariationValue,
            param->isDiscard,
            param->isDrop,
            param->disableMultiDropShare,
            param->simpleModelForDlc,
            param->showLogCondType,
            param->showDialogCondType,
            param->neutralDamageCutRate,
            param->slashDamageCutRate,
            param->blowDamageCutRate,
            param->thrustDamageCutRate,
            param->magicDamageCutRate,
            param->fireDamageCutRate,
            param->thunderDamageCutRate,
            param->defenseMaterialSfx1,
            param->defenseMaterialSfx_Weak1,
            param->defenseMaterial1,
            param->defenseMaterial_Weak1,
            param->defenseMaterialSfx2,
            param->defenseMaterialSfx_Weak2,
            param->footMaterialSe,
            param->defenseMaterial_Weak2,
            param->autoFootEffectDecalBaseId1,
            param->toughnessDamageCutRate,
            param->toughnessRecoverCorrection,
            param->darkDamageCutRate,
            param->defenseDark,
            param->postureControlId,
            param->saleValue,
            param->resistFreeze,
            param->invisibleFlag_SexVer00,
            param->invisibleFlag_SexVer01,
            param->invisibleFlag_SexVer02,
            param->invisibleFlag_SexVer03,
            param->invisibleFlag_SexVer04,
            param->invisibleFlag_SexVer05,
            param->invisibleFlag_SexVer06,
            param->invisibleFlag_SexVer07,
            param->invisibleFlag_SexVer08,
            param->invisibleFlag_SexVer09,
            param->invisibleFlag_SexVer10,
            param->invisibleFlag_SexVer11,
            param->invisibleFlag_SexVer12,
            param->invisibleFlag_SexVer13,
            param->invisibleFlag_SexVer14,
            param->invisibleFlag_SexVer15,
            param->invisibleFlag_SexVer16,
            param->invisibleFlag_SexVer17,
            param->invisibleFlag_SexVer18,
            param->invisibleFlag_SexVer19,
            param->invisibleFlag_SexVer20,
            param->invisibleFlag_SexVer21,
            param->invisibleFlag_SexVer22,
            param->invisibleFlag_SexVer23,
            param->invisibleFlag_SexVer24,
            param->invisibleFlag_SexVer25,
            param->invisibleFlag_SexVer26,
            param->invisibleFlag_SexVer27,
            param->invisibleFlag_SexVer28,
            param->invisibleFlag_SexVer29,
            param->invisibleFlag_SexVer30,
            param->invisibleFlag_SexVer31,
            param->invisibleFlag_SexVer32,
            param->invisibleFlag_SexVer33,
            param->invisibleFlag_SexVer34,
            param->invisibleFlag_SexVer35,
            param->invisibleFlag_SexVer36,
            param->invisibleFlag_SexVer37,
            param->invisibleFlag_SexVer38,
            param->invisibleFlag_SexVer39,
            param->invisibleFlag_SexVer40,
            param->invisibleFlag_SexVer41,
            param->invisibleFlag_SexVer42,
            param->invisibleFlag_SexVer43,
            param->invisibleFlag_SexVer44,
            param->invisibleFlag_SexVer45,
            param->invisibleFlag_SexVer46,
            param->invisibleFlag_SexVer47,
            param->invisibleFlag_SexVer48,
            param->invisibleFlag_SexVer49,
            param->invisibleFlag_SexVer50,
            param->invisibleFlag_SexVer51,
            param->invisibleFlag_SexVer52,
            param->invisibleFlag_SexVer53,
            param->invisibleFlag_SexVer54,
            param->invisibleFlag_SexVer55,
            param->invisibleFlag_SexVer56,
            param->invisibleFlag_SexVer57,
            param->invisibleFlag_SexVer58,
            param->invisibleFlag_SexVer59,
            param->invisibleFlag_SexVer60,
            param->invisibleFlag_SexVer61,
            param->invisibleFlag_SexVer62,
            param->invisibleFlag_SexVer63,
            param->invisibleFlag_SexVer64,
            param->invisibleFlag_SexVer65,
            param->invisibleFlag_SexVer66,
            param->invisibleFlag_SexVer67,
            param->invisibleFlag_SexVer68,
            param->invisibleFlag_SexVer69,
            param->invisibleFlag_SexVer70,
            param->invisibleFlag_SexVer71,
            param->invisibleFlag_SexVer72,
            param->invisibleFlag_SexVer73,
            param->invisibleFlag_SexVer74,
            param->invisibleFlag_SexVer75,
            param->invisibleFlag_SexVer76,
            param->invisibleFlag_SexVer77,
            param->invisibleFlag_SexVer78,
            param->invisibleFlag_SexVer79,
            param->invisibleFlag_SexVer80,
            param->invisibleFlag_SexVer81,
            param->invisibleFlag_SexVer82,
            param->invisibleFlag_SexVer83,
            param->invisibleFlag_SexVer84,
            param->invisibleFlag_SexVer85,
            param->invisibleFlag_SexVer86,
            param->invisibleFlag_SexVer87,
            param->invisibleFlag_SexVer88,
            param->invisibleFlag_SexVer89,
            param->invisibleFlag_SexVer90,
            param->invisibleFlag_SexVer91,
            param->invisibleFlag_SexVer92,
            param->invisibleFlag_SexVer93,
            param->invisibleFlag_SexVer94,
            param->invisibleFlag_SexVer95
        );
    }
    fclose(f);
}

}
