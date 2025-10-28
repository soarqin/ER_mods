#include "../luabindings.h"
#include "../defs/EquipParamWeapon.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<EquipParamWeapon>::exportToCsvImpl(const std::wstring &csvPath);

void registerEquipParamWeapon(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["EquipParamWeapon"]; usertype) return;
        auto indexerEquipParamWeapon = state->new_usertype<ParamTableIndexer<EquipParamWeapon>>("EquipParamWeaponTableIndexer");
        indexerEquipParamWeapon["count"] = sol::property(&ParamTableIndexer<EquipParamWeapon>::count);
        indexerEquipParamWeapon["__index"] = &ParamTableIndexer<EquipParamWeapon>::at;
        indexerEquipParamWeapon["id"] = &ParamTableIndexer<EquipParamWeapon>::paramId;
        indexerEquipParamWeapon["get"] = &ParamTableIndexer<EquipParamWeapon>::get;
        indexerEquipParamWeapon["exportToCsv"] = &ParamTableIndexer<EquipParamWeapon>::exportToCsv;
        indexerEquipParamWeapon["importFromCsv"] = &ParamTableIndexer<EquipParamWeapon>::importFromCsv;
        auto utEquipParamWeapon = state->new_usertype<EquipParamWeapon>("EquipParamWeapon");
        utEquipParamWeapon["disableParam_NT"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.disableParam_NT; }, [](EquipParamWeapon &param, uint8_t value) { param.disableParam_NT = value; });
        utEquipParamWeapon["behaviorVariationId"] = &EquipParamWeapon::behaviorVariationId;
        utEquipParamWeapon["sortId"] = &EquipParamWeapon::sortId;
        utEquipParamWeapon["wanderingEquipId"] = &EquipParamWeapon::wanderingEquipId;
        utEquipParamWeapon["weight"] = &EquipParamWeapon::weight;
        utEquipParamWeapon["weaponWeightRate"] = &EquipParamWeapon::weaponWeightRate;
        utEquipParamWeapon["fixPrice"] = &EquipParamWeapon::fixPrice;
        utEquipParamWeapon["reinforcePrice"] = &EquipParamWeapon::reinforcePrice;
        utEquipParamWeapon["sellValue"] = &EquipParamWeapon::sellValue;
        utEquipParamWeapon["correctStrength"] = &EquipParamWeapon::correctStrength;
        utEquipParamWeapon["correctAgility"] = &EquipParamWeapon::correctAgility;
        utEquipParamWeapon["correctMagic"] = &EquipParamWeapon::correctMagic;
        utEquipParamWeapon["correctFaith"] = &EquipParamWeapon::correctFaith;
        utEquipParamWeapon["physGuardCutRate"] = &EquipParamWeapon::physGuardCutRate;
        utEquipParamWeapon["magGuardCutRate"] = &EquipParamWeapon::magGuardCutRate;
        utEquipParamWeapon["fireGuardCutRate"] = &EquipParamWeapon::fireGuardCutRate;
        utEquipParamWeapon["thunGuardCutRate"] = &EquipParamWeapon::thunGuardCutRate;
        utEquipParamWeapon["spEffectBehaviorId0"] = &EquipParamWeapon::spEffectBehaviorId0;
        utEquipParamWeapon["spEffectBehaviorId1"] = &EquipParamWeapon::spEffectBehaviorId1;
        utEquipParamWeapon["spEffectBehaviorId2"] = &EquipParamWeapon::spEffectBehaviorId2;
        utEquipParamWeapon["residentSpEffectId"] = &EquipParamWeapon::residentSpEffectId;
        utEquipParamWeapon["residentSpEffectId1"] = &EquipParamWeapon::residentSpEffectId1;
        utEquipParamWeapon["residentSpEffectId2"] = &EquipParamWeapon::residentSpEffectId2;
        utEquipParamWeapon["materialSetId"] = &EquipParamWeapon::materialSetId;
        utEquipParamWeapon["originEquipWep"] = &EquipParamWeapon::originEquipWep;
        utEquipParamWeapon["originEquipWep1"] = &EquipParamWeapon::originEquipWep1;
        utEquipParamWeapon["originEquipWep2"] = &EquipParamWeapon::originEquipWep2;
        utEquipParamWeapon["originEquipWep3"] = &EquipParamWeapon::originEquipWep3;
        utEquipParamWeapon["originEquipWep4"] = &EquipParamWeapon::originEquipWep4;
        utEquipParamWeapon["originEquipWep5"] = &EquipParamWeapon::originEquipWep5;
        utEquipParamWeapon["originEquipWep6"] = &EquipParamWeapon::originEquipWep6;
        utEquipParamWeapon["originEquipWep7"] = &EquipParamWeapon::originEquipWep7;
        utEquipParamWeapon["originEquipWep8"] = &EquipParamWeapon::originEquipWep8;
        utEquipParamWeapon["originEquipWep9"] = &EquipParamWeapon::originEquipWep9;
        utEquipParamWeapon["originEquipWep10"] = &EquipParamWeapon::originEquipWep10;
        utEquipParamWeapon["originEquipWep11"] = &EquipParamWeapon::originEquipWep11;
        utEquipParamWeapon["originEquipWep12"] = &EquipParamWeapon::originEquipWep12;
        utEquipParamWeapon["originEquipWep13"] = &EquipParamWeapon::originEquipWep13;
        utEquipParamWeapon["originEquipWep14"] = &EquipParamWeapon::originEquipWep14;
        utEquipParamWeapon["originEquipWep15"] = &EquipParamWeapon::originEquipWep15;
        utEquipParamWeapon["weakA_DamageRate"] = &EquipParamWeapon::weakA_DamageRate;
        utEquipParamWeapon["weakB_DamageRate"] = &EquipParamWeapon::weakB_DamageRate;
        utEquipParamWeapon["weakC_DamageRate"] = &EquipParamWeapon::weakC_DamageRate;
        utEquipParamWeapon["weakD_DamageRate"] = &EquipParamWeapon::weakD_DamageRate;
        utEquipParamWeapon["sleepGuardResist_MaxCorrect"] = &EquipParamWeapon::sleepGuardResist_MaxCorrect;
        utEquipParamWeapon["madnessGuardResist_MaxCorrect"] = &EquipParamWeapon::madnessGuardResist_MaxCorrect;
        utEquipParamWeapon["saWeaponDamage"] = &EquipParamWeapon::saWeaponDamage;
        utEquipParamWeapon["equipModelId"] = &EquipParamWeapon::equipModelId;
        utEquipParamWeapon["iconId"] = &EquipParamWeapon::iconId;
        utEquipParamWeapon["durability"] = &EquipParamWeapon::durability;
        utEquipParamWeapon["durabilityMax"] = &EquipParamWeapon::durabilityMax;
        utEquipParamWeapon["attackThrowEscape"] = &EquipParamWeapon::attackThrowEscape;
        utEquipParamWeapon["parryDamageLife"] = &EquipParamWeapon::parryDamageLife;
        utEquipParamWeapon["attackBasePhysics"] = &EquipParamWeapon::attackBasePhysics;
        utEquipParamWeapon["attackBaseMagic"] = &EquipParamWeapon::attackBaseMagic;
        utEquipParamWeapon["attackBaseFire"] = &EquipParamWeapon::attackBaseFire;
        utEquipParamWeapon["attackBaseThunder"] = &EquipParamWeapon::attackBaseThunder;
        utEquipParamWeapon["attackBaseStamina"] = &EquipParamWeapon::attackBaseStamina;
        utEquipParamWeapon["guardAngle"] = &EquipParamWeapon::guardAngle;
        utEquipParamWeapon["saDurability"] = &EquipParamWeapon::saDurability;
        utEquipParamWeapon["staminaGuardDef"] = &EquipParamWeapon::staminaGuardDef;
        utEquipParamWeapon["reinforceTypeId"] = &EquipParamWeapon::reinforceTypeId;
        utEquipParamWeapon["trophySGradeId"] = &EquipParamWeapon::trophySGradeId;
        utEquipParamWeapon["trophySeqId"] = &EquipParamWeapon::trophySeqId;
        utEquipParamWeapon["throwAtkRate"] = &EquipParamWeapon::throwAtkRate;
        utEquipParamWeapon["bowDistRate"] = &EquipParamWeapon::bowDistRate;
        utEquipParamWeapon["equipModelCategory"] = &EquipParamWeapon::equipModelCategory;
        utEquipParamWeapon["equipModelGender"] = &EquipParamWeapon::equipModelGender;
        utEquipParamWeapon["weaponCategory"] = &EquipParamWeapon::weaponCategory;
        utEquipParamWeapon["wepmotionCategory"] = &EquipParamWeapon::wepmotionCategory;
        utEquipParamWeapon["guardmotionCategory"] = &EquipParamWeapon::guardmotionCategory;
        utEquipParamWeapon["atkMaterial"] = &EquipParamWeapon::atkMaterial;
        utEquipParamWeapon["defSeMaterial1"] = &EquipParamWeapon::defSeMaterial1;
        utEquipParamWeapon["correctType_Physics"] = &EquipParamWeapon::correctType_Physics;
        utEquipParamWeapon["spAttribute"] = &EquipParamWeapon::spAttribute;
        utEquipParamWeapon["spAtkcategory"] = &EquipParamWeapon::spAtkcategory;
        utEquipParamWeapon["wepmotionOneHandId"] = &EquipParamWeapon::wepmotionOneHandId;
        utEquipParamWeapon["wepmotionBothHandId"] = &EquipParamWeapon::wepmotionBothHandId;
        utEquipParamWeapon["properStrength"] = &EquipParamWeapon::properStrength;
        utEquipParamWeapon["properAgility"] = &EquipParamWeapon::properAgility;
        utEquipParamWeapon["properMagic"] = &EquipParamWeapon::properMagic;
        utEquipParamWeapon["properFaith"] = &EquipParamWeapon::properFaith;
        utEquipParamWeapon["overStrength"] = &EquipParamWeapon::overStrength;
        utEquipParamWeapon["attackBaseParry"] = &EquipParamWeapon::attackBaseParry;
        utEquipParamWeapon["defenseBaseParry"] = &EquipParamWeapon::defenseBaseParry;
        utEquipParamWeapon["guardBaseRepel"] = &EquipParamWeapon::guardBaseRepel;
        utEquipParamWeapon["attackBaseRepel"] = &EquipParamWeapon::attackBaseRepel;
        utEquipParamWeapon["guardCutCancelRate"] = &EquipParamWeapon::guardCutCancelRate;
        utEquipParamWeapon["guardLevel"] = &EquipParamWeapon::guardLevel;
        utEquipParamWeapon["slashGuardCutRate"] = &EquipParamWeapon::slashGuardCutRate;
        utEquipParamWeapon["blowGuardCutRate"] = &EquipParamWeapon::blowGuardCutRate;
        utEquipParamWeapon["thrustGuardCutRate"] = &EquipParamWeapon::thrustGuardCutRate;
        utEquipParamWeapon["poisonGuardResist"] = &EquipParamWeapon::poisonGuardResist;
        utEquipParamWeapon["diseaseGuardResist"] = &EquipParamWeapon::diseaseGuardResist;
        utEquipParamWeapon["bloodGuardResist"] = &EquipParamWeapon::bloodGuardResist;
        utEquipParamWeapon["curseGuardResist"] = &EquipParamWeapon::curseGuardResist;
        utEquipParamWeapon["atkAttribute"] = &EquipParamWeapon::atkAttribute;
        utEquipParamWeapon["rightHandEquipable"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.rightHandEquipable; }, [](EquipParamWeapon &param, uint8_t value) { param.rightHandEquipable = value; });
        utEquipParamWeapon["leftHandEquipable"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.leftHandEquipable; }, [](EquipParamWeapon &param, uint8_t value) { param.leftHandEquipable = value; });
        utEquipParamWeapon["bothHandEquipable"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.bothHandEquipable; }, [](EquipParamWeapon &param, uint8_t value) { param.bothHandEquipable = value; });
        utEquipParamWeapon["arrowSlotEquipable"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.arrowSlotEquipable; }, [](EquipParamWeapon &param, uint8_t value) { param.arrowSlotEquipable = value; });
        utEquipParamWeapon["boltSlotEquipable"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.boltSlotEquipable; }, [](EquipParamWeapon &param, uint8_t value) { param.boltSlotEquipable = value; });
        utEquipParamWeapon["enableGuard"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.enableGuard; }, [](EquipParamWeapon &param, uint8_t value) { param.enableGuard = value; });
        utEquipParamWeapon["enableParry"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.enableParry; }, [](EquipParamWeapon &param, uint8_t value) { param.enableParry = value; });
        utEquipParamWeapon["enableMagic"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.enableMagic; }, [](EquipParamWeapon &param, uint8_t value) { param.enableMagic = value; });
        utEquipParamWeapon["enableSorcery"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.enableSorcery; }, [](EquipParamWeapon &param, uint8_t value) { param.enableSorcery = value; });
        utEquipParamWeapon["enableMiracle"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.enableMiracle; }, [](EquipParamWeapon &param, uint8_t value) { param.enableMiracle = value; });
        utEquipParamWeapon["enableVowMagic"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.enableVowMagic; }, [](EquipParamWeapon &param, uint8_t value) { param.enableVowMagic = value; });
        utEquipParamWeapon["isNormalAttackType"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.isNormalAttackType; }, [](EquipParamWeapon &param, uint8_t value) { param.isNormalAttackType = value; });
        utEquipParamWeapon["isBlowAttackType"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.isBlowAttackType; }, [](EquipParamWeapon &param, uint8_t value) { param.isBlowAttackType = value; });
        utEquipParamWeapon["isSlashAttackType"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.isSlashAttackType; }, [](EquipParamWeapon &param, uint8_t value) { param.isSlashAttackType = value; });
        utEquipParamWeapon["isThrustAttackType"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.isThrustAttackType; }, [](EquipParamWeapon &param, uint8_t value) { param.isThrustAttackType = value; });
        utEquipParamWeapon["isEnhance"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.isEnhance; }, [](EquipParamWeapon &param, uint8_t value) { param.isEnhance = value; });
        utEquipParamWeapon["isHeroPointCorrect"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.isHeroPointCorrect; }, [](EquipParamWeapon &param, uint8_t value) { param.isHeroPointCorrect = value; });
        utEquipParamWeapon["isCustom"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.isCustom; }, [](EquipParamWeapon &param, uint8_t value) { param.isCustom = value; });
        utEquipParamWeapon["disableBaseChangeReset"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.disableBaseChangeReset; }, [](EquipParamWeapon &param, uint8_t value) { param.disableBaseChangeReset = value; });
        utEquipParamWeapon["disableRepair"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.disableRepair; }, [](EquipParamWeapon &param, uint8_t value) { param.disableRepair = value; });
        utEquipParamWeapon["isDarkHand"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.isDarkHand; }, [](EquipParamWeapon &param, uint8_t value) { param.isDarkHand = value; });
        utEquipParamWeapon["simpleModelForDlc"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.simpleModelForDlc; }, [](EquipParamWeapon &param, uint8_t value) { param.simpleModelForDlc = value; });
        utEquipParamWeapon["lanternWep"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.lanternWep; }, [](EquipParamWeapon &param, uint8_t value) { param.lanternWep = value; });
        utEquipParamWeapon["isVersusGhostWep"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.isVersusGhostWep; }, [](EquipParamWeapon &param, uint8_t value) { param.isVersusGhostWep = value; });
        utEquipParamWeapon["baseChangeCategory"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.baseChangeCategory; }, [](EquipParamWeapon &param, uint8_t value) { param.baseChangeCategory = value; });
        utEquipParamWeapon["isDragonSlayer"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.isDragonSlayer; }, [](EquipParamWeapon &param, uint8_t value) { param.isDragonSlayer = value; });
        utEquipParamWeapon["isDeposit"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.isDeposit; }, [](EquipParamWeapon &param, uint8_t value) { param.isDeposit = value; });
        utEquipParamWeapon["disableMultiDropShare"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.disableMultiDropShare; }, [](EquipParamWeapon &param, uint8_t value) { param.disableMultiDropShare = value; });
        utEquipParamWeapon["isDiscard"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.isDiscard; }, [](EquipParamWeapon &param, uint8_t value) { param.isDiscard = value; });
        utEquipParamWeapon["isDrop"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.isDrop; }, [](EquipParamWeapon &param, uint8_t value) { param.isDrop = value; });
        utEquipParamWeapon["showLogCondType"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.showLogCondType; }, [](EquipParamWeapon &param, uint8_t value) { param.showLogCondType = value; });
        utEquipParamWeapon["enableThrow"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.enableThrow; }, [](EquipParamWeapon &param, uint8_t value) { param.enableThrow = value; });
        utEquipParamWeapon["showDialogCondType"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.showDialogCondType; }, [](EquipParamWeapon &param, uint8_t value) { param.showDialogCondType = value; });
        utEquipParamWeapon["disableGemAttr"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.disableGemAttr; }, [](EquipParamWeapon &param, uint8_t value) { param.disableGemAttr = value; });
        utEquipParamWeapon["defSfxMaterial1"] = &EquipParamWeapon::defSfxMaterial1;
        utEquipParamWeapon["wepCollidableType0"] = &EquipParamWeapon::wepCollidableType0;
        utEquipParamWeapon["wepCollidableType1"] = &EquipParamWeapon::wepCollidableType1;
        utEquipParamWeapon["postureControlId_Right"] = &EquipParamWeapon::postureControlId_Right;
        utEquipParamWeapon["postureControlId_Left"] = &EquipParamWeapon::postureControlId_Left;
        utEquipParamWeapon["traceSfxId0"] = &EquipParamWeapon::traceSfxId0;
        utEquipParamWeapon["traceDmyIdHead0"] = &EquipParamWeapon::traceDmyIdHead0;
        utEquipParamWeapon["traceDmyIdTail0"] = &EquipParamWeapon::traceDmyIdTail0;
        utEquipParamWeapon["traceSfxId1"] = &EquipParamWeapon::traceSfxId1;
        utEquipParamWeapon["traceDmyIdHead1"] = &EquipParamWeapon::traceDmyIdHead1;
        utEquipParamWeapon["traceDmyIdTail1"] = &EquipParamWeapon::traceDmyIdTail1;
        utEquipParamWeapon["traceSfxId2"] = &EquipParamWeapon::traceSfxId2;
        utEquipParamWeapon["traceDmyIdHead2"] = &EquipParamWeapon::traceDmyIdHead2;
        utEquipParamWeapon["traceDmyIdTail2"] = &EquipParamWeapon::traceDmyIdTail2;
        utEquipParamWeapon["traceSfxId3"] = &EquipParamWeapon::traceSfxId3;
        utEquipParamWeapon["traceDmyIdHead3"] = &EquipParamWeapon::traceDmyIdHead3;
        utEquipParamWeapon["traceDmyIdTail3"] = &EquipParamWeapon::traceDmyIdTail3;
        utEquipParamWeapon["traceSfxId4"] = &EquipParamWeapon::traceSfxId4;
        utEquipParamWeapon["traceDmyIdHead4"] = &EquipParamWeapon::traceDmyIdHead4;
        utEquipParamWeapon["traceDmyIdTail4"] = &EquipParamWeapon::traceDmyIdTail4;
        utEquipParamWeapon["traceSfxId5"] = &EquipParamWeapon::traceSfxId5;
        utEquipParamWeapon["traceDmyIdHead5"] = &EquipParamWeapon::traceDmyIdHead5;
        utEquipParamWeapon["traceDmyIdTail5"] = &EquipParamWeapon::traceDmyIdTail5;
        utEquipParamWeapon["traceSfxId6"] = &EquipParamWeapon::traceSfxId6;
        utEquipParamWeapon["traceDmyIdHead6"] = &EquipParamWeapon::traceDmyIdHead6;
        utEquipParamWeapon["traceDmyIdTail6"] = &EquipParamWeapon::traceDmyIdTail6;
        utEquipParamWeapon["traceSfxId7"] = &EquipParamWeapon::traceSfxId7;
        utEquipParamWeapon["traceDmyIdHead7"] = &EquipParamWeapon::traceDmyIdHead7;
        utEquipParamWeapon["traceDmyIdTail7"] = &EquipParamWeapon::traceDmyIdTail7;
        utEquipParamWeapon["defSfxMaterial2"] = &EquipParamWeapon::defSfxMaterial2;
        utEquipParamWeapon["defSeMaterial2"] = &EquipParamWeapon::defSeMaterial2;
        utEquipParamWeapon["absorpParamId"] = &EquipParamWeapon::absorpParamId;
        utEquipParamWeapon["toughnessCorrectRate"] = &EquipParamWeapon::toughnessCorrectRate;
        utEquipParamWeapon["isValidTough_ProtSADmg"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.isValidTough_ProtSADmg; }, [](EquipParamWeapon &param, uint8_t value) { param.isValidTough_ProtSADmg = value; });
        utEquipParamWeapon["isDualBlade"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.isDualBlade; }, [](EquipParamWeapon &param, uint8_t value) { param.isDualBlade = value; });
        utEquipParamWeapon["isAutoEquip"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.isAutoEquip; }, [](EquipParamWeapon &param, uint8_t value) { param.isAutoEquip = value; });
        utEquipParamWeapon["isEnableEmergencyStep"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.isEnableEmergencyStep; }, [](EquipParamWeapon &param, uint8_t value) { param.isEnableEmergencyStep = value; });
        utEquipParamWeapon["invisibleOnRemo"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.invisibleOnRemo; }, [](EquipParamWeapon &param, uint8_t value) { param.invisibleOnRemo = value; });
        utEquipParamWeapon["unknown_0x17c_5"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.unknown_0x17c_5; }, [](EquipParamWeapon &param, uint8_t value) { param.unknown_0x17c_5 = value; });
        utEquipParamWeapon["quickMatchReplenish"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.quickMatchReplenish; }, [](EquipParamWeapon &param, uint8_t value) { param.quickMatchReplenish = value; });
        utEquipParamWeapon["isWeaponCatalyst"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.isWeaponCatalyst; }, [](EquipParamWeapon &param, uint8_t value) { param.isWeaponCatalyst = value; });
        utEquipParamWeapon["correctType_Magic"] = &EquipParamWeapon::correctType_Magic;
        utEquipParamWeapon["correctType_Fire"] = &EquipParamWeapon::correctType_Fire;
        utEquipParamWeapon["correctType_Thunder"] = &EquipParamWeapon::correctType_Thunder;
        utEquipParamWeapon["weakE_DamageRate"] = &EquipParamWeapon::weakE_DamageRate;
        utEquipParamWeapon["weakF_DamageRate"] = &EquipParamWeapon::weakF_DamageRate;
        utEquipParamWeapon["darkGuardCutRate"] = &EquipParamWeapon::darkGuardCutRate;
        utEquipParamWeapon["attackBaseDark"] = &EquipParamWeapon::attackBaseDark;
        utEquipParamWeapon["correctType_Dark"] = &EquipParamWeapon::correctType_Dark;
        utEquipParamWeapon["correctType_Poison"] = &EquipParamWeapon::correctType_Poison;
        utEquipParamWeapon["sortGroupId"] = &EquipParamWeapon::sortGroupId;
        utEquipParamWeapon["atkAttribute2"] = &EquipParamWeapon::atkAttribute2;
        utEquipParamWeapon["sleepGuardResist"] = &EquipParamWeapon::sleepGuardResist;
        utEquipParamWeapon["madnessGuardResist"] = &EquipParamWeapon::madnessGuardResist;
        utEquipParamWeapon["correctType_Blood"] = &EquipParamWeapon::correctType_Blood;
        utEquipParamWeapon["properLuck"] = &EquipParamWeapon::properLuck;
        utEquipParamWeapon["freezeGuardResist"] = &EquipParamWeapon::freezeGuardResist;
        utEquipParamWeapon["autoReplenishType"] = &EquipParamWeapon::autoReplenishType;
        utEquipParamWeapon["swordArtsParamId"] = &EquipParamWeapon::swordArtsParamId;
        utEquipParamWeapon["correctLuck"] = &EquipParamWeapon::correctLuck;
        utEquipParamWeapon["arrowBoltEquipId"] = &EquipParamWeapon::arrowBoltEquipId;
        utEquipParamWeapon["DerivationLevelType"] = &EquipParamWeapon::DerivationLevelType;
        utEquipParamWeapon["enchantSfxSize"] = &EquipParamWeapon::enchantSfxSize;
        utEquipParamWeapon["wepType"] = &EquipParamWeapon::wepType;
        utEquipParamWeapon["physGuardCutRate_MaxCorrect"] = &EquipParamWeapon::physGuardCutRate_MaxCorrect;
        utEquipParamWeapon["magGuardCutRate_MaxCorrect"] = &EquipParamWeapon::magGuardCutRate_MaxCorrect;
        utEquipParamWeapon["fireGuardCutRate_MaxCorrect"] = &EquipParamWeapon::fireGuardCutRate_MaxCorrect;
        utEquipParamWeapon["thunGuardCutRate_MaxCorrect"] = &EquipParamWeapon::thunGuardCutRate_MaxCorrect;
        utEquipParamWeapon["darkGuardCutRate_MaxCorrect"] = &EquipParamWeapon::darkGuardCutRate_MaxCorrect;
        utEquipParamWeapon["poisonGuardResist_MaxCorrect"] = &EquipParamWeapon::poisonGuardResist_MaxCorrect;
        utEquipParamWeapon["diseaseGuardResist_MaxCorrect"] = &EquipParamWeapon::diseaseGuardResist_MaxCorrect;
        utEquipParamWeapon["bloodGuardResist_MaxCorrect"] = &EquipParamWeapon::bloodGuardResist_MaxCorrect;
        utEquipParamWeapon["curseGuardResist_MaxCorrect"] = &EquipParamWeapon::curseGuardResist_MaxCorrect;
        utEquipParamWeapon["freezeGuardResist_MaxCorrect"] = &EquipParamWeapon::freezeGuardResist_MaxCorrect;
        utEquipParamWeapon["staminaGuardDef_MaxCorrect"] = &EquipParamWeapon::staminaGuardDef_MaxCorrect;
        utEquipParamWeapon["residentSfxId_1"] = &EquipParamWeapon::residentSfxId_1;
        utEquipParamWeapon["residentSfxId_2"] = &EquipParamWeapon::residentSfxId_2;
        utEquipParamWeapon["residentSfxId_3"] = &EquipParamWeapon::residentSfxId_3;
        utEquipParamWeapon["residentSfxId_4"] = &EquipParamWeapon::residentSfxId_4;
        utEquipParamWeapon["residentSfx_DmyId_1"] = &EquipParamWeapon::residentSfx_DmyId_1;
        utEquipParamWeapon["residentSfx_DmyId_2"] = &EquipParamWeapon::residentSfx_DmyId_2;
        utEquipParamWeapon["residentSfx_DmyId_3"] = &EquipParamWeapon::residentSfx_DmyId_3;
        utEquipParamWeapon["residentSfx_DmyId_4"] = &EquipParamWeapon::residentSfx_DmyId_4;
        utEquipParamWeapon["staminaConsumptionRate"] = &EquipParamWeapon::staminaConsumptionRate;
        utEquipParamWeapon["vsPlayerDmgCorrectRate_Physics"] = &EquipParamWeapon::vsPlayerDmgCorrectRate_Physics;
        utEquipParamWeapon["vsPlayerDmgCorrectRate_Magic"] = &EquipParamWeapon::vsPlayerDmgCorrectRate_Magic;
        utEquipParamWeapon["vsPlayerDmgCorrectRate_Fire"] = &EquipParamWeapon::vsPlayerDmgCorrectRate_Fire;
        utEquipParamWeapon["vsPlayerDmgCorrectRate_Thunder"] = &EquipParamWeapon::vsPlayerDmgCorrectRate_Thunder;
        utEquipParamWeapon["vsPlayerDmgCorrectRate_Dark"] = &EquipParamWeapon::vsPlayerDmgCorrectRate_Dark;
        utEquipParamWeapon["vsPlayerDmgCorrectRate_Poison"] = &EquipParamWeapon::vsPlayerDmgCorrectRate_Poison;
        utEquipParamWeapon["vsPlayerDmgCorrectRate_Blood"] = &EquipParamWeapon::vsPlayerDmgCorrectRate_Blood;
        utEquipParamWeapon["vsPlayerDmgCorrectRate_Freeze"] = &EquipParamWeapon::vsPlayerDmgCorrectRate_Freeze;
        utEquipParamWeapon["attainmentWepStatusStr"] = &EquipParamWeapon::attainmentWepStatusStr;
        utEquipParamWeapon["attainmentWepStatusDex"] = &EquipParamWeapon::attainmentWepStatusDex;
        utEquipParamWeapon["attainmentWepStatusMag"] = &EquipParamWeapon::attainmentWepStatusMag;
        utEquipParamWeapon["attainmentWepStatusFai"] = &EquipParamWeapon::attainmentWepStatusFai;
        utEquipParamWeapon["attainmentWepStatusLuc"] = &EquipParamWeapon::attainmentWepStatusLuc;
        utEquipParamWeapon["attackElementCorrectId"] = &EquipParamWeapon::attackElementCorrectId;
        utEquipParamWeapon["saleValue"] = &EquipParamWeapon::saleValue;
        utEquipParamWeapon["reinforceShopCategory"] = &EquipParamWeapon::reinforceShopCategory;
        utEquipParamWeapon["maxArrowQuantity"] = &EquipParamWeapon::maxArrowQuantity;
        utEquipParamWeapon["residentSfx_1_IsVisibleForHang"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.residentSfx_1_IsVisibleForHang; }, [](EquipParamWeapon &param, uint8_t value) { param.residentSfx_1_IsVisibleForHang = value; });
        utEquipParamWeapon["residentSfx_2_IsVisibleForHang"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.residentSfx_2_IsVisibleForHang; }, [](EquipParamWeapon &param, uint8_t value) { param.residentSfx_2_IsVisibleForHang = value; });
        utEquipParamWeapon["residentSfx_3_IsVisibleForHang"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.residentSfx_3_IsVisibleForHang; }, [](EquipParamWeapon &param, uint8_t value) { param.residentSfx_3_IsVisibleForHang = value; });
        utEquipParamWeapon["residentSfx_4_IsVisibleForHang"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.residentSfx_4_IsVisibleForHang; }, [](EquipParamWeapon &param, uint8_t value) { param.residentSfx_4_IsVisibleForHang = value; });
        utEquipParamWeapon["isSoulParamIdChange_model0"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.isSoulParamIdChange_model0; }, [](EquipParamWeapon &param, uint8_t value) { param.isSoulParamIdChange_model0 = value; });
        utEquipParamWeapon["isSoulParamIdChange_model1"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.isSoulParamIdChange_model1; }, [](EquipParamWeapon &param, uint8_t value) { param.isSoulParamIdChange_model1 = value; });
        utEquipParamWeapon["isSoulParamIdChange_model2"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.isSoulParamIdChange_model2; }, [](EquipParamWeapon &param, uint8_t value) { param.isSoulParamIdChange_model2 = value; });
        utEquipParamWeapon["isSoulParamIdChange_model3"] = sol::property([](EquipParamWeapon &param) -> uint8_t { return param.isSoulParamIdChange_model3; }, [](EquipParamWeapon &param, uint8_t value) { param.isSoulParamIdChange_model3 = value; });
        utEquipParamWeapon["wepSeIdOffset"] = &EquipParamWeapon::wepSeIdOffset;
        utEquipParamWeapon["baseChangePrice"] = &EquipParamWeapon::baseChangePrice;
        utEquipParamWeapon["levelSyncCorrectId"] = &EquipParamWeapon::levelSyncCorrectId;
        utEquipParamWeapon["correctType_Sleep"] = &EquipParamWeapon::correctType_Sleep;
        utEquipParamWeapon["correctType_Madness"] = &EquipParamWeapon::correctType_Madness;
        utEquipParamWeapon["rarity"] = &EquipParamWeapon::rarity;
        utEquipParamWeapon["gemMountType"] = &EquipParamWeapon::gemMountType;
        utEquipParamWeapon["wepRegainHp"] = &EquipParamWeapon::wepRegainHp;
        utEquipParamWeapon["spEffectMsgId0"] = &EquipParamWeapon::spEffectMsgId0;
        utEquipParamWeapon["spEffectMsgId1"] = &EquipParamWeapon::spEffectMsgId1;
        utEquipParamWeapon["spEffectMsgId2"] = &EquipParamWeapon::spEffectMsgId2;
        utEquipParamWeapon["originEquipWep16"] = &EquipParamWeapon::originEquipWep16;
        utEquipParamWeapon["originEquipWep17"] = &EquipParamWeapon::originEquipWep17;
        utEquipParamWeapon["originEquipWep18"] = &EquipParamWeapon::originEquipWep18;
        utEquipParamWeapon["originEquipWep19"] = &EquipParamWeapon::originEquipWep19;
        utEquipParamWeapon["originEquipWep20"] = &EquipParamWeapon::originEquipWep20;
        utEquipParamWeapon["originEquipWep21"] = &EquipParamWeapon::originEquipWep21;
        utEquipParamWeapon["originEquipWep22"] = &EquipParamWeapon::originEquipWep22;
        utEquipParamWeapon["originEquipWep23"] = &EquipParamWeapon::originEquipWep23;
        utEquipParamWeapon["originEquipWep24"] = &EquipParamWeapon::originEquipWep24;
        utEquipParamWeapon["originEquipWep25"] = &EquipParamWeapon::originEquipWep25;
        utEquipParamWeapon["vsPlayerDmgCorrectRate_Sleep"] = &EquipParamWeapon::vsPlayerDmgCorrectRate_Sleep;
        utEquipParamWeapon["vsPlayerDmgCorrectRate_Madness"] = &EquipParamWeapon::vsPlayerDmgCorrectRate_Madness;
        utEquipParamWeapon["saGuardCutRate"] = &EquipParamWeapon::saGuardCutRate;
        utEquipParamWeapon["defMaterialVariationValue"] = &EquipParamWeapon::defMaterialVariationValue;
        utEquipParamWeapon["spAttributeVariationValue"] = &EquipParamWeapon::spAttributeVariationValue;
        utEquipParamWeapon["stealthAtkRate"] = &EquipParamWeapon::stealthAtkRate;
        utEquipParamWeapon["vsPlayerDmgCorrectRate_Disease"] = &EquipParamWeapon::vsPlayerDmgCorrectRate_Disease;
        utEquipParamWeapon["vsPlayerDmgCorrectRate_Curse"] = &EquipParamWeapon::vsPlayerDmgCorrectRate_Curse;
        utEquipParamWeapon["restrictSpecialSwordArt"] = &EquipParamWeapon::restrictSpecialSwordArt;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<EquipParamWeapon>>(state, L"EquipParamWeapon");
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"behaviorVariationId", false},
            {"sortId", false},
            {"wanderingEquipId", false},
            {"weight", false},
            {"weaponWeightRate", false},
            {"fixPrice", false},
            {"reinforcePrice", false},
            {"sellValue", false},
            {"correctStrength", false},
            {"correctAgility", false},
            {"correctMagic", false},
            {"correctFaith", false},
            {"physGuardCutRate", false},
            {"magGuardCutRate", false},
            {"fireGuardCutRate", false},
            {"thunGuardCutRate", false},
            {"spEffectBehaviorId0", false},
            {"spEffectBehaviorId1", false},
            {"spEffectBehaviorId2", false},
            {"residentSpEffectId", false},
            {"residentSpEffectId1", false},
            {"residentSpEffectId2", false},
            {"materialSetId", false},
            {"originEquipWep", false},
            {"originEquipWep1", false},
            {"originEquipWep2", false},
            {"originEquipWep3", false},
            {"originEquipWep4", false},
            {"originEquipWep5", false},
            {"originEquipWep6", false},
            {"originEquipWep7", false},
            {"originEquipWep8", false},
            {"originEquipWep9", false},
            {"originEquipWep10", false},
            {"originEquipWep11", false},
            {"originEquipWep12", false},
            {"originEquipWep13", false},
            {"originEquipWep14", false},
            {"originEquipWep15", false},
            {"weakA_DamageRate", false},
            {"weakB_DamageRate", false},
            {"weakC_DamageRate", false},
            {"weakD_DamageRate", false},
            {"sleepGuardResist_MaxCorrect", false},
            {"madnessGuardResist_MaxCorrect", false},
            {"saWeaponDamage", false},
            {"equipModelId", false},
            {"iconId", false},
            {"durability", false},
            {"durabilityMax", false},
            {"attackThrowEscape", false},
            {"parryDamageLife", false},
            {"attackBasePhysics", false},
            {"attackBaseMagic", false},
            {"attackBaseFire", false},
            {"attackBaseThunder", false},
            {"attackBaseStamina", false},
            {"guardAngle", false},
            {"saDurability", false},
            {"staminaGuardDef", false},
            {"reinforceTypeId", false},
            {"trophySGradeId", false},
            {"trophySeqId", false},
            {"throwAtkRate", false},
            {"bowDistRate", false},
            {"equipModelCategory", false},
            {"equipModelGender", false},
            {"weaponCategory", false},
            {"wepmotionCategory", false},
            {"guardmotionCategory", false},
            {"atkMaterial", false},
            {"defSeMaterial1", false},
            {"correctType_Physics", false},
            {"spAttribute", false},
            {"spAtkcategory", false},
            {"wepmotionOneHandId", false},
            {"wepmotionBothHandId", false},
            {"properStrength", false},
            {"properAgility", false},
            {"properMagic", false},
            {"properFaith", false},
            {"overStrength", false},
            {"attackBaseParry", false},
            {"defenseBaseParry", false},
            {"guardBaseRepel", false},
            {"attackBaseRepel", false},
            {"guardCutCancelRate", false},
            {"guardLevel", false},
            {"slashGuardCutRate", false},
            {"blowGuardCutRate", false},
            {"thrustGuardCutRate", false},
            {"poisonGuardResist", false},
            {"diseaseGuardResist", false},
            {"bloodGuardResist", false},
            {"curseGuardResist", false},
            {"atkAttribute", false},
            {"rightHandEquipable", false},
            {"leftHandEquipable", false},
            {"bothHandEquipable", false},
            {"arrowSlotEquipable", false},
            {"boltSlotEquipable", false},
            {"enableGuard", false},
            {"enableParry", false},
            {"enableMagic", false},
            {"enableSorcery", false},
            {"enableMiracle", false},
            {"enableVowMagic", false},
            {"isNormalAttackType", false},
            {"isBlowAttackType", false},
            {"isSlashAttackType", false},
            {"isThrustAttackType", false},
            {"isEnhance", false},
            {"isHeroPointCorrect", false},
            {"isCustom", false},
            {"disableBaseChangeReset", false},
            {"disableRepair", false},
            {"isDarkHand", false},
            {"simpleModelForDlc", false},
            {"lanternWep", false},
            {"isVersusGhostWep", false},
            {"baseChangeCategory", false},
            {"isDragonSlayer", false},
            {"isDeposit", false},
            {"disableMultiDropShare", false},
            {"isDiscard", false},
            {"isDrop", false},
            {"showLogCondType", false},
            {"enableThrow", false},
            {"showDialogCondType", false},
            {"disableGemAttr", false},
            {"defSfxMaterial1", false},
            {"wepCollidableType0", false},
            {"wepCollidableType1", false},
            {"postureControlId_Right", false},
            {"postureControlId_Left", false},
            {"traceSfxId0", false},
            {"traceDmyIdHead0", false},
            {"traceDmyIdTail0", false},
            {"traceSfxId1", false},
            {"traceDmyIdHead1", false},
            {"traceDmyIdTail1", false},
            {"traceSfxId2", false},
            {"traceDmyIdHead2", false},
            {"traceDmyIdTail2", false},
            {"traceSfxId3", false},
            {"traceDmyIdHead3", false},
            {"traceDmyIdTail3", false},
            {"traceSfxId4", false},
            {"traceDmyIdHead4", false},
            {"traceDmyIdTail4", false},
            {"traceSfxId5", false},
            {"traceDmyIdHead5", false},
            {"traceDmyIdTail5", false},
            {"traceSfxId6", false},
            {"traceDmyIdHead6", false},
            {"traceDmyIdTail6", false},
            {"traceSfxId7", false},
            {"traceDmyIdHead7", false},
            {"traceDmyIdTail7", false},
            {"defSfxMaterial2", false},
            {"defSeMaterial2", false},
            {"absorpParamId", false},
            {"toughnessCorrectRate", false},
            {"isValidTough_ProtSADmg", false},
            {"isDualBlade", false},
            {"isAutoEquip", false},
            {"isEnableEmergencyStep", false},
            {"invisibleOnRemo", false},
            {"unknown_0x17c_5", false},
            {"quickMatchReplenish", false},
            {"isWeaponCatalyst", false},
            {"correctType_Magic", false},
            {"correctType_Fire", false},
            {"correctType_Thunder", false},
            {"weakE_DamageRate", false},
            {"weakF_DamageRate", false},
            {"darkGuardCutRate", false},
            {"attackBaseDark", false},
            {"correctType_Dark", false},
            {"correctType_Poison", false},
            {"sortGroupId", false},
            {"atkAttribute2", false},
            {"sleepGuardResist", false},
            {"madnessGuardResist", false},
            {"correctType_Blood", false},
            {"properLuck", false},
            {"freezeGuardResist", false},
            {"autoReplenishType", false},
            {"swordArtsParamId", false},
            {"correctLuck", false},
            {"arrowBoltEquipId", false},
            {"DerivationLevelType", false},
            {"enchantSfxSize", false},
            {"wepType", false},
            {"physGuardCutRate_MaxCorrect", false},
            {"magGuardCutRate_MaxCorrect", false},
            {"fireGuardCutRate_MaxCorrect", false},
            {"thunGuardCutRate_MaxCorrect", false},
            {"darkGuardCutRate_MaxCorrect", false},
            {"poisonGuardResist_MaxCorrect", false},
            {"diseaseGuardResist_MaxCorrect", false},
            {"bloodGuardResist_MaxCorrect", false},
            {"curseGuardResist_MaxCorrect", false},
            {"freezeGuardResist_MaxCorrect", false},
            {"staminaGuardDef_MaxCorrect", false},
            {"residentSfxId_1", false},
            {"residentSfxId_2", false},
            {"residentSfxId_3", false},
            {"residentSfxId_4", false},
            {"residentSfx_DmyId_1", false},
            {"residentSfx_DmyId_2", false},
            {"residentSfx_DmyId_3", false},
            {"residentSfx_DmyId_4", false},
            {"staminaConsumptionRate", false},
            {"vsPlayerDmgCorrectRate_Physics", false},
            {"vsPlayerDmgCorrectRate_Magic", false},
            {"vsPlayerDmgCorrectRate_Fire", false},
            {"vsPlayerDmgCorrectRate_Thunder", false},
            {"vsPlayerDmgCorrectRate_Dark", false},
            {"vsPlayerDmgCorrectRate_Poison", false},
            {"vsPlayerDmgCorrectRate_Blood", false},
            {"vsPlayerDmgCorrectRate_Freeze", false},
            {"attainmentWepStatusStr", false},
            {"attainmentWepStatusDex", false},
            {"attainmentWepStatusMag", false},
            {"attainmentWepStatusFai", false},
            {"attainmentWepStatusLuc", false},
            {"attackElementCorrectId", false},
            {"saleValue", false},
            {"reinforceShopCategory", false},
            {"maxArrowQuantity", false},
            {"residentSfx_1_IsVisibleForHang", false},
            {"residentSfx_2_IsVisibleForHang", false},
            {"residentSfx_3_IsVisibleForHang", false},
            {"residentSfx_4_IsVisibleForHang", false},
            {"isSoulParamIdChange_model0", false},
            {"isSoulParamIdChange_model1", false},
            {"isSoulParamIdChange_model2", false},
            {"isSoulParamIdChange_model3", false},
            {"wepSeIdOffset", false},
            {"baseChangePrice", false},
            {"levelSyncCorrectId", false},
            {"correctType_Sleep", false},
            {"correctType_Madness", false},
            {"rarity", false},
            {"gemMountType", false},
            {"wepRegainHp", false},
            {"spEffectMsgId0", false},
            {"spEffectMsgId1", false},
            {"spEffectMsgId2", false},
            {"originEquipWep16", false},
            {"originEquipWep17", false},
            {"originEquipWep18", false},
            {"originEquipWep19", false},
            {"originEquipWep20", false},
            {"originEquipWep21", false},
            {"originEquipWep22", false},
            {"originEquipWep23", false},
            {"originEquipWep24", false},
            {"originEquipWep25", false},
            {"vsPlayerDmgCorrectRate_Sleep", false},
            {"vsPlayerDmgCorrectRate_Madness", false},
            {"saGuardCutRate", false},
            {"defMaterialVariationValue", false},
            {"spAttributeVariationValue", false},
            {"stealthAtkRate", false},
            {"vsPlayerDmgCorrectRate_Disease", false},
            {"vsPlayerDmgCorrectRate_Curse", false},
            {"restrictSpecialSwordArt", false},
        });
        return indexer;
    };
    paramsTable["EquipParamWeapon"] = tableLoader;
}

template<> void ParamTableIndexer<EquipParamWeapon>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,behaviorVariationId,sortId,wanderingEquipId,weight,weaponWeightRate,fixPrice,reinforcePrice,sellValue,correctStrength,correctAgility,correctMagic,correctFaith,physGuardCutRate,magGuardCutRate,fireGuardCutRate,thunGuardCutRate,spEffectBehaviorId0,spEffectBehaviorId1,spEffectBehaviorId2,residentSpEffectId,residentSpEffectId1,residentSpEffectId2,materialSetId,originEquipWep,originEquipWep1,originEquipWep2,originEquipWep3,originEquipWep4,originEquipWep5,originEquipWep6,originEquipWep7,originEquipWep8,originEquipWep9,originEquipWep10,originEquipWep11,originEquipWep12,originEquipWep13,originEquipWep14,originEquipWep15,weakA_DamageRate,weakB_DamageRate,weakC_DamageRate,weakD_DamageRate,sleepGuardResist_MaxCorrect,madnessGuardResist_MaxCorrect,saWeaponDamage,equipModelId,iconId,durability,durabilityMax,attackThrowEscape,parryDamageLife,attackBasePhysics,attackBaseMagic,attackBaseFire,attackBaseThunder,attackBaseStamina,guardAngle,saDurability,staminaGuardDef,reinforceTypeId,trophySGradeId,trophySeqId,throwAtkRate,bowDistRate,equipModelCategory,equipModelGender,weaponCategory,wepmotionCategory,guardmotionCategory,atkMaterial,defSeMaterial1,correctType_Physics,spAttribute,spAtkcategory,wepmotionOneHandId,wepmotionBothHandId,properStrength,properAgility,properMagic,properFaith,overStrength,attackBaseParry,defenseBaseParry,guardBaseRepel,attackBaseRepel,guardCutCancelRate,guardLevel,slashGuardCutRate,blowGuardCutRate,thrustGuardCutRate,poisonGuardResist,diseaseGuardResist,bloodGuardResist,curseGuardResist,atkAttribute,rightHandEquipable,leftHandEquipable,bothHandEquipable,arrowSlotEquipable,boltSlotEquipable,enableGuard,enableParry,enableMagic,enableSorcery,enableMiracle,enableVowMagic,isNormalAttackType,isBlowAttackType,isSlashAttackType,isThrustAttackType,isEnhance,isHeroPointCorrect,isCustom,disableBaseChangeReset,disableRepair,isDarkHand,simpleModelForDlc,lanternWep,isVersusGhostWep,baseChangeCategory,isDragonSlayer,isDeposit,disableMultiDropShare,isDiscard,isDrop,showLogCondType,enableThrow,showDialogCondType,disableGemAttr,defSfxMaterial1,wepCollidableType0,wepCollidableType1,postureControlId_Right,postureControlId_Left,traceSfxId0,traceDmyIdHead0,traceDmyIdTail0,traceSfxId1,traceDmyIdHead1,traceDmyIdTail1,traceSfxId2,traceDmyIdHead2,traceDmyIdTail2,traceSfxId3,traceDmyIdHead3,traceDmyIdTail3,traceSfxId4,traceDmyIdHead4,traceDmyIdTail4,traceSfxId5,traceDmyIdHead5,traceDmyIdTail5,traceSfxId6,traceDmyIdHead6,traceDmyIdTail6,traceSfxId7,traceDmyIdHead7,traceDmyIdTail7,defSfxMaterial2,defSeMaterial2,absorpParamId,toughnessCorrectRate,isValidTough_ProtSADmg,isDualBlade,isAutoEquip,isEnableEmergencyStep,invisibleOnRemo,unknown_0x17c_5,quickMatchReplenish,isWeaponCatalyst,correctType_Magic,correctType_Fire,correctType_Thunder,weakE_DamageRate,weakF_DamageRate,darkGuardCutRate,attackBaseDark,correctType_Dark,correctType_Poison,sortGroupId,atkAttribute2,sleepGuardResist,madnessGuardResist,correctType_Blood,properLuck,freezeGuardResist,autoReplenishType,swordArtsParamId,correctLuck,arrowBoltEquipId,DerivationLevelType,enchantSfxSize,wepType,physGuardCutRate_MaxCorrect,magGuardCutRate_MaxCorrect,fireGuardCutRate_MaxCorrect,thunGuardCutRate_MaxCorrect,darkGuardCutRate_MaxCorrect,poisonGuardResist_MaxCorrect,diseaseGuardResist_MaxCorrect,bloodGuardResist_MaxCorrect,curseGuardResist_MaxCorrect,freezeGuardResist_MaxCorrect,staminaGuardDef_MaxCorrect,residentSfxId_1,residentSfxId_2,residentSfxId_3,residentSfxId_4,residentSfx_DmyId_1,residentSfx_DmyId_2,residentSfx_DmyId_3,residentSfx_DmyId_4,staminaConsumptionRate,vsPlayerDmgCorrectRate_Physics,vsPlayerDmgCorrectRate_Magic,vsPlayerDmgCorrectRate_Fire,vsPlayerDmgCorrectRate_Thunder,vsPlayerDmgCorrectRate_Dark,vsPlayerDmgCorrectRate_Poison,vsPlayerDmgCorrectRate_Blood,vsPlayerDmgCorrectRate_Freeze,attainmentWepStatusStr,attainmentWepStatusDex,attainmentWepStatusMag,attainmentWepStatusFai,attainmentWepStatusLuc,attackElementCorrectId,saleValue,reinforceShopCategory,maxArrowQuantity,residentSfx_1_IsVisibleForHang,residentSfx_2_IsVisibleForHang,residentSfx_3_IsVisibleForHang,residentSfx_4_IsVisibleForHang,isSoulParamIdChange_model0,isSoulParamIdChange_model1,isSoulParamIdChange_model2,isSoulParamIdChange_model3,wepSeIdOffset,baseChangePrice,levelSyncCorrectId,correctType_Sleep,correctType_Madness,rarity,gemMountType,wepRegainHp,spEffectMsgId0,spEffectMsgId1,spEffectMsgId2,originEquipWep16,originEquipWep17,originEquipWep18,originEquipWep19,originEquipWep20,originEquipWep21,originEquipWep22,originEquipWep23,originEquipWep24,originEquipWep25,vsPlayerDmgCorrectRate_Sleep,vsPlayerDmgCorrectRate_Madness,saGuardCutRate,defMaterialVariationValue,spAttributeVariationValue,stealthAtkRate,vsPlayerDmgCorrectRate_Disease,vsPlayerDmgCorrectRate_Curse,restrictSpecialSwordArt\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%d,%d,%u,%g,%g,%d,%d,%d,%g,%g,%g,%g,%g,%g,%g,%g,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%g,%g,%g,%g,%g,%g,%g,%u,%u,%u,%u,%u,%d,%u,%u,%u,%u,%u,%d,%g,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%d,%g,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%g,%g,%g,%u,%u,%u,%u,%u,%d,%d,%u,%u,%d,%u,%d,%g,%u,%u,%u,%u,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%d,%d,%d,%d,%d,%d,%d,%d,%g,%g,%g,%g,%g,%g,%g,%g,%g,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%d,%u,%u,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%g,%g,%g,%u,%u,%d,%g,%g,%u\n",
            this->paramId(i),
            param->disableParam_NT,
            param->behaviorVariationId,
            param->sortId,
            param->wanderingEquipId,
            param->weight,
            param->weaponWeightRate,
            param->fixPrice,
            param->reinforcePrice,
            param->sellValue,
            param->correctStrength,
            param->correctAgility,
            param->correctMagic,
            param->correctFaith,
            param->physGuardCutRate,
            param->magGuardCutRate,
            param->fireGuardCutRate,
            param->thunGuardCutRate,
            param->spEffectBehaviorId0,
            param->spEffectBehaviorId1,
            param->spEffectBehaviorId2,
            param->residentSpEffectId,
            param->residentSpEffectId1,
            param->residentSpEffectId2,
            param->materialSetId,
            param->originEquipWep,
            param->originEquipWep1,
            param->originEquipWep2,
            param->originEquipWep3,
            param->originEquipWep4,
            param->originEquipWep5,
            param->originEquipWep6,
            param->originEquipWep7,
            param->originEquipWep8,
            param->originEquipWep9,
            param->originEquipWep10,
            param->originEquipWep11,
            param->originEquipWep12,
            param->originEquipWep13,
            param->originEquipWep14,
            param->originEquipWep15,
            param->weakA_DamageRate,
            param->weakB_DamageRate,
            param->weakC_DamageRate,
            param->weakD_DamageRate,
            param->sleepGuardResist_MaxCorrect,
            param->madnessGuardResist_MaxCorrect,
            param->saWeaponDamage,
            param->equipModelId,
            param->iconId,
            param->durability,
            param->durabilityMax,
            param->attackThrowEscape,
            param->parryDamageLife,
            param->attackBasePhysics,
            param->attackBaseMagic,
            param->attackBaseFire,
            param->attackBaseThunder,
            param->attackBaseStamina,
            param->guardAngle,
            param->saDurability,
            param->staminaGuardDef,
            param->reinforceTypeId,
            param->trophySGradeId,
            param->trophySeqId,
            param->throwAtkRate,
            param->bowDistRate,
            param->equipModelCategory,
            param->equipModelGender,
            param->weaponCategory,
            param->wepmotionCategory,
            param->guardmotionCategory,
            param->atkMaterial,
            param->defSeMaterial1,
            param->correctType_Physics,
            param->spAttribute,
            param->spAtkcategory,
            param->wepmotionOneHandId,
            param->wepmotionBothHandId,
            param->properStrength,
            param->properAgility,
            param->properMagic,
            param->properFaith,
            param->overStrength,
            param->attackBaseParry,
            param->defenseBaseParry,
            param->guardBaseRepel,
            param->attackBaseRepel,
            param->guardCutCancelRate,
            param->guardLevel,
            param->slashGuardCutRate,
            param->blowGuardCutRate,
            param->thrustGuardCutRate,
            param->poisonGuardResist,
            param->diseaseGuardResist,
            param->bloodGuardResist,
            param->curseGuardResist,
            param->atkAttribute,
            param->rightHandEquipable,
            param->leftHandEquipable,
            param->bothHandEquipable,
            param->arrowSlotEquipable,
            param->boltSlotEquipable,
            param->enableGuard,
            param->enableParry,
            param->enableMagic,
            param->enableSorcery,
            param->enableMiracle,
            param->enableVowMagic,
            param->isNormalAttackType,
            param->isBlowAttackType,
            param->isSlashAttackType,
            param->isThrustAttackType,
            param->isEnhance,
            param->isHeroPointCorrect,
            param->isCustom,
            param->disableBaseChangeReset,
            param->disableRepair,
            param->isDarkHand,
            param->simpleModelForDlc,
            param->lanternWep,
            param->isVersusGhostWep,
            param->baseChangeCategory,
            param->isDragonSlayer,
            param->isDeposit,
            param->disableMultiDropShare,
            param->isDiscard,
            param->isDrop,
            param->showLogCondType,
            param->enableThrow,
            param->showDialogCondType,
            param->disableGemAttr,
            param->defSfxMaterial1,
            param->wepCollidableType0,
            param->wepCollidableType1,
            param->postureControlId_Right,
            param->postureControlId_Left,
            param->traceSfxId0,
            param->traceDmyIdHead0,
            param->traceDmyIdTail0,
            param->traceSfxId1,
            param->traceDmyIdHead1,
            param->traceDmyIdTail1,
            param->traceSfxId2,
            param->traceDmyIdHead2,
            param->traceDmyIdTail2,
            param->traceSfxId3,
            param->traceDmyIdHead3,
            param->traceDmyIdTail3,
            param->traceSfxId4,
            param->traceDmyIdHead4,
            param->traceDmyIdTail4,
            param->traceSfxId5,
            param->traceDmyIdHead5,
            param->traceDmyIdTail5,
            param->traceSfxId6,
            param->traceDmyIdHead6,
            param->traceDmyIdTail6,
            param->traceSfxId7,
            param->traceDmyIdHead7,
            param->traceDmyIdTail7,
            param->defSfxMaterial2,
            param->defSeMaterial2,
            param->absorpParamId,
            param->toughnessCorrectRate,
            param->isValidTough_ProtSADmg,
            param->isDualBlade,
            param->isAutoEquip,
            param->isEnableEmergencyStep,
            param->invisibleOnRemo,
            param->unknown_0x17c_5,
            param->quickMatchReplenish,
            param->isWeaponCatalyst,
            param->correctType_Magic,
            param->correctType_Fire,
            param->correctType_Thunder,
            param->weakE_DamageRate,
            param->weakF_DamageRate,
            param->darkGuardCutRate,
            param->attackBaseDark,
            param->correctType_Dark,
            param->correctType_Poison,
            param->sortGroupId,
            param->atkAttribute2,
            param->sleepGuardResist,
            param->madnessGuardResist,
            param->correctType_Blood,
            param->properLuck,
            param->freezeGuardResist,
            param->autoReplenishType,
            param->swordArtsParamId,
            param->correctLuck,
            param->arrowBoltEquipId,
            param->DerivationLevelType,
            param->enchantSfxSize,
            param->wepType,
            param->physGuardCutRate_MaxCorrect,
            param->magGuardCutRate_MaxCorrect,
            param->fireGuardCutRate_MaxCorrect,
            param->thunGuardCutRate_MaxCorrect,
            param->darkGuardCutRate_MaxCorrect,
            param->poisonGuardResist_MaxCorrect,
            param->diseaseGuardResist_MaxCorrect,
            param->bloodGuardResist_MaxCorrect,
            param->curseGuardResist_MaxCorrect,
            param->freezeGuardResist_MaxCorrect,
            param->staminaGuardDef_MaxCorrect,
            param->residentSfxId_1,
            param->residentSfxId_2,
            param->residentSfxId_3,
            param->residentSfxId_4,
            param->residentSfx_DmyId_1,
            param->residentSfx_DmyId_2,
            param->residentSfx_DmyId_3,
            param->residentSfx_DmyId_4,
            param->staminaConsumptionRate,
            param->vsPlayerDmgCorrectRate_Physics,
            param->vsPlayerDmgCorrectRate_Magic,
            param->vsPlayerDmgCorrectRate_Fire,
            param->vsPlayerDmgCorrectRate_Thunder,
            param->vsPlayerDmgCorrectRate_Dark,
            param->vsPlayerDmgCorrectRate_Poison,
            param->vsPlayerDmgCorrectRate_Blood,
            param->vsPlayerDmgCorrectRate_Freeze,
            param->attainmentWepStatusStr,
            param->attainmentWepStatusDex,
            param->attainmentWepStatusMag,
            param->attainmentWepStatusFai,
            param->attainmentWepStatusLuc,
            param->attackElementCorrectId,
            param->saleValue,
            param->reinforceShopCategory,
            param->maxArrowQuantity,
            param->residentSfx_1_IsVisibleForHang,
            param->residentSfx_2_IsVisibleForHang,
            param->residentSfx_3_IsVisibleForHang,
            param->residentSfx_4_IsVisibleForHang,
            param->isSoulParamIdChange_model0,
            param->isSoulParamIdChange_model1,
            param->isSoulParamIdChange_model2,
            param->isSoulParamIdChange_model3,
            param->wepSeIdOffset,
            param->baseChangePrice,
            param->levelSyncCorrectId,
            param->correctType_Sleep,
            param->correctType_Madness,
            param->rarity,
            param->gemMountType,
            param->wepRegainHp,
            param->spEffectMsgId0,
            param->spEffectMsgId1,
            param->spEffectMsgId2,
            param->originEquipWep16,
            param->originEquipWep17,
            param->originEquipWep18,
            param->originEquipWep19,
            param->originEquipWep20,
            param->originEquipWep21,
            param->originEquipWep22,
            param->originEquipWep23,
            param->originEquipWep24,
            param->originEquipWep25,
            param->vsPlayerDmgCorrectRate_Sleep,
            param->vsPlayerDmgCorrectRate_Madness,
            param->saGuardCutRate,
            param->defMaterialVariationValue,
            param->spAttributeVariationValue,
            param->stealthAtkRate,
            param->vsPlayerDmgCorrectRate_Disease,
            param->vsPlayerDmgCorrectRate_Curse,
            param->restrictSpecialSwordArt
        );
    }
    fclose(f);
}

}
