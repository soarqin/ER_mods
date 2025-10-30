#include "../luabindings.h"
#include "../defs/AtkParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<AtkParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerAtkParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["AtkParam"]; usertype) return;
        auto indexerAtkParam = state->new_usertype<ParamTableIndexer<AtkParam>>("AtkParamTableIndexer");
        indexerAtkParam["count"] = sol::property(&ParamTableIndexer<AtkParam>::count);
        indexerAtkParam["__index"] = &ParamTableIndexer<AtkParam>::at;
        indexerAtkParam["id"] = &ParamTableIndexer<AtkParam>::paramId;
        indexerAtkParam["get"] = &ParamTableIndexer<AtkParam>::get;
        indexerAtkParam["exportToCsv"] = &ParamTableIndexer<AtkParam>::exportToCsv;
        indexerAtkParam["importFromCsv"] = &ParamTableIndexer<AtkParam>::importFromCsv;
        auto utAtkParam = state->new_usertype<AtkParam>("AtkParam");
        utAtkParam["hit0_Radius"] = &AtkParam::hit0_Radius;
        utAtkParam["hit1_Radius"] = &AtkParam::hit1_Radius;
        utAtkParam["hit2_Radius"] = &AtkParam::hit2_Radius;
        utAtkParam["hit3_Radius"] = &AtkParam::hit3_Radius;
        utAtkParam["knockbackDist"] = &AtkParam::knockbackDist;
        utAtkParam["hitStopTime"] = &AtkParam::hitStopTime;
        utAtkParam["spEffectId0"] = &AtkParam::spEffectId0;
        utAtkParam["spEffectId1"] = &AtkParam::spEffectId1;
        utAtkParam["spEffectId2"] = &AtkParam::spEffectId2;
        utAtkParam["spEffectId3"] = &AtkParam::spEffectId3;
        utAtkParam["spEffectId4"] = &AtkParam::spEffectId4;
        utAtkParam["hit0_DmyPoly1"] = &AtkParam::hit0_DmyPoly1;
        utAtkParam["hit1_DmyPoly1"] = &AtkParam::hit1_DmyPoly1;
        utAtkParam["hit2_DmyPoly1"] = &AtkParam::hit2_DmyPoly1;
        utAtkParam["hit3_DmyPoly1"] = &AtkParam::hit3_DmyPoly1;
        utAtkParam["hit0_DmyPoly2"] = &AtkParam::hit0_DmyPoly2;
        utAtkParam["hit1_DmyPoly2"] = &AtkParam::hit1_DmyPoly2;
        utAtkParam["hit2_DmyPoly2"] = &AtkParam::hit2_DmyPoly2;
        utAtkParam["hit3_DmyPoly2"] = &AtkParam::hit3_DmyPoly2;
        utAtkParam["blowingCorrection"] = &AtkParam::blowingCorrection;
        utAtkParam["atkPhysCorrection"] = &AtkParam::atkPhysCorrection;
        utAtkParam["atkMagCorrection"] = &AtkParam::atkMagCorrection;
        utAtkParam["atkFireCorrection"] = &AtkParam::atkFireCorrection;
        utAtkParam["atkThunCorrection"] = &AtkParam::atkThunCorrection;
        utAtkParam["atkStamCorrection"] = &AtkParam::atkStamCorrection;
        utAtkParam["guardAtkRateCorrection"] = &AtkParam::guardAtkRateCorrection;
        utAtkParam["guardBreakCorrection"] = &AtkParam::guardBreakCorrection;
        utAtkParam["atkThrowEscapeCorrection"] = &AtkParam::atkThrowEscapeCorrection;
        utAtkParam["subCategory1"] = &AtkParam::subCategory1;
        utAtkParam["subCategory2"] = &AtkParam::subCategory2;
        utAtkParam["atkPhys"] = &AtkParam::atkPhys;
        utAtkParam["atkMag"] = &AtkParam::atkMag;
        utAtkParam["atkFire"] = &AtkParam::atkFire;
        utAtkParam["atkThun"] = &AtkParam::atkThun;
        utAtkParam["atkStam"] = &AtkParam::atkStam;
        utAtkParam["guardAtkRate"] = &AtkParam::guardAtkRate;
        utAtkParam["guardBreakRate"] = &AtkParam::guardBreakRate;
        utAtkParam["isEnableCalcDamageForBushesObj"] = &AtkParam::isEnableCalcDamageForBushesObj;
        utAtkParam["atkThrowEscape"] = &AtkParam::atkThrowEscape;
        utAtkParam["atkObj"] = &AtkParam::atkObj;
        utAtkParam["guardStaminaCutRate"] = &AtkParam::guardStaminaCutRate;
        utAtkParam["guardRate"] = &AtkParam::guardRate;
        utAtkParam["throwTypeId"] = &AtkParam::throwTypeId;
        utAtkParam["hit0_hitType"] = &AtkParam::hit0_hitType;
        utAtkParam["hit1_hitType"] = &AtkParam::hit1_hitType;
        utAtkParam["hit2_hitType"] = &AtkParam::hit2_hitType;
        utAtkParam["hit3_hitType"] = &AtkParam::hit3_hitType;
        utAtkParam["hti0_Priority"] = &AtkParam::hti0_Priority;
        utAtkParam["hti1_Priority"] = &AtkParam::hti1_Priority;
        utAtkParam["hti2_Priority"] = &AtkParam::hti2_Priority;
        utAtkParam["hti3_Priority"] = &AtkParam::hti3_Priority;
        utAtkParam["dmgLevel"] = &AtkParam::dmgLevel;
        utAtkParam["mapHitType"] = &AtkParam::mapHitType;
        utAtkParam["guardCutCancelRate"] = &AtkParam::guardCutCancelRate;
        utAtkParam["atkAttribute"] = &AtkParam::atkAttribute;
        utAtkParam["spAttribute"] = &AtkParam::spAttribute;
        utAtkParam["atkType"] = &AtkParam::atkType;
        utAtkParam["atkMaterial"] = &AtkParam::atkMaterial;
        utAtkParam["guardRangeType"] = &AtkParam::guardRangeType;
        utAtkParam["defSeMaterial1"] = &AtkParam::defSeMaterial1;
        utAtkParam["hitSourceType"] = &AtkParam::hitSourceType;
        utAtkParam["throwFlag"] = &AtkParam::throwFlag;
        utAtkParam["disableGuard"] = sol::property([](AtkParam &param) -> uint8_t { return param.disableGuard; }, [](AtkParam &param, uint8_t value) { param.disableGuard = value; });
        utAtkParam["disableStaminaAttack"] = sol::property([](AtkParam &param) -> uint8_t { return param.disableStaminaAttack; }, [](AtkParam &param, uint8_t value) { param.disableStaminaAttack = value; });
        utAtkParam["disableHitSpEffect"] = sol::property([](AtkParam &param) -> uint8_t { return param.disableHitSpEffect; }, [](AtkParam &param, uint8_t value) { param.disableHitSpEffect = value; });
        utAtkParam["IgnoreNotifyMissSwingForAI"] = sol::property([](AtkParam &param) -> uint8_t { return param.IgnoreNotifyMissSwingForAI; }, [](AtkParam &param, uint8_t value) { param.IgnoreNotifyMissSwingForAI = value; });
        utAtkParam["repeatHitSfx"] = sol::property([](AtkParam &param) -> uint8_t { return param.repeatHitSfx; }, [](AtkParam &param, uint8_t value) { param.repeatHitSfx = value; });
        utAtkParam["isArrowAtk"] = sol::property([](AtkParam &param) -> uint8_t { return param.isArrowAtk; }, [](AtkParam &param, uint8_t value) { param.isArrowAtk = value; });
        utAtkParam["isGhostAtk"] = sol::property([](AtkParam &param) -> uint8_t { return param.isGhostAtk; }, [](AtkParam &param, uint8_t value) { param.isGhostAtk = value; });
        utAtkParam["isDisableNoDamage"] = sol::property([](AtkParam &param) -> uint8_t { return param.isDisableNoDamage; }, [](AtkParam &param, uint8_t value) { param.isDisableNoDamage = value; });
        utAtkParam["atkPow_forSfx"] = &AtkParam::atkPow_forSfx;
        utAtkParam["atkDir_forSfx"] = &AtkParam::atkDir_forSfx;
        utAtkParam["opposeTarget"] = sol::property([](AtkParam &param) -> uint8_t { return param.opposeTarget; }, [](AtkParam &param, uint8_t value) { param.opposeTarget = value; });
        utAtkParam["friendlyTarget"] = sol::property([](AtkParam &param) -> uint8_t { return param.friendlyTarget; }, [](AtkParam &param, uint8_t value) { param.friendlyTarget = value; });
        utAtkParam["selfTarget"] = sol::property([](AtkParam &param) -> uint8_t { return param.selfTarget; }, [](AtkParam &param, uint8_t value) { param.selfTarget = value; });
        utAtkParam["isCheckDoorPenetration"] = sol::property([](AtkParam &param) -> uint8_t { return param.isCheckDoorPenetration; }, [](AtkParam &param, uint8_t value) { param.isCheckDoorPenetration = value; });
        utAtkParam["isVsRideAtk"] = sol::property([](AtkParam &param) -> uint8_t { return param.isVsRideAtk; }, [](AtkParam &param, uint8_t value) { param.isVsRideAtk = value; });
        utAtkParam["isAddBaseAtk"] = sol::property([](AtkParam &param) -> uint8_t { return param.isAddBaseAtk; }, [](AtkParam &param, uint8_t value) { param.isAddBaseAtk = value; });
        utAtkParam["excludeThreatLvNotify"] = sol::property([](AtkParam &param) -> uint8_t { return param.excludeThreatLvNotify; }, [](AtkParam &param, uint8_t value) { param.excludeThreatLvNotify = value; });
        utAtkParam["atkBehaviorId"] = &AtkParam::atkBehaviorId;
        utAtkParam["atkPow_forSe"] = &AtkParam::atkPow_forSe;
        utAtkParam["atkSuperArmor"] = &AtkParam::atkSuperArmor;
        utAtkParam["decalId1"] = &AtkParam::decalId1;
        utAtkParam["decalId2"] = &AtkParam::decalId2;
        utAtkParam["AppearAiSoundId"] = &AtkParam::AppearAiSoundId;
        utAtkParam["HitAiSoundId"] = &AtkParam::HitAiSoundId;
        utAtkParam["HitRumbleId"] = &AtkParam::HitRumbleId;
        utAtkParam["HitRumbleIdByNormal"] = &AtkParam::HitRumbleIdByNormal;
        utAtkParam["HitRumbleIdByMiddle"] = &AtkParam::HitRumbleIdByMiddle;
        utAtkParam["HitRumbleIdByRoot"] = &AtkParam::HitRumbleIdByRoot;
        utAtkParam["traceSfxId0"] = &AtkParam::traceSfxId0;
        utAtkParam["traceDmyIdHead0"] = &AtkParam::traceDmyIdHead0;
        utAtkParam["traceDmyIdTail0"] = &AtkParam::traceDmyIdTail0;
        utAtkParam["traceSfxId1"] = &AtkParam::traceSfxId1;
        utAtkParam["traceDmyIdHead1"] = &AtkParam::traceDmyIdHead1;
        utAtkParam["traceDmyIdTail1"] = &AtkParam::traceDmyIdTail1;
        utAtkParam["traceSfxId2"] = &AtkParam::traceSfxId2;
        utAtkParam["traceDmyIdHead2"] = &AtkParam::traceDmyIdHead2;
        utAtkParam["traceDmyIdTail2"] = &AtkParam::traceDmyIdTail2;
        utAtkParam["traceSfxId3"] = &AtkParam::traceSfxId3;
        utAtkParam["traceDmyIdHead3"] = &AtkParam::traceDmyIdHead3;
        utAtkParam["traceDmyIdTail3"] = &AtkParam::traceDmyIdTail3;
        utAtkParam["traceSfxId4"] = &AtkParam::traceSfxId4;
        utAtkParam["traceDmyIdHead4"] = &AtkParam::traceDmyIdHead4;
        utAtkParam["traceDmyIdTail4"] = &AtkParam::traceDmyIdTail4;
        utAtkParam["traceSfxId5"] = &AtkParam::traceSfxId5;
        utAtkParam["traceDmyIdHead5"] = &AtkParam::traceDmyIdHead5;
        utAtkParam["traceDmyIdTail5"] = &AtkParam::traceDmyIdTail5;
        utAtkParam["traceSfxId6"] = &AtkParam::traceSfxId6;
        utAtkParam["traceDmyIdHead6"] = &AtkParam::traceDmyIdHead6;
        utAtkParam["traceDmyIdTail6"] = &AtkParam::traceDmyIdTail6;
        utAtkParam["traceSfxId7"] = &AtkParam::traceSfxId7;
        utAtkParam["traceDmyIdHead7"] = &AtkParam::traceDmyIdHead7;
        utAtkParam["traceDmyIdTail7"] = &AtkParam::traceDmyIdTail7;
        utAtkParam["hit4_Radius"] = &AtkParam::hit4_Radius;
        utAtkParam["hit5_Radius"] = &AtkParam::hit5_Radius;
        utAtkParam["hit6_Radius"] = &AtkParam::hit6_Radius;
        utAtkParam["hit7_Radius"] = &AtkParam::hit7_Radius;
        utAtkParam["hit8_Radius"] = &AtkParam::hit8_Radius;
        utAtkParam["hit9_Radius"] = &AtkParam::hit9_Radius;
        utAtkParam["hit10_Radius"] = &AtkParam::hit10_Radius;
        utAtkParam["hit11_Radius"] = &AtkParam::hit11_Radius;
        utAtkParam["hit12_Radius"] = &AtkParam::hit12_Radius;
        utAtkParam["hit13_Radius"] = &AtkParam::hit13_Radius;
        utAtkParam["hit14_Radius"] = &AtkParam::hit14_Radius;
        utAtkParam["hit15_Radius"] = &AtkParam::hit15_Radius;
        utAtkParam["hit4_DmyPoly1"] = &AtkParam::hit4_DmyPoly1;
        utAtkParam["hit5_DmyPoly1"] = &AtkParam::hit5_DmyPoly1;
        utAtkParam["hit6_DmyPoly1"] = &AtkParam::hit6_DmyPoly1;
        utAtkParam["hit7_DmyPoly1"] = &AtkParam::hit7_DmyPoly1;
        utAtkParam["hit8_DmyPoly1"] = &AtkParam::hit8_DmyPoly1;
        utAtkParam["hit9_DmyPoly1"] = &AtkParam::hit9_DmyPoly1;
        utAtkParam["hit10_DmyPoly1"] = &AtkParam::hit10_DmyPoly1;
        utAtkParam["hit11_DmyPoly1"] = &AtkParam::hit11_DmyPoly1;
        utAtkParam["hit12_DmyPoly1"] = &AtkParam::hit12_DmyPoly1;
        utAtkParam["hit13_DmyPoly1"] = &AtkParam::hit13_DmyPoly1;
        utAtkParam["hit14_DmyPoly1"] = &AtkParam::hit14_DmyPoly1;
        utAtkParam["hit15_DmyPoly1"] = &AtkParam::hit15_DmyPoly1;
        utAtkParam["hit4_DmyPoly2"] = &AtkParam::hit4_DmyPoly2;
        utAtkParam["hit5_DmyPoly2"] = &AtkParam::hit5_DmyPoly2;
        utAtkParam["hit6_DmyPoly2"] = &AtkParam::hit6_DmyPoly2;
        utAtkParam["hit7_DmyPoly2"] = &AtkParam::hit7_DmyPoly2;
        utAtkParam["hit8_DmyPoly2"] = &AtkParam::hit8_DmyPoly2;
        utAtkParam["hit9_DmyPoly2"] = &AtkParam::hit9_DmyPoly2;
        utAtkParam["hit10_DmyPoly2"] = &AtkParam::hit10_DmyPoly2;
        utAtkParam["hit11_DmyPoly2"] = &AtkParam::hit11_DmyPoly2;
        utAtkParam["hit12_DmyPoly2"] = &AtkParam::hit12_DmyPoly2;
        utAtkParam["hit13_DmyPoly2"] = &AtkParam::hit13_DmyPoly2;
        utAtkParam["hit14_DmyPoly2"] = &AtkParam::hit14_DmyPoly2;
        utAtkParam["hit15_DmyPoly2"] = &AtkParam::hit15_DmyPoly2;
        utAtkParam["hit4_hitType"] = &AtkParam::hit4_hitType;
        utAtkParam["hit5_hitType"] = &AtkParam::hit5_hitType;
        utAtkParam["hit6_hitType"] = &AtkParam::hit6_hitType;
        utAtkParam["hit7_hitType"] = &AtkParam::hit7_hitType;
        utAtkParam["hit8_hitType"] = &AtkParam::hit8_hitType;
        utAtkParam["hit9_hitType"] = &AtkParam::hit9_hitType;
        utAtkParam["hit10_hitType"] = &AtkParam::hit10_hitType;
        utAtkParam["hit11_hitType"] = &AtkParam::hit11_hitType;
        utAtkParam["hit12_hitType"] = &AtkParam::hit12_hitType;
        utAtkParam["hit13_hitType"] = &AtkParam::hit13_hitType;
        utAtkParam["hit14_hitType"] = &AtkParam::hit14_hitType;
        utAtkParam["hit15_hitType"] = &AtkParam::hit15_hitType;
        utAtkParam["hti4_Priority"] = &AtkParam::hti4_Priority;
        utAtkParam["hti5_Priority"] = &AtkParam::hti5_Priority;
        utAtkParam["hti6_Priority"] = &AtkParam::hti6_Priority;
        utAtkParam["hti7_Priority"] = &AtkParam::hti7_Priority;
        utAtkParam["hti8_Priority"] = &AtkParam::hti8_Priority;
        utAtkParam["hti9_Priority"] = &AtkParam::hti9_Priority;
        utAtkParam["hti10_Priority"] = &AtkParam::hti10_Priority;
        utAtkParam["hti11_Priority"] = &AtkParam::hti11_Priority;
        utAtkParam["hti12_Priority"] = &AtkParam::hti12_Priority;
        utAtkParam["hti13_Priority"] = &AtkParam::hti13_Priority;
        utAtkParam["hti14_Priority"] = &AtkParam::hti14_Priority;
        utAtkParam["hti15_Priority"] = &AtkParam::hti15_Priority;
        utAtkParam["defSfxMaterial1"] = &AtkParam::defSfxMaterial1;
        utAtkParam["defSeMaterial2"] = &AtkParam::defSeMaterial2;
        utAtkParam["defSfxMaterial2"] = &AtkParam::defSfxMaterial2;
        utAtkParam["atkDarkCorrection"] = &AtkParam::atkDarkCorrection;
        utAtkParam["atkDark"] = &AtkParam::atkDark;
        utAtkParam["isDisableParry"] = sol::property([](AtkParam &param) -> uint8_t { return param.isDisableParry; }, [](AtkParam &param, uint8_t value) { param.isDisableParry = value; });
        utAtkParam["isDisableBothHandsAtkBonus"] = sol::property([](AtkParam &param) -> uint8_t { return param.isDisableBothHandsAtkBonus; }, [](AtkParam &param, uint8_t value) { param.isDisableBothHandsAtkBonus = value; });
        utAtkParam["isInvalidatedByNoDamageInAir"] = sol::property([](AtkParam &param) -> uint8_t { return param.isInvalidatedByNoDamageInAir; }, [](AtkParam &param, uint8_t value) { param.isInvalidatedByNoDamageInAir = value; });
        utAtkParam["dmgLevel_vsPlayer"] = &AtkParam::dmgLevel_vsPlayer;
        utAtkParam["statusAilmentAtkPowerCorrectRate"] = &AtkParam::statusAilmentAtkPowerCorrectRate;
        utAtkParam["spEffectAtkPowerCorrectRate_byPoint"] = &AtkParam::spEffectAtkPowerCorrectRate_byPoint;
        utAtkParam["spEffectAtkPowerCorrectRate_byRate"] = &AtkParam::spEffectAtkPowerCorrectRate_byRate;
        utAtkParam["spEffectAtkPowerCorrectRate_byDmg"] = &AtkParam::spEffectAtkPowerCorrectRate_byDmg;
        utAtkParam["atkBehaviorId_2"] = &AtkParam::atkBehaviorId_2;
        utAtkParam["throwDamageAttribute"] = &AtkParam::throwDamageAttribute;
        utAtkParam["statusAilmentAtkPowerCorrectRate_byPoint"] = &AtkParam::statusAilmentAtkPowerCorrectRate_byPoint;
        utAtkParam["overwriteAttackElementCorrectId"] = &AtkParam::overwriteAttackElementCorrectId;
        utAtkParam["decalBaseId1"] = &AtkParam::decalBaseId1;
        utAtkParam["decalBaseId2"] = &AtkParam::decalBaseId2;
        utAtkParam["wepRegainHpScale"] = &AtkParam::wepRegainHpScale;
        utAtkParam["atkRegainHp"] = &AtkParam::atkRegainHp;
        utAtkParam["regainableTimeScale"] = &AtkParam::regainableTimeScale;
        utAtkParam["regainableHpRateScale"] = &AtkParam::regainableHpRateScale;
        utAtkParam["regainableSlotId"] = &AtkParam::regainableSlotId;
        utAtkParam["spAttributeVariationValue"] = &AtkParam::spAttributeVariationValue;
        utAtkParam["parryForwardOffset"] = &AtkParam::parryForwardOffset;
        utAtkParam["atkSuperArmorCorrection"] = &AtkParam::atkSuperArmorCorrection;
        utAtkParam["defSfxMaterialVariationValue"] = &AtkParam::defSfxMaterialVariationValue;
        utAtkParam["finalDamageRateId"] = &AtkParam::finalDamageRateId;
        utAtkParam["subCategory3"] = &AtkParam::subCategory3;
        utAtkParam["subCategory4"] = &AtkParam::subCategory4;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<AtkParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<AtkParam>>(nullptr);
        indexer->setFieldNames({
            {"hit0_Radius", false},
            {"hit1_Radius", false},
            {"hit2_Radius", false},
            {"hit3_Radius", false},
            {"knockbackDist", false},
            {"hitStopTime", false},
            {"spEffectId0", false},
            {"spEffectId1", false},
            {"spEffectId2", false},
            {"spEffectId3", false},
            {"spEffectId4", false},
            {"hit0_DmyPoly1", false},
            {"hit1_DmyPoly1", false},
            {"hit2_DmyPoly1", false},
            {"hit3_DmyPoly1", false},
            {"hit0_DmyPoly2", false},
            {"hit1_DmyPoly2", false},
            {"hit2_DmyPoly2", false},
            {"hit3_DmyPoly2", false},
            {"blowingCorrection", false},
            {"atkPhysCorrection", false},
            {"atkMagCorrection", false},
            {"atkFireCorrection", false},
            {"atkThunCorrection", false},
            {"atkStamCorrection", false},
            {"guardAtkRateCorrection", false},
            {"guardBreakCorrection", false},
            {"atkThrowEscapeCorrection", false},
            {"subCategory1", false},
            {"subCategory2", false},
            {"atkPhys", false},
            {"atkMag", false},
            {"atkFire", false},
            {"atkThun", false},
            {"atkStam", false},
            {"guardAtkRate", false},
            {"guardBreakRate", false},
            {"isEnableCalcDamageForBushesObj", false},
            {"atkThrowEscape", false},
            {"atkObj", false},
            {"guardStaminaCutRate", false},
            {"guardRate", false},
            {"throwTypeId", false},
            {"hit0_hitType", false},
            {"hit1_hitType", false},
            {"hit2_hitType", false},
            {"hit3_hitType", false},
            {"hti0_Priority", false},
            {"hti1_Priority", false},
            {"hti2_Priority", false},
            {"hti3_Priority", false},
            {"dmgLevel", false},
            {"mapHitType", false},
            {"guardCutCancelRate", false},
            {"atkAttribute", false},
            {"spAttribute", false},
            {"atkType", false},
            {"atkMaterial", false},
            {"guardRangeType", false},
            {"defSeMaterial1", false},
            {"hitSourceType", false},
            {"throwFlag", false},
            {"disableGuard", false},
            {"disableStaminaAttack", false},
            {"disableHitSpEffect", false},
            {"IgnoreNotifyMissSwingForAI", false},
            {"repeatHitSfx", false},
            {"isArrowAtk", false},
            {"isGhostAtk", false},
            {"isDisableNoDamage", false},
            {"atkPow_forSfx", false},
            {"atkDir_forSfx", false},
            {"opposeTarget", false},
            {"friendlyTarget", false},
            {"selfTarget", false},
            {"isCheckDoorPenetration", false},
            {"isVsRideAtk", false},
            {"isAddBaseAtk", false},
            {"excludeThreatLvNotify", false},
            {"atkBehaviorId", false},
            {"atkPow_forSe", false},
            {"atkSuperArmor", false},
            {"decalId1", false},
            {"decalId2", false},
            {"AppearAiSoundId", false},
            {"HitAiSoundId", false},
            {"HitRumbleId", false},
            {"HitRumbleIdByNormal", false},
            {"HitRumbleIdByMiddle", false},
            {"HitRumbleIdByRoot", false},
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
            {"hit4_Radius", false},
            {"hit5_Radius", false},
            {"hit6_Radius", false},
            {"hit7_Radius", false},
            {"hit8_Radius", false},
            {"hit9_Radius", false},
            {"hit10_Radius", false},
            {"hit11_Radius", false},
            {"hit12_Radius", false},
            {"hit13_Radius", false},
            {"hit14_Radius", false},
            {"hit15_Radius", false},
            {"hit4_DmyPoly1", false},
            {"hit5_DmyPoly1", false},
            {"hit6_DmyPoly1", false},
            {"hit7_DmyPoly1", false},
            {"hit8_DmyPoly1", false},
            {"hit9_DmyPoly1", false},
            {"hit10_DmyPoly1", false},
            {"hit11_DmyPoly1", false},
            {"hit12_DmyPoly1", false},
            {"hit13_DmyPoly1", false},
            {"hit14_DmyPoly1", false},
            {"hit15_DmyPoly1", false},
            {"hit4_DmyPoly2", false},
            {"hit5_DmyPoly2", false},
            {"hit6_DmyPoly2", false},
            {"hit7_DmyPoly2", false},
            {"hit8_DmyPoly2", false},
            {"hit9_DmyPoly2", false},
            {"hit10_DmyPoly2", false},
            {"hit11_DmyPoly2", false},
            {"hit12_DmyPoly2", false},
            {"hit13_DmyPoly2", false},
            {"hit14_DmyPoly2", false},
            {"hit15_DmyPoly2", false},
            {"hit4_hitType", false},
            {"hit5_hitType", false},
            {"hit6_hitType", false},
            {"hit7_hitType", false},
            {"hit8_hitType", false},
            {"hit9_hitType", false},
            {"hit10_hitType", false},
            {"hit11_hitType", false},
            {"hit12_hitType", false},
            {"hit13_hitType", false},
            {"hit14_hitType", false},
            {"hit15_hitType", false},
            {"hti4_Priority", false},
            {"hti5_Priority", false},
            {"hti6_Priority", false},
            {"hti7_Priority", false},
            {"hti8_Priority", false},
            {"hti9_Priority", false},
            {"hti10_Priority", false},
            {"hti11_Priority", false},
            {"hti12_Priority", false},
            {"hti13_Priority", false},
            {"hti14_Priority", false},
            {"hti15_Priority", false},
            {"defSfxMaterial1", false},
            {"defSeMaterial2", false},
            {"defSfxMaterial2", false},
            {"atkDarkCorrection", false},
            {"atkDark", false},
            {"isDisableParry", false},
            {"isDisableBothHandsAtkBonus", false},
            {"isInvalidatedByNoDamageInAir", false},
            {"dmgLevel_vsPlayer", false},
            {"statusAilmentAtkPowerCorrectRate", false},
            {"spEffectAtkPowerCorrectRate_byPoint", false},
            {"spEffectAtkPowerCorrectRate_byRate", false},
            {"spEffectAtkPowerCorrectRate_byDmg", false},
            {"atkBehaviorId_2", false},
            {"throwDamageAttribute", false},
            {"statusAilmentAtkPowerCorrectRate_byPoint", false},
            {"overwriteAttackElementCorrectId", false},
            {"decalBaseId1", false},
            {"decalBaseId2", false},
            {"wepRegainHpScale", false},
            {"atkRegainHp", false},
            {"regainableTimeScale", false},
            {"regainableHpRateScale", false},
            {"regainableSlotId", false},
            {"spAttributeVariationValue", false},
            {"parryForwardOffset", false},
            {"atkSuperArmorCorrection", false},
            {"defSfxMaterialVariationValue", false},
            {"finalDamageRateId", false},
            {"subCategory3", false},
            {"subCategory4", false},
        });
        return indexer;
    };
    paramsTable["AtkParam_Npc"] = [tableLoader]() -> auto { return tableLoader(L"AtkParam_Npc"); };
    paramsTable["AtkParam_Pc"] = [tableLoader]() -> auto { return tableLoader(L"AtkParam_Pc"); };
}

template<> void ParamTableIndexer<AtkParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,hit0_Radius,hit1_Radius,hit2_Radius,hit3_Radius,knockbackDist,hitStopTime,spEffectId0,spEffectId1,spEffectId2,spEffectId3,spEffectId4,hit0_DmyPoly1,hit1_DmyPoly1,hit2_DmyPoly1,hit3_DmyPoly1");
    fwprintf(f, L",hit0_DmyPoly2,hit1_DmyPoly2,hit2_DmyPoly2,hit3_DmyPoly2,blowingCorrection,atkPhysCorrection,atkMagCorrection,atkFireCorrection,atkThunCorrection,atkStamCorrection,guardAtkRateCorrection,guardBreakCorrection,atkThrowEscapeCorrection,subCategory1,subCategory2,atkPhys");
    fwprintf(f, L",atkMag,atkFire,atkThun,atkStam,guardAtkRate,guardBreakRate,isEnableCalcDamageForBushesObj,atkThrowEscape,atkObj,guardStaminaCutRate,guardRate,throwTypeId,hit0_hitType,hit1_hitType,hit2_hitType,hit3_hitType");
    fwprintf(f, L",hti0_Priority,hti1_Priority,hti2_Priority,hti3_Priority,dmgLevel,mapHitType,guardCutCancelRate,atkAttribute,spAttribute,atkType,atkMaterial,guardRangeType,defSeMaterial1,hitSourceType,throwFlag,disableGuard");
    fwprintf(f, L",disableStaminaAttack,disableHitSpEffect,IgnoreNotifyMissSwingForAI,repeatHitSfx,isArrowAtk,isGhostAtk,isDisableNoDamage,atkPow_forSfx,atkDir_forSfx,opposeTarget,friendlyTarget,selfTarget,isCheckDoorPenetration,isVsRideAtk,isAddBaseAtk,excludeThreatLvNotify");
    fwprintf(f, L",atkBehaviorId,atkPow_forSe,atkSuperArmor,decalId1,decalId2,AppearAiSoundId,HitAiSoundId,HitRumbleId,HitRumbleIdByNormal,HitRumbleIdByMiddle,HitRumbleIdByRoot,traceSfxId0,traceDmyIdHead0,traceDmyIdTail0,traceSfxId1,traceDmyIdHead1");
    fwprintf(f, L",traceDmyIdTail1,traceSfxId2,traceDmyIdHead2,traceDmyIdTail2,traceSfxId3,traceDmyIdHead3,traceDmyIdTail3,traceSfxId4,traceDmyIdHead4,traceDmyIdTail4,traceSfxId5,traceDmyIdHead5,traceDmyIdTail5,traceSfxId6,traceDmyIdHead6,traceDmyIdTail6");
    fwprintf(f, L",traceSfxId7,traceDmyIdHead7,traceDmyIdTail7,hit4_Radius,hit5_Radius,hit6_Radius,hit7_Radius,hit8_Radius,hit9_Radius,hit10_Radius,hit11_Radius,hit12_Radius,hit13_Radius,hit14_Radius,hit15_Radius,hit4_DmyPoly1");
    fwprintf(f, L",hit5_DmyPoly1,hit6_DmyPoly1,hit7_DmyPoly1,hit8_DmyPoly1,hit9_DmyPoly1,hit10_DmyPoly1,hit11_DmyPoly1,hit12_DmyPoly1,hit13_DmyPoly1,hit14_DmyPoly1,hit15_DmyPoly1,hit4_DmyPoly2,hit5_DmyPoly2,hit6_DmyPoly2,hit7_DmyPoly2,hit8_DmyPoly2");
    fwprintf(f, L",hit9_DmyPoly2,hit10_DmyPoly2,hit11_DmyPoly2,hit12_DmyPoly2,hit13_DmyPoly2,hit14_DmyPoly2,hit15_DmyPoly2,hit4_hitType,hit5_hitType,hit6_hitType,hit7_hitType,hit8_hitType,hit9_hitType,hit10_hitType,hit11_hitType,hit12_hitType");
    fwprintf(f, L",hit13_hitType,hit14_hitType,hit15_hitType,hti4_Priority,hti5_Priority,hti6_Priority,hti7_Priority,hti8_Priority,hti9_Priority,hti10_Priority,hti11_Priority,hti12_Priority,hti13_Priority,hti14_Priority,hti15_Priority,defSfxMaterial1");
    fwprintf(f, L",defSeMaterial2,defSfxMaterial2,atkDarkCorrection,atkDark,isDisableParry,isDisableBothHandsAtkBonus,isInvalidatedByNoDamageInAir,dmgLevel_vsPlayer,statusAilmentAtkPowerCorrectRate,spEffectAtkPowerCorrectRate_byPoint,spEffectAtkPowerCorrectRate_byRate,spEffectAtkPowerCorrectRate_byDmg,atkBehaviorId_2,throwDamageAttribute,statusAilmentAtkPowerCorrectRate_byPoint,overwriteAttackElementCorrectId");
    fwprintf(f, L",decalBaseId1,decalBaseId2,wepRegainHpScale,atkRegainHp,regainableTimeScale,regainableHpRateScale,regainableSlotId,spAttributeVariationValue,parryForwardOffset,atkSuperArmorCorrection,defSfxMaterialVariationValue,finalDamageRateId,subCategory3,subCategory4\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g,%g,%g,%g,%g,%g,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%d,%g,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%u,%u,%u,%u,%u,%u,%u,%d,%d,%d,%u,%u,%g,%g,%d,%u,%d,%g,%u,%d,%u,%u\n",
            this->paramId(i),
            param->hit0_Radius,
            param->hit1_Radius,
            param->hit2_Radius,
            param->hit3_Radius,
            param->knockbackDist,
            param->hitStopTime,
            param->spEffectId0,
            param->spEffectId1,
            param->spEffectId2,
            param->spEffectId3,
            param->spEffectId4,
            param->hit0_DmyPoly1,
            param->hit1_DmyPoly1,
            param->hit2_DmyPoly1,
            param->hit3_DmyPoly1,
            param->hit0_DmyPoly2,
            param->hit1_DmyPoly2,
            param->hit2_DmyPoly2,
            param->hit3_DmyPoly2,
            param->blowingCorrection,
            param->atkPhysCorrection,
            param->atkMagCorrection,
            param->atkFireCorrection,
            param->atkThunCorrection,
            param->atkStamCorrection,
            param->guardAtkRateCorrection,
            param->guardBreakCorrection,
            param->atkThrowEscapeCorrection,
            param->subCategory1,
            param->subCategory2,
            param->atkPhys,
            param->atkMag,
            param->atkFire,
            param->atkThun,
            param->atkStam,
            param->guardAtkRate,
            param->guardBreakRate,
            param->isEnableCalcDamageForBushesObj,
            param->atkThrowEscape,
            param->atkObj,
            param->guardStaminaCutRate,
            param->guardRate,
            param->throwTypeId,
            param->hit0_hitType,
            param->hit1_hitType,
            param->hit2_hitType,
            param->hit3_hitType,
            param->hti0_Priority,
            param->hti1_Priority,
            param->hti2_Priority,
            param->hti3_Priority,
            param->dmgLevel,
            param->mapHitType,
            param->guardCutCancelRate,
            param->atkAttribute,
            param->spAttribute,
            param->atkType,
            param->atkMaterial,
            param->guardRangeType,
            param->defSeMaterial1,
            param->hitSourceType,
            param->throwFlag,
            param->disableGuard,
            param->disableStaminaAttack,
            param->disableHitSpEffect,
            param->IgnoreNotifyMissSwingForAI,
            param->repeatHitSfx,
            param->isArrowAtk,
            param->isGhostAtk,
            param->isDisableNoDamage,
            param->atkPow_forSfx,
            param->atkDir_forSfx,
            param->opposeTarget,
            param->friendlyTarget,
            param->selfTarget,
            param->isCheckDoorPenetration,
            param->isVsRideAtk,
            param->isAddBaseAtk,
            param->excludeThreatLvNotify,
            param->atkBehaviorId,
            param->atkPow_forSe,
            param->atkSuperArmor,
            param->decalId1,
            param->decalId2,
            param->AppearAiSoundId,
            param->HitAiSoundId,
            param->HitRumbleId,
            param->HitRumbleIdByNormal,
            param->HitRumbleIdByMiddle,
            param->HitRumbleIdByRoot,
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
            param->hit4_Radius,
            param->hit5_Radius,
            param->hit6_Radius,
            param->hit7_Radius,
            param->hit8_Radius,
            param->hit9_Radius,
            param->hit10_Radius,
            param->hit11_Radius,
            param->hit12_Radius,
            param->hit13_Radius,
            param->hit14_Radius,
            param->hit15_Radius,
            param->hit4_DmyPoly1,
            param->hit5_DmyPoly1,
            param->hit6_DmyPoly1,
            param->hit7_DmyPoly1,
            param->hit8_DmyPoly1,
            param->hit9_DmyPoly1,
            param->hit10_DmyPoly1,
            param->hit11_DmyPoly1,
            param->hit12_DmyPoly1,
            param->hit13_DmyPoly1,
            param->hit14_DmyPoly1,
            param->hit15_DmyPoly1,
            param->hit4_DmyPoly2,
            param->hit5_DmyPoly2,
            param->hit6_DmyPoly2,
            param->hit7_DmyPoly2,
            param->hit8_DmyPoly2,
            param->hit9_DmyPoly2,
            param->hit10_DmyPoly2,
            param->hit11_DmyPoly2,
            param->hit12_DmyPoly2,
            param->hit13_DmyPoly2,
            param->hit14_DmyPoly2,
            param->hit15_DmyPoly2,
            param->hit4_hitType,
            param->hit5_hitType,
            param->hit6_hitType,
            param->hit7_hitType,
            param->hit8_hitType,
            param->hit9_hitType,
            param->hit10_hitType,
            param->hit11_hitType,
            param->hit12_hitType,
            param->hit13_hitType,
            param->hit14_hitType,
            param->hit15_hitType,
            param->hti4_Priority,
            param->hti5_Priority,
            param->hti6_Priority,
            param->hti7_Priority,
            param->hti8_Priority,
            param->hti9_Priority,
            param->hti10_Priority,
            param->hti11_Priority,
            param->hti12_Priority,
            param->hti13_Priority,
            param->hti14_Priority,
            param->hti15_Priority,
            param->defSfxMaterial1,
            param->defSeMaterial2,
            param->defSfxMaterial2,
            param->atkDarkCorrection,
            param->atkDark,
            param->isDisableParry,
            param->isDisableBothHandsAtkBonus,
            param->isInvalidatedByNoDamageInAir,
            param->dmgLevel_vsPlayer,
            param->statusAilmentAtkPowerCorrectRate,
            param->spEffectAtkPowerCorrectRate_byPoint,
            param->spEffectAtkPowerCorrectRate_byRate,
            param->spEffectAtkPowerCorrectRate_byDmg,
            param->atkBehaviorId_2,
            param->throwDamageAttribute,
            param->statusAilmentAtkPowerCorrectRate_byPoint,
            param->overwriteAttackElementCorrectId,
            param->decalBaseId1,
            param->decalBaseId2,
            param->wepRegainHpScale,
            param->atkRegainHp,
            param->regainableTimeScale,
            param->regainableHpRateScale,
            param->regainableSlotId,
            param->spAttributeVariationValue,
            param->parryForwardOffset,
            param->atkSuperArmorCorrection,
            param->defSfxMaterialVariationValue,
            param->finalDamageRateId,
            param->subCategory3,
            param->subCategory4
        );
    }
    fclose(f);
}

}
