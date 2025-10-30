#include "../luabindings.h"
#include "../defs/GameSystemCommonParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<GameSystemCommonParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerGameSystemCommonParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["GameSystemCommonParam"]; usertype) return;
        auto indexerGameSystemCommonParam = state->new_usertype<ParamTableIndexer<GameSystemCommonParam>>("GameSystemCommonParamTableIndexer");
        indexerGameSystemCommonParam["count"] = sol::property(&ParamTableIndexer<GameSystemCommonParam>::count);
        indexerGameSystemCommonParam["__index"] = &ParamTableIndexer<GameSystemCommonParam>::at;
        indexerGameSystemCommonParam["id"] = &ParamTableIndexer<GameSystemCommonParam>::paramId;
        indexerGameSystemCommonParam["get"] = &ParamTableIndexer<GameSystemCommonParam>::get;
        indexerGameSystemCommonParam["exportToCsv"] = &ParamTableIndexer<GameSystemCommonParam>::exportToCsv;
        indexerGameSystemCommonParam["importFromCsv"] = &ParamTableIndexer<GameSystemCommonParam>::importFromCsv;
        auto utGameSystemCommonParam = state->new_usertype<GameSystemCommonParam>("GameSystemCommonParam");
        utGameSystemCommonParam["baseToughnessRecoverTime"] = &GameSystemCommonParam::baseToughnessRecoverTime;
        utGameSystemCommonParam["chrEventTrun_byLeft90"] = &GameSystemCommonParam::chrEventTrun_byLeft90;
        utGameSystemCommonParam["chrEventTrun_byRight90"] = &GameSystemCommonParam::chrEventTrun_byRight90;
        utGameSystemCommonParam["chrEventTrun_byLeft180"] = &GameSystemCommonParam::chrEventTrun_byLeft180;
        utGameSystemCommonParam["chrEventTrun_byRight180"] = &GameSystemCommonParam::chrEventTrun_byRight180;
        utGameSystemCommonParam["chrEventTrun_90TurnStartAngle"] = &GameSystemCommonParam::chrEventTrun_90TurnStartAngle;
        utGameSystemCommonParam["chrEventTrun_180TurnStartAngle"] = &GameSystemCommonParam::chrEventTrun_180TurnStartAngle;
        utGameSystemCommonParam["stealthAtkDamageRate"] = &GameSystemCommonParam::stealthAtkDamageRate;
        utGameSystemCommonParam["flickDamageCutRateSuccessGurad"] = &GameSystemCommonParam::flickDamageCutRateSuccessGurad;
        utGameSystemCommonParam["npcTalkAnimBeginDiffAngle"] = &GameSystemCommonParam::npcTalkAnimBeginDiffAngle;
        utGameSystemCommonParam["npcTalkAnimEndDiffAngle"] = &GameSystemCommonParam::npcTalkAnimEndDiffAngle;
        utGameSystemCommonParam["sleepCollectorItemActionButtonParamId"] = &GameSystemCommonParam::sleepCollectorItemActionButtonParamId;
        utGameSystemCommonParam["allowUseBuddyItem_sfxInterval"] = &GameSystemCommonParam::allowUseBuddyItem_sfxInterval;
        utGameSystemCommonParam["allowUseBuddyItem_sfxDmyPolyId"] = &GameSystemCommonParam::allowUseBuddyItem_sfxDmyPolyId;
        utGameSystemCommonParam["allowUseBuddyItem_sfxDmyPolyId_horse"] = &GameSystemCommonParam::allowUseBuddyItem_sfxDmyPolyId_horse;
        utGameSystemCommonParam["allowUseBuddyItem_sfxId"] = &GameSystemCommonParam::allowUseBuddyItem_sfxId;
        utGameSystemCommonParam["onBuddySummon_inActivateRange_sfxInterval"] = &GameSystemCommonParam::onBuddySummon_inActivateRange_sfxInterval;
        utGameSystemCommonParam["onBuddySummon_inActivateRange_sfxDmyPolyId"] = &GameSystemCommonParam::onBuddySummon_inActivateRange_sfxDmyPolyId;
        utGameSystemCommonParam["onBuddySummon_inActivateRange_sfxDmyPolyId_horse"] = &GameSystemCommonParam::onBuddySummon_inActivateRange_sfxDmyPolyId_horse;
        utGameSystemCommonParam["onBuddySummon_inActivateRange_sfxId"] = &GameSystemCommonParam::onBuddySummon_inActivateRange_sfxId;
        utGameSystemCommonParam["onBuddySummon_inActivateRange_spEffectId_pc"] = &GameSystemCommonParam::onBuddySummon_inActivateRange_spEffectId_pc;
        utGameSystemCommonParam["onBuddySummon_inWarnRange_spEffectId_pc"] = &GameSystemCommonParam::onBuddySummon_inWarnRange_spEffectId_pc;
        utGameSystemCommonParam["onBuddySummon_atBuddyUnsummon_spEffectId_pc"] = &GameSystemCommonParam::onBuddySummon_atBuddyUnsummon_spEffectId_pc;
        utGameSystemCommonParam["onBuddySummon_inWarnRange_spEffectId_buddy"] = &GameSystemCommonParam::onBuddySummon_inWarnRange_spEffectId_buddy;
        utGameSystemCommonParam["morningIngameHour"] = &GameSystemCommonParam::morningIngameHour;
        utGameSystemCommonParam["morningIngameMinute"] = &GameSystemCommonParam::morningIngameMinute;
        utGameSystemCommonParam["morningIngameSecond"] = &GameSystemCommonParam::morningIngameSecond;
        utGameSystemCommonParam["noonIngameHour"] = &GameSystemCommonParam::noonIngameHour;
        utGameSystemCommonParam["noonIngameMinute"] = &GameSystemCommonParam::noonIngameMinute;
        utGameSystemCommonParam["noonIngameSecond"] = &GameSystemCommonParam::noonIngameSecond;
        utGameSystemCommonParam["nightIngameHour"] = &GameSystemCommonParam::nightIngameHour;
        utGameSystemCommonParam["nightIngameMinute"] = &GameSystemCommonParam::nightIngameMinute;
        utGameSystemCommonParam["nightIngameSecond"] = &GameSystemCommonParam::nightIngameSecond;
        utGameSystemCommonParam["aiSightRateStart_Morning_Hour"] = &GameSystemCommonParam::aiSightRateStart_Morning_Hour;
        utGameSystemCommonParam["aiSightRateStart_Morning_Minute"] = &GameSystemCommonParam::aiSightRateStart_Morning_Minute;
        utGameSystemCommonParam["aiSightRateStart_Noon_Hour"] = &GameSystemCommonParam::aiSightRateStart_Noon_Hour;
        utGameSystemCommonParam["aiSightRateStart_Noon_Minute"] = &GameSystemCommonParam::aiSightRateStart_Noon_Minute;
        utGameSystemCommonParam["aiSightRateStart_Evening_Hour"] = &GameSystemCommonParam::aiSightRateStart_Evening_Hour;
        utGameSystemCommonParam["aiSightRateStart_Evening_Minute"] = &GameSystemCommonParam::aiSightRateStart_Evening_Minute;
        utGameSystemCommonParam["aiSightRateStart_Night_Hour"] = &GameSystemCommonParam::aiSightRateStart_Night_Hour;
        utGameSystemCommonParam["aiSightRateStart_Night_Minute"] = &GameSystemCommonParam::aiSightRateStart_Night_Minute;
        utGameSystemCommonParam["aiSightRateStart_Midnight_Hour"] = &GameSystemCommonParam::aiSightRateStart_Midnight_Hour;
        utGameSystemCommonParam["aiSightRateStart_Midnight_Minute"] = &GameSystemCommonParam::aiSightRateStart_Midnight_Minute;
        utGameSystemCommonParam["saLargeDamageHitSfx_Threshold"] = &GameSystemCommonParam::saLargeDamageHitSfx_Threshold;
        utGameSystemCommonParam["saLargeDamageHitSfx_SfxId"] = &GameSystemCommonParam::saLargeDamageHitSfx_SfxId;
        utGameSystemCommonParam["signCreatableDistFromSafePos"] = &GameSystemCommonParam::signCreatableDistFromSafePos;
        utGameSystemCommonParam["guestResummonDist"] = &GameSystemCommonParam::guestResummonDist;
        utGameSystemCommonParam["guestLeavingMessageDistMax"] = &GameSystemCommonParam::guestLeavingMessageDistMax;
        utGameSystemCommonParam["guestLeavingMessageDistMin"] = &GameSystemCommonParam::guestLeavingMessageDistMin;
        utGameSystemCommonParam["guestLeaveSessionDist"] = &GameSystemCommonParam::guestLeaveSessionDist;
        utGameSystemCommonParam["retryPointAreaRadius"] = &GameSystemCommonParam::retryPointAreaRadius;
        utGameSystemCommonParam["sleepCollectorSpEffectId"] = &GameSystemCommonParam::sleepCollectorSpEffectId;
        utGameSystemCommonParam["recoverBelowMaxHpCompletionNoticeSpEffectId"] = &GameSystemCommonParam::recoverBelowMaxHpCompletionNoticeSpEffectId;
        utGameSystemCommonParam["estusFlaskRecovery_AbsorptionProductionSfxId_byHp"] = &GameSystemCommonParam::estusFlaskRecovery_AbsorptionProductionSfxId_byHp;
        utGameSystemCommonParam["estusFlaskRecovery_AbsorptionProductionSfxId_byMp"] = &GameSystemCommonParam::estusFlaskRecovery_AbsorptionProductionSfxId_byMp;
        utGameSystemCommonParam["respawnSpecialEffectActiveCheckerSpEffectId"] = &GameSystemCommonParam::respawnSpecialEffectActiveCheckerSpEffectId;
        utGameSystemCommonParam["onBuddySummon_inActivateRange_spEffectId_buddy"] = &GameSystemCommonParam::onBuddySummon_inActivateRange_spEffectId_buddy;
        utGameSystemCommonParam["estusFlaskRecovery_AddEstusTime"] = &GameSystemCommonParam::estusFlaskRecovery_AddEstusTime;
        utGameSystemCommonParam["defeatMultiModeEnemyOfSoulCorrectRate_byHost"] = &GameSystemCommonParam::defeatMultiModeEnemyOfSoulCorrectRate_byHost;
        utGameSystemCommonParam["defeatMultiModeEnemyOfSoulCorrectRate_byTeamGhost"] = &GameSystemCommonParam::defeatMultiModeEnemyOfSoulCorrectRate_byTeamGhost;
        utGameSystemCommonParam["defeatMultiModeBossOfSoulCorrectRate_byHost"] = &GameSystemCommonParam::defeatMultiModeBossOfSoulCorrectRate_byHost;
        utGameSystemCommonParam["defeatMultiModeBossOfSoulCorrectRate_byTeamGhost"] = &GameSystemCommonParam::defeatMultiModeBossOfSoulCorrectRate_byTeamGhost;
        utGameSystemCommonParam["enemyHpGaugeScreenOffset_byUp"] = &GameSystemCommonParam::enemyHpGaugeScreenOffset_byUp;
        utGameSystemCommonParam["playRegionCollectDist"] = &GameSystemCommonParam::playRegionCollectDist;
        utGameSystemCommonParam["enemyDetectionSpEffect_ShootBulletDummypolyId"] = &GameSystemCommonParam::enemyDetectionSpEffect_ShootBulletDummypolyId;
        utGameSystemCommonParam["bigRuneGreaterDemonBreakInGoodsNum"] = &GameSystemCommonParam::bigRuneGreaterDemonBreakInGoodsNum;
        utGameSystemCommonParam["bigRuneGreaterDemonBreakInGoodsId"] = &GameSystemCommonParam::bigRuneGreaterDemonBreakInGoodsId;
        utGameSystemCommonParam["rideJumpRegionDefaultSfxId"] = &GameSystemCommonParam::rideJumpRegionDefaultSfxId;
        utGameSystemCommonParam["saAttackRate_forVsRideAtk"] = &GameSystemCommonParam::saAttackRate_forVsRideAtk;
        utGameSystemCommonParam["enemySpEffectIdAfterSleepCollectorItemLot"] = &GameSystemCommonParam::enemySpEffectIdAfterSleepCollectorItemLot;
        utGameSystemCommonParam["afterEndingMapUid"] = &GameSystemCommonParam::afterEndingMapUid;
        utGameSystemCommonParam["afterEndingReturnPointEntityId"] = &GameSystemCommonParam::afterEndingReturnPointEntityId;
        utGameSystemCommonParam["enemyDetectionSpEffect_BulletId_byCoopRing_RedHunter"] = &GameSystemCommonParam::enemyDetectionSpEffect_BulletId_byCoopRing_RedHunter;
        utGameSystemCommonParam["enemyDetectionSpEffect_BulletId_byInvadeOrb_None"] = &GameSystemCommonParam::enemyDetectionSpEffect_BulletId_byInvadeOrb_None;
        utGameSystemCommonParam["tutorialFlagOnAccessDistView"] = &GameSystemCommonParam::tutorialFlagOnAccessDistView;
        utGameSystemCommonParam["tutorialFlagOnAccessRetryPoint"] = &GameSystemCommonParam::tutorialFlagOnAccessRetryPoint;
        utGameSystemCommonParam["tutorialFlagOnGetGroupReward"] = &GameSystemCommonParam::tutorialFlagOnGetGroupReward;
        utGameSystemCommonParam["tutorialFlagOnEnterRideJumpRegion"] = &GameSystemCommonParam::tutorialFlagOnEnterRideJumpRegion;
        utGameSystemCommonParam["tutorialCheckRideJumpRegionExpandRange"] = &GameSystemCommonParam::tutorialCheckRideJumpRegionExpandRange;
        utGameSystemCommonParam["retryPointActivatedPcAnimId"] = &GameSystemCommonParam::retryPointActivatedPcAnimId;
        utGameSystemCommonParam["retryPointActivatedDialogDelayTime"] = &GameSystemCommonParam::retryPointActivatedDialogDelayTime;
        utGameSystemCommonParam["retryPointActivatedDialogTextId"] = &GameSystemCommonParam::retryPointActivatedDialogTextId;
        utGameSystemCommonParam["signPuddleOpenPcAnimId"] = &GameSystemCommonParam::signPuddleOpenPcAnimId;
        utGameSystemCommonParam["signPuddleOpenDialogDelayTime"] = &GameSystemCommonParam::signPuddleOpenDialogDelayTime;
        utGameSystemCommonParam["activityOfDeadSpEffect_BulletId"] = &GameSystemCommonParam::activityOfDeadSpEffect_BulletId;
        utGameSystemCommonParam["activityOfDeadSpEffect_ShootBulletDummypolyId"] = &GameSystemCommonParam::activityOfDeadSpEffect_ShootBulletDummypolyId;
        utGameSystemCommonParam["activityOfDeadSpEffect_DeadFadeOutTime"] = &GameSystemCommonParam::activityOfDeadSpEffect_DeadFadeOutTime;
        utGameSystemCommonParam["ignorNetStateSyncTime_ForThrow"] = &GameSystemCommonParam::ignorNetStateSyncTime_ForThrow;
        utGameSystemCommonParam["netPenaltyPointLanDisconnect"] = &GameSystemCommonParam::netPenaltyPointLanDisconnect;
        utGameSystemCommonParam["netPenaltyPointProfileSignout"] = &GameSystemCommonParam::netPenaltyPointProfileSignout;
        utGameSystemCommonParam["netPenaltyPointReboot"] = &GameSystemCommonParam::netPenaltyPointReboot;
        utGameSystemCommonParam["netPnaltyPointSuspend"] = &GameSystemCommonParam::netPnaltyPointSuspend;
        utGameSystemCommonParam["netPenaltyForgiveItemLimitTime"] = &GameSystemCommonParam::netPenaltyForgiveItemLimitTime;
        utGameSystemCommonParam["netPenaltyPointThreshold"] = &GameSystemCommonParam::netPenaltyPointThreshold;
        utGameSystemCommonParam["uncontrolledMoveThresholdTime"] = &GameSystemCommonParam::uncontrolledMoveThresholdTime;
        utGameSystemCommonParam["enemyDetectionSpEffect_BulletId_byNpcEnemy"] = &GameSystemCommonParam::enemyDetectionSpEffect_BulletId_byNpcEnemy;
        utGameSystemCommonParam["activityOfDeadTargetSearchSpEffect_OnHitSpEffect"] = &GameSystemCommonParam::activityOfDeadTargetSearchSpEffect_OnHitSpEffect;
        utGameSystemCommonParam["activityOfDeadTargetSearchSpEffect_MaxLength"] = &GameSystemCommonParam::activityOfDeadTargetSearchSpEffect_MaxLength;
        utGameSystemCommonParam["sightRangeLowerPromiseRate"] = &GameSystemCommonParam::sightRangeLowerPromiseRate;
        utGameSystemCommonParam["saLargeDamageHitSfx_MinDamage"] = &GameSystemCommonParam::saLargeDamageHitSfx_MinDamage;
        utGameSystemCommonParam["saLargeDamageHitSfx_ForceDamage"] = &GameSystemCommonParam::saLargeDamageHitSfx_ForceDamage;
        utGameSystemCommonParam["soloBreakInMaxPoint"] = &GameSystemCommonParam::soloBreakInMaxPoint;
        utGameSystemCommonParam["npcTalkTimeOutThreshold"] = &GameSystemCommonParam::npcTalkTimeOutThreshold;
        utGameSystemCommonParam["sendPlayLogIntervalTime"] = &GameSystemCommonParam::sendPlayLogIntervalTime;
        utGameSystemCommonParam["item370_MaxSfxNum"] = &GameSystemCommonParam::item370_MaxSfxNum;
        utGameSystemCommonParam["chrActivateDist_forLeavePC"] = &GameSystemCommonParam::chrActivateDist_forLeavePC;
        utGameSystemCommonParam["summonDataCoopMatchingLevelUpperAbs"] = &GameSystemCommonParam::summonDataCoopMatchingLevelUpperAbs;
        utGameSystemCommonParam["summonDataCoopMatchingLevelUpperRel"] = &GameSystemCommonParam::summonDataCoopMatchingLevelUpperRel;
        utGameSystemCommonParam["summonDataCoopMatchingWepLevelMul"] = &GameSystemCommonParam::summonDataCoopMatchingWepLevelMul;
        utGameSystemCommonParam["pickUpBerserkerSignSpEffectBulletId"] = &GameSystemCommonParam::pickUpBerserkerSignSpEffectBulletId;
        utGameSystemCommonParam["succeedBerserkerSelfKillingEffectId"] = &GameSystemCommonParam::succeedBerserkerSelfKillingEffectId;
        utGameSystemCommonParam["machingLevelWhiteSignUpperRel"] = &GameSystemCommonParam::machingLevelWhiteSignUpperRel;
        utGameSystemCommonParam["machingLevelWhiteSignUpperAbs"] = &GameSystemCommonParam::machingLevelWhiteSignUpperAbs;
        utGameSystemCommonParam["machingLevelRedSignUpperRel"] = &GameSystemCommonParam::machingLevelRedSignUpperRel;
        utGameSystemCommonParam["machingLevelRedSignUpperAbs"] = &GameSystemCommonParam::machingLevelRedSignUpperAbs;
        utGameSystemCommonParam["machingWeaponLevelUpperWhiteSign_0"] = &GameSystemCommonParam::machingWeaponLevelUpperWhiteSign_0;
        utGameSystemCommonParam["machingWeaponLevelUpperWhiteSign_1"] = &GameSystemCommonParam::machingWeaponLevelUpperWhiteSign_1;
        utGameSystemCommonParam["machingWeaponLevelUpperWhiteSign_2"] = &GameSystemCommonParam::machingWeaponLevelUpperWhiteSign_2;
        utGameSystemCommonParam["machingWeaponLevelUpperWhiteSign_3"] = &GameSystemCommonParam::machingWeaponLevelUpperWhiteSign_3;
        utGameSystemCommonParam["machingWeaponLevelUpperWhiteSign_4"] = &GameSystemCommonParam::machingWeaponLevelUpperWhiteSign_4;
        utGameSystemCommonParam["machingWeaponLevelUpperWhiteSign_5"] = &GameSystemCommonParam::machingWeaponLevelUpperWhiteSign_5;
        utGameSystemCommonParam["machingWeaponLevelUpperWhiteSign_6"] = &GameSystemCommonParam::machingWeaponLevelUpperWhiteSign_6;
        utGameSystemCommonParam["machingWeaponLevelUpperWhiteSign_7"] = &GameSystemCommonParam::machingWeaponLevelUpperWhiteSign_7;
        utGameSystemCommonParam["machingWeaponLevelUpperWhiteSign_8"] = &GameSystemCommonParam::machingWeaponLevelUpperWhiteSign_8;
        utGameSystemCommonParam["machingWeaponLevelUpperWhiteSign_9"] = &GameSystemCommonParam::machingWeaponLevelUpperWhiteSign_9;
        utGameSystemCommonParam["machingWeaponLevelUpperWhiteSign_10"] = &GameSystemCommonParam::machingWeaponLevelUpperWhiteSign_10;
        utGameSystemCommonParam["machingWeaponLevelUpperRedSign_0"] = &GameSystemCommonParam::machingWeaponLevelUpperRedSign_0;
        utGameSystemCommonParam["machingWeaponLevelUpperRedSign_1"] = &GameSystemCommonParam::machingWeaponLevelUpperRedSign_1;
        utGameSystemCommonParam["machingWeaponLevelUpperRedSign_2"] = &GameSystemCommonParam::machingWeaponLevelUpperRedSign_2;
        utGameSystemCommonParam["machingWeaponLevelUpperRedSign_3"] = &GameSystemCommonParam::machingWeaponLevelUpperRedSign_3;
        utGameSystemCommonParam["machingWeaponLevelUpperRedSign_4"] = &GameSystemCommonParam::machingWeaponLevelUpperRedSign_4;
        utGameSystemCommonParam["machingWeaponLevelUpperRedSign_5"] = &GameSystemCommonParam::machingWeaponLevelUpperRedSign_5;
        utGameSystemCommonParam["machingWeaponLevelUpperRedSign_6"] = &GameSystemCommonParam::machingWeaponLevelUpperRedSign_6;
        utGameSystemCommonParam["machingWeaponLevelUpperRedSign_7"] = &GameSystemCommonParam::machingWeaponLevelUpperRedSign_7;
        utGameSystemCommonParam["machingWeaponLevelUpperRedSign_8"] = &GameSystemCommonParam::machingWeaponLevelUpperRedSign_8;
        utGameSystemCommonParam["machingWeaponLevelUpperRedSign_9"] = &GameSystemCommonParam::machingWeaponLevelUpperRedSign_9;
        utGameSystemCommonParam["machingWeaponLevelUpperRedSign_10"] = &GameSystemCommonParam::machingWeaponLevelUpperRedSign_10;
        utGameSystemCommonParam["autoInvadePoint_generateDist"] = &GameSystemCommonParam::autoInvadePoint_generateDist;
        utGameSystemCommonParam["autoInvadePoint_cancelDist"] = &GameSystemCommonParam::autoInvadePoint_cancelDist;
        utGameSystemCommonParam["sendGlobalEventLogIntervalTime"] = &GameSystemCommonParam::sendGlobalEventLogIntervalTime;
        utGameSystemCommonParam["addSoloBreakInPoint_White"] = &GameSystemCommonParam::addSoloBreakInPoint_White;
        utGameSystemCommonParam["addSoloBreakInPoint_Black"] = &GameSystemCommonParam::addSoloBreakInPoint_Black;
        utGameSystemCommonParam["addSoloBreakInPoint_ForceJoin"] = &GameSystemCommonParam::addSoloBreakInPoint_ForceJoin;
        utGameSystemCommonParam["addSoloBreakInPoint_VisitorGuardian"] = &GameSystemCommonParam::addSoloBreakInPoint_VisitorGuardian;
        utGameSystemCommonParam["addSoloBreakInPoint_VisitorRedHunter"] = &GameSystemCommonParam::addSoloBreakInPoint_VisitorRedHunter;
        utGameSystemCommonParam["invincibleTimer_forNetPC_initSync"] = &GameSystemCommonParam::invincibleTimer_forNetPC_initSync;
        utGameSystemCommonParam["invincibleTimer_forNetPC"] = &GameSystemCommonParam::invincibleTimer_forNetPC;
        utGameSystemCommonParam["redHunter_HostBossAreaGetSoulRate"] = &GameSystemCommonParam::redHunter_HostBossAreaGetSoulRate;
        utGameSystemCommonParam["ghostFootprintDecalParamId"] = &GameSystemCommonParam::ghostFootprintDecalParamId;
        utGameSystemCommonParam["leaveAroundHostWarningTime"] = &GameSystemCommonParam::leaveAroundHostWarningTime;
        utGameSystemCommonParam["hostModeCostItemId"] = &GameSystemCommonParam::hostModeCostItemId;
        utGameSystemCommonParam["aIJump_DecelerateParam"] = &GameSystemCommonParam::aIJump_DecelerateParam;
        utGameSystemCommonParam["buddyDisappearDelaySec"] = &GameSystemCommonParam::buddyDisappearDelaySec;
        utGameSystemCommonParam["aIJump_AnimYMoveCorrectRate_onJumpOff"] = &GameSystemCommonParam::aIJump_AnimYMoveCorrectRate_onJumpOff;
        utGameSystemCommonParam["stealthSystemSightRate_NotInStealthRigid_NotSightHide_StealthMode"] = &GameSystemCommonParam::stealthSystemSightRate_NotInStealthRigid_NotSightHide_StealthMode;
        utGameSystemCommonParam["stealthSystemSightRate_NotInStealthRigid_SightHide_NotStealthMode"] = &GameSystemCommonParam::stealthSystemSightRate_NotInStealthRigid_SightHide_NotStealthMode;
        utGameSystemCommonParam["stealthSystemSightRate_NotInStealthRigid_SightHide_StealthMode"] = &GameSystemCommonParam::stealthSystemSightRate_NotInStealthRigid_SightHide_StealthMode;
        utGameSystemCommonParam["stealthSystemSightRate_InStealthRigid_NotSightHide_NotStealthMode"] = &GameSystemCommonParam::stealthSystemSightRate_InStealthRigid_NotSightHide_NotStealthMode;
        utGameSystemCommonParam["stealthSystemSightRate_InStealthRigid_NotSightHide_StealthMode"] = &GameSystemCommonParam::stealthSystemSightRate_InStealthRigid_NotSightHide_StealthMode;
        utGameSystemCommonParam["stealthSystemSightRate_InStealthRigid_SightHide_NotStealthMode"] = &GameSystemCommonParam::stealthSystemSightRate_InStealthRigid_SightHide_NotStealthMode;
        utGameSystemCommonParam["stealthSystemSightRate_InStealthRigid_SightHide_StealthMode"] = &GameSystemCommonParam::stealthSystemSightRate_InStealthRigid_SightHide_StealthMode;
        utGameSystemCommonParam["msbEventGeomTreasureInfo_actionButtonParamId_corpse"] = &GameSystemCommonParam::msbEventGeomTreasureInfo_actionButtonParamId_corpse;
        utGameSystemCommonParam["msbEventGeomTreasureInfo_itemGetAnimId_corpse"] = &GameSystemCommonParam::msbEventGeomTreasureInfo_itemGetAnimId_corpse;
        utGameSystemCommonParam["msbEventGeomTreasureInfo_actionButtonParamId_box"] = &GameSystemCommonParam::msbEventGeomTreasureInfo_actionButtonParamId_box;
        utGameSystemCommonParam["msbEventGeomTreasureInfo_itemGetAnimId_box"] = &GameSystemCommonParam::msbEventGeomTreasureInfo_itemGetAnimId_box;
        utGameSystemCommonParam["msbEventGeomTreasureInfo_actionButtonParamId_shine"] = &GameSystemCommonParam::msbEventGeomTreasureInfo_actionButtonParamId_shine;
        utGameSystemCommonParam["msbEventGeomTreasureInfo_itemGetAnimId_shine"] = &GameSystemCommonParam::msbEventGeomTreasureInfo_itemGetAnimId_shine;
        utGameSystemCommonParam["signPuddleAssetId"] = &GameSystemCommonParam::signPuddleAssetId;
        utGameSystemCommonParam["signPuddleAppearDmypolyId0"] = &GameSystemCommonParam::signPuddleAppearDmypolyId0;
        utGameSystemCommonParam["signPuddleAppearDmypolyId1"] = &GameSystemCommonParam::signPuddleAppearDmypolyId1;
        utGameSystemCommonParam["signPuddleAppearDmypolyId2"] = &GameSystemCommonParam::signPuddleAppearDmypolyId2;
        utGameSystemCommonParam["signPuddleAppearDmypolyId3"] = &GameSystemCommonParam::signPuddleAppearDmypolyId3;
        utGameSystemCommonParam["fallDamageRate_forRidePC"] = &GameSystemCommonParam::fallDamageRate_forRidePC;
        utGameSystemCommonParam["fallDamageRate_forRideNPC"] = &GameSystemCommonParam::fallDamageRate_forRideNPC;
        utGameSystemCommonParam["OldMonkOfYellow_CreateSignSpEffectId"] = &GameSystemCommonParam::OldMonkOfYellow_CreateSignSpEffectId;
        utGameSystemCommonParam["StragglerActivateDist"] = &GameSystemCommonParam::StragglerActivateDist;
        utGameSystemCommonParam["SpEffectId_EnableUseItem_StragglerActivate"] = &GameSystemCommonParam::SpEffectId_EnableUseItem_StragglerActivate;
        utGameSystemCommonParam["SpEffectId_StragglerWakeUp"] = &GameSystemCommonParam::SpEffectId_StragglerWakeUp;
        utGameSystemCommonParam["SpEffectId_StragglerTarget"] = &GameSystemCommonParam::SpEffectId_StragglerTarget;
        utGameSystemCommonParam["SpEffectId_StragglerOppose"] = &GameSystemCommonParam::SpEffectId_StragglerOppose;
        utGameSystemCommonParam["buddyWarp_TriggerTimeRayBlocked"] = &GameSystemCommonParam::buddyWarp_TriggerTimeRayBlocked;
        utGameSystemCommonParam["buddyWarp_TriggerDistToPlayer"] = &GameSystemCommonParam::buddyWarp_TriggerDistToPlayer;
        utGameSystemCommonParam["buddyWarp_ThresholdTimePathStacked"] = &GameSystemCommonParam::buddyWarp_ThresholdTimePathStacked;
        utGameSystemCommonParam["buddyWarp_ThresholdRangePathStacked"] = &GameSystemCommonParam::buddyWarp_ThresholdRangePathStacked;
        utGameSystemCommonParam["aiSightRate_morning"] = &GameSystemCommonParam::aiSightRate_morning;
        utGameSystemCommonParam["aiSightRate_noonA"] = &GameSystemCommonParam::aiSightRate_noonA;
        utGameSystemCommonParam["buddyPassThroughTriggerTime"] = &GameSystemCommonParam::buddyPassThroughTriggerTime;
        utGameSystemCommonParam["aiSightRate_evening"] = &GameSystemCommonParam::aiSightRate_evening;
        utGameSystemCommonParam["aiSightRate_night"] = &GameSystemCommonParam::aiSightRate_night;
        utGameSystemCommonParam["aiSightRate_midnightA"] = &GameSystemCommonParam::aiSightRate_midnightA;
        utGameSystemCommonParam["unknown_0x230"] = &GameSystemCommonParam::unknown_0x230;
        utGameSystemCommonParam["aiSightRate_sunloss_light"] = &GameSystemCommonParam::aiSightRate_sunloss_light;
        utGameSystemCommonParam["aiSightRate_sunloss_dark"] = &GameSystemCommonParam::aiSightRate_sunloss_dark;
        utGameSystemCommonParam["aiSightRate_sunloss_veryDark"] = &GameSystemCommonParam::aiSightRate_sunloss_veryDark;
        utGameSystemCommonParam["stealthSystemSightAngleReduceRate_NotInStealthRigid_NotSightHide_StealthMode"] = &GameSystemCommonParam::stealthSystemSightAngleReduceRate_NotInStealthRigid_NotSightHide_StealthMode;
        utGameSystemCommonParam["stealthSystemSightAngleReduceRate_NotInStealthRigid_SightHide_NotStealthMode"] = &GameSystemCommonParam::stealthSystemSightAngleReduceRate_NotInStealthRigid_SightHide_NotStealthMode;
        utGameSystemCommonParam["stealthSystemSightAngleReduceRate_NotInStealthRigid_SightHide_StealthMode"] = &GameSystemCommonParam::stealthSystemSightAngleReduceRate_NotInStealthRigid_SightHide_StealthMode;
        utGameSystemCommonParam["stealthSystemSightAngleReduceRate_InStealthRigid_NotSightHide_NotStealthMode"] = &GameSystemCommonParam::stealthSystemSightAngleReduceRate_InStealthRigid_NotSightHide_NotStealthMode;
        utGameSystemCommonParam["stealthSystemSightAngleReduceRate_InStealthRigid_NotSightHide_StealthMode"] = &GameSystemCommonParam::stealthSystemSightAngleReduceRate_InStealthRigid_NotSightHide_StealthMode;
        utGameSystemCommonParam["stealthSystemSightAngleReduceRate_InStealthRigid_SightHide_NotStealthMode"] = &GameSystemCommonParam::stealthSystemSightAngleReduceRate_InStealthRigid_SightHide_NotStealthMode;
        utGameSystemCommonParam["stealthSystemSightAngleReduceRate_InStealthRigid_SightHide_StealthMode"] = &GameSystemCommonParam::stealthSystemSightAngleReduceRate_InStealthRigid_SightHide_StealthMode;
        utGameSystemCommonParam["weatherLotConditionStart_Morning_Hour"] = &GameSystemCommonParam::weatherLotConditionStart_Morning_Hour;
        utGameSystemCommonParam["weatherLotConditionStart_Morning_Minute"] = &GameSystemCommonParam::weatherLotConditionStart_Morning_Minute;
        utGameSystemCommonParam["weatherLotConditionStart_Day_Hour"] = &GameSystemCommonParam::weatherLotConditionStart_Day_Hour;
        utGameSystemCommonParam["weatherLotConditionStart_Day_Minute"] = &GameSystemCommonParam::weatherLotConditionStart_Day_Minute;
        utGameSystemCommonParam["weatherLotConditionStart_Evening_Hour"] = &GameSystemCommonParam::weatherLotConditionStart_Evening_Hour;
        utGameSystemCommonParam["weatherLotConditionStart_Evening_Minute"] = &GameSystemCommonParam::weatherLotConditionStart_Evening_Minute;
        utGameSystemCommonParam["weatherLotConditionStart_Night_Hour"] = &GameSystemCommonParam::weatherLotConditionStart_Night_Hour;
        utGameSystemCommonParam["weatherLotConditionStart_Night_Minute"] = &GameSystemCommonParam::weatherLotConditionStart_Night_Minute;
        utGameSystemCommonParam["weatherLotConditionStart_DayBreak_Hour"] = &GameSystemCommonParam::weatherLotConditionStart_DayBreak_Hour;
        utGameSystemCommonParam["weatherLotConditionStart_DayBreak_Minute"] = &GameSystemCommonParam::weatherLotConditionStart_DayBreak_Minute;
        utGameSystemCommonParam["pclightScaleChangeStart_Hour"] = &GameSystemCommonParam::pclightScaleChangeStart_Hour;
        utGameSystemCommonParam["pclightScaleChangeStart_Minute"] = &GameSystemCommonParam::pclightScaleChangeStart_Minute;
        utGameSystemCommonParam["pclightScaleChangeEnd_Hour"] = &GameSystemCommonParam::pclightScaleChangeEnd_Hour;
        utGameSystemCommonParam["pclightScaleChangeEnd_Minute"] = &GameSystemCommonParam::pclightScaleChangeEnd_Minute;
        utGameSystemCommonParam["pclightScaleByTimezone"] = &GameSystemCommonParam::pclightScaleByTimezone;
        utGameSystemCommonParam["bigRuneGreaterDemon_SummonBuddySpecialEffectId_Buddy"] = &GameSystemCommonParam::bigRuneGreaterDemon_SummonBuddySpecialEffectId_Buddy;
        utGameSystemCommonParam["bigRuneGreaterDemon_SummonBuddySpecialEffectId_Pc"] = &GameSystemCommonParam::bigRuneGreaterDemon_SummonBuddySpecialEffectId_Pc;
        utGameSystemCommonParam["homeBonfireParamId"] = &GameSystemCommonParam::homeBonfireParamId;
        utGameSystemCommonParam["machingWeaponLevelUpperWhiteSign_11"] = &GameSystemCommonParam::machingWeaponLevelUpperWhiteSign_11;
        utGameSystemCommonParam["machingWeaponLevelUpperWhiteSign_12"] = &GameSystemCommonParam::machingWeaponLevelUpperWhiteSign_12;
        utGameSystemCommonParam["machingWeaponLevelUpperWhiteSign_13"] = &GameSystemCommonParam::machingWeaponLevelUpperWhiteSign_13;
        utGameSystemCommonParam["machingWeaponLevelUpperWhiteSign_14"] = &GameSystemCommonParam::machingWeaponLevelUpperWhiteSign_14;
        utGameSystemCommonParam["machingWeaponLevelUpperWhiteSign_15"] = &GameSystemCommonParam::machingWeaponLevelUpperWhiteSign_15;
        utGameSystemCommonParam["machingWeaponLevelUpperWhiteSign_16"] = &GameSystemCommonParam::machingWeaponLevelUpperWhiteSign_16;
        utGameSystemCommonParam["machingWeaponLevelUpperWhiteSign_17"] = &GameSystemCommonParam::machingWeaponLevelUpperWhiteSign_17;
        utGameSystemCommonParam["machingWeaponLevelUpperWhiteSign_18"] = &GameSystemCommonParam::machingWeaponLevelUpperWhiteSign_18;
        utGameSystemCommonParam["machingWeaponLevelUpperWhiteSign_19"] = &GameSystemCommonParam::machingWeaponLevelUpperWhiteSign_19;
        utGameSystemCommonParam["machingWeaponLevelUpperWhiteSign_20"] = &GameSystemCommonParam::machingWeaponLevelUpperWhiteSign_20;
        utGameSystemCommonParam["machingWeaponLevelUpperWhiteSign_21"] = &GameSystemCommonParam::machingWeaponLevelUpperWhiteSign_21;
        utGameSystemCommonParam["machingWeaponLevelUpperWhiteSign_22"] = &GameSystemCommonParam::machingWeaponLevelUpperWhiteSign_22;
        utGameSystemCommonParam["machingWeaponLevelUpperWhiteSign_23"] = &GameSystemCommonParam::machingWeaponLevelUpperWhiteSign_23;
        utGameSystemCommonParam["machingWeaponLevelUpperWhiteSign_24"] = &GameSystemCommonParam::machingWeaponLevelUpperWhiteSign_24;
        utGameSystemCommonParam["machingWeaponLevelUpperWhiteSign_25"] = &GameSystemCommonParam::machingWeaponLevelUpperWhiteSign_25;
        utGameSystemCommonParam["machingWeaponLevelUpperRedSign_11"] = &GameSystemCommonParam::machingWeaponLevelUpperRedSign_11;
        utGameSystemCommonParam["machingWeaponLevelUpperRedSign_12"] = &GameSystemCommonParam::machingWeaponLevelUpperRedSign_12;
        utGameSystemCommonParam["machingWeaponLevelUpperRedSign_13"] = &GameSystemCommonParam::machingWeaponLevelUpperRedSign_13;
        utGameSystemCommonParam["machingWeaponLevelUpperRedSign_14"] = &GameSystemCommonParam::machingWeaponLevelUpperRedSign_14;
        utGameSystemCommonParam["machingWeaponLevelUpperRedSign_15"] = &GameSystemCommonParam::machingWeaponLevelUpperRedSign_15;
        utGameSystemCommonParam["machingWeaponLevelUpperRedSign_16"] = &GameSystemCommonParam::machingWeaponLevelUpperRedSign_16;
        utGameSystemCommonParam["machingWeaponLevelUpperRedSign_17"] = &GameSystemCommonParam::machingWeaponLevelUpperRedSign_17;
        utGameSystemCommonParam["machingWeaponLevelUpperRedSign_18"] = &GameSystemCommonParam::machingWeaponLevelUpperRedSign_18;
        utGameSystemCommonParam["machingWeaponLevelUpperRedSign_19"] = &GameSystemCommonParam::machingWeaponLevelUpperRedSign_19;
        utGameSystemCommonParam["machingWeaponLevelUpperRedSign_20"] = &GameSystemCommonParam::machingWeaponLevelUpperRedSign_20;
        utGameSystemCommonParam["machingWeaponLevelUpperRedSign_21"] = &GameSystemCommonParam::machingWeaponLevelUpperRedSign_21;
        utGameSystemCommonParam["machingWeaponLevelUpperRedSign_22"] = &GameSystemCommonParam::machingWeaponLevelUpperRedSign_22;
        utGameSystemCommonParam["machingWeaponLevelUpperRedSign_23"] = &GameSystemCommonParam::machingWeaponLevelUpperRedSign_23;
        utGameSystemCommonParam["machingWeaponLevelUpperRedSign_24"] = &GameSystemCommonParam::machingWeaponLevelUpperRedSign_24;
        utGameSystemCommonParam["machingWeaponLevelUpperRedSign_25"] = &GameSystemCommonParam::machingWeaponLevelUpperRedSign_25;
        utGameSystemCommonParam["menuTimezoneStart_Morning_Hour"] = &GameSystemCommonParam::menuTimezoneStart_Morning_Hour;
        utGameSystemCommonParam["menuTimezoneStart_Morning_Minute"] = &GameSystemCommonParam::menuTimezoneStart_Morning_Minute;
        utGameSystemCommonParam["menuTimezoneStart_Day1_Hour"] = &GameSystemCommonParam::menuTimezoneStart_Day1_Hour;
        utGameSystemCommonParam["menuTimezoneStart_Day1_Minute"] = &GameSystemCommonParam::menuTimezoneStart_Day1_Minute;
        utGameSystemCommonParam["menuTimezoneStart_Day2_Hour"] = &GameSystemCommonParam::menuTimezoneStart_Day2_Hour;
        utGameSystemCommonParam["menuTimezoneStart_Day2_Minute"] = &GameSystemCommonParam::menuTimezoneStart_Day2_Minute;
        utGameSystemCommonParam["menuTimezoneStart_Evening_Hour"] = &GameSystemCommonParam::menuTimezoneStart_Evening_Hour;
        utGameSystemCommonParam["menuTimezoneStart_Evening_Minute"] = &GameSystemCommonParam::menuTimezoneStart_Evening_Minute;
        utGameSystemCommonParam["menuTimezoneStart_Night_Hour"] = &GameSystemCommonParam::menuTimezoneStart_Night_Hour;
        utGameSystemCommonParam["menuTimezoneStart_Night_Minute"] = &GameSystemCommonParam::menuTimezoneStart_Night_Minute;
        utGameSystemCommonParam["menuTimezoneStart_Midnight_Hour"] = &GameSystemCommonParam::menuTimezoneStart_Midnight_Hour;
        utGameSystemCommonParam["menuTimezoneStart_Midnight_Minute"] = &GameSystemCommonParam::menuTimezoneStart_Midnight_Minute;
        utGameSystemCommonParam["remotePlayerThreatLvNotify_ThreatLv"] = &GameSystemCommonParam::remotePlayerThreatLvNotify_ThreatLv;
        utGameSystemCommonParam["remotePlayerThreatLvNotify_NotifyDist"] = &GameSystemCommonParam::remotePlayerThreatLvNotify_NotifyDist;
        utGameSystemCommonParam["remotePlayerThreatLvNotify_EndNotifyDist"] = &GameSystemCommonParam::remotePlayerThreatLvNotify_EndNotifyDist;
        utGameSystemCommonParam["worldMapPointDiscoveryExpandRange"] = &GameSystemCommonParam::worldMapPointDiscoveryExpandRange;
        utGameSystemCommonParam["worldMapPointReentryExpandRange"] = &GameSystemCommonParam::worldMapPointReentryExpandRange;
        utGameSystemCommonParam["remotePlayerThreatLvNotify_NotifyTime"] = &GameSystemCommonParam::remotePlayerThreatLvNotify_NotifyTime;
        utGameSystemCommonParam["breakIn_A_rebreakInGoodsNum"] = &GameSystemCommonParam::breakIn_A_rebreakInGoodsNum;
        utGameSystemCommonParam["breakIn_A_rebreakInGoodsId"] = &GameSystemCommonParam::breakIn_A_rebreakInGoodsId;
        utGameSystemCommonParam["rideJumpoff_SfxId"] = &GameSystemCommonParam::rideJumpoff_SfxId;
        utGameSystemCommonParam["rideJumpoff_SfxHeightOffset"] = &GameSystemCommonParam::rideJumpoff_SfxHeightOffset;
        utGameSystemCommonParam["rideJumpoff_SpEffectId"] = &GameSystemCommonParam::rideJumpoff_SpEffectId;
        utGameSystemCommonParam["rideJumpoff_SpEffectIdPc"] = &GameSystemCommonParam::rideJumpoff_SpEffectIdPc;
        utGameSystemCommonParam["unlockExchangeMenuEventFlagId"] = &GameSystemCommonParam::unlockExchangeMenuEventFlagId;
        utGameSystemCommonParam["unlockMessageMenuEventFlagId"] = &GameSystemCommonParam::unlockMessageMenuEventFlagId;
        utGameSystemCommonParam["breakInOnce_A_rebreakInGoodsNum"] = &GameSystemCommonParam::breakInOnce_A_rebreakInGoodsNum;
        utGameSystemCommonParam["breakIn_B_rebreakInGoodsNum"] = &GameSystemCommonParam::breakIn_B_rebreakInGoodsNum;
        utGameSystemCommonParam["breakInOnce_A_rebreakInGoodsId"] = &GameSystemCommonParam::breakInOnce_A_rebreakInGoodsId;
        utGameSystemCommonParam["breakIn_B_rebreakInGoodsId"] = &GameSystemCommonParam::breakIn_B_rebreakInGoodsId;
        utGameSystemCommonParam["actionButtonInputCancelTime"] = &GameSystemCommonParam::actionButtonInputCancelTime;
        utGameSystemCommonParam["blockClearBonusDelayTime"] = &GameSystemCommonParam::blockClearBonusDelayTime;
        utGameSystemCommonParam["bonfireCheckEnemyRange"] = &GameSystemCommonParam::bonfireCheckEnemyRange;
        utGameSystemCommonParam["unknown_0x2f0"] = &GameSystemCommonParam::unknown_0x2f0;
        utGameSystemCommonParam["matchingLevelArenaUpperRel"] = &GameSystemCommonParam::matchingLevelArenaUpperRel;
        utGameSystemCommonParam["matchingLevelArenaUpperAbs"] = &GameSystemCommonParam::matchingLevelArenaUpperAbs;
        utGameSystemCommonParam["matchingWeaponLevelUpperArena_0"] = &GameSystemCommonParam::matchingWeaponLevelUpperArena_0;
        utGameSystemCommonParam["matchingWeaponLevelUpperArena_1"] = &GameSystemCommonParam::matchingWeaponLevelUpperArena_1;
        utGameSystemCommonParam["matchingWeaponLevelUpperArena_2"] = &GameSystemCommonParam::matchingWeaponLevelUpperArena_2;
        utGameSystemCommonParam["matchingWeaponLevelUpperArena_3"] = &GameSystemCommonParam::matchingWeaponLevelUpperArena_3;
        utGameSystemCommonParam["matchingWeaponLevelUpperArena_4"] = &GameSystemCommonParam::matchingWeaponLevelUpperArena_4;
        utGameSystemCommonParam["matchingWeaponLevelUpperArena_5"] = &GameSystemCommonParam::matchingWeaponLevelUpperArena_5;
        utGameSystemCommonParam["matchingWeaponLevelUpperArena_6"] = &GameSystemCommonParam::matchingWeaponLevelUpperArena_6;
        utGameSystemCommonParam["matchingWeaponLevelUpperArena_7"] = &GameSystemCommonParam::matchingWeaponLevelUpperArena_7;
        utGameSystemCommonParam["matchingWeaponLevelUpperArena_8"] = &GameSystemCommonParam::matchingWeaponLevelUpperArena_8;
        utGameSystemCommonParam["matchingWeaponLevelUpperArena_9"] = &GameSystemCommonParam::matchingWeaponLevelUpperArena_9;
        utGameSystemCommonParam["matchingWeaponLevelUpperArena_10"] = &GameSystemCommonParam::matchingWeaponLevelUpperArena_10;
        utGameSystemCommonParam["matchingWeaponLevelUpperArena_11"] = &GameSystemCommonParam::matchingWeaponLevelUpperArena_11;
        utGameSystemCommonParam["matchingWeaponLevelUpperArena_12"] = &GameSystemCommonParam::matchingWeaponLevelUpperArena_12;
        utGameSystemCommonParam["matchingWeaponLevelUpperArena_13"] = &GameSystemCommonParam::matchingWeaponLevelUpperArena_13;
        utGameSystemCommonParam["matchingWeaponLevelUpperArena_14"] = &GameSystemCommonParam::matchingWeaponLevelUpperArena_14;
        utGameSystemCommonParam["matchingWeaponLevelUpperArena_15"] = &GameSystemCommonParam::matchingWeaponLevelUpperArena_15;
        utGameSystemCommonParam["matchingWeaponLevelUpperArena_16"] = &GameSystemCommonParam::matchingWeaponLevelUpperArena_16;
        utGameSystemCommonParam["matchingWeaponLevelUpperArena_17"] = &GameSystemCommonParam::matchingWeaponLevelUpperArena_17;
        utGameSystemCommonParam["matchingWeaponLevelUpperArena_18"] = &GameSystemCommonParam::matchingWeaponLevelUpperArena_18;
        utGameSystemCommonParam["matchingWeaponLevelUpperArena_19"] = &GameSystemCommonParam::matchingWeaponLevelUpperArena_19;
        utGameSystemCommonParam["matchingWeaponLevelUpperArena_20"] = &GameSystemCommonParam::matchingWeaponLevelUpperArena_20;
        utGameSystemCommonParam["matchingWeaponLevelUpperArena_21"] = &GameSystemCommonParam::matchingWeaponLevelUpperArena_21;
        utGameSystemCommonParam["matchingWeaponLevelUpperArena_22"] = &GameSystemCommonParam::matchingWeaponLevelUpperArena_22;
        utGameSystemCommonParam["matchingWeaponLevelUpperArena_23"] = &GameSystemCommonParam::matchingWeaponLevelUpperArena_23;
        utGameSystemCommonParam["matchingWeaponLevelUpperArena_24"] = &GameSystemCommonParam::matchingWeaponLevelUpperArena_24;
        utGameSystemCommonParam["matchingWeaponLevelUpperArena_25"] = &GameSystemCommonParam::matchingWeaponLevelUpperArena_25;
        utGameSystemCommonParam["unknown_0x310"] = &GameSystemCommonParam::unknown_0x310;
        utGameSystemCommonParam["unknown_0x314"] = &GameSystemCommonParam::unknown_0x314;
        utGameSystemCommonParam["unknown_0x318"] = &GameSystemCommonParam::unknown_0x318;
        utGameSystemCommonParam["unknown_0x31c"] = &GameSystemCommonParam::unknown_0x31c;
        utGameSystemCommonParam["unknown_0x320"] = &GameSystemCommonParam::unknown_0x320;
        utGameSystemCommonParam["unknown_0x324"] = &GameSystemCommonParam::unknown_0x324;
        utGameSystemCommonParam["unknown_0x328"] = &GameSystemCommonParam::unknown_0x328;
        utGameSystemCommonParam["unknown_0x32c"] = &GameSystemCommonParam::unknown_0x32c;
        utGameSystemCommonParam["unknown_0x330"] = &GameSystemCommonParam::unknown_0x330;
        utGameSystemCommonParam["unknown_0x334"] = &GameSystemCommonParam::unknown_0x334;
        utGameSystemCommonParam["unknown_0x338"] = &GameSystemCommonParam::unknown_0x338;
        utGameSystemCommonParam["unknown_0x33c"] = &GameSystemCommonParam::unknown_0x33c;
        utGameSystemCommonParam["unknown_0x340"] = &GameSystemCommonParam::unknown_0x340;
        utGameSystemCommonParam["unknown_0x344"] = &GameSystemCommonParam::unknown_0x344;
        utGameSystemCommonParam["unknown_0x348"] = &GameSystemCommonParam::unknown_0x348;
        utGameSystemCommonParam["matchingSpiritAshLevelUpper_0"] = &GameSystemCommonParam::matchingSpiritAshLevelUpper_0;
        utGameSystemCommonParam["matchingSpiritAshLevelUpper_1"] = &GameSystemCommonParam::matchingSpiritAshLevelUpper_1;
        utGameSystemCommonParam["matchingSpiritAshLevelUpper_2"] = &GameSystemCommonParam::matchingSpiritAshLevelUpper_2;
        utGameSystemCommonParam["matchingSpiritAshLevelUpper_3"] = &GameSystemCommonParam::matchingSpiritAshLevelUpper_3;
        utGameSystemCommonParam["matchingSpiritAshLevelUpper_4"] = &GameSystemCommonParam::matchingSpiritAshLevelUpper_4;
        utGameSystemCommonParam["matchingSpiritAshLevelUpper_5"] = &GameSystemCommonParam::matchingSpiritAshLevelUpper_5;
        utGameSystemCommonParam["matchingSpiritAshLevelUpper_6"] = &GameSystemCommonParam::matchingSpiritAshLevelUpper_6;
        utGameSystemCommonParam["matchingSpiritAshLevelUpper_7"] = &GameSystemCommonParam::matchingSpiritAshLevelUpper_7;
        utGameSystemCommonParam["matchingSpiritAshLevelUpper_8"] = &GameSystemCommonParam::matchingSpiritAshLevelUpper_8;
        utGameSystemCommonParam["matchingSpiritAshLevelUpper_9"] = &GameSystemCommonParam::matchingSpiritAshLevelUpper_9;
        utGameSystemCommonParam["matchingSpiritAshLevelUpper_10"] = &GameSystemCommonParam::matchingSpiritAshLevelUpper_10;
        utGameSystemCommonParam["unknown_0x358"] = &GameSystemCommonParam::unknown_0x358;
        utGameSystemCommonParam["baseScaduBlessingSpEffectId"] = &GameSystemCommonParam::baseScaduBlessingSpEffectId;
        utGameSystemCommonParam["baseReveredSpiritAshBlessingSpEffectId"] = &GameSystemCommonParam::baseReveredSpiritAshBlessingSpEffectId;
        utGameSystemCommonParam["unknown_0x368"] = &GameSystemCommonParam::unknown_0x368;
        utGameSystemCommonParam["unknown_0x36c"] = &GameSystemCommonParam::unknown_0x36c;
        utGameSystemCommonParam["unknown_0x370"] = &GameSystemCommonParam::unknown_0x370;
        utGameSystemCommonParam["ridingSAReceivedRatePlayer"] = &GameSystemCommonParam::ridingSAReceivedRatePlayer;
        utGameSystemCommonParam["ridingSAReceivedRateNotPlayer"] = &GameSystemCommonParam::ridingSAReceivedRateNotPlayer;
        utGameSystemCommonParam["glovewortCrystalSpiritBuffSpEffectId"] = &GameSystemCommonParam::glovewortCrystalSpiritBuffSpEffectId;
        utGameSystemCommonParam["unknown_0x380"] = &GameSystemCommonParam::unknown_0x380;
        utGameSystemCommonParam["unknown_0x384"] = &GameSystemCommonParam::unknown_0x384;
        utGameSystemCommonParam["unknownSpEffectId_0x388"] = &GameSystemCommonParam::unknownSpEffectId_0x388;
        utGameSystemCommonParam["unknownSpEffectId_0x38c"] = &GameSystemCommonParam::unknownSpEffectId_0x38c;
        utGameSystemCommonParam["unknownSpEffectId_0x390"] = &GameSystemCommonParam::unknownSpEffectId_0x390;
        utGameSystemCommonParam["baseReveredSpiritTorrentBlessingSpEffectId"] = &GameSystemCommonParam::baseReveredSpiritTorrentBlessingSpEffectId;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<GameSystemCommonParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<GameSystemCommonParam>>(nullptr);
        indexer->setFieldNames({
            {"baseToughnessRecoverTime", false},
            {"chrEventTrun_byLeft90", false},
            {"chrEventTrun_byRight90", false},
            {"chrEventTrun_byLeft180", false},
            {"chrEventTrun_byRight180", false},
            {"chrEventTrun_90TurnStartAngle", false},
            {"chrEventTrun_180TurnStartAngle", false},
            {"stealthAtkDamageRate", false},
            {"flickDamageCutRateSuccessGurad", false},
            {"npcTalkAnimBeginDiffAngle", false},
            {"npcTalkAnimEndDiffAngle", false},
            {"sleepCollectorItemActionButtonParamId", false},
            {"allowUseBuddyItem_sfxInterval", false},
            {"allowUseBuddyItem_sfxDmyPolyId", false},
            {"allowUseBuddyItem_sfxDmyPolyId_horse", false},
            {"allowUseBuddyItem_sfxId", false},
            {"onBuddySummon_inActivateRange_sfxInterval", false},
            {"onBuddySummon_inActivateRange_sfxDmyPolyId", false},
            {"onBuddySummon_inActivateRange_sfxDmyPolyId_horse", false},
            {"onBuddySummon_inActivateRange_sfxId", false},
            {"onBuddySummon_inActivateRange_spEffectId_pc", false},
            {"onBuddySummon_inWarnRange_spEffectId_pc", false},
            {"onBuddySummon_atBuddyUnsummon_spEffectId_pc", false},
            {"onBuddySummon_inWarnRange_spEffectId_buddy", false},
            {"morningIngameHour", false},
            {"morningIngameMinute", false},
            {"morningIngameSecond", false},
            {"noonIngameHour", false},
            {"noonIngameMinute", false},
            {"noonIngameSecond", false},
            {"nightIngameHour", false},
            {"nightIngameMinute", false},
            {"nightIngameSecond", false},
            {"aiSightRateStart_Morning_Hour", false},
            {"aiSightRateStart_Morning_Minute", false},
            {"aiSightRateStart_Noon_Hour", false},
            {"aiSightRateStart_Noon_Minute", false},
            {"aiSightRateStart_Evening_Hour", false},
            {"aiSightRateStart_Evening_Minute", false},
            {"aiSightRateStart_Night_Hour", false},
            {"aiSightRateStart_Night_Minute", false},
            {"aiSightRateStart_Midnight_Hour", false},
            {"aiSightRateStart_Midnight_Minute", false},
            {"saLargeDamageHitSfx_Threshold", false},
            {"saLargeDamageHitSfx_SfxId", false},
            {"signCreatableDistFromSafePos", false},
            {"guestResummonDist", false},
            {"guestLeavingMessageDistMax", false},
            {"guestLeavingMessageDistMin", false},
            {"guestLeaveSessionDist", false},
            {"retryPointAreaRadius", false},
            {"sleepCollectorSpEffectId", false},
            {"recoverBelowMaxHpCompletionNoticeSpEffectId", false},
            {"estusFlaskRecovery_AbsorptionProductionSfxId_byHp", false},
            {"estusFlaskRecovery_AbsorptionProductionSfxId_byMp", false},
            {"respawnSpecialEffectActiveCheckerSpEffectId", false},
            {"onBuddySummon_inActivateRange_spEffectId_buddy", false},
            {"estusFlaskRecovery_AddEstusTime", false},
            {"defeatMultiModeEnemyOfSoulCorrectRate_byHost", false},
            {"defeatMultiModeEnemyOfSoulCorrectRate_byTeamGhost", false},
            {"defeatMultiModeBossOfSoulCorrectRate_byHost", false},
            {"defeatMultiModeBossOfSoulCorrectRate_byTeamGhost", false},
            {"enemyHpGaugeScreenOffset_byUp", false},
            {"playRegionCollectDist", false},
            {"enemyDetectionSpEffect_ShootBulletDummypolyId", false},
            {"bigRuneGreaterDemonBreakInGoodsNum", false},
            {"bigRuneGreaterDemonBreakInGoodsId", false},
            {"rideJumpRegionDefaultSfxId", false},
            {"saAttackRate_forVsRideAtk", false},
            {"enemySpEffectIdAfterSleepCollectorItemLot", false},
            {"afterEndingMapUid", false},
            {"afterEndingReturnPointEntityId", false},
            {"enemyDetectionSpEffect_BulletId_byCoopRing_RedHunter", false},
            {"enemyDetectionSpEffect_BulletId_byInvadeOrb_None", false},
            {"tutorialFlagOnAccessDistView", false},
            {"tutorialFlagOnAccessRetryPoint", false},
            {"tutorialFlagOnGetGroupReward", false},
            {"tutorialFlagOnEnterRideJumpRegion", false},
            {"tutorialCheckRideJumpRegionExpandRange", false},
            {"retryPointActivatedPcAnimId", false},
            {"retryPointActivatedDialogDelayTime", false},
            {"retryPointActivatedDialogTextId", false},
            {"signPuddleOpenPcAnimId", false},
            {"signPuddleOpenDialogDelayTime", false},
            {"activityOfDeadSpEffect_BulletId", false},
            {"activityOfDeadSpEffect_ShootBulletDummypolyId", false},
            {"activityOfDeadSpEffect_DeadFadeOutTime", false},
            {"ignorNetStateSyncTime_ForThrow", false},
            {"netPenaltyPointLanDisconnect", false},
            {"netPenaltyPointProfileSignout", false},
            {"netPenaltyPointReboot", false},
            {"netPnaltyPointSuspend", false},
            {"netPenaltyForgiveItemLimitTime", false},
            {"netPenaltyPointThreshold", false},
            {"uncontrolledMoveThresholdTime", false},
            {"enemyDetectionSpEffect_BulletId_byNpcEnemy", false},
            {"activityOfDeadTargetSearchSpEffect_OnHitSpEffect", false},
            {"activityOfDeadTargetSearchSpEffect_MaxLength", false},
            {"sightRangeLowerPromiseRate", false},
            {"saLargeDamageHitSfx_MinDamage", false},
            {"saLargeDamageHitSfx_ForceDamage", false},
            {"soloBreakInMaxPoint", false},
            {"npcTalkTimeOutThreshold", false},
            {"sendPlayLogIntervalTime", false},
            {"item370_MaxSfxNum", false},
            {"chrActivateDist_forLeavePC", false},
            {"summonDataCoopMatchingLevelUpperAbs", false},
            {"summonDataCoopMatchingLevelUpperRel", false},
            {"summonDataCoopMatchingWepLevelMul", false},
            {"pickUpBerserkerSignSpEffectBulletId", false},
            {"succeedBerserkerSelfKillingEffectId", false},
            {"machingLevelWhiteSignUpperRel", false},
            {"machingLevelWhiteSignUpperAbs", false},
            {"machingLevelRedSignUpperRel", false},
            {"machingLevelRedSignUpperAbs", false},
            {"machingWeaponLevelUpperWhiteSign_0", false},
            {"machingWeaponLevelUpperWhiteSign_1", false},
            {"machingWeaponLevelUpperWhiteSign_2", false},
            {"machingWeaponLevelUpperWhiteSign_3", false},
            {"machingWeaponLevelUpperWhiteSign_4", false},
            {"machingWeaponLevelUpperWhiteSign_5", false},
            {"machingWeaponLevelUpperWhiteSign_6", false},
            {"machingWeaponLevelUpperWhiteSign_7", false},
            {"machingWeaponLevelUpperWhiteSign_8", false},
            {"machingWeaponLevelUpperWhiteSign_9", false},
            {"machingWeaponLevelUpperWhiteSign_10", false},
            {"machingWeaponLevelUpperRedSign_0", false},
            {"machingWeaponLevelUpperRedSign_1", false},
            {"machingWeaponLevelUpperRedSign_2", false},
            {"machingWeaponLevelUpperRedSign_3", false},
            {"machingWeaponLevelUpperRedSign_4", false},
            {"machingWeaponLevelUpperRedSign_5", false},
            {"machingWeaponLevelUpperRedSign_6", false},
            {"machingWeaponLevelUpperRedSign_7", false},
            {"machingWeaponLevelUpperRedSign_8", false},
            {"machingWeaponLevelUpperRedSign_9", false},
            {"machingWeaponLevelUpperRedSign_10", false},
            {"autoInvadePoint_generateDist", false},
            {"autoInvadePoint_cancelDist", false},
            {"sendGlobalEventLogIntervalTime", false},
            {"addSoloBreakInPoint_White", false},
            {"addSoloBreakInPoint_Black", false},
            {"addSoloBreakInPoint_ForceJoin", false},
            {"addSoloBreakInPoint_VisitorGuardian", false},
            {"addSoloBreakInPoint_VisitorRedHunter", false},
            {"invincibleTimer_forNetPC_initSync", false},
            {"invincibleTimer_forNetPC", false},
            {"redHunter_HostBossAreaGetSoulRate", false},
            {"ghostFootprintDecalParamId", false},
            {"leaveAroundHostWarningTime", false},
            {"hostModeCostItemId", false},
            {"aIJump_DecelerateParam", false},
            {"buddyDisappearDelaySec", false},
            {"aIJump_AnimYMoveCorrectRate_onJumpOff", false},
            {"stealthSystemSightRate_NotInStealthRigid_NotSightHide_StealthMode", false},
            {"stealthSystemSightRate_NotInStealthRigid_SightHide_NotStealthMode", false},
            {"stealthSystemSightRate_NotInStealthRigid_SightHide_StealthMode", false},
            {"stealthSystemSightRate_InStealthRigid_NotSightHide_NotStealthMode", false},
            {"stealthSystemSightRate_InStealthRigid_NotSightHide_StealthMode", false},
            {"stealthSystemSightRate_InStealthRigid_SightHide_NotStealthMode", false},
            {"stealthSystemSightRate_InStealthRigid_SightHide_StealthMode", false},
            {"msbEventGeomTreasureInfo_actionButtonParamId_corpse", false},
            {"msbEventGeomTreasureInfo_itemGetAnimId_corpse", false},
            {"msbEventGeomTreasureInfo_actionButtonParamId_box", false},
            {"msbEventGeomTreasureInfo_itemGetAnimId_box", false},
            {"msbEventGeomTreasureInfo_actionButtonParamId_shine", false},
            {"msbEventGeomTreasureInfo_itemGetAnimId_shine", false},
            {"signPuddleAssetId", false},
            {"signPuddleAppearDmypolyId0", false},
            {"signPuddleAppearDmypolyId1", false},
            {"signPuddleAppearDmypolyId2", false},
            {"signPuddleAppearDmypolyId3", false},
            {"fallDamageRate_forRidePC", false},
            {"fallDamageRate_forRideNPC", false},
            {"OldMonkOfYellow_CreateSignSpEffectId", false},
            {"StragglerActivateDist", false},
            {"SpEffectId_EnableUseItem_StragglerActivate", false},
            {"SpEffectId_StragglerWakeUp", false},
            {"SpEffectId_StragglerTarget", false},
            {"SpEffectId_StragglerOppose", false},
            {"buddyWarp_TriggerTimeRayBlocked", false},
            {"buddyWarp_TriggerDistToPlayer", false},
            {"buddyWarp_ThresholdTimePathStacked", false},
            {"buddyWarp_ThresholdRangePathStacked", false},
            {"aiSightRate_morning", false},
            {"aiSightRate_noonA", false},
            {"buddyPassThroughTriggerTime", false},
            {"aiSightRate_evening", false},
            {"aiSightRate_night", false},
            {"aiSightRate_midnightA", false},
            {"unknown_0x230", false},
            {"aiSightRate_sunloss_light", false},
            {"aiSightRate_sunloss_dark", false},
            {"aiSightRate_sunloss_veryDark", false},
            {"stealthSystemSightAngleReduceRate_NotInStealthRigid_NotSightHide_StealthMode", false},
            {"stealthSystemSightAngleReduceRate_NotInStealthRigid_SightHide_NotStealthMode", false},
            {"stealthSystemSightAngleReduceRate_NotInStealthRigid_SightHide_StealthMode", false},
            {"stealthSystemSightAngleReduceRate_InStealthRigid_NotSightHide_NotStealthMode", false},
            {"stealthSystemSightAngleReduceRate_InStealthRigid_NotSightHide_StealthMode", false},
            {"stealthSystemSightAngleReduceRate_InStealthRigid_SightHide_NotStealthMode", false},
            {"stealthSystemSightAngleReduceRate_InStealthRigid_SightHide_StealthMode", false},
            {"weatherLotConditionStart_Morning_Hour", false},
            {"weatherLotConditionStart_Morning_Minute", false},
            {"weatherLotConditionStart_Day_Hour", false},
            {"weatherLotConditionStart_Day_Minute", false},
            {"weatherLotConditionStart_Evening_Hour", false},
            {"weatherLotConditionStart_Evening_Minute", false},
            {"weatherLotConditionStart_Night_Hour", false},
            {"weatherLotConditionStart_Night_Minute", false},
            {"weatherLotConditionStart_DayBreak_Hour", false},
            {"weatherLotConditionStart_DayBreak_Minute", false},
            {"pclightScaleChangeStart_Hour", false},
            {"pclightScaleChangeStart_Minute", false},
            {"pclightScaleChangeEnd_Hour", false},
            {"pclightScaleChangeEnd_Minute", false},
            {"pclightScaleByTimezone", false},
            {"bigRuneGreaterDemon_SummonBuddySpecialEffectId_Buddy", false},
            {"bigRuneGreaterDemon_SummonBuddySpecialEffectId_Pc", false},
            {"homeBonfireParamId", false},
            {"machingWeaponLevelUpperWhiteSign_11", false},
            {"machingWeaponLevelUpperWhiteSign_12", false},
            {"machingWeaponLevelUpperWhiteSign_13", false},
            {"machingWeaponLevelUpperWhiteSign_14", false},
            {"machingWeaponLevelUpperWhiteSign_15", false},
            {"machingWeaponLevelUpperWhiteSign_16", false},
            {"machingWeaponLevelUpperWhiteSign_17", false},
            {"machingWeaponLevelUpperWhiteSign_18", false},
            {"machingWeaponLevelUpperWhiteSign_19", false},
            {"machingWeaponLevelUpperWhiteSign_20", false},
            {"machingWeaponLevelUpperWhiteSign_21", false},
            {"machingWeaponLevelUpperWhiteSign_22", false},
            {"machingWeaponLevelUpperWhiteSign_23", false},
            {"machingWeaponLevelUpperWhiteSign_24", false},
            {"machingWeaponLevelUpperWhiteSign_25", false},
            {"machingWeaponLevelUpperRedSign_11", false},
            {"machingWeaponLevelUpperRedSign_12", false},
            {"machingWeaponLevelUpperRedSign_13", false},
            {"machingWeaponLevelUpperRedSign_14", false},
            {"machingWeaponLevelUpperRedSign_15", false},
            {"machingWeaponLevelUpperRedSign_16", false},
            {"machingWeaponLevelUpperRedSign_17", false},
            {"machingWeaponLevelUpperRedSign_18", false},
            {"machingWeaponLevelUpperRedSign_19", false},
            {"machingWeaponLevelUpperRedSign_20", false},
            {"machingWeaponLevelUpperRedSign_21", false},
            {"machingWeaponLevelUpperRedSign_22", false},
            {"machingWeaponLevelUpperRedSign_23", false},
            {"machingWeaponLevelUpperRedSign_24", false},
            {"machingWeaponLevelUpperRedSign_25", false},
            {"menuTimezoneStart_Morning_Hour", false},
            {"menuTimezoneStart_Morning_Minute", false},
            {"menuTimezoneStart_Day1_Hour", false},
            {"menuTimezoneStart_Day1_Minute", false},
            {"menuTimezoneStart_Day2_Hour", false},
            {"menuTimezoneStart_Day2_Minute", false},
            {"menuTimezoneStart_Evening_Hour", false},
            {"menuTimezoneStart_Evening_Minute", false},
            {"menuTimezoneStart_Night_Hour", false},
            {"menuTimezoneStart_Night_Minute", false},
            {"menuTimezoneStart_Midnight_Hour", false},
            {"menuTimezoneStart_Midnight_Minute", false},
            {"remotePlayerThreatLvNotify_ThreatLv", false},
            {"remotePlayerThreatLvNotify_NotifyDist", false},
            {"remotePlayerThreatLvNotify_EndNotifyDist", false},
            {"worldMapPointDiscoveryExpandRange", false},
            {"worldMapPointReentryExpandRange", false},
            {"remotePlayerThreatLvNotify_NotifyTime", false},
            {"breakIn_A_rebreakInGoodsNum", false},
            {"breakIn_A_rebreakInGoodsId", false},
            {"rideJumpoff_SfxId", false},
            {"rideJumpoff_SfxHeightOffset", false},
            {"rideJumpoff_SpEffectId", false},
            {"rideJumpoff_SpEffectIdPc", false},
            {"unlockExchangeMenuEventFlagId", false},
            {"unlockMessageMenuEventFlagId", false},
            {"breakInOnce_A_rebreakInGoodsNum", false},
            {"breakIn_B_rebreakInGoodsNum", false},
            {"breakInOnce_A_rebreakInGoodsId", false},
            {"breakIn_B_rebreakInGoodsId", false},
            {"actionButtonInputCancelTime", false},
            {"blockClearBonusDelayTime", false},
            {"bonfireCheckEnemyRange", false},
            {"unknown_0x2f0", false},
            {"matchingLevelArenaUpperRel", false},
            {"matchingLevelArenaUpperAbs", false},
            {"matchingWeaponLevelUpperArena_0", false},
            {"matchingWeaponLevelUpperArena_1", false},
            {"matchingWeaponLevelUpperArena_2", false},
            {"matchingWeaponLevelUpperArena_3", false},
            {"matchingWeaponLevelUpperArena_4", false},
            {"matchingWeaponLevelUpperArena_5", false},
            {"matchingWeaponLevelUpperArena_6", false},
            {"matchingWeaponLevelUpperArena_7", false},
            {"matchingWeaponLevelUpperArena_8", false},
            {"matchingWeaponLevelUpperArena_9", false},
            {"matchingWeaponLevelUpperArena_10", false},
            {"matchingWeaponLevelUpperArena_11", false},
            {"matchingWeaponLevelUpperArena_12", false},
            {"matchingWeaponLevelUpperArena_13", false},
            {"matchingWeaponLevelUpperArena_14", false},
            {"matchingWeaponLevelUpperArena_15", false},
            {"matchingWeaponLevelUpperArena_16", false},
            {"matchingWeaponLevelUpperArena_17", false},
            {"matchingWeaponLevelUpperArena_18", false},
            {"matchingWeaponLevelUpperArena_19", false},
            {"matchingWeaponLevelUpperArena_20", false},
            {"matchingWeaponLevelUpperArena_21", false},
            {"matchingWeaponLevelUpperArena_22", false},
            {"matchingWeaponLevelUpperArena_23", false},
            {"matchingWeaponLevelUpperArena_24", false},
            {"matchingWeaponLevelUpperArena_25", false},
            {"unknown_0x310", false},
            {"unknown_0x314", false},
            {"unknown_0x318", false},
            {"unknown_0x31c", false},
            {"unknown_0x320", false},
            {"unknown_0x324", false},
            {"unknown_0x328", false},
            {"unknown_0x32c", false},
            {"unknown_0x330", false},
            {"unknown_0x334", false},
            {"unknown_0x338", false},
            {"unknown_0x33c", false},
            {"unknown_0x340", false},
            {"unknown_0x344", false},
            {"unknown_0x348", false},
            {"matchingSpiritAshLevelUpper_0", false},
            {"matchingSpiritAshLevelUpper_1", false},
            {"matchingSpiritAshLevelUpper_2", false},
            {"matchingSpiritAshLevelUpper_3", false},
            {"matchingSpiritAshLevelUpper_4", false},
            {"matchingSpiritAshLevelUpper_5", false},
            {"matchingSpiritAshLevelUpper_6", false},
            {"matchingSpiritAshLevelUpper_7", false},
            {"matchingSpiritAshLevelUpper_8", false},
            {"matchingSpiritAshLevelUpper_9", false},
            {"matchingSpiritAshLevelUpper_10", false},
            {"unknown_0x358", false},
            {"baseScaduBlessingSpEffectId", false},
            {"baseReveredSpiritAshBlessingSpEffectId", false},
            {"unknown_0x368", false},
            {"unknown_0x36c", false},
            {"unknown_0x370", false},
            {"ridingSAReceivedRatePlayer", false},
            {"ridingSAReceivedRateNotPlayer", false},
            {"glovewortCrystalSpiritBuffSpEffectId", false},
            {"unknown_0x380", false},
            {"unknown_0x384", false},
            {"unknownSpEffectId_0x388", false},
            {"unknownSpEffectId_0x38c", false},
            {"unknownSpEffectId_0x390", false},
            {"baseReveredSpiritTorrentBlessingSpEffectId", false},
        });
        return indexer;
    };
    paramsTable["GameSystemCommonParam"] = [tableLoader]() -> auto { return tableLoader(L"GameSystemCommonParam"); };
}

template<> void ParamTableIndexer<GameSystemCommonParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,baseToughnessRecoverTime,chrEventTrun_byLeft90,chrEventTrun_byRight90,chrEventTrun_byLeft180,chrEventTrun_byRight180,chrEventTrun_90TurnStartAngle,chrEventTrun_180TurnStartAngle,stealthAtkDamageRate,flickDamageCutRateSuccessGurad,npcTalkAnimBeginDiffAngle,npcTalkAnimEndDiffAngle,sleepCollectorItemActionButtonParamId,allowUseBuddyItem_sfxInterval,allowUseBuddyItem_sfxDmyPolyId,allowUseBuddyItem_sfxDmyPolyId_horse");
    fwprintf(f, L",allowUseBuddyItem_sfxId,onBuddySummon_inActivateRange_sfxInterval,onBuddySummon_inActivateRange_sfxDmyPolyId,onBuddySummon_inActivateRange_sfxDmyPolyId_horse,onBuddySummon_inActivateRange_sfxId,onBuddySummon_inActivateRange_spEffectId_pc,onBuddySummon_inWarnRange_spEffectId_pc,onBuddySummon_atBuddyUnsummon_spEffectId_pc,onBuddySummon_inWarnRange_spEffectId_buddy,morningIngameHour,morningIngameMinute,morningIngameSecond,noonIngameHour,noonIngameMinute,noonIngameSecond,nightIngameHour");
    fwprintf(f, L",nightIngameMinute,nightIngameSecond,aiSightRateStart_Morning_Hour,aiSightRateStart_Morning_Minute,aiSightRateStart_Noon_Hour,aiSightRateStart_Noon_Minute,aiSightRateStart_Evening_Hour,aiSightRateStart_Evening_Minute,aiSightRateStart_Night_Hour,aiSightRateStart_Night_Minute,aiSightRateStart_Midnight_Hour,aiSightRateStart_Midnight_Minute,saLargeDamageHitSfx_Threshold,saLargeDamageHitSfx_SfxId,signCreatableDistFromSafePos,guestResummonDist");
    fwprintf(f, L",guestLeavingMessageDistMax,guestLeavingMessageDistMin,guestLeaveSessionDist,retryPointAreaRadius,sleepCollectorSpEffectId,recoverBelowMaxHpCompletionNoticeSpEffectId,estusFlaskRecovery_AbsorptionProductionSfxId_byHp,estusFlaskRecovery_AbsorptionProductionSfxId_byMp,respawnSpecialEffectActiveCheckerSpEffectId,onBuddySummon_inActivateRange_spEffectId_buddy,estusFlaskRecovery_AddEstusTime,defeatMultiModeEnemyOfSoulCorrectRate_byHost,defeatMultiModeEnemyOfSoulCorrectRate_byTeamGhost,defeatMultiModeBossOfSoulCorrectRate_byHost,defeatMultiModeBossOfSoulCorrectRate_byTeamGhost,enemyHpGaugeScreenOffset_byUp");
    fwprintf(f, L",playRegionCollectDist,enemyDetectionSpEffect_ShootBulletDummypolyId,bigRuneGreaterDemonBreakInGoodsNum,bigRuneGreaterDemonBreakInGoodsId,rideJumpRegionDefaultSfxId,saAttackRate_forVsRideAtk,enemySpEffectIdAfterSleepCollectorItemLot,afterEndingMapUid,afterEndingReturnPointEntityId,enemyDetectionSpEffect_BulletId_byCoopRing_RedHunter,enemyDetectionSpEffect_BulletId_byInvadeOrb_None,tutorialFlagOnAccessDistView,tutorialFlagOnAccessRetryPoint,tutorialFlagOnGetGroupReward,tutorialFlagOnEnterRideJumpRegion,tutorialCheckRideJumpRegionExpandRange");
    fwprintf(f, L",retryPointActivatedPcAnimId,retryPointActivatedDialogDelayTime,retryPointActivatedDialogTextId,signPuddleOpenPcAnimId,signPuddleOpenDialogDelayTime,activityOfDeadSpEffect_BulletId,activityOfDeadSpEffect_ShootBulletDummypolyId,activityOfDeadSpEffect_DeadFadeOutTime,ignorNetStateSyncTime_ForThrow,netPenaltyPointLanDisconnect,netPenaltyPointProfileSignout,netPenaltyPointReboot,netPnaltyPointSuspend,netPenaltyForgiveItemLimitTime,netPenaltyPointThreshold,uncontrolledMoveThresholdTime");
    fwprintf(f, L",enemyDetectionSpEffect_BulletId_byNpcEnemy,activityOfDeadTargetSearchSpEffect_OnHitSpEffect,activityOfDeadTargetSearchSpEffect_MaxLength,sightRangeLowerPromiseRate,saLargeDamageHitSfx_MinDamage,saLargeDamageHitSfx_ForceDamage,soloBreakInMaxPoint,npcTalkTimeOutThreshold,sendPlayLogIntervalTime,item370_MaxSfxNum,chrActivateDist_forLeavePC,summonDataCoopMatchingLevelUpperAbs,summonDataCoopMatchingLevelUpperRel,summonDataCoopMatchingWepLevelMul,pickUpBerserkerSignSpEffectBulletId,succeedBerserkerSelfKillingEffectId");
    fwprintf(f, L",machingLevelWhiteSignUpperRel,machingLevelWhiteSignUpperAbs,machingLevelRedSignUpperRel,machingLevelRedSignUpperAbs,machingWeaponLevelUpperWhiteSign_0,machingWeaponLevelUpperWhiteSign_1,machingWeaponLevelUpperWhiteSign_2,machingWeaponLevelUpperWhiteSign_3,machingWeaponLevelUpperWhiteSign_4,machingWeaponLevelUpperWhiteSign_5,machingWeaponLevelUpperWhiteSign_6,machingWeaponLevelUpperWhiteSign_7,machingWeaponLevelUpperWhiteSign_8,machingWeaponLevelUpperWhiteSign_9,machingWeaponLevelUpperWhiteSign_10,machingWeaponLevelUpperRedSign_0");
    fwprintf(f, L",machingWeaponLevelUpperRedSign_1,machingWeaponLevelUpperRedSign_2,machingWeaponLevelUpperRedSign_3,machingWeaponLevelUpperRedSign_4,machingWeaponLevelUpperRedSign_5,machingWeaponLevelUpperRedSign_6,machingWeaponLevelUpperRedSign_7,machingWeaponLevelUpperRedSign_8,machingWeaponLevelUpperRedSign_9,machingWeaponLevelUpperRedSign_10,autoInvadePoint_generateDist,autoInvadePoint_cancelDist,sendGlobalEventLogIntervalTime,addSoloBreakInPoint_White,addSoloBreakInPoint_Black,addSoloBreakInPoint_ForceJoin");
    fwprintf(f, L",addSoloBreakInPoint_VisitorGuardian,addSoloBreakInPoint_VisitorRedHunter,invincibleTimer_forNetPC_initSync,invincibleTimer_forNetPC,redHunter_HostBossAreaGetSoulRate,ghostFootprintDecalParamId,leaveAroundHostWarningTime,hostModeCostItemId,aIJump_DecelerateParam,buddyDisappearDelaySec,aIJump_AnimYMoveCorrectRate_onJumpOff,stealthSystemSightRate_NotInStealthRigid_NotSightHide_StealthMode,stealthSystemSightRate_NotInStealthRigid_SightHide_NotStealthMode,stealthSystemSightRate_NotInStealthRigid_SightHide_StealthMode,stealthSystemSightRate_InStealthRigid_NotSightHide_NotStealthMode,stealthSystemSightRate_InStealthRigid_NotSightHide_StealthMode");
    fwprintf(f, L",stealthSystemSightRate_InStealthRigid_SightHide_NotStealthMode,stealthSystemSightRate_InStealthRigid_SightHide_StealthMode,msbEventGeomTreasureInfo_actionButtonParamId_corpse,msbEventGeomTreasureInfo_itemGetAnimId_corpse,msbEventGeomTreasureInfo_actionButtonParamId_box,msbEventGeomTreasureInfo_itemGetAnimId_box,msbEventGeomTreasureInfo_actionButtonParamId_shine,msbEventGeomTreasureInfo_itemGetAnimId_shine,signPuddleAssetId,signPuddleAppearDmypolyId0,signPuddleAppearDmypolyId1,signPuddleAppearDmypolyId2,signPuddleAppearDmypolyId3,fallDamageRate_forRidePC,fallDamageRate_forRideNPC,OldMonkOfYellow_CreateSignSpEffectId");
    fwprintf(f, L",StragglerActivateDist,SpEffectId_EnableUseItem_StragglerActivate,SpEffectId_StragglerWakeUp,SpEffectId_StragglerTarget,SpEffectId_StragglerOppose,buddyWarp_TriggerTimeRayBlocked,buddyWarp_TriggerDistToPlayer,buddyWarp_ThresholdTimePathStacked,buddyWarp_ThresholdRangePathStacked,aiSightRate_morning,aiSightRate_noonA,buddyPassThroughTriggerTime,aiSightRate_evening,aiSightRate_night,aiSightRate_midnightA,unknown_0x230");
    fwprintf(f, L",aiSightRate_sunloss_light,aiSightRate_sunloss_dark,aiSightRate_sunloss_veryDark,stealthSystemSightAngleReduceRate_NotInStealthRigid_NotSightHide_StealthMode,stealthSystemSightAngleReduceRate_NotInStealthRigid_SightHide_NotStealthMode,stealthSystemSightAngleReduceRate_NotInStealthRigid_SightHide_StealthMode,stealthSystemSightAngleReduceRate_InStealthRigid_NotSightHide_NotStealthMode,stealthSystemSightAngleReduceRate_InStealthRigid_NotSightHide_StealthMode,stealthSystemSightAngleReduceRate_InStealthRigid_SightHide_NotStealthMode,stealthSystemSightAngleReduceRate_InStealthRigid_SightHide_StealthMode,weatherLotConditionStart_Morning_Hour,weatherLotConditionStart_Morning_Minute,weatherLotConditionStart_Day_Hour,weatherLotConditionStart_Day_Minute,weatherLotConditionStart_Evening_Hour,weatherLotConditionStart_Evening_Minute");
    fwprintf(f, L",weatherLotConditionStart_Night_Hour,weatherLotConditionStart_Night_Minute,weatherLotConditionStart_DayBreak_Hour,weatherLotConditionStart_DayBreak_Minute,pclightScaleChangeStart_Hour,pclightScaleChangeStart_Minute,pclightScaleChangeEnd_Hour,pclightScaleChangeEnd_Minute,pclightScaleByTimezone,bigRuneGreaterDemon_SummonBuddySpecialEffectId_Buddy,bigRuneGreaterDemon_SummonBuddySpecialEffectId_Pc,homeBonfireParamId,machingWeaponLevelUpperWhiteSign_11,machingWeaponLevelUpperWhiteSign_12,machingWeaponLevelUpperWhiteSign_13,machingWeaponLevelUpperWhiteSign_14");
    fwprintf(f, L",machingWeaponLevelUpperWhiteSign_15,machingWeaponLevelUpperWhiteSign_16,machingWeaponLevelUpperWhiteSign_17,machingWeaponLevelUpperWhiteSign_18,machingWeaponLevelUpperWhiteSign_19,machingWeaponLevelUpperWhiteSign_20,machingWeaponLevelUpperWhiteSign_21,machingWeaponLevelUpperWhiteSign_22,machingWeaponLevelUpperWhiteSign_23,machingWeaponLevelUpperWhiteSign_24,machingWeaponLevelUpperWhiteSign_25,machingWeaponLevelUpperRedSign_11,machingWeaponLevelUpperRedSign_12,machingWeaponLevelUpperRedSign_13,machingWeaponLevelUpperRedSign_14,machingWeaponLevelUpperRedSign_15");
    fwprintf(f, L",machingWeaponLevelUpperRedSign_16,machingWeaponLevelUpperRedSign_17,machingWeaponLevelUpperRedSign_18,machingWeaponLevelUpperRedSign_19,machingWeaponLevelUpperRedSign_20,machingWeaponLevelUpperRedSign_21,machingWeaponLevelUpperRedSign_22,machingWeaponLevelUpperRedSign_23,machingWeaponLevelUpperRedSign_24,machingWeaponLevelUpperRedSign_25,menuTimezoneStart_Morning_Hour,menuTimezoneStart_Morning_Minute,menuTimezoneStart_Day1_Hour,menuTimezoneStart_Day1_Minute,menuTimezoneStart_Day2_Hour,menuTimezoneStart_Day2_Minute");
    fwprintf(f, L",menuTimezoneStart_Evening_Hour,menuTimezoneStart_Evening_Minute,menuTimezoneStart_Night_Hour,menuTimezoneStart_Night_Minute,menuTimezoneStart_Midnight_Hour,menuTimezoneStart_Midnight_Minute,remotePlayerThreatLvNotify_ThreatLv,remotePlayerThreatLvNotify_NotifyDist,remotePlayerThreatLvNotify_EndNotifyDist,worldMapPointDiscoveryExpandRange,worldMapPointReentryExpandRange,remotePlayerThreatLvNotify_NotifyTime,breakIn_A_rebreakInGoodsNum,breakIn_A_rebreakInGoodsId,rideJumpoff_SfxId,rideJumpoff_SfxHeightOffset");
    fwprintf(f, L",rideJumpoff_SpEffectId,rideJumpoff_SpEffectIdPc,unlockExchangeMenuEventFlagId,unlockMessageMenuEventFlagId,breakInOnce_A_rebreakInGoodsNum,breakIn_B_rebreakInGoodsNum,breakInOnce_A_rebreakInGoodsId,breakIn_B_rebreakInGoodsId,actionButtonInputCancelTime,blockClearBonusDelayTime,bonfireCheckEnemyRange,unknown_0x2f0,matchingLevelArenaUpperRel,matchingLevelArenaUpperAbs,matchingWeaponLevelUpperArena_0,matchingWeaponLevelUpperArena_1");
    fwprintf(f, L",matchingWeaponLevelUpperArena_2,matchingWeaponLevelUpperArena_3,matchingWeaponLevelUpperArena_4,matchingWeaponLevelUpperArena_5,matchingWeaponLevelUpperArena_6,matchingWeaponLevelUpperArena_7,matchingWeaponLevelUpperArena_8,matchingWeaponLevelUpperArena_9,matchingWeaponLevelUpperArena_10,matchingWeaponLevelUpperArena_11,matchingWeaponLevelUpperArena_12,matchingWeaponLevelUpperArena_13,matchingWeaponLevelUpperArena_14,matchingWeaponLevelUpperArena_15,matchingWeaponLevelUpperArena_16,matchingWeaponLevelUpperArena_17");
    fwprintf(f, L",matchingWeaponLevelUpperArena_18,matchingWeaponLevelUpperArena_19,matchingWeaponLevelUpperArena_20,matchingWeaponLevelUpperArena_21,matchingWeaponLevelUpperArena_22,matchingWeaponLevelUpperArena_23,matchingWeaponLevelUpperArena_24,matchingWeaponLevelUpperArena_25,unknown_0x310,unknown_0x314,unknown_0x318,unknown_0x31c,unknown_0x320,unknown_0x324,unknown_0x328,unknown_0x32c");
    fwprintf(f, L",unknown_0x330,unknown_0x334,unknown_0x338,unknown_0x33c,unknown_0x340,unknown_0x344,unknown_0x348,matchingSpiritAshLevelUpper_0,matchingSpiritAshLevelUpper_1,matchingSpiritAshLevelUpper_2,matchingSpiritAshLevelUpper_3,matchingSpiritAshLevelUpper_4,matchingSpiritAshLevelUpper_5,matchingSpiritAshLevelUpper_6,matchingSpiritAshLevelUpper_7,matchingSpiritAshLevelUpper_8");
    fwprintf(f, L",matchingSpiritAshLevelUpper_9,matchingSpiritAshLevelUpper_10,unknown_0x358,baseScaduBlessingSpEffectId,baseReveredSpiritAshBlessingSpEffectId,unknown_0x368,unknown_0x36c,unknown_0x370,ridingSAReceivedRatePlayer,ridingSAReceivedRateNotPlayer,glovewortCrystalSpiritBuffSpEffectId,unknown_0x380,unknown_0x384,unknownSpEffectId_0x388,unknownSpEffectId_0x38c,unknownSpEffectId_0x390");
    fwprintf(f, L",baseReveredSpiritTorrentBlessingSpEffectId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g,%d,%d,%d,%d,%d,%d,%g,%g,%g,%g,%d,%g,%d,%d,%d,%g,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%g,%g,%g,%g,%g,%g,%d,%d,%d,%d,%d,%d,%g,%g,%g,%g,%g,%u,%u,%u,%u,%d,%d,%g,%d,%d,%u,%d,%d,%u,%u,%u,%u,%g,%d,%g,%d,%d,%g,%d,%d,%g,%g,%u,%u,%u,%u,%g,%u,%u,%d,%d,%g,%g,%d,%d,%u,%g,%g,%u,%u,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%g,%u,%u,%u,%u,%u,%u,%u,%g,%d,%g,%d,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%g,%g,%d,%g,%d,%d,%d,%d,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%d,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%g,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%g,%g,%g,%g,%u,%u,%d,%d,%g,%d,%d,%u,%u,%u,%u,%d,%d,%g,%g,%g,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%d,%d,%d,%d,%g,%g,%d,%d,%g,%d,%d,%d,%d\n",
            this->paramId(i),
            param->baseToughnessRecoverTime,
            param->chrEventTrun_byLeft90,
            param->chrEventTrun_byRight90,
            param->chrEventTrun_byLeft180,
            param->chrEventTrun_byRight180,
            param->chrEventTrun_90TurnStartAngle,
            param->chrEventTrun_180TurnStartAngle,
            param->stealthAtkDamageRate,
            param->flickDamageCutRateSuccessGurad,
            param->npcTalkAnimBeginDiffAngle,
            param->npcTalkAnimEndDiffAngle,
            param->sleepCollectorItemActionButtonParamId,
            param->allowUseBuddyItem_sfxInterval,
            param->allowUseBuddyItem_sfxDmyPolyId,
            param->allowUseBuddyItem_sfxDmyPolyId_horse,
            param->allowUseBuddyItem_sfxId,
            param->onBuddySummon_inActivateRange_sfxInterval,
            param->onBuddySummon_inActivateRange_sfxDmyPolyId,
            param->onBuddySummon_inActivateRange_sfxDmyPolyId_horse,
            param->onBuddySummon_inActivateRange_sfxId,
            param->onBuddySummon_inActivateRange_spEffectId_pc,
            param->onBuddySummon_inWarnRange_spEffectId_pc,
            param->onBuddySummon_atBuddyUnsummon_spEffectId_pc,
            param->onBuddySummon_inWarnRange_spEffectId_buddy,
            param->morningIngameHour,
            param->morningIngameMinute,
            param->morningIngameSecond,
            param->noonIngameHour,
            param->noonIngameMinute,
            param->noonIngameSecond,
            param->nightIngameHour,
            param->nightIngameMinute,
            param->nightIngameSecond,
            param->aiSightRateStart_Morning_Hour,
            param->aiSightRateStart_Morning_Minute,
            param->aiSightRateStart_Noon_Hour,
            param->aiSightRateStart_Noon_Minute,
            param->aiSightRateStart_Evening_Hour,
            param->aiSightRateStart_Evening_Minute,
            param->aiSightRateStart_Night_Hour,
            param->aiSightRateStart_Night_Minute,
            param->aiSightRateStart_Midnight_Hour,
            param->aiSightRateStart_Midnight_Minute,
            param->saLargeDamageHitSfx_Threshold,
            param->saLargeDamageHitSfx_SfxId,
            param->signCreatableDistFromSafePos,
            param->guestResummonDist,
            param->guestLeavingMessageDistMax,
            param->guestLeavingMessageDistMin,
            param->guestLeaveSessionDist,
            param->retryPointAreaRadius,
            param->sleepCollectorSpEffectId,
            param->recoverBelowMaxHpCompletionNoticeSpEffectId,
            param->estusFlaskRecovery_AbsorptionProductionSfxId_byHp,
            param->estusFlaskRecovery_AbsorptionProductionSfxId_byMp,
            param->respawnSpecialEffectActiveCheckerSpEffectId,
            param->onBuddySummon_inActivateRange_spEffectId_buddy,
            param->estusFlaskRecovery_AddEstusTime,
            param->defeatMultiModeEnemyOfSoulCorrectRate_byHost,
            param->defeatMultiModeEnemyOfSoulCorrectRate_byTeamGhost,
            param->defeatMultiModeBossOfSoulCorrectRate_byHost,
            param->defeatMultiModeBossOfSoulCorrectRate_byTeamGhost,
            param->enemyHpGaugeScreenOffset_byUp,
            param->playRegionCollectDist,
            param->enemyDetectionSpEffect_ShootBulletDummypolyId,
            param->bigRuneGreaterDemonBreakInGoodsNum,
            param->bigRuneGreaterDemonBreakInGoodsId,
            param->rideJumpRegionDefaultSfxId,
            param->saAttackRate_forVsRideAtk,
            param->enemySpEffectIdAfterSleepCollectorItemLot,
            param->afterEndingMapUid,
            param->afterEndingReturnPointEntityId,
            param->enemyDetectionSpEffect_BulletId_byCoopRing_RedHunter,
            param->enemyDetectionSpEffect_BulletId_byInvadeOrb_None,
            param->tutorialFlagOnAccessDistView,
            param->tutorialFlagOnAccessRetryPoint,
            param->tutorialFlagOnGetGroupReward,
            param->tutorialFlagOnEnterRideJumpRegion,
            param->tutorialCheckRideJumpRegionExpandRange,
            param->retryPointActivatedPcAnimId,
            param->retryPointActivatedDialogDelayTime,
            param->retryPointActivatedDialogTextId,
            param->signPuddleOpenPcAnimId,
            param->signPuddleOpenDialogDelayTime,
            param->activityOfDeadSpEffect_BulletId,
            param->activityOfDeadSpEffect_ShootBulletDummypolyId,
            param->activityOfDeadSpEffect_DeadFadeOutTime,
            param->ignorNetStateSyncTime_ForThrow,
            param->netPenaltyPointLanDisconnect,
            param->netPenaltyPointProfileSignout,
            param->netPenaltyPointReboot,
            param->netPnaltyPointSuspend,
            param->netPenaltyForgiveItemLimitTime,
            param->netPenaltyPointThreshold,
            param->uncontrolledMoveThresholdTime,
            param->enemyDetectionSpEffect_BulletId_byNpcEnemy,
            param->activityOfDeadTargetSearchSpEffect_OnHitSpEffect,
            param->activityOfDeadTargetSearchSpEffect_MaxLength,
            param->sightRangeLowerPromiseRate,
            param->saLargeDamageHitSfx_MinDamage,
            param->saLargeDamageHitSfx_ForceDamage,
            param->soloBreakInMaxPoint,
            param->npcTalkTimeOutThreshold,
            param->sendPlayLogIntervalTime,
            param->item370_MaxSfxNum,
            param->chrActivateDist_forLeavePC,
            param->summonDataCoopMatchingLevelUpperAbs,
            param->summonDataCoopMatchingLevelUpperRel,
            param->summonDataCoopMatchingWepLevelMul,
            param->pickUpBerserkerSignSpEffectBulletId,
            param->succeedBerserkerSelfKillingEffectId,
            param->machingLevelWhiteSignUpperRel,
            param->machingLevelWhiteSignUpperAbs,
            param->machingLevelRedSignUpperRel,
            param->machingLevelRedSignUpperAbs,
            param->machingWeaponLevelUpperWhiteSign_0,
            param->machingWeaponLevelUpperWhiteSign_1,
            param->machingWeaponLevelUpperWhiteSign_2,
            param->machingWeaponLevelUpperWhiteSign_3,
            param->machingWeaponLevelUpperWhiteSign_4,
            param->machingWeaponLevelUpperWhiteSign_5,
            param->machingWeaponLevelUpperWhiteSign_6,
            param->machingWeaponLevelUpperWhiteSign_7,
            param->machingWeaponLevelUpperWhiteSign_8,
            param->machingWeaponLevelUpperWhiteSign_9,
            param->machingWeaponLevelUpperWhiteSign_10,
            param->machingWeaponLevelUpperRedSign_0,
            param->machingWeaponLevelUpperRedSign_1,
            param->machingWeaponLevelUpperRedSign_2,
            param->machingWeaponLevelUpperRedSign_3,
            param->machingWeaponLevelUpperRedSign_4,
            param->machingWeaponLevelUpperRedSign_5,
            param->machingWeaponLevelUpperRedSign_6,
            param->machingWeaponLevelUpperRedSign_7,
            param->machingWeaponLevelUpperRedSign_8,
            param->machingWeaponLevelUpperRedSign_9,
            param->machingWeaponLevelUpperRedSign_10,
            param->autoInvadePoint_generateDist,
            param->autoInvadePoint_cancelDist,
            param->sendGlobalEventLogIntervalTime,
            param->addSoloBreakInPoint_White,
            param->addSoloBreakInPoint_Black,
            param->addSoloBreakInPoint_ForceJoin,
            param->addSoloBreakInPoint_VisitorGuardian,
            param->addSoloBreakInPoint_VisitorRedHunter,
            param->invincibleTimer_forNetPC_initSync,
            param->invincibleTimer_forNetPC,
            param->redHunter_HostBossAreaGetSoulRate,
            param->ghostFootprintDecalParamId,
            param->leaveAroundHostWarningTime,
            param->hostModeCostItemId,
            param->aIJump_DecelerateParam,
            param->buddyDisappearDelaySec,
            param->aIJump_AnimYMoveCorrectRate_onJumpOff,
            param->stealthSystemSightRate_NotInStealthRigid_NotSightHide_StealthMode,
            param->stealthSystemSightRate_NotInStealthRigid_SightHide_NotStealthMode,
            param->stealthSystemSightRate_NotInStealthRigid_SightHide_StealthMode,
            param->stealthSystemSightRate_InStealthRigid_NotSightHide_NotStealthMode,
            param->stealthSystemSightRate_InStealthRigid_NotSightHide_StealthMode,
            param->stealthSystemSightRate_InStealthRigid_SightHide_NotStealthMode,
            param->stealthSystemSightRate_InStealthRigid_SightHide_StealthMode,
            param->msbEventGeomTreasureInfo_actionButtonParamId_corpse,
            param->msbEventGeomTreasureInfo_itemGetAnimId_corpse,
            param->msbEventGeomTreasureInfo_actionButtonParamId_box,
            param->msbEventGeomTreasureInfo_itemGetAnimId_box,
            param->msbEventGeomTreasureInfo_actionButtonParamId_shine,
            param->msbEventGeomTreasureInfo_itemGetAnimId_shine,
            param->signPuddleAssetId,
            param->signPuddleAppearDmypolyId0,
            param->signPuddleAppearDmypolyId1,
            param->signPuddleAppearDmypolyId2,
            param->signPuddleAppearDmypolyId3,
            param->fallDamageRate_forRidePC,
            param->fallDamageRate_forRideNPC,
            param->OldMonkOfYellow_CreateSignSpEffectId,
            param->StragglerActivateDist,
            param->SpEffectId_EnableUseItem_StragglerActivate,
            param->SpEffectId_StragglerWakeUp,
            param->SpEffectId_StragglerTarget,
            param->SpEffectId_StragglerOppose,
            param->buddyWarp_TriggerTimeRayBlocked,
            param->buddyWarp_TriggerDistToPlayer,
            param->buddyWarp_ThresholdTimePathStacked,
            param->buddyWarp_ThresholdRangePathStacked,
            param->aiSightRate_morning,
            param->aiSightRate_noonA,
            param->buddyPassThroughTriggerTime,
            param->aiSightRate_evening,
            param->aiSightRate_night,
            param->aiSightRate_midnightA,
            param->unknown_0x230,
            param->aiSightRate_sunloss_light,
            param->aiSightRate_sunloss_dark,
            param->aiSightRate_sunloss_veryDark,
            param->stealthSystemSightAngleReduceRate_NotInStealthRigid_NotSightHide_StealthMode,
            param->stealthSystemSightAngleReduceRate_NotInStealthRigid_SightHide_NotStealthMode,
            param->stealthSystemSightAngleReduceRate_NotInStealthRigid_SightHide_StealthMode,
            param->stealthSystemSightAngleReduceRate_InStealthRigid_NotSightHide_NotStealthMode,
            param->stealthSystemSightAngleReduceRate_InStealthRigid_NotSightHide_StealthMode,
            param->stealthSystemSightAngleReduceRate_InStealthRigid_SightHide_NotStealthMode,
            param->stealthSystemSightAngleReduceRate_InStealthRigid_SightHide_StealthMode,
            param->weatherLotConditionStart_Morning_Hour,
            param->weatherLotConditionStart_Morning_Minute,
            param->weatherLotConditionStart_Day_Hour,
            param->weatherLotConditionStart_Day_Minute,
            param->weatherLotConditionStart_Evening_Hour,
            param->weatherLotConditionStart_Evening_Minute,
            param->weatherLotConditionStart_Night_Hour,
            param->weatherLotConditionStart_Night_Minute,
            param->weatherLotConditionStart_DayBreak_Hour,
            param->weatherLotConditionStart_DayBreak_Minute,
            param->pclightScaleChangeStart_Hour,
            param->pclightScaleChangeStart_Minute,
            param->pclightScaleChangeEnd_Hour,
            param->pclightScaleChangeEnd_Minute,
            param->pclightScaleByTimezone,
            param->bigRuneGreaterDemon_SummonBuddySpecialEffectId_Buddy,
            param->bigRuneGreaterDemon_SummonBuddySpecialEffectId_Pc,
            param->homeBonfireParamId,
            param->machingWeaponLevelUpperWhiteSign_11,
            param->machingWeaponLevelUpperWhiteSign_12,
            param->machingWeaponLevelUpperWhiteSign_13,
            param->machingWeaponLevelUpperWhiteSign_14,
            param->machingWeaponLevelUpperWhiteSign_15,
            param->machingWeaponLevelUpperWhiteSign_16,
            param->machingWeaponLevelUpperWhiteSign_17,
            param->machingWeaponLevelUpperWhiteSign_18,
            param->machingWeaponLevelUpperWhiteSign_19,
            param->machingWeaponLevelUpperWhiteSign_20,
            param->machingWeaponLevelUpperWhiteSign_21,
            param->machingWeaponLevelUpperWhiteSign_22,
            param->machingWeaponLevelUpperWhiteSign_23,
            param->machingWeaponLevelUpperWhiteSign_24,
            param->machingWeaponLevelUpperWhiteSign_25,
            param->machingWeaponLevelUpperRedSign_11,
            param->machingWeaponLevelUpperRedSign_12,
            param->machingWeaponLevelUpperRedSign_13,
            param->machingWeaponLevelUpperRedSign_14,
            param->machingWeaponLevelUpperRedSign_15,
            param->machingWeaponLevelUpperRedSign_16,
            param->machingWeaponLevelUpperRedSign_17,
            param->machingWeaponLevelUpperRedSign_18,
            param->machingWeaponLevelUpperRedSign_19,
            param->machingWeaponLevelUpperRedSign_20,
            param->machingWeaponLevelUpperRedSign_21,
            param->machingWeaponLevelUpperRedSign_22,
            param->machingWeaponLevelUpperRedSign_23,
            param->machingWeaponLevelUpperRedSign_24,
            param->machingWeaponLevelUpperRedSign_25,
            param->menuTimezoneStart_Morning_Hour,
            param->menuTimezoneStart_Morning_Minute,
            param->menuTimezoneStart_Day1_Hour,
            param->menuTimezoneStart_Day1_Minute,
            param->menuTimezoneStart_Day2_Hour,
            param->menuTimezoneStart_Day2_Minute,
            param->menuTimezoneStart_Evening_Hour,
            param->menuTimezoneStart_Evening_Minute,
            param->menuTimezoneStart_Night_Hour,
            param->menuTimezoneStart_Night_Minute,
            param->menuTimezoneStart_Midnight_Hour,
            param->menuTimezoneStart_Midnight_Minute,
            param->remotePlayerThreatLvNotify_ThreatLv,
            param->remotePlayerThreatLvNotify_NotifyDist,
            param->remotePlayerThreatLvNotify_EndNotifyDist,
            param->worldMapPointDiscoveryExpandRange,
            param->worldMapPointReentryExpandRange,
            param->remotePlayerThreatLvNotify_NotifyTime,
            param->breakIn_A_rebreakInGoodsNum,
            param->breakIn_A_rebreakInGoodsId,
            param->rideJumpoff_SfxId,
            param->rideJumpoff_SfxHeightOffset,
            param->rideJumpoff_SpEffectId,
            param->rideJumpoff_SpEffectIdPc,
            param->unlockExchangeMenuEventFlagId,
            param->unlockMessageMenuEventFlagId,
            param->breakInOnce_A_rebreakInGoodsNum,
            param->breakIn_B_rebreakInGoodsNum,
            param->breakInOnce_A_rebreakInGoodsId,
            param->breakIn_B_rebreakInGoodsId,
            param->actionButtonInputCancelTime,
            param->blockClearBonusDelayTime,
            param->bonfireCheckEnemyRange,
            param->unknown_0x2f0,
            param->matchingLevelArenaUpperRel,
            param->matchingLevelArenaUpperAbs,
            param->matchingWeaponLevelUpperArena_0,
            param->matchingWeaponLevelUpperArena_1,
            param->matchingWeaponLevelUpperArena_2,
            param->matchingWeaponLevelUpperArena_3,
            param->matchingWeaponLevelUpperArena_4,
            param->matchingWeaponLevelUpperArena_5,
            param->matchingWeaponLevelUpperArena_6,
            param->matchingWeaponLevelUpperArena_7,
            param->matchingWeaponLevelUpperArena_8,
            param->matchingWeaponLevelUpperArena_9,
            param->matchingWeaponLevelUpperArena_10,
            param->matchingWeaponLevelUpperArena_11,
            param->matchingWeaponLevelUpperArena_12,
            param->matchingWeaponLevelUpperArena_13,
            param->matchingWeaponLevelUpperArena_14,
            param->matchingWeaponLevelUpperArena_15,
            param->matchingWeaponLevelUpperArena_16,
            param->matchingWeaponLevelUpperArena_17,
            param->matchingWeaponLevelUpperArena_18,
            param->matchingWeaponLevelUpperArena_19,
            param->matchingWeaponLevelUpperArena_20,
            param->matchingWeaponLevelUpperArena_21,
            param->matchingWeaponLevelUpperArena_22,
            param->matchingWeaponLevelUpperArena_23,
            param->matchingWeaponLevelUpperArena_24,
            param->matchingWeaponLevelUpperArena_25,
            param->unknown_0x310,
            param->unknown_0x314,
            param->unknown_0x318,
            param->unknown_0x31c,
            param->unknown_0x320,
            param->unknown_0x324,
            param->unknown_0x328,
            param->unknown_0x32c,
            param->unknown_0x330,
            param->unknown_0x334,
            param->unknown_0x338,
            param->unknown_0x33c,
            param->unknown_0x340,
            param->unknown_0x344,
            param->unknown_0x348,
            param->matchingSpiritAshLevelUpper_0,
            param->matchingSpiritAshLevelUpper_1,
            param->matchingSpiritAshLevelUpper_2,
            param->matchingSpiritAshLevelUpper_3,
            param->matchingSpiritAshLevelUpper_4,
            param->matchingSpiritAshLevelUpper_5,
            param->matchingSpiritAshLevelUpper_6,
            param->matchingSpiritAshLevelUpper_7,
            param->matchingSpiritAshLevelUpper_8,
            param->matchingSpiritAshLevelUpper_9,
            param->matchingSpiritAshLevelUpper_10,
            param->unknown_0x358,
            param->baseScaduBlessingSpEffectId,
            param->baseReveredSpiritAshBlessingSpEffectId,
            param->unknown_0x368,
            param->unknown_0x36c,
            param->unknown_0x370,
            param->ridingSAReceivedRatePlayer,
            param->ridingSAReceivedRateNotPlayer,
            param->glovewortCrystalSpiritBuffSpEffectId,
            param->unknown_0x380,
            param->unknown_0x384,
            param->unknownSpEffectId_0x388,
            param->unknownSpEffectId_0x38c,
            param->unknownSpEffectId_0x390,
            param->baseReveredSpiritTorrentBlessingSpEffectId
        );
    }
    fclose(f);
}

}
