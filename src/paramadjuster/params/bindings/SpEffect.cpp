#include "../luabindings.h"
#include "../defs/SpEffect.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<SpEffect>::exportToCsvImpl(const std::wstring &csvPath);

void registerSpEffect(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["SpEffect"]; usertype) return;
        auto indexerSpEffect = state->new_usertype<ParamTableIndexer<SpEffect>>("SpEffectTableIndexer");
        indexerSpEffect["count"] = sol::property(&ParamTableIndexer<SpEffect>::count);
        indexerSpEffect["__index"] = &ParamTableIndexer<SpEffect>::at;
        indexerSpEffect["id"] = &ParamTableIndexer<SpEffect>::paramId;
        indexerSpEffect["get"] = &ParamTableIndexer<SpEffect>::get;
        indexerSpEffect["exportToCsv"] = &ParamTableIndexer<SpEffect>::exportToCsv;
        indexerSpEffect["importFromCsv"] = &ParamTableIndexer<SpEffect>::importFromCsv;
        auto utSpEffect = state->new_usertype<SpEffect>("SpEffect");
        utSpEffect["iconId"] = &SpEffect::iconId;
        utSpEffect["conditionHp"] = &SpEffect::conditionHp;
        utSpEffect["effectEndurance"] = &SpEffect::effectEndurance;
        utSpEffect["motionInterval"] = &SpEffect::motionInterval;
        utSpEffect["maxHpRate"] = &SpEffect::maxHpRate;
        utSpEffect["maxMpRate"] = &SpEffect::maxMpRate;
        utSpEffect["maxStaminaRate"] = &SpEffect::maxStaminaRate;
        utSpEffect["slashDamageCutRate"] = &SpEffect::slashDamageCutRate;
        utSpEffect["blowDamageCutRate"] = &SpEffect::blowDamageCutRate;
        utSpEffect["thrustDamageCutRate"] = &SpEffect::thrustDamageCutRate;
        utSpEffect["neutralDamageCutRate"] = &SpEffect::neutralDamageCutRate;
        utSpEffect["magicDamageCutRate"] = &SpEffect::magicDamageCutRate;
        utSpEffect["fireDamageCutRate"] = &SpEffect::fireDamageCutRate;
        utSpEffect["thunderDamageCutRate"] = &SpEffect::thunderDamageCutRate;
        utSpEffect["physicsAttackRate"] = &SpEffect::physicsAttackRate;
        utSpEffect["magicAttackRate"] = &SpEffect::magicAttackRate;
        utSpEffect["fireAttackRate"] = &SpEffect::fireAttackRate;
        utSpEffect["thunderAttackRate"] = &SpEffect::thunderAttackRate;
        utSpEffect["physicsAttackPowerRate"] = &SpEffect::physicsAttackPowerRate;
        utSpEffect["magicAttackPowerRate"] = &SpEffect::magicAttackPowerRate;
        utSpEffect["fireAttackPowerRate"] = &SpEffect::fireAttackPowerRate;
        utSpEffect["thunderAttackPowerRate"] = &SpEffect::thunderAttackPowerRate;
        utSpEffect["physicsAttackPower"] = &SpEffect::physicsAttackPower;
        utSpEffect["magicAttackPower"] = &SpEffect::magicAttackPower;
        utSpEffect["fireAttackPower"] = &SpEffect::fireAttackPower;
        utSpEffect["thunderAttackPower"] = &SpEffect::thunderAttackPower;
        utSpEffect["physicsDiffenceRate"] = &SpEffect::physicsDiffenceRate;
        utSpEffect["magicDiffenceRate"] = &SpEffect::magicDiffenceRate;
        utSpEffect["fireDiffenceRate"] = &SpEffect::fireDiffenceRate;
        utSpEffect["thunderDiffenceRate"] = &SpEffect::thunderDiffenceRate;
        utSpEffect["physicsDiffence"] = &SpEffect::physicsDiffence;
        utSpEffect["magicDiffence"] = &SpEffect::magicDiffence;
        utSpEffect["fireDiffence"] = &SpEffect::fireDiffence;
        utSpEffect["thunderDiffence"] = &SpEffect::thunderDiffence;
        utSpEffect["NoGuardDamageRate"] = &SpEffect::NoGuardDamageRate;
        utSpEffect["vitalSpotChangeRate"] = &SpEffect::vitalSpotChangeRate;
        utSpEffect["normalSpotChangeRate"] = &SpEffect::normalSpotChangeRate;
        utSpEffect["lookAtTargetPosOffset"] = &SpEffect::lookAtTargetPosOffset;
        utSpEffect["behaviorId"] = &SpEffect::behaviorId;
        utSpEffect["changeHpRate"] = &SpEffect::changeHpRate;
        utSpEffect["changeHpPoint"] = &SpEffect::changeHpPoint;
        utSpEffect["changeMpRate"] = &SpEffect::changeMpRate;
        utSpEffect["changeMpPoint"] = &SpEffect::changeMpPoint;
        utSpEffect["mpRecoverChangeSpeed"] = &SpEffect::mpRecoverChangeSpeed;
        utSpEffect["changeStaminaRate"] = &SpEffect::changeStaminaRate;
        utSpEffect["changeStaminaPoint"] = &SpEffect::changeStaminaPoint;
        utSpEffect["staminaRecoverChangeSpeed"] = &SpEffect::staminaRecoverChangeSpeed;
        utSpEffect["magicEffectTimeChange"] = &SpEffect::magicEffectTimeChange;
        utSpEffect["insideDurability"] = &SpEffect::insideDurability;
        utSpEffect["maxDurability"] = &SpEffect::maxDurability;
        utSpEffect["staminaAttackRate"] = &SpEffect::staminaAttackRate;
        utSpEffect["poizonAttackPower"] = &SpEffect::poizonAttackPower;
        utSpEffect["diseaseAttackPower"] = &SpEffect::diseaseAttackPower;
        utSpEffect["bloodAttackPower"] = &SpEffect::bloodAttackPower;
        utSpEffect["curseAttackPower"] = &SpEffect::curseAttackPower;
        utSpEffect["fallDamageRate"] = &SpEffect::fallDamageRate;
        utSpEffect["soulRate"] = &SpEffect::soulRate;
        utSpEffect["equipWeightChangeRate"] = &SpEffect::equipWeightChangeRate;
        utSpEffect["allItemWeightChangeRate"] = &SpEffect::allItemWeightChangeRate;
        utSpEffect["soul"] = &SpEffect::soul;
        utSpEffect["animIdOffset"] = &SpEffect::animIdOffset;
        utSpEffect["haveSoulRate"] = &SpEffect::haveSoulRate;
        utSpEffect["targetPriority"] = &SpEffect::targetPriority;
        utSpEffect["sightSearchEnemyRate"] = &SpEffect::sightSearchEnemyRate;
        utSpEffect["hearingSearchEnemyRate"] = &SpEffect::hearingSearchEnemyRate;
        utSpEffect["grabityRate"] = &SpEffect::grabityRate;
        utSpEffect["registPoizonChangeRate"] = &SpEffect::registPoizonChangeRate;
        utSpEffect["registDiseaseChangeRate"] = &SpEffect::registDiseaseChangeRate;
        utSpEffect["registBloodChangeRate"] = &SpEffect::registBloodChangeRate;
        utSpEffect["registCurseChangeRate"] = &SpEffect::registCurseChangeRate;
        utSpEffect["soulStealRate"] = &SpEffect::soulStealRate;
        utSpEffect["lifeReductionRate"] = &SpEffect::lifeReductionRate;
        utSpEffect["hpRecoverRate"] = &SpEffect::hpRecoverRate;
        utSpEffect["replaceSpEffectId"] = &SpEffect::replaceSpEffectId;
        utSpEffect["cycleOccurrenceSpEffectId"] = &SpEffect::cycleOccurrenceSpEffectId;
        utSpEffect["atkOccurrenceSpEffectId"] = &SpEffect::atkOccurrenceSpEffectId;
        utSpEffect["guardDefFlickPowerRate"] = &SpEffect::guardDefFlickPowerRate;
        utSpEffect["guardStaminaCutRate"] = &SpEffect::guardStaminaCutRate;
        utSpEffect["rayCastPassedTime"] = &SpEffect::rayCastPassedTime;
        utSpEffect["magicSubCategoryChange1"] = &SpEffect::magicSubCategoryChange1;
        utSpEffect["magicSubCategoryChange2"] = &SpEffect::magicSubCategoryChange2;
        utSpEffect["bowDistRate"] = &SpEffect::bowDistRate;
        utSpEffect["spCategory"] = &SpEffect::spCategory;
        utSpEffect["categoryPriority"] = &SpEffect::categoryPriority;
        utSpEffect["saveCategory"] = &SpEffect::saveCategory;
        utSpEffect["changeMagicSlot"] = &SpEffect::changeMagicSlot;
        utSpEffect["changeMiracleSlot"] = &SpEffect::changeMiracleSlot;
        utSpEffect["heroPointDamage"] = &SpEffect::heroPointDamage;
        utSpEffect["defFlickPower"] = &SpEffect::defFlickPower;
        utSpEffect["flickDamageCutRate"] = &SpEffect::flickDamageCutRate;
        utSpEffect["bloodDamageRate"] = &SpEffect::bloodDamageRate;
        utSpEffect["dmgLv_None"] = &SpEffect::dmgLv_None;
        utSpEffect["dmgLv_S"] = &SpEffect::dmgLv_S;
        utSpEffect["dmgLv_M"] = &SpEffect::dmgLv_M;
        utSpEffect["dmgLv_L"] = &SpEffect::dmgLv_L;
        utSpEffect["dmgLv_BlowM"] = &SpEffect::dmgLv_BlowM;
        utSpEffect["dmgLv_Push"] = &SpEffect::dmgLv_Push;
        utSpEffect["dmgLv_Strike"] = &SpEffect::dmgLv_Strike;
        utSpEffect["dmgLv_BlowS"] = &SpEffect::dmgLv_BlowS;
        utSpEffect["dmgLv_Min"] = &SpEffect::dmgLv_Min;
        utSpEffect["dmgLv_Uppercut"] = &SpEffect::dmgLv_Uppercut;
        utSpEffect["dmgLv_BlowLL"] = &SpEffect::dmgLv_BlowLL;
        utSpEffect["dmgLv_Breath"] = &SpEffect::dmgLv_Breath;
        utSpEffect["atkAttribute"] = &SpEffect::atkAttribute;
        utSpEffect["spAttribute"] = &SpEffect::spAttribute;
        utSpEffect["stateInfo"] = &SpEffect::stateInfo;
        utSpEffect["wepParamChange"] = &SpEffect::wepParamChange;
        utSpEffect["moveType"] = &SpEffect::moveType;
        utSpEffect["lifeReductionType"] = &SpEffect::lifeReductionType;
        utSpEffect["throwCondition"] = &SpEffect::throwCondition;
        utSpEffect["addBehaviorJudgeId_condition"] = &SpEffect::addBehaviorJudgeId_condition;
        utSpEffect["freezeDamageRate"] = &SpEffect::freezeDamageRate;
        utSpEffect["effectTargetSelf"] = sol::property([](SpEffect &param) -> uint8_t { return param.effectTargetSelf; }, [](SpEffect &param, uint8_t value) { param.effectTargetSelf = value; });
        utSpEffect["effectTargetFriend"] = sol::property([](SpEffect &param) -> uint8_t { return param.effectTargetFriend; }, [](SpEffect &param, uint8_t value) { param.effectTargetFriend = value; });
        utSpEffect["effectTargetEnemy"] = sol::property([](SpEffect &param) -> uint8_t { return param.effectTargetEnemy; }, [](SpEffect &param, uint8_t value) { param.effectTargetEnemy = value; });
        utSpEffect["effectTargetPlayer"] = sol::property([](SpEffect &param) -> uint8_t { return param.effectTargetPlayer; }, [](SpEffect &param, uint8_t value) { param.effectTargetPlayer = value; });
        utSpEffect["effectTargetAI"] = sol::property([](SpEffect &param) -> uint8_t { return param.effectTargetAI; }, [](SpEffect &param, uint8_t value) { param.effectTargetAI = value; });
        utSpEffect["effectTargetLive"] = sol::property([](SpEffect &param) -> uint8_t { return param.effectTargetLive; }, [](SpEffect &param, uint8_t value) { param.effectTargetLive = value; });
        utSpEffect["effectTargetGhost"] = sol::property([](SpEffect &param) -> uint8_t { return param.effectTargetGhost; }, [](SpEffect &param, uint8_t value) { param.effectTargetGhost = value; });
        utSpEffect["disableSleep"] = sol::property([](SpEffect &param) -> uint8_t { return param.disableSleep; }, [](SpEffect &param, uint8_t value) { param.disableSleep = value; });
        utSpEffect["disableMadness"] = sol::property([](SpEffect &param) -> uint8_t { return param.disableMadness; }, [](SpEffect &param, uint8_t value) { param.disableMadness = value; });
        utSpEffect["effectTargetAttacker"] = sol::property([](SpEffect &param) -> uint8_t { return param.effectTargetAttacker; }, [](SpEffect &param, uint8_t value) { param.effectTargetAttacker = value; });
        utSpEffect["dispIconNonactive"] = sol::property([](SpEffect &param) -> uint8_t { return param.dispIconNonactive; }, [](SpEffect &param, uint8_t value) { param.dispIconNonactive = value; });
        utSpEffect["regainGaugeDamage"] = sol::property([](SpEffect &param) -> uint8_t { return param.regainGaugeDamage; }, [](SpEffect &param, uint8_t value) { param.regainGaugeDamage = value; });
        utSpEffect["bAdjustMagicAblity"] = sol::property([](SpEffect &param) -> uint8_t { return param.bAdjustMagicAblity; }, [](SpEffect &param, uint8_t value) { param.bAdjustMagicAblity = value; });
        utSpEffect["bAdjustFaithAblity"] = sol::property([](SpEffect &param) -> uint8_t { return param.bAdjustFaithAblity; }, [](SpEffect &param, uint8_t value) { param.bAdjustFaithAblity = value; });
        utSpEffect["bGameClearBonus"] = sol::property([](SpEffect &param) -> uint8_t { return param.bGameClearBonus; }, [](SpEffect &param, uint8_t value) { param.bGameClearBonus = value; });
        utSpEffect["magParamChange"] = sol::property([](SpEffect &param) -> uint8_t { return param.magParamChange; }, [](SpEffect &param, uint8_t value) { param.magParamChange = value; });
        utSpEffect["miracleParamChange"] = sol::property([](SpEffect &param) -> uint8_t { return param.miracleParamChange; }, [](SpEffect &param, uint8_t value) { param.miracleParamChange = value; });
        utSpEffect["clearSoul"] = sol::property([](SpEffect &param) -> uint8_t { return param.clearSoul; }, [](SpEffect &param, uint8_t value) { param.clearSoul = value; });
        utSpEffect["requestSOS"] = sol::property([](SpEffect &param) -> uint8_t { return param.requestSOS; }, [](SpEffect &param, uint8_t value) { param.requestSOS = value; });
        utSpEffect["requestBlackSOS"] = sol::property([](SpEffect &param) -> uint8_t { return param.requestBlackSOS; }, [](SpEffect &param, uint8_t value) { param.requestBlackSOS = value; });
        utSpEffect["requestForceJoinBlackSOS"] = sol::property([](SpEffect &param) -> uint8_t { return param.requestForceJoinBlackSOS; }, [](SpEffect &param, uint8_t value) { param.requestForceJoinBlackSOS = value; });
        utSpEffect["requestKickSession"] = sol::property([](SpEffect &param) -> uint8_t { return param.requestKickSession; }, [](SpEffect &param, uint8_t value) { param.requestKickSession = value; });
        utSpEffect["requestLeaveSession"] = sol::property([](SpEffect &param) -> uint8_t { return param.requestLeaveSession; }, [](SpEffect &param, uint8_t value) { param.requestLeaveSession = value; });
        utSpEffect["requestNpcInveda"] = sol::property([](SpEffect &param) -> uint8_t { return param.requestNpcInveda; }, [](SpEffect &param, uint8_t value) { param.requestNpcInveda = value; });
        utSpEffect["noDead"] = sol::property([](SpEffect &param) -> uint8_t { return param.noDead; }, [](SpEffect &param, uint8_t value) { param.noDead = value; });
        utSpEffect["bCurrHPIndependeMaxHP"] = sol::property([](SpEffect &param) -> uint8_t { return param.bCurrHPIndependeMaxHP; }, [](SpEffect &param, uint8_t value) { param.bCurrHPIndependeMaxHP = value; });
        utSpEffect["corrosionIgnore"] = sol::property([](SpEffect &param) -> uint8_t { return param.corrosionIgnore; }, [](SpEffect &param, uint8_t value) { param.corrosionIgnore = value; });
        utSpEffect["sightSearchCutIgnore"] = sol::property([](SpEffect &param) -> uint8_t { return param.sightSearchCutIgnore; }, [](SpEffect &param, uint8_t value) { param.sightSearchCutIgnore = value; });
        utSpEffect["hearingSearchCutIgnore"] = sol::property([](SpEffect &param) -> uint8_t { return param.hearingSearchCutIgnore; }, [](SpEffect &param, uint8_t value) { param.hearingSearchCutIgnore = value; });
        utSpEffect["antiMagicIgnore"] = sol::property([](SpEffect &param) -> uint8_t { return param.antiMagicIgnore; }, [](SpEffect &param, uint8_t value) { param.antiMagicIgnore = value; });
        utSpEffect["fakeTargetIgnore"] = sol::property([](SpEffect &param) -> uint8_t { return param.fakeTargetIgnore; }, [](SpEffect &param, uint8_t value) { param.fakeTargetIgnore = value; });
        utSpEffect["fakeTargetIgnoreUndead"] = sol::property([](SpEffect &param) -> uint8_t { return param.fakeTargetIgnoreUndead; }, [](SpEffect &param, uint8_t value) { param.fakeTargetIgnoreUndead = value; });
        utSpEffect["fakeTargetIgnoreAnimal"] = sol::property([](SpEffect &param) -> uint8_t { return param.fakeTargetIgnoreAnimal; }, [](SpEffect &param, uint8_t value) { param.fakeTargetIgnoreAnimal = value; });
        utSpEffect["grabityIgnore"] = sol::property([](SpEffect &param) -> uint8_t { return param.grabityIgnore; }, [](SpEffect &param, uint8_t value) { param.grabityIgnore = value; });
        utSpEffect["disablePoison"] = sol::property([](SpEffect &param) -> uint8_t { return param.disablePoison; }, [](SpEffect &param, uint8_t value) { param.disablePoison = value; });
        utSpEffect["disableDisease"] = sol::property([](SpEffect &param) -> uint8_t { return param.disableDisease; }, [](SpEffect &param, uint8_t value) { param.disableDisease = value; });
        utSpEffect["disableBlood"] = sol::property([](SpEffect &param) -> uint8_t { return param.disableBlood; }, [](SpEffect &param, uint8_t value) { param.disableBlood = value; });
        utSpEffect["disableCurse"] = sol::property([](SpEffect &param) -> uint8_t { return param.disableCurse; }, [](SpEffect &param, uint8_t value) { param.disableCurse = value; });
        utSpEffect["enableCharm"] = sol::property([](SpEffect &param) -> uint8_t { return param.enableCharm; }, [](SpEffect &param, uint8_t value) { param.enableCharm = value; });
        utSpEffect["enableLifeTime"] = sol::property([](SpEffect &param) -> uint8_t { return param.enableLifeTime; }, [](SpEffect &param, uint8_t value) { param.enableLifeTime = value; });
        utSpEffect["bAdjustStrengthAblity"] = sol::property([](SpEffect &param) -> uint8_t { return param.bAdjustStrengthAblity; }, [](SpEffect &param, uint8_t value) { param.bAdjustStrengthAblity = value; });
        utSpEffect["bAdjustAgilityAblity"] = sol::property([](SpEffect &param) -> uint8_t { return param.bAdjustAgilityAblity; }, [](SpEffect &param, uint8_t value) { param.bAdjustAgilityAblity = value; });
        utSpEffect["eraseOnBonfireRecover"] = sol::property([](SpEffect &param) -> uint8_t { return param.eraseOnBonfireRecover; }, [](SpEffect &param, uint8_t value) { param.eraseOnBonfireRecover = value; });
        utSpEffect["throwAttackParamChange"] = sol::property([](SpEffect &param) -> uint8_t { return param.throwAttackParamChange; }, [](SpEffect &param, uint8_t value) { param.throwAttackParamChange = value; });
        utSpEffect["requestLeaveColiseumSession"] = sol::property([](SpEffect &param) -> uint8_t { return param.requestLeaveColiseumSession; }, [](SpEffect &param, uint8_t value) { param.requestLeaveColiseumSession = value; });
        utSpEffect["isExtendSpEffectLife"] = sol::property([](SpEffect &param) -> uint8_t { return param.isExtendSpEffectLife; }, [](SpEffect &param, uint8_t value) { param.isExtendSpEffectLife = value; });
        utSpEffect["hasTarget"] = sol::property([](SpEffect &param) -> uint8_t { return param.hasTarget; }, [](SpEffect &param, uint8_t value) { param.hasTarget = value; });
        utSpEffect["replanningOnFire"] = sol::property([](SpEffect &param) -> uint8_t { return param.replanningOnFire; }, [](SpEffect &param, uint8_t value) { param.replanningOnFire = value; });
        utSpEffect["vowType0"] = sol::property([](SpEffect &param) -> uint8_t { return param.vowType0; }, [](SpEffect &param, uint8_t value) { param.vowType0 = value; });
        utSpEffect["vowType1"] = sol::property([](SpEffect &param) -> uint8_t { return param.vowType1; }, [](SpEffect &param, uint8_t value) { param.vowType1 = value; });
        utSpEffect["vowType2"] = sol::property([](SpEffect &param) -> uint8_t { return param.vowType2; }, [](SpEffect &param, uint8_t value) { param.vowType2 = value; });
        utSpEffect["vowType3"] = sol::property([](SpEffect &param) -> uint8_t { return param.vowType3; }, [](SpEffect &param, uint8_t value) { param.vowType3 = value; });
        utSpEffect["vowType4"] = sol::property([](SpEffect &param) -> uint8_t { return param.vowType4; }, [](SpEffect &param, uint8_t value) { param.vowType4 = value; });
        utSpEffect["vowType5"] = sol::property([](SpEffect &param) -> uint8_t { return param.vowType5; }, [](SpEffect &param, uint8_t value) { param.vowType5 = value; });
        utSpEffect["vowType6"] = sol::property([](SpEffect &param) -> uint8_t { return param.vowType6; }, [](SpEffect &param, uint8_t value) { param.vowType6 = value; });
        utSpEffect["vowType7"] = sol::property([](SpEffect &param) -> uint8_t { return param.vowType7; }, [](SpEffect &param, uint8_t value) { param.vowType7 = value; });
        utSpEffect["vowType8"] = sol::property([](SpEffect &param) -> uint8_t { return param.vowType8; }, [](SpEffect &param, uint8_t value) { param.vowType8 = value; });
        utSpEffect["vowType9"] = sol::property([](SpEffect &param) -> uint8_t { return param.vowType9; }, [](SpEffect &param, uint8_t value) { param.vowType9 = value; });
        utSpEffect["vowType10"] = sol::property([](SpEffect &param) -> uint8_t { return param.vowType10; }, [](SpEffect &param, uint8_t value) { param.vowType10 = value; });
        utSpEffect["vowType11"] = sol::property([](SpEffect &param) -> uint8_t { return param.vowType11; }, [](SpEffect &param, uint8_t value) { param.vowType11 = value; });
        utSpEffect["vowType12"] = sol::property([](SpEffect &param) -> uint8_t { return param.vowType12; }, [](SpEffect &param, uint8_t value) { param.vowType12 = value; });
        utSpEffect["vowType13"] = sol::property([](SpEffect &param) -> uint8_t { return param.vowType13; }, [](SpEffect &param, uint8_t value) { param.vowType13 = value; });
        utSpEffect["vowType14"] = sol::property([](SpEffect &param) -> uint8_t { return param.vowType14; }, [](SpEffect &param, uint8_t value) { param.vowType14 = value; });
        utSpEffect["vowType15"] = sol::property([](SpEffect &param) -> uint8_t { return param.vowType15; }, [](SpEffect &param, uint8_t value) { param.vowType15 = value; });
        utSpEffect["repAtkDmgLv"] = &SpEffect::repAtkDmgLv;
        utSpEffect["sightSearchRate"] = &SpEffect::sightSearchRate;
        utSpEffect["effectTargetOpposeTarget"] = sol::property([](SpEffect &param) -> uint8_t { return param.effectTargetOpposeTarget; }, [](SpEffect &param, uint8_t value) { param.effectTargetOpposeTarget = value; });
        utSpEffect["effectTargetFriendlyTarget"] = sol::property([](SpEffect &param) -> uint8_t { return param.effectTargetFriendlyTarget; }, [](SpEffect &param, uint8_t value) { param.effectTargetFriendlyTarget = value; });
        utSpEffect["effectTargetSelfTarget"] = sol::property([](SpEffect &param) -> uint8_t { return param.effectTargetSelfTarget; }, [](SpEffect &param, uint8_t value) { param.effectTargetSelfTarget = value; });
        utSpEffect["effectTargetPcHorse"] = sol::property([](SpEffect &param) -> uint8_t { return param.effectTargetPcHorse; }, [](SpEffect &param, uint8_t value) { param.effectTargetPcHorse = value; });
        utSpEffect["effectTargetPcDeceased"] = sol::property([](SpEffect &param) -> uint8_t { return param.effectTargetPcDeceased; }, [](SpEffect &param, uint8_t value) { param.effectTargetPcDeceased = value; });
        utSpEffect["isContractSpEffectLife"] = sol::property([](SpEffect &param) -> uint8_t { return param.isContractSpEffectLife; }, [](SpEffect &param, uint8_t value) { param.isContractSpEffectLife = value; });
        utSpEffect["isWaitModeDelete"] = sol::property([](SpEffect &param) -> uint8_t { return param.isWaitModeDelete; }, [](SpEffect &param, uint8_t value) { param.isWaitModeDelete = value; });
        utSpEffect["isIgnoreNoDamage"] = sol::property([](SpEffect &param) -> uint8_t { return param.isIgnoreNoDamage; }, [](SpEffect &param, uint8_t value) { param.isIgnoreNoDamage = value; });
        utSpEffect["changeTeamType"] = &SpEffect::changeTeamType;
        utSpEffect["dmypolyId"] = &SpEffect::dmypolyId;
        utSpEffect["vfxId"] = &SpEffect::vfxId;
        utSpEffect["accumuOverFireId"] = &SpEffect::accumuOverFireId;
        utSpEffect["accumuOverVal"] = &SpEffect::accumuOverVal;
        utSpEffect["accumuUnderFireId"] = &SpEffect::accumuUnderFireId;
        utSpEffect["accumuUnderVal"] = &SpEffect::accumuUnderVal;
        utSpEffect["accumuVal"] = &SpEffect::accumuVal;
        utSpEffect["eye_angX"] = &SpEffect::eye_angX;
        utSpEffect["eye_angY"] = &SpEffect::eye_angY;
        utSpEffect["addDeceasedLv"] = &SpEffect::addDeceasedLv;
        utSpEffect["vfxId1"] = &SpEffect::vfxId1;
        utSpEffect["vfxId2"] = &SpEffect::vfxId2;
        utSpEffect["vfxId3"] = &SpEffect::vfxId3;
        utSpEffect["vfxId4"] = &SpEffect::vfxId4;
        utSpEffect["vfxId5"] = &SpEffect::vfxId5;
        utSpEffect["vfxId6"] = &SpEffect::vfxId6;
        utSpEffect["vfxId7"] = &SpEffect::vfxId7;
        utSpEffect["freezeAttackPower"] = &SpEffect::freezeAttackPower;
        utSpEffect["AppearAiSoundId"] = &SpEffect::AppearAiSoundId;
        utSpEffect["addFootEffectSfxId"] = &SpEffect::addFootEffectSfxId;
        utSpEffect["dexterityCancelSystemOnlyAddDexterity"] = &SpEffect::dexterityCancelSystemOnlyAddDexterity;
        utSpEffect["teamOffenseEffectivity"] = &SpEffect::teamOffenseEffectivity;
        utSpEffect["toughnessDamageCutRate"] = &SpEffect::toughnessDamageCutRate;
        utSpEffect["weakDmgRateA"] = &SpEffect::weakDmgRateA;
        utSpEffect["weakDmgRateB"] = &SpEffect::weakDmgRateB;
        utSpEffect["weakDmgRateC"] = &SpEffect::weakDmgRateC;
        utSpEffect["weakDmgRateD"] = &SpEffect::weakDmgRateD;
        utSpEffect["weakDmgRateE"] = &SpEffect::weakDmgRateE;
        utSpEffect["weakDmgRateF"] = &SpEffect::weakDmgRateF;
        utSpEffect["darkDamageCutRate"] = &SpEffect::darkDamageCutRate;
        utSpEffect["darkDiffenceRate"] = &SpEffect::darkDiffenceRate;
        utSpEffect["darkDiffence"] = &SpEffect::darkDiffence;
        utSpEffect["darkAttackRate"] = &SpEffect::darkAttackRate;
        utSpEffect["darkAttackPowerRate"] = &SpEffect::darkAttackPowerRate;
        utSpEffect["darkAttackPower"] = &SpEffect::darkAttackPower;
        utSpEffect["antiDarkSightRadius"] = &SpEffect::antiDarkSightRadius;
        utSpEffect["antiDarkSightDmypolyId"] = &SpEffect::antiDarkSightDmypolyId;
        utSpEffect["conditionHpRate"] = &SpEffect::conditionHpRate;
        utSpEffect["consumeStaminaRate"] = &SpEffect::consumeStaminaRate;
        utSpEffect["itemDropRate"] = &SpEffect::itemDropRate;
        utSpEffect["changePoisonResistPoint"] = &SpEffect::changePoisonResistPoint;
        utSpEffect["changeDiseaseResistPoint"] = &SpEffect::changeDiseaseResistPoint;
        utSpEffect["changeBloodResistPoint"] = &SpEffect::changeBloodResistPoint;
        utSpEffect["changeCurseResistPoint"] = &SpEffect::changeCurseResistPoint;
        utSpEffect["changeFreezeResistPoint"] = &SpEffect::changeFreezeResistPoint;
        utSpEffect["slashAttackRate"] = &SpEffect::slashAttackRate;
        utSpEffect["blowAttackRate"] = &SpEffect::blowAttackRate;
        utSpEffect["thrustAttackRate"] = &SpEffect::thrustAttackRate;
        utSpEffect["neutralAttackRate"] = &SpEffect::neutralAttackRate;
        utSpEffect["slashAttackPowerRate"] = &SpEffect::slashAttackPowerRate;
        utSpEffect["blowAttackPowerRate"] = &SpEffect::blowAttackPowerRate;
        utSpEffect["thrustAttackPowerRate"] = &SpEffect::thrustAttackPowerRate;
        utSpEffect["neutralAttackPowerRate"] = &SpEffect::neutralAttackPowerRate;
        utSpEffect["slashAttackPower"] = &SpEffect::slashAttackPower;
        utSpEffect["blowAttackPower"] = &SpEffect::blowAttackPower;
        utSpEffect["thrustAttackPower"] = &SpEffect::thrustAttackPower;
        utSpEffect["neutralAttackPower"] = &SpEffect::neutralAttackPower;
        utSpEffect["changeStrengthPoint"] = &SpEffect::changeStrengthPoint;
        utSpEffect["changeAgilityPoint"] = &SpEffect::changeAgilityPoint;
        utSpEffect["changeMagicPoint"] = &SpEffect::changeMagicPoint;
        utSpEffect["changeFaithPoint"] = &SpEffect::changeFaithPoint;
        utSpEffect["changeLuckPoint"] = &SpEffect::changeLuckPoint;
        utSpEffect["recoverArtsPoint_Str"] = &SpEffect::recoverArtsPoint_Str;
        utSpEffect["recoverArtsPoint_Dex"] = &SpEffect::recoverArtsPoint_Dex;
        utSpEffect["recoverArtsPoint_Magic"] = &SpEffect::recoverArtsPoint_Magic;
        utSpEffect["recoverArtsPoint_Miracle"] = &SpEffect::recoverArtsPoint_Miracle;
        utSpEffect["madnessDamageRate"] = &SpEffect::madnessDamageRate;
        utSpEffect["isUseStatusAilmentAtkPowerCorrect"] = sol::property([](SpEffect &param) -> uint8_t { return param.isUseStatusAilmentAtkPowerCorrect; }, [](SpEffect &param, uint8_t value) { param.isUseStatusAilmentAtkPowerCorrect = value; });
        utSpEffect["isUseAtkParamAtkPowerCorrect"] = sol::property([](SpEffect &param) -> uint8_t { return param.isUseAtkParamAtkPowerCorrect; }, [](SpEffect &param, uint8_t value) { param.isUseAtkParamAtkPowerCorrect = value; });
        utSpEffect["dontDeleteOnDead"] = sol::property([](SpEffect &param) -> uint8_t { return param.dontDeleteOnDead; }, [](SpEffect &param, uint8_t value) { param.dontDeleteOnDead = value; });
        utSpEffect["disableFreeze"] = sol::property([](SpEffect &param) -> uint8_t { return param.disableFreeze; }, [](SpEffect &param, uint8_t value) { param.disableFreeze = value; });
        utSpEffect["isDisableNetSync"] = sol::property([](SpEffect &param) -> uint8_t { return param.isDisableNetSync; }, [](SpEffect &param, uint8_t value) { param.isDisableNetSync = value; });
        utSpEffect["shamanParamChange"] = sol::property([](SpEffect &param) -> uint8_t { return param.shamanParamChange; }, [](SpEffect &param, uint8_t value) { param.shamanParamChange = value; });
        utSpEffect["isStopSearchedNotify"] = sol::property([](SpEffect &param) -> uint8_t { return param.isStopSearchedNotify; }, [](SpEffect &param, uint8_t value) { param.isStopSearchedNotify = value; });
        utSpEffect["isCheckAboveShadowTest"] = sol::property([](SpEffect &param) -> uint8_t { return param.isCheckAboveShadowTest; }, [](SpEffect &param, uint8_t value) { param.isCheckAboveShadowTest = value; });
        utSpEffect["addBehaviorJudgeId_add"] = &SpEffect::addBehaviorJudgeId_add;
        utSpEffect["saReceiveDamageRate"] = &SpEffect::saReceiveDamageRate;
        utSpEffect["defPlayerDmgCorrectRate_Physics"] = &SpEffect::defPlayerDmgCorrectRate_Physics;
        utSpEffect["defPlayerDmgCorrectRate_Magic"] = &SpEffect::defPlayerDmgCorrectRate_Magic;
        utSpEffect["defPlayerDmgCorrectRate_Fire"] = &SpEffect::defPlayerDmgCorrectRate_Fire;
        utSpEffect["defPlayerDmgCorrectRate_Thunder"] = &SpEffect::defPlayerDmgCorrectRate_Thunder;
        utSpEffect["defPlayerDmgCorrectRate_Dark"] = &SpEffect::defPlayerDmgCorrectRate_Dark;
        utSpEffect["defEnemyDmgCorrectRate_Physics"] = &SpEffect::defEnemyDmgCorrectRate_Physics;
        utSpEffect["defEnemyDmgCorrectRate_Magic"] = &SpEffect::defEnemyDmgCorrectRate_Magic;
        utSpEffect["defEnemyDmgCorrectRate_Fire"] = &SpEffect::defEnemyDmgCorrectRate_Fire;
        utSpEffect["defEnemyDmgCorrectRate_Thunder"] = &SpEffect::defEnemyDmgCorrectRate_Thunder;
        utSpEffect["defEnemyDmgCorrectRate_Dark"] = &SpEffect::defEnemyDmgCorrectRate_Dark;
        utSpEffect["defObjDmgCorrectRate"] = &SpEffect::defObjDmgCorrectRate;
        utSpEffect["atkPlayerDmgCorrectRate_Physics"] = &SpEffect::atkPlayerDmgCorrectRate_Physics;
        utSpEffect["atkPlayerDmgCorrectRate_Magic"] = &SpEffect::atkPlayerDmgCorrectRate_Magic;
        utSpEffect["atkPlayerDmgCorrectRate_Fire"] = &SpEffect::atkPlayerDmgCorrectRate_Fire;
        utSpEffect["atkPlayerDmgCorrectRate_Thunder"] = &SpEffect::atkPlayerDmgCorrectRate_Thunder;
        utSpEffect["atkPlayerDmgCorrectRate_Dark"] = &SpEffect::atkPlayerDmgCorrectRate_Dark;
        utSpEffect["atkEnemyDmgCorrectRate_Physics"] = &SpEffect::atkEnemyDmgCorrectRate_Physics;
        utSpEffect["atkEnemyDmgCorrectRate_Magic"] = &SpEffect::atkEnemyDmgCorrectRate_Magic;
        utSpEffect["atkEnemyDmgCorrectRate_Fire"] = &SpEffect::atkEnemyDmgCorrectRate_Fire;
        utSpEffect["atkEnemyDmgCorrectRate_Thunder"] = &SpEffect::atkEnemyDmgCorrectRate_Thunder;
        utSpEffect["atkEnemyDmgCorrectRate_Dark"] = &SpEffect::atkEnemyDmgCorrectRate_Dark;
        utSpEffect["registFreezeChangeRate"] = &SpEffect::registFreezeChangeRate;
        utSpEffect["invocationConditionsStateChange1"] = &SpEffect::invocationConditionsStateChange1;
        utSpEffect["invocationConditionsStateChange2"] = &SpEffect::invocationConditionsStateChange2;
        utSpEffect["invocationConditionsStateChange3"] = &SpEffect::invocationConditionsStateChange3;
        utSpEffect["hearingAiSoundLevel"] = &SpEffect::hearingAiSoundLevel;
        utSpEffect["chrProxyHeightRate"] = &SpEffect::chrProxyHeightRate;
        utSpEffect["addAwarePointCorrectValue_forMe"] = &SpEffect::addAwarePointCorrectValue_forMe;
        utSpEffect["addAwarePointCorrectValue_forTarget"] = &SpEffect::addAwarePointCorrectValue_forTarget;
        utSpEffect["sightSearchEnemyAdd"] = &SpEffect::sightSearchEnemyAdd;
        utSpEffect["sightSearchAdd"] = &SpEffect::sightSearchAdd;
        utSpEffect["hearingSearchAdd"] = &SpEffect::hearingSearchAdd;
        utSpEffect["hearingSearchRate"] = &SpEffect::hearingSearchRate;
        utSpEffect["hearingSearchEnemyAdd"] = &SpEffect::hearingSearchEnemyAdd;
        utSpEffect["value_Magnification"] = &SpEffect::value_Magnification;
        utSpEffect["artsConsumptionRate"] = &SpEffect::artsConsumptionRate;
        utSpEffect["magicConsumptionRate"] = &SpEffect::magicConsumptionRate;
        utSpEffect["shamanConsumptionRate"] = &SpEffect::shamanConsumptionRate;
        utSpEffect["miracleConsumptionRate"] = &SpEffect::miracleConsumptionRate;
        utSpEffect["changeHpEstusFlaskRate"] = &SpEffect::changeHpEstusFlaskRate;
        utSpEffect["changeHpEstusFlaskPoint"] = &SpEffect::changeHpEstusFlaskPoint;
        utSpEffect["changeMpEstusFlaskRate"] = &SpEffect::changeMpEstusFlaskRate;
        utSpEffect["changeMpEstusFlaskPoint"] = &SpEffect::changeMpEstusFlaskPoint;
        utSpEffect["changeHpEstusFlaskCorrectRate"] = &SpEffect::changeHpEstusFlaskCorrectRate;
        utSpEffect["changeMpEstusFlaskCorrectRate"] = &SpEffect::changeMpEstusFlaskCorrectRate;
        utSpEffect["applyIdOnGetSoul"] = &SpEffect::applyIdOnGetSoul;
        utSpEffect["extendLifeRate"] = &SpEffect::extendLifeRate;
        utSpEffect["contractLifeRate"] = &SpEffect::contractLifeRate;
        utSpEffect["defObjectAttackPowerRate"] = &SpEffect::defObjectAttackPowerRate;
        utSpEffect["effectEndDeleteDecalGroupId"] = &SpEffect::effectEndDeleteDecalGroupId;
        utSpEffect["addLifeForceStatus"] = &SpEffect::addLifeForceStatus;
        utSpEffect["addWillpowerStatus"] = &SpEffect::addWillpowerStatus;
        utSpEffect["addEndureStatus"] = &SpEffect::addEndureStatus;
        utSpEffect["addVitalityStatus"] = &SpEffect::addVitalityStatus;
        utSpEffect["addStrengthStatus"] = &SpEffect::addStrengthStatus;
        utSpEffect["addDexterityStatus"] = &SpEffect::addDexterityStatus;
        utSpEffect["addMagicStatus"] = &SpEffect::addMagicStatus;
        utSpEffect["addFaithStatus"] = &SpEffect::addFaithStatus;
        utSpEffect["addLuckStatus"] = &SpEffect::addLuckStatus;
        utSpEffect["deleteCriteriaDamage"] = &SpEffect::deleteCriteriaDamage;
        utSpEffect["magicSubCategoryChange3"] = &SpEffect::magicSubCategoryChange3;
        utSpEffect["spAttributeVariationValue"] = &SpEffect::spAttributeVariationValue;
        utSpEffect["atkFlickPower"] = &SpEffect::atkFlickPower;
        utSpEffect["wetConditionDepth"] = &SpEffect::wetConditionDepth;
        utSpEffect["changeSaRecoveryVelocity"] = &SpEffect::changeSaRecoveryVelocity;
        utSpEffect["regainRate"] = &SpEffect::regainRate;
        utSpEffect["saAttackPowerRate"] = &SpEffect::saAttackPowerRate;
        utSpEffect["sleepAttackPower"] = &SpEffect::sleepAttackPower;
        utSpEffect["madnessAttackPower"] = &SpEffect::madnessAttackPower;
        utSpEffect["registSleepChangeRate"] = &SpEffect::registSleepChangeRate;
        utSpEffect["registMadnessChangeRate"] = &SpEffect::registMadnessChangeRate;
        utSpEffect["changeSleepResistPoint"] = &SpEffect::changeSleepResistPoint;
        utSpEffect["changeMadnessResistPoint"] = &SpEffect::changeMadnessResistPoint;
        utSpEffect["sleepDamageRate"] = &SpEffect::sleepDamageRate;
        utSpEffect["applyPartsGroup"] = &SpEffect::applyPartsGroup;
        utSpEffect["clearTarget"] = sol::property([](SpEffect &param) -> uint8_t { return param.clearTarget; }, [](SpEffect &param, uint8_t value) { param.clearTarget = value; });
        utSpEffect["fakeTargetIgnoreAjin"] = sol::property([](SpEffect &param) -> uint8_t { return param.fakeTargetIgnoreAjin; }, [](SpEffect &param, uint8_t value) { param.fakeTargetIgnoreAjin = value; });
        utSpEffect["fakeTargetIgnoreMirageArts"] = sol::property([](SpEffect &param) -> uint8_t { return param.fakeTargetIgnoreMirageArts; }, [](SpEffect &param, uint8_t value) { param.fakeTargetIgnoreMirageArts = value; });
        utSpEffect["requestForceJoinBlackSOS_B"] = sol::property([](SpEffect &param) -> uint8_t { return param.requestForceJoinBlackSOS_B; }, [](SpEffect &param, uint8_t value) { param.requestForceJoinBlackSOS_B = value; });
        utSpEffect["isDestinedDeathHpMult"] = sol::property([](SpEffect &param) -> uint8_t { return param.isDestinedDeathHpMult; }, [](SpEffect &param, uint8_t value) { param.isDestinedDeathHpMult = value; });
        utSpEffect["isHpBurnEffect"] = sol::property([](SpEffect &param) -> uint8_t { return param.isHpBurnEffect; }, [](SpEffect &param, uint8_t value) { param.isHpBurnEffect = value; });
        utSpEffect["unknown_0x352_6"] = sol::property([](SpEffect &param) -> uint8_t { return param.unknown_0x352_6; }, [](SpEffect &param, uint8_t value) { param.unknown_0x352_6 = value; });
        utSpEffect["unknown_0x352_7"] = sol::property([](SpEffect &param) -> uint8_t { return param.unknown_0x352_7; }, [](SpEffect &param, uint8_t value) { param.unknown_0x352_7 = value; });
        utSpEffect["unknown_0x353_0"] = sol::property([](SpEffect &param) -> uint8_t { return param.unknown_0x353_0; }, [](SpEffect &param, uint8_t value) { param.unknown_0x353_0 = value; });
        utSpEffect["unknown_0x353_1"] = sol::property([](SpEffect &param) -> uint8_t { return param.unknown_0x353_1; }, [](SpEffect &param, uint8_t value) { param.unknown_0x353_1 = value; });
        utSpEffect["unknown_0x353_2"] = sol::property([](SpEffect &param) -> uint8_t { return param.unknown_0x353_2; }, [](SpEffect &param, uint8_t value) { param.unknown_0x353_2 = value; });
        utSpEffect["unknown_0x353_3"] = sol::property([](SpEffect &param) -> uint8_t { return param.unknown_0x353_3; }, [](SpEffect &param, uint8_t value) { param.unknown_0x353_3 = value; });
        utSpEffect["unknown_0x353_4"] = sol::property([](SpEffect &param) -> uint8_t { return param.unknown_0x353_4; }, [](SpEffect &param, uint8_t value) { param.unknown_0x353_4 = value; });
        utSpEffect["changeSuperArmorPoint"] = &SpEffect::changeSuperArmorPoint;
        utSpEffect["changeSaPoint"] = &SpEffect::changeSaPoint;
        utSpEffect["hugeEnemyPickupHeightOverwrite"] = &SpEffect::hugeEnemyPickupHeightOverwrite;
        utSpEffect["poisonDefDamageRate"] = &SpEffect::poisonDefDamageRate;
        utSpEffect["diseaseDefDamageRate"] = &SpEffect::diseaseDefDamageRate;
        utSpEffect["bloodDefDamageRate"] = &SpEffect::bloodDefDamageRate;
        utSpEffect["curseDefDamageRate"] = &SpEffect::curseDefDamageRate;
        utSpEffect["freezeDefDamageRate"] = &SpEffect::freezeDefDamageRate;
        utSpEffect["sleepDefDamageRate"] = &SpEffect::sleepDefDamageRate;
        utSpEffect["madnessDefDamageRate"] = &SpEffect::madnessDefDamageRate;
        utSpEffect["overwrite_maxBackhomeDist"] = &SpEffect::overwrite_maxBackhomeDist;
        utSpEffect["overwrite_backhomeDist"] = &SpEffect::overwrite_backhomeDist;
        utSpEffect["overwrite_backhomeBattleDist"] = &SpEffect::overwrite_backhomeBattleDist;
        utSpEffect["overwrite_BackHome_LookTargetDist"] = &SpEffect::overwrite_BackHome_LookTargetDist;
        utSpEffect["goodsConsumptionRate"] = &SpEffect::goodsConsumptionRate;
        utSpEffect["guardStaminaMult"] = &SpEffect::guardStaminaMult;
        utSpEffect["spiritDeathSpEffectId"] = &SpEffect::spiritDeathSpEffectId;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<SpEffect>>(state, L"SpEffect");
        indexer->setFieldNames({
            {"iconId", false},
            {"conditionHp", false},
            {"effectEndurance", false},
            {"motionInterval", false},
            {"maxHpRate", false},
            {"maxMpRate", false},
            {"maxStaminaRate", false},
            {"slashDamageCutRate", false},
            {"blowDamageCutRate", false},
            {"thrustDamageCutRate", false},
            {"neutralDamageCutRate", false},
            {"magicDamageCutRate", false},
            {"fireDamageCutRate", false},
            {"thunderDamageCutRate", false},
            {"physicsAttackRate", false},
            {"magicAttackRate", false},
            {"fireAttackRate", false},
            {"thunderAttackRate", false},
            {"physicsAttackPowerRate", false},
            {"magicAttackPowerRate", false},
            {"fireAttackPowerRate", false},
            {"thunderAttackPowerRate", false},
            {"physicsAttackPower", false},
            {"magicAttackPower", false},
            {"fireAttackPower", false},
            {"thunderAttackPower", false},
            {"physicsDiffenceRate", false},
            {"magicDiffenceRate", false},
            {"fireDiffenceRate", false},
            {"thunderDiffenceRate", false},
            {"physicsDiffence", false},
            {"magicDiffence", false},
            {"fireDiffence", false},
            {"thunderDiffence", false},
            {"NoGuardDamageRate", false},
            {"vitalSpotChangeRate", false},
            {"normalSpotChangeRate", false},
            {"lookAtTargetPosOffset", false},
            {"behaviorId", false},
            {"changeHpRate", false},
            {"changeHpPoint", false},
            {"changeMpRate", false},
            {"changeMpPoint", false},
            {"mpRecoverChangeSpeed", false},
            {"changeStaminaRate", false},
            {"changeStaminaPoint", false},
            {"staminaRecoverChangeSpeed", false},
            {"magicEffectTimeChange", false},
            {"insideDurability", false},
            {"maxDurability", false},
            {"staminaAttackRate", false},
            {"poizonAttackPower", false},
            {"diseaseAttackPower", false},
            {"bloodAttackPower", false},
            {"curseAttackPower", false},
            {"fallDamageRate", false},
            {"soulRate", false},
            {"equipWeightChangeRate", false},
            {"allItemWeightChangeRate", false},
            {"soul", false},
            {"animIdOffset", false},
            {"haveSoulRate", false},
            {"targetPriority", false},
            {"sightSearchEnemyRate", false},
            {"hearingSearchEnemyRate", false},
            {"grabityRate", false},
            {"registPoizonChangeRate", false},
            {"registDiseaseChangeRate", false},
            {"registBloodChangeRate", false},
            {"registCurseChangeRate", false},
            {"soulStealRate", false},
            {"lifeReductionRate", false},
            {"hpRecoverRate", false},
            {"replaceSpEffectId", false},
            {"cycleOccurrenceSpEffectId", false},
            {"atkOccurrenceSpEffectId", false},
            {"guardDefFlickPowerRate", false},
            {"guardStaminaCutRate", false},
            {"rayCastPassedTime", false},
            {"magicSubCategoryChange1", false},
            {"magicSubCategoryChange2", false},
            {"bowDistRate", false},
            {"spCategory", false},
            {"categoryPriority", false},
            {"saveCategory", false},
            {"changeMagicSlot", false},
            {"changeMiracleSlot", false},
            {"heroPointDamage", false},
            {"defFlickPower", false},
            {"flickDamageCutRate", false},
            {"bloodDamageRate", false},
            {"dmgLv_None", false},
            {"dmgLv_S", false},
            {"dmgLv_M", false},
            {"dmgLv_L", false},
            {"dmgLv_BlowM", false},
            {"dmgLv_Push", false},
            {"dmgLv_Strike", false},
            {"dmgLv_BlowS", false},
            {"dmgLv_Min", false},
            {"dmgLv_Uppercut", false},
            {"dmgLv_BlowLL", false},
            {"dmgLv_Breath", false},
            {"atkAttribute", false},
            {"spAttribute", false},
            {"stateInfo", false},
            {"wepParamChange", false},
            {"moveType", false},
            {"lifeReductionType", false},
            {"throwCondition", false},
            {"addBehaviorJudgeId_condition", false},
            {"freezeDamageRate", false},
            {"effectTargetSelf", false},
            {"effectTargetFriend", false},
            {"effectTargetEnemy", false},
            {"effectTargetPlayer", false},
            {"effectTargetAI", false},
            {"effectTargetLive", false},
            {"effectTargetGhost", false},
            {"disableSleep", false},
            {"disableMadness", false},
            {"effectTargetAttacker", false},
            {"dispIconNonactive", false},
            {"regainGaugeDamage", false},
            {"bAdjustMagicAblity", false},
            {"bAdjustFaithAblity", false},
            {"bGameClearBonus", false},
            {"magParamChange", false},
            {"miracleParamChange", false},
            {"clearSoul", false},
            {"requestSOS", false},
            {"requestBlackSOS", false},
            {"requestForceJoinBlackSOS", false},
            {"requestKickSession", false},
            {"requestLeaveSession", false},
            {"requestNpcInveda", false},
            {"noDead", false},
            {"bCurrHPIndependeMaxHP", false},
            {"corrosionIgnore", false},
            {"sightSearchCutIgnore", false},
            {"hearingSearchCutIgnore", false},
            {"antiMagicIgnore", false},
            {"fakeTargetIgnore", false},
            {"fakeTargetIgnoreUndead", false},
            {"fakeTargetIgnoreAnimal", false},
            {"grabityIgnore", false},
            {"disablePoison", false},
            {"disableDisease", false},
            {"disableBlood", false},
            {"disableCurse", false},
            {"enableCharm", false},
            {"enableLifeTime", false},
            {"bAdjustStrengthAblity", false},
            {"bAdjustAgilityAblity", false},
            {"eraseOnBonfireRecover", false},
            {"throwAttackParamChange", false},
            {"requestLeaveColiseumSession", false},
            {"isExtendSpEffectLife", false},
            {"hasTarget", false},
            {"replanningOnFire", false},
            {"vowType0", false},
            {"vowType1", false},
            {"vowType2", false},
            {"vowType3", false},
            {"vowType4", false},
            {"vowType5", false},
            {"vowType6", false},
            {"vowType7", false},
            {"vowType8", false},
            {"vowType9", false},
            {"vowType10", false},
            {"vowType11", false},
            {"vowType12", false},
            {"vowType13", false},
            {"vowType14", false},
            {"vowType15", false},
            {"repAtkDmgLv", false},
            {"sightSearchRate", false},
            {"effectTargetOpposeTarget", false},
            {"effectTargetFriendlyTarget", false},
            {"effectTargetSelfTarget", false},
            {"effectTargetPcHorse", false},
            {"effectTargetPcDeceased", false},
            {"isContractSpEffectLife", false},
            {"isWaitModeDelete", false},
            {"isIgnoreNoDamage", false},
            {"changeTeamType", false},
            {"dmypolyId", false},
            {"vfxId", false},
            {"accumuOverFireId", false},
            {"accumuOverVal", false},
            {"accumuUnderFireId", false},
            {"accumuUnderVal", false},
            {"accumuVal", false},
            {"eye_angX", false},
            {"eye_angY", false},
            {"addDeceasedLv", false},
            {"vfxId1", false},
            {"vfxId2", false},
            {"vfxId3", false},
            {"vfxId4", false},
            {"vfxId5", false},
            {"vfxId6", false},
            {"vfxId7", false},
            {"freezeAttackPower", false},
            {"AppearAiSoundId", false},
            {"addFootEffectSfxId", false},
            {"dexterityCancelSystemOnlyAddDexterity", false},
            {"teamOffenseEffectivity", false},
            {"toughnessDamageCutRate", false},
            {"weakDmgRateA", false},
            {"weakDmgRateB", false},
            {"weakDmgRateC", false},
            {"weakDmgRateD", false},
            {"weakDmgRateE", false},
            {"weakDmgRateF", false},
            {"darkDamageCutRate", false},
            {"darkDiffenceRate", false},
            {"darkDiffence", false},
            {"darkAttackRate", false},
            {"darkAttackPowerRate", false},
            {"darkAttackPower", false},
            {"antiDarkSightRadius", false},
            {"antiDarkSightDmypolyId", false},
            {"conditionHpRate", false},
            {"consumeStaminaRate", false},
            {"itemDropRate", false},
            {"changePoisonResistPoint", false},
            {"changeDiseaseResistPoint", false},
            {"changeBloodResistPoint", false},
            {"changeCurseResistPoint", false},
            {"changeFreezeResistPoint", false},
            {"slashAttackRate", false},
            {"blowAttackRate", false},
            {"thrustAttackRate", false},
            {"neutralAttackRate", false},
            {"slashAttackPowerRate", false},
            {"blowAttackPowerRate", false},
            {"thrustAttackPowerRate", false},
            {"neutralAttackPowerRate", false},
            {"slashAttackPower", false},
            {"blowAttackPower", false},
            {"thrustAttackPower", false},
            {"neutralAttackPower", false},
            {"changeStrengthPoint", false},
            {"changeAgilityPoint", false},
            {"changeMagicPoint", false},
            {"changeFaithPoint", false},
            {"changeLuckPoint", false},
            {"recoverArtsPoint_Str", false},
            {"recoverArtsPoint_Dex", false},
            {"recoverArtsPoint_Magic", false},
            {"recoverArtsPoint_Miracle", false},
            {"madnessDamageRate", false},
            {"isUseStatusAilmentAtkPowerCorrect", false},
            {"isUseAtkParamAtkPowerCorrect", false},
            {"dontDeleteOnDead", false},
            {"disableFreeze", false},
            {"isDisableNetSync", false},
            {"shamanParamChange", false},
            {"isStopSearchedNotify", false},
            {"isCheckAboveShadowTest", false},
            {"addBehaviorJudgeId_add", false},
            {"saReceiveDamageRate", false},
            {"defPlayerDmgCorrectRate_Physics", false},
            {"defPlayerDmgCorrectRate_Magic", false},
            {"defPlayerDmgCorrectRate_Fire", false},
            {"defPlayerDmgCorrectRate_Thunder", false},
            {"defPlayerDmgCorrectRate_Dark", false},
            {"defEnemyDmgCorrectRate_Physics", false},
            {"defEnemyDmgCorrectRate_Magic", false},
            {"defEnemyDmgCorrectRate_Fire", false},
            {"defEnemyDmgCorrectRate_Thunder", false},
            {"defEnemyDmgCorrectRate_Dark", false},
            {"defObjDmgCorrectRate", false},
            {"atkPlayerDmgCorrectRate_Physics", false},
            {"atkPlayerDmgCorrectRate_Magic", false},
            {"atkPlayerDmgCorrectRate_Fire", false},
            {"atkPlayerDmgCorrectRate_Thunder", false},
            {"atkPlayerDmgCorrectRate_Dark", false},
            {"atkEnemyDmgCorrectRate_Physics", false},
            {"atkEnemyDmgCorrectRate_Magic", false},
            {"atkEnemyDmgCorrectRate_Fire", false},
            {"atkEnemyDmgCorrectRate_Thunder", false},
            {"atkEnemyDmgCorrectRate_Dark", false},
            {"registFreezeChangeRate", false},
            {"invocationConditionsStateChange1", false},
            {"invocationConditionsStateChange2", false},
            {"invocationConditionsStateChange3", false},
            {"hearingAiSoundLevel", false},
            {"chrProxyHeightRate", false},
            {"addAwarePointCorrectValue_forMe", false},
            {"addAwarePointCorrectValue_forTarget", false},
            {"sightSearchEnemyAdd", false},
            {"sightSearchAdd", false},
            {"hearingSearchAdd", false},
            {"hearingSearchRate", false},
            {"hearingSearchEnemyAdd", false},
            {"value_Magnification", false},
            {"artsConsumptionRate", false},
            {"magicConsumptionRate", false},
            {"shamanConsumptionRate", false},
            {"miracleConsumptionRate", false},
            {"changeHpEstusFlaskRate", false},
            {"changeHpEstusFlaskPoint", false},
            {"changeMpEstusFlaskRate", false},
            {"changeMpEstusFlaskPoint", false},
            {"changeHpEstusFlaskCorrectRate", false},
            {"changeMpEstusFlaskCorrectRate", false},
            {"applyIdOnGetSoul", false},
            {"extendLifeRate", false},
            {"contractLifeRate", false},
            {"defObjectAttackPowerRate", false},
            {"effectEndDeleteDecalGroupId", false},
            {"addLifeForceStatus", false},
            {"addWillpowerStatus", false},
            {"addEndureStatus", false},
            {"addVitalityStatus", false},
            {"addStrengthStatus", false},
            {"addDexterityStatus", false},
            {"addMagicStatus", false},
            {"addFaithStatus", false},
            {"addLuckStatus", false},
            {"deleteCriteriaDamage", false},
            {"magicSubCategoryChange3", false},
            {"spAttributeVariationValue", false},
            {"atkFlickPower", false},
            {"wetConditionDepth", false},
            {"changeSaRecoveryVelocity", false},
            {"regainRate", false},
            {"saAttackPowerRate", false},
            {"sleepAttackPower", false},
            {"madnessAttackPower", false},
            {"registSleepChangeRate", false},
            {"registMadnessChangeRate", false},
            {"changeSleepResistPoint", false},
            {"changeMadnessResistPoint", false},
            {"sleepDamageRate", false},
            {"applyPartsGroup", false},
            {"clearTarget", false},
            {"fakeTargetIgnoreAjin", false},
            {"fakeTargetIgnoreMirageArts", false},
            {"requestForceJoinBlackSOS_B", false},
            {"isDestinedDeathHpMult", false},
            {"isHpBurnEffect", false},
            {"unknown_0x352_6", false},
            {"unknown_0x352_7", false},
            {"unknown_0x353_0", false},
            {"unknown_0x353_1", false},
            {"unknown_0x353_2", false},
            {"unknown_0x353_3", false},
            {"unknown_0x353_4", false},
            {"changeSuperArmorPoint", false},
            {"changeSaPoint", false},
            {"hugeEnemyPickupHeightOverwrite", false},
            {"poisonDefDamageRate", false},
            {"diseaseDefDamageRate", false},
            {"bloodDefDamageRate", false},
            {"curseDefDamageRate", false},
            {"freezeDefDamageRate", false},
            {"sleepDefDamageRate", false},
            {"madnessDefDamageRate", false},
            {"overwrite_maxBackhomeDist", false},
            {"overwrite_backhomeDist", false},
            {"overwrite_backhomeBattleDist", false},
            {"overwrite_BackHome_LookTargetDist", false},
            {"goodsConsumptionRate", false},
            {"guardStaminaMult", false},
            {"spiritDeathSpEffectId", false},
        });
        return indexer;
    };
    paramsTable["SpEffectParam"] = tableLoader;
}

template<> void ParamTableIndexer<SpEffect>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,iconId,conditionHp,effectEndurance,motionInterval,maxHpRate,maxMpRate,maxStaminaRate,slashDamageCutRate,blowDamageCutRate,thrustDamageCutRate,neutralDamageCutRate,magicDamageCutRate,fireDamageCutRate,thunderDamageCutRate,physicsAttackRate,magicAttackRate,fireAttackRate,thunderAttackRate,physicsAttackPowerRate,magicAttackPowerRate,fireAttackPowerRate,thunderAttackPowerRate,physicsAttackPower,magicAttackPower,fireAttackPower,thunderAttackPower,physicsDiffenceRate,magicDiffenceRate,fireDiffenceRate,thunderDiffenceRate,physicsDiffence,magicDiffence,fireDiffence,thunderDiffence,NoGuardDamageRate,vitalSpotChangeRate,normalSpotChangeRate,lookAtTargetPosOffset,behaviorId,changeHpRate,changeHpPoint,changeMpRate,changeMpPoint,mpRecoverChangeSpeed,changeStaminaRate,changeStaminaPoint,staminaRecoverChangeSpeed,magicEffectTimeChange,insideDurability,maxDurability,staminaAttackRate,poizonAttackPower,diseaseAttackPower,bloodAttackPower,curseAttackPower,fallDamageRate,soulRate,equipWeightChangeRate,allItemWeightChangeRate,soul,animIdOffset,haveSoulRate,targetPriority,sightSearchEnemyRate,hearingSearchEnemyRate,grabityRate,registPoizonChangeRate,registDiseaseChangeRate,registBloodChangeRate,registCurseChangeRate,soulStealRate,lifeReductionRate,hpRecoverRate,replaceSpEffectId,cycleOccurrenceSpEffectId,atkOccurrenceSpEffectId,guardDefFlickPowerRate,guardStaminaCutRate,rayCastPassedTime,magicSubCategoryChange1,magicSubCategoryChange2,bowDistRate,spCategory,categoryPriority,saveCategory,changeMagicSlot,changeMiracleSlot,heroPointDamage,defFlickPower,flickDamageCutRate,bloodDamageRate,dmgLv_None,dmgLv_S,dmgLv_M,dmgLv_L,dmgLv_BlowM,dmgLv_Push,dmgLv_Strike,dmgLv_BlowS,dmgLv_Min,dmgLv_Uppercut,dmgLv_BlowLL,dmgLv_Breath,atkAttribute,spAttribute,stateInfo,wepParamChange,moveType,lifeReductionType,throwCondition,addBehaviorJudgeId_condition,freezeDamageRate,effectTargetSelf,effectTargetFriend,effectTargetEnemy,effectTargetPlayer,effectTargetAI,effectTargetLive,effectTargetGhost,disableSleep,disableMadness,effectTargetAttacker,dispIconNonactive,regainGaugeDamage,bAdjustMagicAblity,bAdjustFaithAblity,bGameClearBonus,magParamChange,miracleParamChange,clearSoul,requestSOS,requestBlackSOS,requestForceJoinBlackSOS,requestKickSession,requestLeaveSession,requestNpcInveda,noDead,bCurrHPIndependeMaxHP,corrosionIgnore,sightSearchCutIgnore,hearingSearchCutIgnore,antiMagicIgnore,fakeTargetIgnore,fakeTargetIgnoreUndead,fakeTargetIgnoreAnimal,grabityIgnore,disablePoison,disableDisease,disableBlood,disableCurse,enableCharm,enableLifeTime,bAdjustStrengthAblity,bAdjustAgilityAblity,eraseOnBonfireRecover,throwAttackParamChange,requestLeaveColiseumSession,isExtendSpEffectLife,hasTarget,replanningOnFire,vowType0,vowType1,vowType2,vowType3,vowType4,vowType5,vowType6,vowType7,vowType8,vowType9,vowType10,vowType11,vowType12,vowType13,vowType14,vowType15,repAtkDmgLv,sightSearchRate,effectTargetOpposeTarget,effectTargetFriendlyTarget,effectTargetSelfTarget,effectTargetPcHorse,effectTargetPcDeceased,isContractSpEffectLife,isWaitModeDelete,isIgnoreNoDamage,changeTeamType,dmypolyId,vfxId,accumuOverFireId,accumuOverVal,accumuUnderFireId,accumuUnderVal,accumuVal,eye_angX,eye_angY,addDeceasedLv,vfxId1,vfxId2,vfxId3,vfxId4,vfxId5,vfxId6,vfxId7,freezeAttackPower,AppearAiSoundId,addFootEffectSfxId,dexterityCancelSystemOnlyAddDexterity,teamOffenseEffectivity,toughnessDamageCutRate,weakDmgRateA,weakDmgRateB,weakDmgRateC,weakDmgRateD,weakDmgRateE,weakDmgRateF,darkDamageCutRate,darkDiffenceRate,darkDiffence,darkAttackRate,darkAttackPowerRate,darkAttackPower,antiDarkSightRadius,antiDarkSightDmypolyId,conditionHpRate,consumeStaminaRate,itemDropRate,changePoisonResistPoint,changeDiseaseResistPoint,changeBloodResistPoint,changeCurseResistPoint,changeFreezeResistPoint,slashAttackRate,blowAttackRate,thrustAttackRate,neutralAttackRate,slashAttackPowerRate,blowAttackPowerRate,thrustAttackPowerRate,neutralAttackPowerRate,slashAttackPower,blowAttackPower,thrustAttackPower,neutralAttackPower,changeStrengthPoint,changeAgilityPoint,changeMagicPoint,changeFaithPoint,changeLuckPoint,recoverArtsPoint_Str,recoverArtsPoint_Dex,recoverArtsPoint_Magic,recoverArtsPoint_Miracle,madnessDamageRate,isUseStatusAilmentAtkPowerCorrect,isUseAtkParamAtkPowerCorrect,dontDeleteOnDead,disableFreeze,isDisableNetSync,shamanParamChange,isStopSearchedNotify,isCheckAboveShadowTest,addBehaviorJudgeId_add,saReceiveDamageRate,defPlayerDmgCorrectRate_Physics,defPlayerDmgCorrectRate_Magic,defPlayerDmgCorrectRate_Fire,defPlayerDmgCorrectRate_Thunder,defPlayerDmgCorrectRate_Dark,defEnemyDmgCorrectRate_Physics,defEnemyDmgCorrectRate_Magic,defEnemyDmgCorrectRate_Fire,defEnemyDmgCorrectRate_Thunder,defEnemyDmgCorrectRate_Dark,defObjDmgCorrectRate,atkPlayerDmgCorrectRate_Physics,atkPlayerDmgCorrectRate_Magic,atkPlayerDmgCorrectRate_Fire,atkPlayerDmgCorrectRate_Thunder,atkPlayerDmgCorrectRate_Dark,atkEnemyDmgCorrectRate_Physics,atkEnemyDmgCorrectRate_Magic,atkEnemyDmgCorrectRate_Fire,atkEnemyDmgCorrectRate_Thunder,atkEnemyDmgCorrectRate_Dark,registFreezeChangeRate,invocationConditionsStateChange1,invocationConditionsStateChange2,invocationConditionsStateChange3,hearingAiSoundLevel,chrProxyHeightRate,addAwarePointCorrectValue_forMe,addAwarePointCorrectValue_forTarget,sightSearchEnemyAdd,sightSearchAdd,hearingSearchAdd,hearingSearchRate,hearingSearchEnemyAdd,value_Magnification,artsConsumptionRate,magicConsumptionRate,shamanConsumptionRate,miracleConsumptionRate,changeHpEstusFlaskRate,changeHpEstusFlaskPoint,changeMpEstusFlaskRate,changeMpEstusFlaskPoint,changeHpEstusFlaskCorrectRate,changeMpEstusFlaskCorrectRate,applyIdOnGetSoul,extendLifeRate,contractLifeRate,defObjectAttackPowerRate,effectEndDeleteDecalGroupId,addLifeForceStatus,addWillpowerStatus,addEndureStatus,addVitalityStatus,addStrengthStatus,addDexterityStatus,addMagicStatus,addFaithStatus,addLuckStatus,deleteCriteriaDamage,magicSubCategoryChange3,spAttributeVariationValue,atkFlickPower,wetConditionDepth,changeSaRecoveryVelocity,regainRate,saAttackPowerRate,sleepAttackPower,madnessAttackPower,registSleepChangeRate,registMadnessChangeRate,changeSleepResistPoint,changeMadnessResistPoint,sleepDamageRate,applyPartsGroup,clearTarget,fakeTargetIgnoreAjin,fakeTargetIgnoreMirageArts,requestForceJoinBlackSOS_B,isDestinedDeathHpMult,isHpBurnEffect,unknown_0x352_6,unknown_0x352_7,unknown_0x353_0,unknown_0x353_1,unknown_0x353_2,unknown_0x353_3,unknown_0x353_4,changeSuperArmorPoint,changeSaPoint,hugeEnemyPickupHeightOverwrite,poisonDefDamageRate,diseaseDefDamageRate,bloodDefDamageRate,curseDefDamageRate,freezeDefDamageRate,sleepDefDamageRate,madnessDefDamageRate,overwrite_maxBackhomeDist,overwrite_backhomeDist,overwrite_backhomeBattleDist,overwrite_BackHome_LookTargetDist,goodsConsumptionRate,guardStaminaMult,spiritDeathSpEffectId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%d,%d,%d,%d,%g,%g,%g,%g,%d,%d,%d,%d,%g,%g,%g,%g,%d,%g,%d,%g,%d,%d,%g,%d,%d,%g,%d,%d,%g,%d,%d,%d,%d,%g,%g,%g,%g,%d,%d,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%d,%d,%d,%g,%g,%d,%u,%u,%d,%u,%u,%d,%u,%u,%d,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%g,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%g,%g,%g,%g,%g,%g,%g,%g,%g,%d,%g,%g,%d,%g,%d,%g,%g,%g,%d,%d,%d,%d,%d,%g,%g,%g,%g,%g,%g,%g,%g,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%u,%u,%u,%d,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%d,%d,%d,%d,%g,%g,%d,%g,%g,%g,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%g,%g,%g,%d,%d,%g,%g,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%u,%u,%u,%u,%g,%g,%d\n",
            this->paramId(i),
            param->iconId,
            param->conditionHp,
            param->effectEndurance,
            param->motionInterval,
            param->maxHpRate,
            param->maxMpRate,
            param->maxStaminaRate,
            param->slashDamageCutRate,
            param->blowDamageCutRate,
            param->thrustDamageCutRate,
            param->neutralDamageCutRate,
            param->magicDamageCutRate,
            param->fireDamageCutRate,
            param->thunderDamageCutRate,
            param->physicsAttackRate,
            param->magicAttackRate,
            param->fireAttackRate,
            param->thunderAttackRate,
            param->physicsAttackPowerRate,
            param->magicAttackPowerRate,
            param->fireAttackPowerRate,
            param->thunderAttackPowerRate,
            param->physicsAttackPower,
            param->magicAttackPower,
            param->fireAttackPower,
            param->thunderAttackPower,
            param->physicsDiffenceRate,
            param->magicDiffenceRate,
            param->fireDiffenceRate,
            param->thunderDiffenceRate,
            param->physicsDiffence,
            param->magicDiffence,
            param->fireDiffence,
            param->thunderDiffence,
            param->NoGuardDamageRate,
            param->vitalSpotChangeRate,
            param->normalSpotChangeRate,
            param->lookAtTargetPosOffset,
            param->behaviorId,
            param->changeHpRate,
            param->changeHpPoint,
            param->changeMpRate,
            param->changeMpPoint,
            param->mpRecoverChangeSpeed,
            param->changeStaminaRate,
            param->changeStaminaPoint,
            param->staminaRecoverChangeSpeed,
            param->magicEffectTimeChange,
            param->insideDurability,
            param->maxDurability,
            param->staminaAttackRate,
            param->poizonAttackPower,
            param->diseaseAttackPower,
            param->bloodAttackPower,
            param->curseAttackPower,
            param->fallDamageRate,
            param->soulRate,
            param->equipWeightChangeRate,
            param->allItemWeightChangeRate,
            param->soul,
            param->animIdOffset,
            param->haveSoulRate,
            param->targetPriority,
            param->sightSearchEnemyRate,
            param->hearingSearchEnemyRate,
            param->grabityRate,
            param->registPoizonChangeRate,
            param->registDiseaseChangeRate,
            param->registBloodChangeRate,
            param->registCurseChangeRate,
            param->soulStealRate,
            param->lifeReductionRate,
            param->hpRecoverRate,
            param->replaceSpEffectId,
            param->cycleOccurrenceSpEffectId,
            param->atkOccurrenceSpEffectId,
            param->guardDefFlickPowerRate,
            param->guardStaminaCutRate,
            param->rayCastPassedTime,
            param->magicSubCategoryChange1,
            param->magicSubCategoryChange2,
            param->bowDistRate,
            param->spCategory,
            param->categoryPriority,
            param->saveCategory,
            param->changeMagicSlot,
            param->changeMiracleSlot,
            param->heroPointDamage,
            param->defFlickPower,
            param->flickDamageCutRate,
            param->bloodDamageRate,
            param->dmgLv_None,
            param->dmgLv_S,
            param->dmgLv_M,
            param->dmgLv_L,
            param->dmgLv_BlowM,
            param->dmgLv_Push,
            param->dmgLv_Strike,
            param->dmgLv_BlowS,
            param->dmgLv_Min,
            param->dmgLv_Uppercut,
            param->dmgLv_BlowLL,
            param->dmgLv_Breath,
            param->atkAttribute,
            param->spAttribute,
            param->stateInfo,
            param->wepParamChange,
            param->moveType,
            param->lifeReductionType,
            param->throwCondition,
            param->addBehaviorJudgeId_condition,
            param->freezeDamageRate,
            param->effectTargetSelf,
            param->effectTargetFriend,
            param->effectTargetEnemy,
            param->effectTargetPlayer,
            param->effectTargetAI,
            param->effectTargetLive,
            param->effectTargetGhost,
            param->disableSleep,
            param->disableMadness,
            param->effectTargetAttacker,
            param->dispIconNonactive,
            param->regainGaugeDamage,
            param->bAdjustMagicAblity,
            param->bAdjustFaithAblity,
            param->bGameClearBonus,
            param->magParamChange,
            param->miracleParamChange,
            param->clearSoul,
            param->requestSOS,
            param->requestBlackSOS,
            param->requestForceJoinBlackSOS,
            param->requestKickSession,
            param->requestLeaveSession,
            param->requestNpcInveda,
            param->noDead,
            param->bCurrHPIndependeMaxHP,
            param->corrosionIgnore,
            param->sightSearchCutIgnore,
            param->hearingSearchCutIgnore,
            param->antiMagicIgnore,
            param->fakeTargetIgnore,
            param->fakeTargetIgnoreUndead,
            param->fakeTargetIgnoreAnimal,
            param->grabityIgnore,
            param->disablePoison,
            param->disableDisease,
            param->disableBlood,
            param->disableCurse,
            param->enableCharm,
            param->enableLifeTime,
            param->bAdjustStrengthAblity,
            param->bAdjustAgilityAblity,
            param->eraseOnBonfireRecover,
            param->throwAttackParamChange,
            param->requestLeaveColiseumSession,
            param->isExtendSpEffectLife,
            param->hasTarget,
            param->replanningOnFire,
            param->vowType0,
            param->vowType1,
            param->vowType2,
            param->vowType3,
            param->vowType4,
            param->vowType5,
            param->vowType6,
            param->vowType7,
            param->vowType8,
            param->vowType9,
            param->vowType10,
            param->vowType11,
            param->vowType12,
            param->vowType13,
            param->vowType14,
            param->vowType15,
            param->repAtkDmgLv,
            param->sightSearchRate,
            param->effectTargetOpposeTarget,
            param->effectTargetFriendlyTarget,
            param->effectTargetSelfTarget,
            param->effectTargetPcHorse,
            param->effectTargetPcDeceased,
            param->isContractSpEffectLife,
            param->isWaitModeDelete,
            param->isIgnoreNoDamage,
            param->changeTeamType,
            param->dmypolyId,
            param->vfxId,
            param->accumuOverFireId,
            param->accumuOverVal,
            param->accumuUnderFireId,
            param->accumuUnderVal,
            param->accumuVal,
            param->eye_angX,
            param->eye_angY,
            param->addDeceasedLv,
            param->vfxId1,
            param->vfxId2,
            param->vfxId3,
            param->vfxId4,
            param->vfxId5,
            param->vfxId6,
            param->vfxId7,
            param->freezeAttackPower,
            param->AppearAiSoundId,
            param->addFootEffectSfxId,
            param->dexterityCancelSystemOnlyAddDexterity,
            param->teamOffenseEffectivity,
            param->toughnessDamageCutRate,
            param->weakDmgRateA,
            param->weakDmgRateB,
            param->weakDmgRateC,
            param->weakDmgRateD,
            param->weakDmgRateE,
            param->weakDmgRateF,
            param->darkDamageCutRate,
            param->darkDiffenceRate,
            param->darkDiffence,
            param->darkAttackRate,
            param->darkAttackPowerRate,
            param->darkAttackPower,
            param->antiDarkSightRadius,
            param->antiDarkSightDmypolyId,
            param->conditionHpRate,
            param->consumeStaminaRate,
            param->itemDropRate,
            param->changePoisonResistPoint,
            param->changeDiseaseResistPoint,
            param->changeBloodResistPoint,
            param->changeCurseResistPoint,
            param->changeFreezeResistPoint,
            param->slashAttackRate,
            param->blowAttackRate,
            param->thrustAttackRate,
            param->neutralAttackRate,
            param->slashAttackPowerRate,
            param->blowAttackPowerRate,
            param->thrustAttackPowerRate,
            param->neutralAttackPowerRate,
            param->slashAttackPower,
            param->blowAttackPower,
            param->thrustAttackPower,
            param->neutralAttackPower,
            param->changeStrengthPoint,
            param->changeAgilityPoint,
            param->changeMagicPoint,
            param->changeFaithPoint,
            param->changeLuckPoint,
            param->recoverArtsPoint_Str,
            param->recoverArtsPoint_Dex,
            param->recoverArtsPoint_Magic,
            param->recoverArtsPoint_Miracle,
            param->madnessDamageRate,
            param->isUseStatusAilmentAtkPowerCorrect,
            param->isUseAtkParamAtkPowerCorrect,
            param->dontDeleteOnDead,
            param->disableFreeze,
            param->isDisableNetSync,
            param->shamanParamChange,
            param->isStopSearchedNotify,
            param->isCheckAboveShadowTest,
            param->addBehaviorJudgeId_add,
            param->saReceiveDamageRate,
            param->defPlayerDmgCorrectRate_Physics,
            param->defPlayerDmgCorrectRate_Magic,
            param->defPlayerDmgCorrectRate_Fire,
            param->defPlayerDmgCorrectRate_Thunder,
            param->defPlayerDmgCorrectRate_Dark,
            param->defEnemyDmgCorrectRate_Physics,
            param->defEnemyDmgCorrectRate_Magic,
            param->defEnemyDmgCorrectRate_Fire,
            param->defEnemyDmgCorrectRate_Thunder,
            param->defEnemyDmgCorrectRate_Dark,
            param->defObjDmgCorrectRate,
            param->atkPlayerDmgCorrectRate_Physics,
            param->atkPlayerDmgCorrectRate_Magic,
            param->atkPlayerDmgCorrectRate_Fire,
            param->atkPlayerDmgCorrectRate_Thunder,
            param->atkPlayerDmgCorrectRate_Dark,
            param->atkEnemyDmgCorrectRate_Physics,
            param->atkEnemyDmgCorrectRate_Magic,
            param->atkEnemyDmgCorrectRate_Fire,
            param->atkEnemyDmgCorrectRate_Thunder,
            param->atkEnemyDmgCorrectRate_Dark,
            param->registFreezeChangeRate,
            param->invocationConditionsStateChange1,
            param->invocationConditionsStateChange2,
            param->invocationConditionsStateChange3,
            param->hearingAiSoundLevel,
            param->chrProxyHeightRate,
            param->addAwarePointCorrectValue_forMe,
            param->addAwarePointCorrectValue_forTarget,
            param->sightSearchEnemyAdd,
            param->sightSearchAdd,
            param->hearingSearchAdd,
            param->hearingSearchRate,
            param->hearingSearchEnemyAdd,
            param->value_Magnification,
            param->artsConsumptionRate,
            param->magicConsumptionRate,
            param->shamanConsumptionRate,
            param->miracleConsumptionRate,
            param->changeHpEstusFlaskRate,
            param->changeHpEstusFlaskPoint,
            param->changeMpEstusFlaskRate,
            param->changeMpEstusFlaskPoint,
            param->changeHpEstusFlaskCorrectRate,
            param->changeMpEstusFlaskCorrectRate,
            param->applyIdOnGetSoul,
            param->extendLifeRate,
            param->contractLifeRate,
            param->defObjectAttackPowerRate,
            param->effectEndDeleteDecalGroupId,
            param->addLifeForceStatus,
            param->addWillpowerStatus,
            param->addEndureStatus,
            param->addVitalityStatus,
            param->addStrengthStatus,
            param->addDexterityStatus,
            param->addMagicStatus,
            param->addFaithStatus,
            param->addLuckStatus,
            param->deleteCriteriaDamage,
            param->magicSubCategoryChange3,
            param->spAttributeVariationValue,
            param->atkFlickPower,
            param->wetConditionDepth,
            param->changeSaRecoveryVelocity,
            param->regainRate,
            param->saAttackPowerRate,
            param->sleepAttackPower,
            param->madnessAttackPower,
            param->registSleepChangeRate,
            param->registMadnessChangeRate,
            param->changeSleepResistPoint,
            param->changeMadnessResistPoint,
            param->sleepDamageRate,
            param->applyPartsGroup,
            param->clearTarget,
            param->fakeTargetIgnoreAjin,
            param->fakeTargetIgnoreMirageArts,
            param->requestForceJoinBlackSOS_B,
            param->isDestinedDeathHpMult,
            param->isHpBurnEffect,
            param->unknown_0x352_6,
            param->unknown_0x352_7,
            param->unknown_0x353_0,
            param->unknown_0x353_1,
            param->unknown_0x353_2,
            param->unknown_0x353_3,
            param->unknown_0x353_4,
            param->changeSuperArmorPoint,
            param->changeSaPoint,
            param->hugeEnemyPickupHeightOverwrite,
            param->poisonDefDamageRate,
            param->diseaseDefDamageRate,
            param->bloodDefDamageRate,
            param->curseDefDamageRate,
            param->freezeDefDamageRate,
            param->sleepDefDamageRate,
            param->madnessDefDamageRate,
            param->overwrite_maxBackhomeDist,
            param->overwrite_backhomeDist,
            param->overwrite_backhomeBattleDist,
            param->overwrite_BackHome_LookTargetDist,
            param->goodsConsumptionRate,
            param->guardStaminaMult,
            param->spiritDeathSpEffectId
        );
    }
    fclose(f);
}

}
