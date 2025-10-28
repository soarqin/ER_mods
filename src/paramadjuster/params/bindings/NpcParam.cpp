#include "../luabindings.h"
#include "../defs/NpcParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<NpcParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerNpcParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["NpcParam"]; usertype) return;
        auto indexerNpcParam = state->new_usertype<ParamTableIndexer<NpcParam>>("NpcParamTableIndexer");
        indexerNpcParam["count"] = sol::property(&ParamTableIndexer<NpcParam>::count);
        indexerNpcParam["__index"] = &ParamTableIndexer<NpcParam>::at;
        indexerNpcParam["id"] = &ParamTableIndexer<NpcParam>::paramId;
        indexerNpcParam["get"] = &ParamTableIndexer<NpcParam>::get;
        indexerNpcParam["exportToCsv"] = &ParamTableIndexer<NpcParam>::exportToCsv;
        indexerNpcParam["importFromCsv"] = &ParamTableIndexer<NpcParam>::importFromCsv;
        auto utNpcParam = state->new_usertype<NpcParam>("NpcParam");
        utNpcParam["disableParam_NT"] = sol::property([](NpcParam &param) -> uint8_t { return param.disableParam_NT; }, [](NpcParam &param, uint8_t value) { param.disableParam_NT = value; });
        utNpcParam["behaviorVariationId"] = &NpcParam::behaviorVariationId;
        utNpcParam["resistCorrectId_poison"] = &NpcParam::resistCorrectId_poison;
        utNpcParam["nameId"] = &NpcParam::nameId;
        utNpcParam["turnVellocity"] = &NpcParam::turnVellocity;
        utNpcParam["hitHeight"] = &NpcParam::hitHeight;
        utNpcParam["hitRadius"] = &NpcParam::hitRadius;
        utNpcParam["weight"] = &NpcParam::weight;
        utNpcParam["hitYOffset"] = &NpcParam::hitYOffset;
        utNpcParam["hp"] = &NpcParam::hp;
        utNpcParam["mp"] = &NpcParam::mp;
        utNpcParam["getSoul"] = &NpcParam::getSoul;
        utNpcParam["itemLotId_enemy"] = &NpcParam::itemLotId_enemy;
        utNpcParam["itemLotId_map"] = &NpcParam::itemLotId_map;
        utNpcParam["maxAnkleRollAngle"] = &NpcParam::maxAnkleRollAngle;
        utNpcParam["chrHitGroupAndNavimesh"] = &NpcParam::chrHitGroupAndNavimesh;
        utNpcParam["faceIconId"] = &NpcParam::faceIconId;
        utNpcParam["deactivateDist"] = &NpcParam::deactivateDist;
        utNpcParam["chrActivateConditionParamId"] = &NpcParam::chrActivateConditionParamId;
        utNpcParam["footIkErrorHeightLimit"] = &NpcParam::footIkErrorHeightLimit;
        utNpcParam["humanityLotId"] = &NpcParam::humanityLotId;
        utNpcParam["spEffectID0"] = &NpcParam::spEffectID0;
        utNpcParam["spEffectID1"] = &NpcParam::spEffectID1;
        utNpcParam["spEffectID2"] = &NpcParam::spEffectID2;
        utNpcParam["spEffectID3"] = &NpcParam::spEffectID3;
        utNpcParam["spEffectID4"] = &NpcParam::spEffectID4;
        utNpcParam["spEffectID5"] = &NpcParam::spEffectID5;
        utNpcParam["spEffectID6"] = &NpcParam::spEffectID6;
        utNpcParam["spEffectID7"] = &NpcParam::spEffectID7;
        utNpcParam["GameClearSpEffectID"] = &NpcParam::GameClearSpEffectID;
        utNpcParam["physGuardCutRate"] = &NpcParam::physGuardCutRate;
        utNpcParam["magGuardCutRate"] = &NpcParam::magGuardCutRate;
        utNpcParam["fireGuardCutRate"] = &NpcParam::fireGuardCutRate;
        utNpcParam["thunGuardCutRate"] = &NpcParam::thunGuardCutRate;
        utNpcParam["animIdOffset"] = &NpcParam::animIdOffset;
        utNpcParam["lockGazePoint0"] = &NpcParam::lockGazePoint0;
        utNpcParam["lockGazePoint1"] = &NpcParam::lockGazePoint1;
        utNpcParam["lockGazePoint2"] = &NpcParam::lockGazePoint2;
        utNpcParam["lockGazePoint3"] = &NpcParam::lockGazePoint3;
        utNpcParam["lockGazePoint4"] = &NpcParam::lockGazePoint4;
        utNpcParam["lockGazePoint5"] = &NpcParam::lockGazePoint5;
        utNpcParam["networkWarpDist"] = &NpcParam::networkWarpDist;
        utNpcParam["dbgBehaviorR1"] = &NpcParam::dbgBehaviorR1;
        utNpcParam["dbgBehaviorL1"] = &NpcParam::dbgBehaviorL1;
        utNpcParam["dbgBehaviorR2"] = &NpcParam::dbgBehaviorR2;
        utNpcParam["dbgBehaviorL2"] = &NpcParam::dbgBehaviorL2;
        utNpcParam["dbgBehaviorRL"] = &NpcParam::dbgBehaviorRL;
        utNpcParam["dbgBehaviorRR"] = &NpcParam::dbgBehaviorRR;
        utNpcParam["dbgBehaviorRD"] = &NpcParam::dbgBehaviorRD;
        utNpcParam["dbgBehaviorRU"] = &NpcParam::dbgBehaviorRU;
        utNpcParam["dbgBehaviorLL"] = &NpcParam::dbgBehaviorLL;
        utNpcParam["dbgBehaviorLR"] = &NpcParam::dbgBehaviorLR;
        utNpcParam["dbgBehaviorLD"] = &NpcParam::dbgBehaviorLD;
        utNpcParam["dbgBehaviorLU"] = &NpcParam::dbgBehaviorLU;
        utNpcParam["animIdOffset2"] = &NpcParam::animIdOffset2;
        utNpcParam["partsDamageRate1"] = &NpcParam::partsDamageRate1;
        utNpcParam["partsDamageRate2"] = &NpcParam::partsDamageRate2;
        utNpcParam["partsDamageRate3"] = &NpcParam::partsDamageRate3;
        utNpcParam["partsDamageRate4"] = &NpcParam::partsDamageRate4;
        utNpcParam["partsDamageRate5"] = &NpcParam::partsDamageRate5;
        utNpcParam["partsDamageRate6"] = &NpcParam::partsDamageRate6;
        utNpcParam["partsDamageRate7"] = &NpcParam::partsDamageRate7;
        utNpcParam["partsDamageRate8"] = &NpcParam::partsDamageRate8;
        utNpcParam["weakPartsDamageRate"] = &NpcParam::weakPartsDamageRate;
        utNpcParam["superArmorRecoverCorrection"] = &NpcParam::superArmorRecoverCorrection;
        utNpcParam["superArmorBrakeKnockbackDist"] = &NpcParam::superArmorBrakeKnockbackDist;
        utNpcParam["stamina"] = &NpcParam::stamina;
        utNpcParam["staminaRecoverBaseVel"] = &NpcParam::staminaRecoverBaseVel;
        utNpcParam["def_phys"] = &NpcParam::def_phys;
        utNpcParam["def_slash"] = &NpcParam::def_slash;
        utNpcParam["def_blow"] = &NpcParam::def_blow;
        utNpcParam["def_thrust"] = &NpcParam::def_thrust;
        utNpcParam["def_mag"] = &NpcParam::def_mag;
        utNpcParam["def_fire"] = &NpcParam::def_fire;
        utNpcParam["def_thunder"] = &NpcParam::def_thunder;
        utNpcParam["defFlickPower"] = &NpcParam::defFlickPower;
        utNpcParam["resist_poison"] = &NpcParam::resist_poison;
        utNpcParam["resist_desease"] = &NpcParam::resist_desease;
        utNpcParam["resist_blood"] = &NpcParam::resist_blood;
        utNpcParam["resist_curse"] = &NpcParam::resist_curse;
        utNpcParam["ghostModelId"] = &NpcParam::ghostModelId;
        utNpcParam["normalChangeResouceId"] = &NpcParam::normalChangeResouceId;
        utNpcParam["guardAngle"] = &NpcParam::guardAngle;
        utNpcParam["slashGuardCutRate"] = &NpcParam::slashGuardCutRate;
        utNpcParam["blowGuardCutRate"] = &NpcParam::blowGuardCutRate;
        utNpcParam["thrustGuardCutRate"] = &NpcParam::thrustGuardCutRate;
        utNpcParam["lockGazePoint6"] = &NpcParam::lockGazePoint6;
        utNpcParam["normalChangeTexChrId"] = &NpcParam::normalChangeTexChrId;
        utNpcParam["dropType"] = &NpcParam::dropType;
        utNpcParam["knockbackRate"] = &NpcParam::knockbackRate;
        utNpcParam["knockbackParamId"] = &NpcParam::knockbackParamId;
        utNpcParam["fallDamageDump"] = &NpcParam::fallDamageDump;
        utNpcParam["staminaGuardDef"] = &NpcParam::staminaGuardDef;
        utNpcParam["resist_sleep"] = &NpcParam::resist_sleep;
        utNpcParam["resist_madness"] = &NpcParam::resist_madness;
        utNpcParam["sleepGuardResist"] = &NpcParam::sleepGuardResist;
        utNpcParam["madnessGuardResist"] = &NpcParam::madnessGuardResist;
        utNpcParam["lockGazePoint7"] = &NpcParam::lockGazePoint7;
        utNpcParam["mpRecoverBaseVel"] = &NpcParam::mpRecoverBaseVel;
        utNpcParam["flickDamageCutRate"] = &NpcParam::flickDamageCutRate;
        utNpcParam["defaultLodParamId"] = &NpcParam::defaultLodParamId;
        utNpcParam["drawType"] = &NpcParam::drawType;
        utNpcParam["npcType"] = &NpcParam::npcType;
        utNpcParam["teamType"] = &NpcParam::teamType;
        utNpcParam["moveType"] = &NpcParam::moveType;
        utNpcParam["lockDist"] = &NpcParam::lockDist;
        utNpcParam["materialSe_Weak1"] = &NpcParam::materialSe_Weak1;
        utNpcParam["materialSfx_Weak1"] = &NpcParam::materialSfx_Weak1;
        utNpcParam["partsDamageType"] = &NpcParam::partsDamageType;
        utNpcParam["vowType"] = &NpcParam::vowType;
        utNpcParam["guardLevel"] = &NpcParam::guardLevel;
        utNpcParam["burnSfxType"] = &NpcParam::burnSfxType;
        utNpcParam["poisonGuardResist"] = &NpcParam::poisonGuardResist;
        utNpcParam["diseaseGuardResist"] = &NpcParam::diseaseGuardResist;
        utNpcParam["bloodGuardResist"] = &NpcParam::bloodGuardResist;
        utNpcParam["curseGuardResist"] = &NpcParam::curseGuardResist;
        utNpcParam["parryAttack"] = &NpcParam::parryAttack;
        utNpcParam["parryDefence"] = &NpcParam::parryDefence;
        utNpcParam["sfxSize"] = &NpcParam::sfxSize;
        utNpcParam["pushOutCamRegionRadius"] = &NpcParam::pushOutCamRegionRadius;
        utNpcParam["hitStopType"] = &NpcParam::hitStopType;
        utNpcParam["ladderEndChkOffsetTop"] = &NpcParam::ladderEndChkOffsetTop;
        utNpcParam["ladderEndChkOffsetLow"] = &NpcParam::ladderEndChkOffsetLow;
        utNpcParam["useRagdollCamHit"] = sol::property([](NpcParam &param) -> uint8_t { return param.useRagdollCamHit; }, [](NpcParam &param, uint8_t value) { param.useRagdollCamHit = value; });
        utNpcParam["disableClothRigidHit"] = sol::property([](NpcParam &param) -> uint8_t { return param.disableClothRigidHit; }, [](NpcParam &param, uint8_t value) { param.disableClothRigidHit = value; });
        utNpcParam["useUndulationAddAnimFB"] = sol::property([](NpcParam &param) -> uint8_t { return param.useUndulationAddAnimFB; }, [](NpcParam &param, uint8_t value) { param.useUndulationAddAnimFB = value; });
        utNpcParam["isWeakA"] = sol::property([](NpcParam &param) -> uint8_t { return param.isWeakA; }, [](NpcParam &param, uint8_t value) { param.isWeakA = value; });
        utNpcParam["isGhost"] = sol::property([](NpcParam &param) -> uint8_t { return param.isGhost; }, [](NpcParam &param, uint8_t value) { param.isGhost = value; });
        utNpcParam["isNoDamageMotion"] = sol::property([](NpcParam &param) -> uint8_t { return param.isNoDamageMotion; }, [](NpcParam &param, uint8_t value) { param.isNoDamageMotion = value; });
        utNpcParam["isUnduration"] = sol::property([](NpcParam &param) -> uint8_t { return param.isUnduration; }, [](NpcParam &param, uint8_t value) { param.isUnduration = value; });
        utNpcParam["isChangeWanderGhost"] = sol::property([](NpcParam &param) -> uint8_t { return param.isChangeWanderGhost; }, [](NpcParam &param, uint8_t value) { param.isChangeWanderGhost = value; });
        utNpcParam["modelDispMask0"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask0; }, [](NpcParam &param, uint8_t value) { param.modelDispMask0 = value; });
        utNpcParam["modelDispMask1"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask1; }, [](NpcParam &param, uint8_t value) { param.modelDispMask1 = value; });
        utNpcParam["modelDispMask2"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask2; }, [](NpcParam &param, uint8_t value) { param.modelDispMask2 = value; });
        utNpcParam["modelDispMask3"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask3; }, [](NpcParam &param, uint8_t value) { param.modelDispMask3 = value; });
        utNpcParam["modelDispMask4"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask4; }, [](NpcParam &param, uint8_t value) { param.modelDispMask4 = value; });
        utNpcParam["modelDispMask5"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask5; }, [](NpcParam &param, uint8_t value) { param.modelDispMask5 = value; });
        utNpcParam["modelDispMask6"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask6; }, [](NpcParam &param, uint8_t value) { param.modelDispMask6 = value; });
        utNpcParam["modelDispMask7"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask7; }, [](NpcParam &param, uint8_t value) { param.modelDispMask7 = value; });
        utNpcParam["modelDispMask8"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask8; }, [](NpcParam &param, uint8_t value) { param.modelDispMask8 = value; });
        utNpcParam["modelDispMask9"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask9; }, [](NpcParam &param, uint8_t value) { param.modelDispMask9 = value; });
        utNpcParam["modelDispMask10"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask10; }, [](NpcParam &param, uint8_t value) { param.modelDispMask10 = value; });
        utNpcParam["modelDispMask11"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask11; }, [](NpcParam &param, uint8_t value) { param.modelDispMask11 = value; });
        utNpcParam["modelDispMask12"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask12; }, [](NpcParam &param, uint8_t value) { param.modelDispMask12 = value; });
        utNpcParam["modelDispMask13"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask13; }, [](NpcParam &param, uint8_t value) { param.modelDispMask13 = value; });
        utNpcParam["modelDispMask14"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask14; }, [](NpcParam &param, uint8_t value) { param.modelDispMask14 = value; });
        utNpcParam["modelDispMask15"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask15; }, [](NpcParam &param, uint8_t value) { param.modelDispMask15 = value; });
        utNpcParam["isEnableNeckTurn"] = sol::property([](NpcParam &param) -> uint8_t { return param.isEnableNeckTurn; }, [](NpcParam &param, uint8_t value) { param.isEnableNeckTurn = value; });
        utNpcParam["disableRespawn"] = sol::property([](NpcParam &param) -> uint8_t { return param.disableRespawn; }, [](NpcParam &param, uint8_t value) { param.disableRespawn = value; });
        utNpcParam["isMoveAnimWait"] = sol::property([](NpcParam &param) -> uint8_t { return param.isMoveAnimWait; }, [](NpcParam &param, uint8_t value) { param.isMoveAnimWait = value; });
        utNpcParam["isCrowd"] = sol::property([](NpcParam &param) -> uint8_t { return param.isCrowd; }, [](NpcParam &param, uint8_t value) { param.isCrowd = value; });
        utNpcParam["isWeakB"] = sol::property([](NpcParam &param) -> uint8_t { return param.isWeakB; }, [](NpcParam &param, uint8_t value) { param.isWeakB = value; });
        utNpcParam["isWeakC"] = sol::property([](NpcParam &param) -> uint8_t { return param.isWeakC; }, [](NpcParam &param, uint8_t value) { param.isWeakC = value; });
        utNpcParam["isWeakD"] = sol::property([](NpcParam &param) -> uint8_t { return param.isWeakD; }, [](NpcParam &param, uint8_t value) { param.isWeakD = value; });
        utNpcParam["doesAlwaysUseSpecialTurn"] = sol::property([](NpcParam &param) -> uint8_t { return param.doesAlwaysUseSpecialTurn; }, [](NpcParam &param, uint8_t value) { param.doesAlwaysUseSpecialTurn = value; });
        utNpcParam["isRideAtkTarget"] = sol::property([](NpcParam &param) -> uint8_t { return param.isRideAtkTarget; }, [](NpcParam &param, uint8_t value) { param.isRideAtkTarget = value; });
        utNpcParam["isEnableStepDispInterpolate"] = sol::property([](NpcParam &param) -> uint8_t { return param.isEnableStepDispInterpolate; }, [](NpcParam &param, uint8_t value) { param.isEnableStepDispInterpolate = value; });
        utNpcParam["isStealthTarget"] = sol::property([](NpcParam &param) -> uint8_t { return param.isStealthTarget; }, [](NpcParam &param, uint8_t value) { param.isStealthTarget = value; });
        utNpcParam["disableInitializeDead"] = sol::property([](NpcParam &param) -> uint8_t { return param.disableInitializeDead; }, [](NpcParam &param, uint8_t value) { param.disableInitializeDead = value; });
        utNpcParam["isHitRumble"] = sol::property([](NpcParam &param) -> uint8_t { return param.isHitRumble; }, [](NpcParam &param, uint8_t value) { param.isHitRumble = value; });
        utNpcParam["isSmoothTurn"] = sol::property([](NpcParam &param) -> uint8_t { return param.isSmoothTurn; }, [](NpcParam &param, uint8_t value) { param.isSmoothTurn = value; });
        utNpcParam["isWeakE"] = sol::property([](NpcParam &param) -> uint8_t { return param.isWeakE; }, [](NpcParam &param, uint8_t value) { param.isWeakE = value; });
        utNpcParam["isWeakF"] = sol::property([](NpcParam &param) -> uint8_t { return param.isWeakF; }, [](NpcParam &param, uint8_t value) { param.isWeakF = value; });
        utNpcParam["modelDispMask16"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask16; }, [](NpcParam &param, uint8_t value) { param.modelDispMask16 = value; });
        utNpcParam["modelDispMask17"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask17; }, [](NpcParam &param, uint8_t value) { param.modelDispMask17 = value; });
        utNpcParam["modelDispMask18"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask18; }, [](NpcParam &param, uint8_t value) { param.modelDispMask18 = value; });
        utNpcParam["modelDispMask19"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask19; }, [](NpcParam &param, uint8_t value) { param.modelDispMask19 = value; });
        utNpcParam["modelDispMask20"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask20; }, [](NpcParam &param, uint8_t value) { param.modelDispMask20 = value; });
        utNpcParam["modelDispMask21"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask21; }, [](NpcParam &param, uint8_t value) { param.modelDispMask21 = value; });
        utNpcParam["modelDispMask22"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask22; }, [](NpcParam &param, uint8_t value) { param.modelDispMask22 = value; });
        utNpcParam["modelDispMask23"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask23; }, [](NpcParam &param, uint8_t value) { param.modelDispMask23 = value; });
        utNpcParam["modelDispMask24"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask24; }, [](NpcParam &param, uint8_t value) { param.modelDispMask24 = value; });
        utNpcParam["modelDispMask25"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask25; }, [](NpcParam &param, uint8_t value) { param.modelDispMask25 = value; });
        utNpcParam["modelDispMask26"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask26; }, [](NpcParam &param, uint8_t value) { param.modelDispMask26 = value; });
        utNpcParam["modelDispMask27"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask27; }, [](NpcParam &param, uint8_t value) { param.modelDispMask27 = value; });
        utNpcParam["modelDispMask28"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask28; }, [](NpcParam &param, uint8_t value) { param.modelDispMask28 = value; });
        utNpcParam["modelDispMask29"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask29; }, [](NpcParam &param, uint8_t value) { param.modelDispMask29 = value; });
        utNpcParam["modelDispMask30"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask30; }, [](NpcParam &param, uint8_t value) { param.modelDispMask30 = value; });
        utNpcParam["modelDispMask31"] = sol::property([](NpcParam &param) -> uint8_t { return param.modelDispMask31; }, [](NpcParam &param, uint8_t value) { param.modelDispMask31 = value; });
        utNpcParam["itemSearchRadius"] = &NpcParam::itemSearchRadius;
        utNpcParam["chrHitHeight"] = &NpcParam::chrHitHeight;
        utNpcParam["chrHitRadius"] = &NpcParam::chrHitRadius;
        utNpcParam["specialTurnType"] = &NpcParam::specialTurnType;
        utNpcParam["isSoulGetByBoss"] = sol::property([](NpcParam &param) -> uint8_t { return param.isSoulGetByBoss; }, [](NpcParam &param, uint8_t value) { param.isSoulGetByBoss = value; });
        utNpcParam["isBulletOwner_byObject"] = sol::property([](NpcParam &param) -> uint8_t { return param.isBulletOwner_byObject; }, [](NpcParam &param, uint8_t value) { param.isBulletOwner_byObject = value; });
        utNpcParam["isUseLowHitFootIk"] = sol::property([](NpcParam &param) -> uint8_t { return param.isUseLowHitFootIk; }, [](NpcParam &param, uint8_t value) { param.isUseLowHitFootIk = value; });
        utNpcParam["isCalculatePvPDamage"] = sol::property([](NpcParam &param) -> uint8_t { return param.isCalculatePvPDamage; }, [](NpcParam &param, uint8_t value) { param.isCalculatePvPDamage = value; });
        utNpcParam["isHostSyncChr"] = sol::property([](NpcParam &param) -> uint8_t { return param.isHostSyncChr; }, [](NpcParam &param, uint8_t value) { param.isHostSyncChr = value; });
        utNpcParam["isSkipWeakDamageAnim"] = sol::property([](NpcParam &param) -> uint8_t { return param.isSkipWeakDamageAnim; }, [](NpcParam &param, uint8_t value) { param.isSkipWeakDamageAnim = value; });
        utNpcParam["isKeepHitOnRide"] = sol::property([](NpcParam &param) -> uint8_t { return param.isKeepHitOnRide; }, [](NpcParam &param, uint8_t value) { param.isKeepHitOnRide = value; });
        utNpcParam["isSpCollide"] = sol::property([](NpcParam &param) -> uint8_t { return param.isSpCollide; }, [](NpcParam &param, uint8_t value) { param.isSpCollide = value; });
        utNpcParam["def_dark"] = &NpcParam::def_dark;
        utNpcParam["threatLv"] = &NpcParam::threatLv;
        utNpcParam["specialTurnDistanceThreshold"] = &NpcParam::specialTurnDistanceThreshold;
        utNpcParam["autoFootEffectSfxId"] = &NpcParam::autoFootEffectSfxId;
        utNpcParam["materialSe1"] = &NpcParam::materialSe1;
        utNpcParam["materialSfx1"] = &NpcParam::materialSfx1;
        utNpcParam["materialSe_Weak2"] = &NpcParam::materialSe_Weak2;
        utNpcParam["materialSfx_Weak2"] = &NpcParam::materialSfx_Weak2;
        utNpcParam["materialSe2"] = &NpcParam::materialSe2;
        utNpcParam["materialSfx2"] = &NpcParam::materialSfx2;
        utNpcParam["spEffectID8"] = &NpcParam::spEffectID8;
        utNpcParam["spEffectID9"] = &NpcParam::spEffectID9;
        utNpcParam["spEffectID10"] = &NpcParam::spEffectID10;
        utNpcParam["spEffectID11"] = &NpcParam::spEffectID11;
        utNpcParam["spEffectID12"] = &NpcParam::spEffectID12;
        utNpcParam["spEffectID13"] = &NpcParam::spEffectID13;
        utNpcParam["spEffectID14"] = &NpcParam::spEffectID14;
        utNpcParam["spEffectID15"] = &NpcParam::spEffectID15;
        utNpcParam["autoFootEffectDecalBaseId1"] = &NpcParam::autoFootEffectDecalBaseId1;
        utNpcParam["toughness"] = &NpcParam::toughness;
        utNpcParam["toughnessRecoverCorrection"] = &NpcParam::toughnessRecoverCorrection;
        utNpcParam["neutralDamageCutRate"] = &NpcParam::neutralDamageCutRate;
        utNpcParam["slashDamageCutRate"] = &NpcParam::slashDamageCutRate;
        utNpcParam["blowDamageCutRate"] = &NpcParam::blowDamageCutRate;
        utNpcParam["thrustDamageCutRate"] = &NpcParam::thrustDamageCutRate;
        utNpcParam["magicDamageCutRate"] = &NpcParam::magicDamageCutRate;
        utNpcParam["fireDamageCutRate"] = &NpcParam::fireDamageCutRate;
        utNpcParam["thunderDamageCutRate"] = &NpcParam::thunderDamageCutRate;
        utNpcParam["darkDamageCutRate"] = &NpcParam::darkDamageCutRate;
        utNpcParam["darkGuardCutRate"] = &NpcParam::darkGuardCutRate;
        utNpcParam["clothUpdateOffset"] = &NpcParam::clothUpdateOffset;
        utNpcParam["npcPlayerWeightType"] = &NpcParam::npcPlayerWeightType;
        utNpcParam["normalChangeModelId"] = &NpcParam::normalChangeModelId;
        utNpcParam["normalChangeAnimChrId"] = &NpcParam::normalChangeAnimChrId;
        utNpcParam["paintRenderTargetSize"] = &NpcParam::paintRenderTargetSize;
        utNpcParam["resistCorrectId_disease"] = &NpcParam::resistCorrectId_disease;
        utNpcParam["phantomShaderId"] = &NpcParam::phantomShaderId;
        utNpcParam["multiPlayCorrectionParamId"] = &NpcParam::multiPlayCorrectionParamId;
        utNpcParam["maxAnklePitchAngle"] = &NpcParam::maxAnklePitchAngle;
        utNpcParam["resist_freeze"] = &NpcParam::resist_freeze;
        utNpcParam["freezeGuardResist"] = &NpcParam::freezeGuardResist;
        utNpcParam["hpBurnDamageRate"] = &NpcParam::hpBurnDamageRate;
        utNpcParam["lockCameraParamId"] = &NpcParam::lockCameraParamId;
        utNpcParam["spEffectID16"] = &NpcParam::spEffectID16;
        utNpcParam["spEffectID17"] = &NpcParam::spEffectID17;
        utNpcParam["spEffectID18"] = &NpcParam::spEffectID18;
        utNpcParam["spEffectID19"] = &NpcParam::spEffectID19;
        utNpcParam["spEffectID20"] = &NpcParam::spEffectID20;
        utNpcParam["spEffectID21"] = &NpcParam::spEffectID21;
        utNpcParam["spEffectID22"] = &NpcParam::spEffectID22;
        utNpcParam["spEffectID23"] = &NpcParam::spEffectID23;
        utNpcParam["spEffectID24"] = &NpcParam::spEffectID24;
        utNpcParam["spEffectID25"] = &NpcParam::spEffectID25;
        utNpcParam["spEffectID26"] = &NpcParam::spEffectID26;
        utNpcParam["spEffectID27"] = &NpcParam::spEffectID27;
        utNpcParam["spEffectID28"] = &NpcParam::spEffectID28;
        utNpcParam["spEffectID29"] = &NpcParam::spEffectID29;
        utNpcParam["spEffectID30"] = &NpcParam::spEffectID30;
        utNpcParam["spEffectID31"] = &NpcParam::spEffectID31;
        utNpcParam["disableLockOnAng"] = &NpcParam::disableLockOnAng;
        utNpcParam["clothOffLodLevel"] = &NpcParam::clothOffLodLevel;
        utNpcParam["isUseFootIKNormalByUnduration"] = sol::property([](NpcParam &param) -> uint8_t { return param.isUseFootIKNormalByUnduration; }, [](NpcParam &param, uint8_t value) { param.isUseFootIKNormalByUnduration = value; });
        utNpcParam["attachHitInitializeDead"] = sol::property([](NpcParam &param) -> uint8_t { return param.attachHitInitializeDead; }, [](NpcParam &param, uint8_t value) { param.attachHitInitializeDead = value; });
        utNpcParam["excludeGroupRewardCheck"] = sol::property([](NpcParam &param) -> uint8_t { return param.excludeGroupRewardCheck; }, [](NpcParam &param, uint8_t value) { param.excludeGroupRewardCheck = value; });
        utNpcParam["enableAILockDmyPoly_212"] = sol::property([](NpcParam &param) -> uint8_t { return param.enableAILockDmyPoly_212; }, [](NpcParam &param, uint8_t value) { param.enableAILockDmyPoly_212 = value; });
        utNpcParam["enableAILockDmyPoly_213"] = sol::property([](NpcParam &param) -> uint8_t { return param.enableAILockDmyPoly_213; }, [](NpcParam &param, uint8_t value) { param.enableAILockDmyPoly_213 = value; });
        utNpcParam["enableAILockDmyPoly_214"] = sol::property([](NpcParam &param) -> uint8_t { return param.enableAILockDmyPoly_214; }, [](NpcParam &param, uint8_t value) { param.enableAILockDmyPoly_214 = value; });
        utNpcParam["disableActivateOpen_xb1"] = sol::property([](NpcParam &param) -> uint8_t { return param.disableActivateOpen_xb1; }, [](NpcParam &param, uint8_t value) { param.disableActivateOpen_xb1 = value; });
        utNpcParam["disableActivateLegacy_xb1"] = sol::property([](NpcParam &param) -> uint8_t { return param.disableActivateLegacy_xb1; }, [](NpcParam &param, uint8_t value) { param.disableActivateLegacy_xb1 = value; });
        utNpcParam["estusFlaskRecoveryParamId"] = &NpcParam::estusFlaskRecoveryParamId;
        utNpcParam["roleNameId"] = &NpcParam::roleNameId;
        utNpcParam["estusFlaskLotPoint"] = &NpcParam::estusFlaskLotPoint;
        utNpcParam["hpEstusFlaskLotPoint"] = &NpcParam::hpEstusFlaskLotPoint;
        utNpcParam["mpEstusFlaskLotPoint"] = &NpcParam::mpEstusFlaskLotPoint;
        utNpcParam["estusFlaskRecovery_failedLotPointAdd"] = &NpcParam::estusFlaskRecovery_failedLotPointAdd;
        utNpcParam["hpEstusFlaskRecovery_failedLotPointAdd"] = &NpcParam::hpEstusFlaskRecovery_failedLotPointAdd;
        utNpcParam["mpEstusFlaskRecovery_failedLotPointAdd"] = &NpcParam::mpEstusFlaskRecovery_failedLotPointAdd;
        utNpcParam["WanderGhostPhantomId"] = &NpcParam::WanderGhostPhantomId;
        utNpcParam["hearingHeadSize"] = &NpcParam::hearingHeadSize;
        utNpcParam["SoundBankId"] = &NpcParam::SoundBankId;
        utNpcParam["forwardUndulationLimit"] = &NpcParam::forwardUndulationLimit;
        utNpcParam["sideUndulationLimit"] = &NpcParam::sideUndulationLimit;
        utNpcParam["deactiveMoveSpeed"] = &NpcParam::deactiveMoveSpeed;
        utNpcParam["deactiveMoveDist"] = &NpcParam::deactiveMoveDist;
        utNpcParam["enableSoundObjDist"] = &NpcParam::enableSoundObjDist;
        utNpcParam["undulationCorrectGain"] = &NpcParam::undulationCorrectGain;
        utNpcParam["autoFootEffectDecalBaseId2"] = &NpcParam::autoFootEffectDecalBaseId2;
        utNpcParam["autoFootEffectDecalBaseId3"] = &NpcParam::autoFootEffectDecalBaseId3;
        utNpcParam["RetargetReferenceChrId"] = &NpcParam::RetargetReferenceChrId;
        utNpcParam["SfxResBankId"] = &NpcParam::SfxResBankId;
        utNpcParam["updateActivatePriolity"] = &NpcParam::updateActivatePriolity;
        utNpcParam["chrNavimeshFlag_Alive"] = &NpcParam::chrNavimeshFlag_Alive;
        utNpcParam["chrNavimeshFlag_Dead"] = &NpcParam::chrNavimeshFlag_Dead;
        utNpcParam["isConsideredUndead"] = &NpcParam::isConsideredUndead;
        utNpcParam["wheelRotType"] = &NpcParam::wheelRotType;
        utNpcParam["wheelRotRadius"] = &NpcParam::wheelRotRadius;
        utNpcParam["retargetMoveRate"] = &NpcParam::retargetMoveRate;
        utNpcParam["ladderWarpOffset"] = &NpcParam::ladderWarpOffset;
        utNpcParam["loadAssetId"] = &NpcParam::loadAssetId;
        utNpcParam["overlapCameraDmypolyId"] = &NpcParam::overlapCameraDmypolyId;
        utNpcParam["residentMaterialExParamId00"] = &NpcParam::residentMaterialExParamId00;
        utNpcParam["residentMaterialExParamId01"] = &NpcParam::residentMaterialExParamId01;
        utNpcParam["residentMaterialExParamId02"] = &NpcParam::residentMaterialExParamId02;
        utNpcParam["residentMaterialExParamId03"] = &NpcParam::residentMaterialExParamId03;
        utNpcParam["residentMaterialExParamId04"] = &NpcParam::residentMaterialExParamId04;
        utNpcParam["sleepCollectorItemLotId_enemy"] = &NpcParam::sleepCollectorItemLotId_enemy;
        utNpcParam["sleepCollectorItemLotId_map"] = &NpcParam::sleepCollectorItemLotId_map;
        utNpcParam["footIkErrorOnGain"] = &NpcParam::footIkErrorOnGain;
        utNpcParam["footIkErrorOffGain"] = &NpcParam::footIkErrorOffGain;
        utNpcParam["SoundAddBankId"] = &NpcParam::SoundAddBankId;
        utNpcParam["materialVariationValue"] = &NpcParam::materialVariationValue;
        utNpcParam["materialVariationValue_Weak"] = &NpcParam::materialVariationValue_Weak;
        utNpcParam["superArmorDurability"] = &NpcParam::superArmorDurability;
        utNpcParam["saRecoveryRate"] = &NpcParam::saRecoveryRate;
        utNpcParam["saGuardCutRate"] = &NpcParam::saGuardCutRate;
        utNpcParam["resistCorrectId_blood"] = &NpcParam::resistCorrectId_blood;
        utNpcParam["resistCorrectId_curse"] = &NpcParam::resistCorrectId_curse;
        utNpcParam["resistCorrectId_freeze"] = &NpcParam::resistCorrectId_freeze;
        utNpcParam["resistCorrectId_sleep"] = &NpcParam::resistCorrectId_sleep;
        utNpcParam["resistCorrectId_madness"] = &NpcParam::resistCorrectId_madness;
        utNpcParam["chrDeadTutorialFlagId"] = &NpcParam::chrDeadTutorialFlagId;
        utNpcParam["stepDispInterpolateTime"] = &NpcParam::stepDispInterpolateTime;
        utNpcParam["stepDispInterpolateTriggerValue"] = &NpcParam::stepDispInterpolateTriggerValue;
        utNpcParam["lockScoreOffset"] = &NpcParam::lockScoreOffset;
        utNpcParam["dlcGameClearSpEffectID"] = &NpcParam::dlcGameClearSpEffectID;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<NpcParam>>(state, L"NpcParam");
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"behaviorVariationId", false},
            {"resistCorrectId_poison", false},
            {"nameId", false},
            {"turnVellocity", false},
            {"hitHeight", false},
            {"hitRadius", false},
            {"weight", false},
            {"hitYOffset", false},
            {"hp", false},
            {"mp", false},
            {"getSoul", false},
            {"itemLotId_enemy", false},
            {"itemLotId_map", false},
            {"maxAnkleRollAngle", false},
            {"chrHitGroupAndNavimesh", false},
            {"faceIconId", false},
            {"deactivateDist", false},
            {"chrActivateConditionParamId", false},
            {"footIkErrorHeightLimit", false},
            {"humanityLotId", false},
            {"spEffectID0", false},
            {"spEffectID1", false},
            {"spEffectID2", false},
            {"spEffectID3", false},
            {"spEffectID4", false},
            {"spEffectID5", false},
            {"spEffectID6", false},
            {"spEffectID7", false},
            {"GameClearSpEffectID", false},
            {"physGuardCutRate", false},
            {"magGuardCutRate", false},
            {"fireGuardCutRate", false},
            {"thunGuardCutRate", false},
            {"animIdOffset", false},
            {"lockGazePoint0", false},
            {"lockGazePoint1", false},
            {"lockGazePoint2", false},
            {"lockGazePoint3", false},
            {"lockGazePoint4", false},
            {"lockGazePoint5", false},
            {"networkWarpDist", false},
            {"dbgBehaviorR1", false},
            {"dbgBehaviorL1", false},
            {"dbgBehaviorR2", false},
            {"dbgBehaviorL2", false},
            {"dbgBehaviorRL", false},
            {"dbgBehaviorRR", false},
            {"dbgBehaviorRD", false},
            {"dbgBehaviorRU", false},
            {"dbgBehaviorLL", false},
            {"dbgBehaviorLR", false},
            {"dbgBehaviorLD", false},
            {"dbgBehaviorLU", false},
            {"animIdOffset2", false},
            {"partsDamageRate1", false},
            {"partsDamageRate2", false},
            {"partsDamageRate3", false},
            {"partsDamageRate4", false},
            {"partsDamageRate5", false},
            {"partsDamageRate6", false},
            {"partsDamageRate7", false},
            {"partsDamageRate8", false},
            {"weakPartsDamageRate", false},
            {"superArmorRecoverCorrection", false},
            {"superArmorBrakeKnockbackDist", false},
            {"stamina", false},
            {"staminaRecoverBaseVel", false},
            {"def_phys", false},
            {"def_slash", false},
            {"def_blow", false},
            {"def_thrust", false},
            {"def_mag", false},
            {"def_fire", false},
            {"def_thunder", false},
            {"defFlickPower", false},
            {"resist_poison", false},
            {"resist_desease", false},
            {"resist_blood", false},
            {"resist_curse", false},
            {"ghostModelId", false},
            {"normalChangeResouceId", false},
            {"guardAngle", false},
            {"slashGuardCutRate", false},
            {"blowGuardCutRate", false},
            {"thrustGuardCutRate", false},
            {"lockGazePoint6", false},
            {"normalChangeTexChrId", false},
            {"dropType", false},
            {"knockbackRate", false},
            {"knockbackParamId", false},
            {"fallDamageDump", false},
            {"staminaGuardDef", false},
            {"resist_sleep", false},
            {"resist_madness", false},
            {"sleepGuardResist", false},
            {"madnessGuardResist", false},
            {"lockGazePoint7", false},
            {"mpRecoverBaseVel", false},
            {"flickDamageCutRate", false},
            {"defaultLodParamId", false},
            {"drawType", false},
            {"npcType", false},
            {"teamType", false},
            {"moveType", false},
            {"lockDist", false},
            {"materialSe_Weak1", false},
            {"materialSfx_Weak1", false},
            {"partsDamageType", false},
            {"vowType", false},
            {"guardLevel", false},
            {"burnSfxType", false},
            {"poisonGuardResist", false},
            {"diseaseGuardResist", false},
            {"bloodGuardResist", false},
            {"curseGuardResist", false},
            {"parryAttack", false},
            {"parryDefence", false},
            {"sfxSize", false},
            {"pushOutCamRegionRadius", false},
            {"hitStopType", false},
            {"ladderEndChkOffsetTop", false},
            {"ladderEndChkOffsetLow", false},
            {"useRagdollCamHit", false},
            {"disableClothRigidHit", false},
            {"useUndulationAddAnimFB", false},
            {"isWeakA", false},
            {"isGhost", false},
            {"isNoDamageMotion", false},
            {"isUnduration", false},
            {"isChangeWanderGhost", false},
            {"modelDispMask0", false},
            {"modelDispMask1", false},
            {"modelDispMask2", false},
            {"modelDispMask3", false},
            {"modelDispMask4", false},
            {"modelDispMask5", false},
            {"modelDispMask6", false},
            {"modelDispMask7", false},
            {"modelDispMask8", false},
            {"modelDispMask9", false},
            {"modelDispMask10", false},
            {"modelDispMask11", false},
            {"modelDispMask12", false},
            {"modelDispMask13", false},
            {"modelDispMask14", false},
            {"modelDispMask15", false},
            {"isEnableNeckTurn", false},
            {"disableRespawn", false},
            {"isMoveAnimWait", false},
            {"isCrowd", false},
            {"isWeakB", false},
            {"isWeakC", false},
            {"isWeakD", false},
            {"doesAlwaysUseSpecialTurn", false},
            {"isRideAtkTarget", false},
            {"isEnableStepDispInterpolate", false},
            {"isStealthTarget", false},
            {"disableInitializeDead", false},
            {"isHitRumble", false},
            {"isSmoothTurn", false},
            {"isWeakE", false},
            {"isWeakF", false},
            {"modelDispMask16", false},
            {"modelDispMask17", false},
            {"modelDispMask18", false},
            {"modelDispMask19", false},
            {"modelDispMask20", false},
            {"modelDispMask21", false},
            {"modelDispMask22", false},
            {"modelDispMask23", false},
            {"modelDispMask24", false},
            {"modelDispMask25", false},
            {"modelDispMask26", false},
            {"modelDispMask27", false},
            {"modelDispMask28", false},
            {"modelDispMask29", false},
            {"modelDispMask30", false},
            {"modelDispMask31", false},
            {"itemSearchRadius", false},
            {"chrHitHeight", false},
            {"chrHitRadius", false},
            {"specialTurnType", false},
            {"isSoulGetByBoss", false},
            {"isBulletOwner_byObject", false},
            {"isUseLowHitFootIk", false},
            {"isCalculatePvPDamage", false},
            {"isHostSyncChr", false},
            {"isSkipWeakDamageAnim", false},
            {"isKeepHitOnRide", false},
            {"isSpCollide", false},
            {"def_dark", false},
            {"threatLv", false},
            {"specialTurnDistanceThreshold", false},
            {"autoFootEffectSfxId", false},
            {"materialSe1", false},
            {"materialSfx1", false},
            {"materialSe_Weak2", false},
            {"materialSfx_Weak2", false},
            {"materialSe2", false},
            {"materialSfx2", false},
            {"spEffectID8", false},
            {"spEffectID9", false},
            {"spEffectID10", false},
            {"spEffectID11", false},
            {"spEffectID12", false},
            {"spEffectID13", false},
            {"spEffectID14", false},
            {"spEffectID15", false},
            {"autoFootEffectDecalBaseId1", false},
            {"toughness", false},
            {"toughnessRecoverCorrection", false},
            {"neutralDamageCutRate", false},
            {"slashDamageCutRate", false},
            {"blowDamageCutRate", false},
            {"thrustDamageCutRate", false},
            {"magicDamageCutRate", false},
            {"fireDamageCutRate", false},
            {"thunderDamageCutRate", false},
            {"darkDamageCutRate", false},
            {"darkGuardCutRate", false},
            {"clothUpdateOffset", false},
            {"npcPlayerWeightType", false},
            {"normalChangeModelId", false},
            {"normalChangeAnimChrId", false},
            {"paintRenderTargetSize", false},
            {"resistCorrectId_disease", false},
            {"phantomShaderId", false},
            {"multiPlayCorrectionParamId", false},
            {"maxAnklePitchAngle", false},
            {"resist_freeze", false},
            {"freezeGuardResist", false},
            {"hpBurnDamageRate", false},
            {"lockCameraParamId", false},
            {"spEffectID16", false},
            {"spEffectID17", false},
            {"spEffectID18", false},
            {"spEffectID19", false},
            {"spEffectID20", false},
            {"spEffectID21", false},
            {"spEffectID22", false},
            {"spEffectID23", false},
            {"spEffectID24", false},
            {"spEffectID25", false},
            {"spEffectID26", false},
            {"spEffectID27", false},
            {"spEffectID28", false},
            {"spEffectID29", false},
            {"spEffectID30", false},
            {"spEffectID31", false},
            {"disableLockOnAng", false},
            {"clothOffLodLevel", false},
            {"isUseFootIKNormalByUnduration", false},
            {"attachHitInitializeDead", false},
            {"excludeGroupRewardCheck", false},
            {"enableAILockDmyPoly_212", false},
            {"enableAILockDmyPoly_213", false},
            {"enableAILockDmyPoly_214", false},
            {"disableActivateOpen_xb1", false},
            {"disableActivateLegacy_xb1", false},
            {"estusFlaskRecoveryParamId", false},
            {"roleNameId", false},
            {"estusFlaskLotPoint", false},
            {"hpEstusFlaskLotPoint", false},
            {"mpEstusFlaskLotPoint", false},
            {"estusFlaskRecovery_failedLotPointAdd", false},
            {"hpEstusFlaskRecovery_failedLotPointAdd", false},
            {"mpEstusFlaskRecovery_failedLotPointAdd", false},
            {"WanderGhostPhantomId", false},
            {"hearingHeadSize", false},
            {"SoundBankId", false},
            {"forwardUndulationLimit", false},
            {"sideUndulationLimit", false},
            {"deactiveMoveSpeed", false},
            {"deactiveMoveDist", false},
            {"enableSoundObjDist", false},
            {"undulationCorrectGain", false},
            {"autoFootEffectDecalBaseId2", false},
            {"autoFootEffectDecalBaseId3", false},
            {"RetargetReferenceChrId", false},
            {"SfxResBankId", false},
            {"updateActivatePriolity", false},
            {"chrNavimeshFlag_Alive", false},
            {"chrNavimeshFlag_Dead", false},
            {"isConsideredUndead", false},
            {"wheelRotType", false},
            {"wheelRotRadius", false},
            {"retargetMoveRate", false},
            {"ladderWarpOffset", false},
            {"loadAssetId", false},
            {"overlapCameraDmypolyId", false},
            {"residentMaterialExParamId00", false},
            {"residentMaterialExParamId01", false},
            {"residentMaterialExParamId02", false},
            {"residentMaterialExParamId03", false},
            {"residentMaterialExParamId04", false},
            {"sleepCollectorItemLotId_enemy", false},
            {"sleepCollectorItemLotId_map", false},
            {"footIkErrorOnGain", false},
            {"footIkErrorOffGain", false},
            {"SoundAddBankId", false},
            {"materialVariationValue", false},
            {"materialVariationValue_Weak", false},
            {"superArmorDurability", false},
            {"saRecoveryRate", false},
            {"saGuardCutRate", false},
            {"resistCorrectId_blood", false},
            {"resistCorrectId_curse", false},
            {"resistCorrectId_freeze", false},
            {"resistCorrectId_sleep", false},
            {"resistCorrectId_madness", false},
            {"chrDeadTutorialFlagId", false},
            {"stepDispInterpolateTime", false},
            {"stepDispInterpolateTriggerValue", false},
            {"lockScoreOffset", false},
            {"dlcGameClearSpEffectID", false},
        });
        return indexer;
    };
    paramsTable["NpcParam"] = tableLoader;
}

template<> void ParamTableIndexer<NpcParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,behaviorVariationId,resistCorrectId_poison,nameId,turnVellocity,hitHeight,hitRadius,weight,hitYOffset,hp,mp,getSoul,itemLotId_enemy,itemLotId_map,maxAnkleRollAngle,chrHitGroupAndNavimesh,faceIconId,deactivateDist,chrActivateConditionParamId,footIkErrorHeightLimit,humanityLotId,spEffectID0,spEffectID1,spEffectID2,spEffectID3,spEffectID4,spEffectID5,spEffectID6,spEffectID7,GameClearSpEffectID,physGuardCutRate,magGuardCutRate,fireGuardCutRate,thunGuardCutRate,animIdOffset,lockGazePoint0,lockGazePoint1,lockGazePoint2,lockGazePoint3,lockGazePoint4,lockGazePoint5,networkWarpDist,dbgBehaviorR1,dbgBehaviorL1,dbgBehaviorR2,dbgBehaviorL2,dbgBehaviorRL,dbgBehaviorRR,dbgBehaviorRD,dbgBehaviorRU,dbgBehaviorLL,dbgBehaviorLR,dbgBehaviorLD,dbgBehaviorLU,animIdOffset2,partsDamageRate1,partsDamageRate2,partsDamageRate3,partsDamageRate4,partsDamageRate5,partsDamageRate6,partsDamageRate7,partsDamageRate8,weakPartsDamageRate,superArmorRecoverCorrection,superArmorBrakeKnockbackDist,stamina,staminaRecoverBaseVel,def_phys,def_slash,def_blow,def_thrust,def_mag,def_fire,def_thunder,defFlickPower,resist_poison,resist_desease,resist_blood,resist_curse,ghostModelId,normalChangeResouceId,guardAngle,slashGuardCutRate,blowGuardCutRate,thrustGuardCutRate,lockGazePoint6,normalChangeTexChrId,dropType,knockbackRate,knockbackParamId,fallDamageDump,staminaGuardDef,resist_sleep,resist_madness,sleepGuardResist,madnessGuardResist,lockGazePoint7,mpRecoverBaseVel,flickDamageCutRate,defaultLodParamId,drawType,npcType,teamType,moveType,lockDist,materialSe_Weak1,materialSfx_Weak1,partsDamageType,vowType,guardLevel,burnSfxType,poisonGuardResist,diseaseGuardResist,bloodGuardResist,curseGuardResist,parryAttack,parryDefence,sfxSize,pushOutCamRegionRadius,hitStopType,ladderEndChkOffsetTop,ladderEndChkOffsetLow,useRagdollCamHit,disableClothRigidHit,useUndulationAddAnimFB,isWeakA,isGhost,isNoDamageMotion,isUnduration,isChangeWanderGhost,modelDispMask0,modelDispMask1,modelDispMask2,modelDispMask3,modelDispMask4,modelDispMask5,modelDispMask6,modelDispMask7,modelDispMask8,modelDispMask9,modelDispMask10,modelDispMask11,modelDispMask12,modelDispMask13,modelDispMask14,modelDispMask15,isEnableNeckTurn,disableRespawn,isMoveAnimWait,isCrowd,isWeakB,isWeakC,isWeakD,doesAlwaysUseSpecialTurn,isRideAtkTarget,isEnableStepDispInterpolate,isStealthTarget,disableInitializeDead,isHitRumble,isSmoothTurn,isWeakE,isWeakF,modelDispMask16,modelDispMask17,modelDispMask18,modelDispMask19,modelDispMask20,modelDispMask21,modelDispMask22,modelDispMask23,modelDispMask24,modelDispMask25,modelDispMask26,modelDispMask27,modelDispMask28,modelDispMask29,modelDispMask30,modelDispMask31,itemSearchRadius,chrHitHeight,chrHitRadius,specialTurnType,isSoulGetByBoss,isBulletOwner_byObject,isUseLowHitFootIk,isCalculatePvPDamage,isHostSyncChr,isSkipWeakDamageAnim,isKeepHitOnRide,isSpCollide,def_dark,threatLv,specialTurnDistanceThreshold,autoFootEffectSfxId,materialSe1,materialSfx1,materialSe_Weak2,materialSfx_Weak2,materialSe2,materialSfx2,spEffectID8,spEffectID9,spEffectID10,spEffectID11,spEffectID12,spEffectID13,spEffectID14,spEffectID15,autoFootEffectDecalBaseId1,toughness,toughnessRecoverCorrection,neutralDamageCutRate,slashDamageCutRate,blowDamageCutRate,thrustDamageCutRate,magicDamageCutRate,fireDamageCutRate,thunderDamageCutRate,darkDamageCutRate,darkGuardCutRate,clothUpdateOffset,npcPlayerWeightType,normalChangeModelId,normalChangeAnimChrId,paintRenderTargetSize,resistCorrectId_disease,phantomShaderId,multiPlayCorrectionParamId,maxAnklePitchAngle,resist_freeze,freezeGuardResist,hpBurnDamageRate,lockCameraParamId,spEffectID16,spEffectID17,spEffectID18,spEffectID19,spEffectID20,spEffectID21,spEffectID22,spEffectID23,spEffectID24,spEffectID25,spEffectID26,spEffectID27,spEffectID28,spEffectID29,spEffectID30,spEffectID31,disableLockOnAng,clothOffLodLevel,isUseFootIKNormalByUnduration,attachHitInitializeDead,excludeGroupRewardCheck,enableAILockDmyPoly_212,enableAILockDmyPoly_213,enableAILockDmyPoly_214,disableActivateOpen_xb1,disableActivateLegacy_xb1,estusFlaskRecoveryParamId,roleNameId,estusFlaskLotPoint,hpEstusFlaskLotPoint,mpEstusFlaskLotPoint,estusFlaskRecovery_failedLotPointAdd,hpEstusFlaskRecovery_failedLotPointAdd,mpEstusFlaskRecovery_failedLotPointAdd,WanderGhostPhantomId,hearingHeadSize,SoundBankId,forwardUndulationLimit,sideUndulationLimit,deactiveMoveSpeed,deactiveMoveDist,enableSoundObjDist,undulationCorrectGain,autoFootEffectDecalBaseId2,autoFootEffectDecalBaseId3,RetargetReferenceChrId,SfxResBankId,updateActivatePriolity,chrNavimeshFlag_Alive,chrNavimeshFlag_Dead,isConsideredUndead,wheelRotType,wheelRotRadius,retargetMoveRate,ladderWarpOffset,loadAssetId,overlapCameraDmypolyId,residentMaterialExParamId00,residentMaterialExParamId01,residentMaterialExParamId02,residentMaterialExParamId03,residentMaterialExParamId04,sleepCollectorItemLotId_enemy,sleepCollectorItemLotId_map,footIkErrorOnGain,footIkErrorOffGain,SoundAddBankId,materialVariationValue,materialVariationValue_Weak,superArmorDurability,saRecoveryRate,saGuardCutRate,resistCorrectId_blood,resistCorrectId_curse,resistCorrectId_freeze,resistCorrectId_sleep,resistCorrectId_madness,chrDeadTutorialFlagId,stepDispInterpolateTime,stepDispInterpolateTriggerValue,lockScoreOffset,dlcGameClearSpEffectID\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%d,%d,%d,%g,%g,%g,%u,%g,%u,%u,%u,%d,%d,%g,%u,%u,%d,%u,%g,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%g,%g,%g,%g,%d,%d,%d,%d,%d,%d,%d,%g,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%u,%u,%u,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%d,%d,%d,%u,%u,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%d,%u,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%g,%g,%g,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%g,%d,%u,%u,%u,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%d,%u,%d,%d,%u,%d,%d,%d,%g,%u,%d,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%g,%d,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%u,%u,%u,%u,%u,%u,%d,%g,%d,%u,%u,%g,%g,%g,%g,%d,%d,%d,%d,%g,%u,%u,%u,%u,%g,%g,%g,%d,%d,%d,%d,%d,%d,%d,%d,%d,%g,%g,%d,%u,%u,%g,%g,%g,%d,%d,%d,%d,%d,%u,%g,%g,%g,%d\n",
            this->paramId(i),
            param->disableParam_NT,
            param->behaviorVariationId,
            param->resistCorrectId_poison,
            param->nameId,
            param->turnVellocity,
            param->hitHeight,
            param->hitRadius,
            param->weight,
            param->hitYOffset,
            param->hp,
            param->mp,
            param->getSoul,
            param->itemLotId_enemy,
            param->itemLotId_map,
            param->maxAnkleRollAngle,
            param->chrHitGroupAndNavimesh,
            param->faceIconId,
            param->deactivateDist,
            param->chrActivateConditionParamId,
            param->footIkErrorHeightLimit,
            param->humanityLotId,
            param->spEffectID0,
            param->spEffectID1,
            param->spEffectID2,
            param->spEffectID3,
            param->spEffectID4,
            param->spEffectID5,
            param->spEffectID6,
            param->spEffectID7,
            param->GameClearSpEffectID,
            param->physGuardCutRate,
            param->magGuardCutRate,
            param->fireGuardCutRate,
            param->thunGuardCutRate,
            param->animIdOffset,
            param->lockGazePoint0,
            param->lockGazePoint1,
            param->lockGazePoint2,
            param->lockGazePoint3,
            param->lockGazePoint4,
            param->lockGazePoint5,
            param->networkWarpDist,
            param->dbgBehaviorR1,
            param->dbgBehaviorL1,
            param->dbgBehaviorR2,
            param->dbgBehaviorL2,
            param->dbgBehaviorRL,
            param->dbgBehaviorRR,
            param->dbgBehaviorRD,
            param->dbgBehaviorRU,
            param->dbgBehaviorLL,
            param->dbgBehaviorLR,
            param->dbgBehaviorLD,
            param->dbgBehaviorLU,
            param->animIdOffset2,
            param->partsDamageRate1,
            param->partsDamageRate2,
            param->partsDamageRate3,
            param->partsDamageRate4,
            param->partsDamageRate5,
            param->partsDamageRate6,
            param->partsDamageRate7,
            param->partsDamageRate8,
            param->weakPartsDamageRate,
            param->superArmorRecoverCorrection,
            param->superArmorBrakeKnockbackDist,
            param->stamina,
            param->staminaRecoverBaseVel,
            param->def_phys,
            param->def_slash,
            param->def_blow,
            param->def_thrust,
            param->def_mag,
            param->def_fire,
            param->def_thunder,
            param->defFlickPower,
            param->resist_poison,
            param->resist_desease,
            param->resist_blood,
            param->resist_curse,
            param->ghostModelId,
            param->normalChangeResouceId,
            param->guardAngle,
            param->slashGuardCutRate,
            param->blowGuardCutRate,
            param->thrustGuardCutRate,
            param->lockGazePoint6,
            param->normalChangeTexChrId,
            param->dropType,
            param->knockbackRate,
            param->knockbackParamId,
            param->fallDamageDump,
            param->staminaGuardDef,
            param->resist_sleep,
            param->resist_madness,
            param->sleepGuardResist,
            param->madnessGuardResist,
            param->lockGazePoint7,
            param->mpRecoverBaseVel,
            param->flickDamageCutRate,
            param->defaultLodParamId,
            param->drawType,
            param->npcType,
            param->teamType,
            param->moveType,
            param->lockDist,
            param->materialSe_Weak1,
            param->materialSfx_Weak1,
            param->partsDamageType,
            param->vowType,
            param->guardLevel,
            param->burnSfxType,
            param->poisonGuardResist,
            param->diseaseGuardResist,
            param->bloodGuardResist,
            param->curseGuardResist,
            param->parryAttack,
            param->parryDefence,
            param->sfxSize,
            param->pushOutCamRegionRadius,
            param->hitStopType,
            param->ladderEndChkOffsetTop,
            param->ladderEndChkOffsetLow,
            param->useRagdollCamHit,
            param->disableClothRigidHit,
            param->useUndulationAddAnimFB,
            param->isWeakA,
            param->isGhost,
            param->isNoDamageMotion,
            param->isUnduration,
            param->isChangeWanderGhost,
            param->modelDispMask0,
            param->modelDispMask1,
            param->modelDispMask2,
            param->modelDispMask3,
            param->modelDispMask4,
            param->modelDispMask5,
            param->modelDispMask6,
            param->modelDispMask7,
            param->modelDispMask8,
            param->modelDispMask9,
            param->modelDispMask10,
            param->modelDispMask11,
            param->modelDispMask12,
            param->modelDispMask13,
            param->modelDispMask14,
            param->modelDispMask15,
            param->isEnableNeckTurn,
            param->disableRespawn,
            param->isMoveAnimWait,
            param->isCrowd,
            param->isWeakB,
            param->isWeakC,
            param->isWeakD,
            param->doesAlwaysUseSpecialTurn,
            param->isRideAtkTarget,
            param->isEnableStepDispInterpolate,
            param->isStealthTarget,
            param->disableInitializeDead,
            param->isHitRumble,
            param->isSmoothTurn,
            param->isWeakE,
            param->isWeakF,
            param->modelDispMask16,
            param->modelDispMask17,
            param->modelDispMask18,
            param->modelDispMask19,
            param->modelDispMask20,
            param->modelDispMask21,
            param->modelDispMask22,
            param->modelDispMask23,
            param->modelDispMask24,
            param->modelDispMask25,
            param->modelDispMask26,
            param->modelDispMask27,
            param->modelDispMask28,
            param->modelDispMask29,
            param->modelDispMask30,
            param->modelDispMask31,
            param->itemSearchRadius,
            param->chrHitHeight,
            param->chrHitRadius,
            param->specialTurnType,
            param->isSoulGetByBoss,
            param->isBulletOwner_byObject,
            param->isUseLowHitFootIk,
            param->isCalculatePvPDamage,
            param->isHostSyncChr,
            param->isSkipWeakDamageAnim,
            param->isKeepHitOnRide,
            param->isSpCollide,
            param->def_dark,
            param->threatLv,
            param->specialTurnDistanceThreshold,
            param->autoFootEffectSfxId,
            param->materialSe1,
            param->materialSfx1,
            param->materialSe_Weak2,
            param->materialSfx_Weak2,
            param->materialSe2,
            param->materialSfx2,
            param->spEffectID8,
            param->spEffectID9,
            param->spEffectID10,
            param->spEffectID11,
            param->spEffectID12,
            param->spEffectID13,
            param->spEffectID14,
            param->spEffectID15,
            param->autoFootEffectDecalBaseId1,
            param->toughness,
            param->toughnessRecoverCorrection,
            param->neutralDamageCutRate,
            param->slashDamageCutRate,
            param->blowDamageCutRate,
            param->thrustDamageCutRate,
            param->magicDamageCutRate,
            param->fireDamageCutRate,
            param->thunderDamageCutRate,
            param->darkDamageCutRate,
            param->darkGuardCutRate,
            param->clothUpdateOffset,
            param->npcPlayerWeightType,
            param->normalChangeModelId,
            param->normalChangeAnimChrId,
            param->paintRenderTargetSize,
            param->resistCorrectId_disease,
            param->phantomShaderId,
            param->multiPlayCorrectionParamId,
            param->maxAnklePitchAngle,
            param->resist_freeze,
            param->freezeGuardResist,
            param->hpBurnDamageRate,
            param->lockCameraParamId,
            param->spEffectID16,
            param->spEffectID17,
            param->spEffectID18,
            param->spEffectID19,
            param->spEffectID20,
            param->spEffectID21,
            param->spEffectID22,
            param->spEffectID23,
            param->spEffectID24,
            param->spEffectID25,
            param->spEffectID26,
            param->spEffectID27,
            param->spEffectID28,
            param->spEffectID29,
            param->spEffectID30,
            param->spEffectID31,
            param->disableLockOnAng,
            param->clothOffLodLevel,
            param->isUseFootIKNormalByUnduration,
            param->attachHitInitializeDead,
            param->excludeGroupRewardCheck,
            param->enableAILockDmyPoly_212,
            param->enableAILockDmyPoly_213,
            param->enableAILockDmyPoly_214,
            param->disableActivateOpen_xb1,
            param->disableActivateLegacy_xb1,
            param->estusFlaskRecoveryParamId,
            param->roleNameId,
            param->estusFlaskLotPoint,
            param->hpEstusFlaskLotPoint,
            param->mpEstusFlaskLotPoint,
            param->estusFlaskRecovery_failedLotPointAdd,
            param->hpEstusFlaskRecovery_failedLotPointAdd,
            param->mpEstusFlaskRecovery_failedLotPointAdd,
            param->WanderGhostPhantomId,
            param->hearingHeadSize,
            param->SoundBankId,
            param->forwardUndulationLimit,
            param->sideUndulationLimit,
            param->deactiveMoveSpeed,
            param->deactiveMoveDist,
            param->enableSoundObjDist,
            param->undulationCorrectGain,
            param->autoFootEffectDecalBaseId2,
            param->autoFootEffectDecalBaseId3,
            param->RetargetReferenceChrId,
            param->SfxResBankId,
            param->updateActivatePriolity,
            param->chrNavimeshFlag_Alive,
            param->chrNavimeshFlag_Dead,
            param->isConsideredUndead,
            param->wheelRotType,
            param->wheelRotRadius,
            param->retargetMoveRate,
            param->ladderWarpOffset,
            param->loadAssetId,
            param->overlapCameraDmypolyId,
            param->residentMaterialExParamId00,
            param->residentMaterialExParamId01,
            param->residentMaterialExParamId02,
            param->residentMaterialExParamId03,
            param->residentMaterialExParamId04,
            param->sleepCollectorItemLotId_enemy,
            param->sleepCollectorItemLotId_map,
            param->footIkErrorOnGain,
            param->footIkErrorOffGain,
            param->SoundAddBankId,
            param->materialVariationValue,
            param->materialVariationValue_Weak,
            param->superArmorDurability,
            param->saRecoveryRate,
            param->saGuardCutRate,
            param->resistCorrectId_blood,
            param->resistCorrectId_curse,
            param->resistCorrectId_freeze,
            param->resistCorrectId_sleep,
            param->resistCorrectId_madness,
            param->chrDeadTutorialFlagId,
            param->stepDispInterpolateTime,
            param->stepDispInterpolateTriggerValue,
            param->lockScoreOffset,
            param->dlcGameClearSpEffectID
        );
    }
    fclose(f);
}

}
