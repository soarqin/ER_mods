#include "../luabindings.h"
#include "../defs/NpcThinkParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<NpcThinkParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerNpcThinkParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["NpcThinkParam"]; usertype) return;
        auto indexerNpcThinkParam = state->new_usertype<ParamTableIndexer<NpcThinkParam>>("NpcThinkParamTableIndexer");
        indexerNpcThinkParam["count"] = sol::property(&ParamTableIndexer<NpcThinkParam>::count);
        indexerNpcThinkParam["__index"] = &ParamTableIndexer<NpcThinkParam>::at;
        indexerNpcThinkParam["id"] = &ParamTableIndexer<NpcThinkParam>::paramId;
        indexerNpcThinkParam["get"] = &ParamTableIndexer<NpcThinkParam>::get;
        indexerNpcThinkParam["exportToCsv"] = &ParamTableIndexer<NpcThinkParam>::exportToCsv;
        indexerNpcThinkParam["importFromCsv"] = &ParamTableIndexer<NpcThinkParam>::importFromCsv;
        auto utNpcThinkParam = state->new_usertype<NpcThinkParam>("NpcThinkParam");
        utNpcThinkParam["disableParam_NT"] = sol::property([](NpcThinkParam &param) -> uint8_t { return param.disableParam_NT; }, [](NpcThinkParam &param, uint8_t value) { param.disableParam_NT = value; });
        utNpcThinkParam["logicId"] = &NpcThinkParam::logicId;
        utNpcThinkParam["battleGoalID"] = &NpcThinkParam::battleGoalID;
        utNpcThinkParam["searchEye_dist"] = &NpcThinkParam::searchEye_dist;
        utNpcThinkParam["searchEye_angY"] = &NpcThinkParam::searchEye_angY;
        utNpcThinkParam["isNoAvoidHugeEnemy"] = sol::property([](NpcThinkParam &param) -> uint8_t { return param.isNoAvoidHugeEnemy; }, [](NpcThinkParam &param, uint8_t value) { param.isNoAvoidHugeEnemy = value; });
        utNpcThinkParam["enableWeaponOnOff"] = sol::property([](NpcThinkParam &param) -> uint8_t { return param.enableWeaponOnOff; }, [](NpcThinkParam &param, uint8_t value) { param.enableWeaponOnOff = value; });
        utNpcThinkParam["targetAILockDmyPoly"] = sol::property([](NpcThinkParam &param) -> uint8_t { return param.targetAILockDmyPoly; }, [](NpcThinkParam &param, uint8_t value) { param.targetAILockDmyPoly = value; });
        utNpcThinkParam["spEffectId_RangedAttack"] = &NpcThinkParam::spEffectId_RangedAttack;
        utNpcThinkParam["searchTargetLv1ForgetTime"] = &NpcThinkParam::searchTargetLv1ForgetTime;
        utNpcThinkParam["searchTargetLv2ForgetTime"] = &NpcThinkParam::searchTargetLv2ForgetTime;
        utNpcThinkParam["BackHomeLife_OnHitEneWal"] = &NpcThinkParam::BackHomeLife_OnHitEneWal;
        utNpcThinkParam["SightTargetForgetTime"] = &NpcThinkParam::SightTargetForgetTime;
        utNpcThinkParam["idAttackCannotMove"] = &NpcThinkParam::idAttackCannotMove;
        utNpcThinkParam["ear_dist"] = &NpcThinkParam::ear_dist;
        utNpcThinkParam["callHelp_ActionAnimId"] = &NpcThinkParam::callHelp_ActionAnimId;
        utNpcThinkParam["callHelp_CallActionId"] = &NpcThinkParam::callHelp_CallActionId;
        utNpcThinkParam["eye_dist"] = &NpcThinkParam::eye_dist;
        utNpcThinkParam["isGuard_Act"] = &NpcThinkParam::isGuard_Act;
        utNpcThinkParam["ear_soundcut_dist"] = &NpcThinkParam::ear_soundcut_dist;
        utNpcThinkParam["nose_dist"] = &NpcThinkParam::nose_dist;
        utNpcThinkParam["maxBackhomeDist"] = &NpcThinkParam::maxBackhomeDist;
        utNpcThinkParam["backhomeDist"] = &NpcThinkParam::backhomeDist;
        utNpcThinkParam["backhomeBattleDist"] = &NpcThinkParam::backhomeBattleDist;
        utNpcThinkParam["nonBattleActLife"] = &NpcThinkParam::nonBattleActLife;
        utNpcThinkParam["BackHome_LookTargetTime"] = &NpcThinkParam::BackHome_LookTargetTime;
        utNpcThinkParam["BackHome_LookTargetDist"] = &NpcThinkParam::BackHome_LookTargetDist;
        utNpcThinkParam["SoundTargetForgetTime"] = &NpcThinkParam::SoundTargetForgetTime;
        utNpcThinkParam["BattleStartDist"] = &NpcThinkParam::BattleStartDist;
        utNpcThinkParam["callHelp_MyPeerId"] = &NpcThinkParam::callHelp_MyPeerId;
        utNpcThinkParam["callHelp_CallPeerId"] = &NpcThinkParam::callHelp_CallPeerId;
        utNpcThinkParam["targetSys_DmgEffectRate"] = &NpcThinkParam::targetSys_DmgEffectRate;
        utNpcThinkParam["TeamAttackEffectivity"] = &NpcThinkParam::TeamAttackEffectivity;
        utNpcThinkParam["eye_angX"] = &NpcThinkParam::eye_angX;
        utNpcThinkParam["eye_angY"] = &NpcThinkParam::eye_angY;
        utNpcThinkParam["disableDark"] = &NpcThinkParam::disableDark;
        utNpcThinkParam["caravanRole"] = &NpcThinkParam::caravanRole;
        utNpcThinkParam["callHelp_CallValidMinDistTarget"] = &NpcThinkParam::callHelp_CallValidMinDistTarget;
        utNpcThinkParam["callHelp_CallValidRange"] = &NpcThinkParam::callHelp_CallValidRange;
        utNpcThinkParam["callHelp_ForgetTimeByArrival"] = &NpcThinkParam::callHelp_ForgetTimeByArrival;
        utNpcThinkParam["callHelp_MinWaitTime"] = &NpcThinkParam::callHelp_MinWaitTime;
        utNpcThinkParam["callHelp_MaxWaitTime"] = &NpcThinkParam::callHelp_MaxWaitTime;
        utNpcThinkParam["goalAction_ToCaution"] = &NpcThinkParam::goalAction_ToCaution;
        utNpcThinkParam["ear_listenLevel"] = &NpcThinkParam::ear_listenLevel;
        utNpcThinkParam["callHelp_ReplyBehaviorType"] = &NpcThinkParam::callHelp_ReplyBehaviorType;
        utNpcThinkParam["disablePathMove"] = &NpcThinkParam::disablePathMove;
        utNpcThinkParam["skipArrivalVisibleCheck"] = &NpcThinkParam::skipArrivalVisibleCheck;
        utNpcThinkParam["thinkAttr_doAdmirer"] = &NpcThinkParam::thinkAttr_doAdmirer;
        utNpcThinkParam["enableNaviFlg_Edge"] = sol::property([](NpcThinkParam &param) -> uint8_t { return param.enableNaviFlg_Edge; }, [](NpcThinkParam &param, uint8_t value) { param.enableNaviFlg_Edge = value; });
        utNpcThinkParam["enableNaviFlg_LargeSpace"] = sol::property([](NpcThinkParam &param) -> uint8_t { return param.enableNaviFlg_LargeSpace; }, [](NpcThinkParam &param, uint8_t value) { param.enableNaviFlg_LargeSpace = value; });
        utNpcThinkParam["enableNaviFlg_Ladder"] = sol::property([](NpcThinkParam &param) -> uint8_t { return param.enableNaviFlg_Ladder; }, [](NpcThinkParam &param, uint8_t value) { param.enableNaviFlg_Ladder = value; });
        utNpcThinkParam["enableNaviFlg_Hole"] = sol::property([](NpcThinkParam &param) -> uint8_t { return param.enableNaviFlg_Hole; }, [](NpcThinkParam &param, uint8_t value) { param.enableNaviFlg_Hole = value; });
        utNpcThinkParam["enableNaviFlg_Door"] = sol::property([](NpcThinkParam &param) -> uint8_t { return param.enableNaviFlg_Door; }, [](NpcThinkParam &param, uint8_t value) { param.enableNaviFlg_Door = value; });
        utNpcThinkParam["enableNaviFlg_InSideWall"] = sol::property([](NpcThinkParam &param) -> uint8_t { return param.enableNaviFlg_InSideWall; }, [](NpcThinkParam &param, uint8_t value) { param.enableNaviFlg_InSideWall = value; });
        utNpcThinkParam["enableNaviFlg_Lava"] = sol::property([](NpcThinkParam &param) -> uint8_t { return param.enableNaviFlg_Lava; }, [](NpcThinkParam &param, uint8_t value) { param.enableNaviFlg_Lava = value; });
        utNpcThinkParam["enableNaviFlg_Edge_Ordinary"] = sol::property([](NpcThinkParam &param) -> uint8_t { return param.enableNaviFlg_Edge_Ordinary; }, [](NpcThinkParam &param, uint8_t value) { param.enableNaviFlg_Edge_Ordinary = value; });
        utNpcThinkParam["searchThreshold_Lv0toLv1"] = &NpcThinkParam::searchThreshold_Lv0toLv1;
        utNpcThinkParam["searchThreshold_Lv1toLv2"] = &NpcThinkParam::searchThreshold_Lv1toLv2;
        utNpcThinkParam["platoonReplyTime"] = &NpcThinkParam::platoonReplyTime;
        utNpcThinkParam["platoonReplyAddRandomTime"] = &NpcThinkParam::platoonReplyAddRandomTime;
        utNpcThinkParam["searchEye_angX"] = &NpcThinkParam::searchEye_angX;
        utNpcThinkParam["isUpdateBattleSight"] = &NpcThinkParam::isUpdateBattleSight;
        utNpcThinkParam["battleEye_updateDist"] = &NpcThinkParam::battleEye_updateDist;
        utNpcThinkParam["battleEye_updateAngX"] = &NpcThinkParam::battleEye_updateAngX;
        utNpcThinkParam["battleEye_updateAngY"] = &NpcThinkParam::battleEye_updateAngY;
        utNpcThinkParam["eye_BackOffsetDist"] = &NpcThinkParam::eye_BackOffsetDist;
        utNpcThinkParam["eye_BeginDist"] = &NpcThinkParam::eye_BeginDist;
        utNpcThinkParam["actTypeOnFailedPath"] = &NpcThinkParam::actTypeOnFailedPath;
        utNpcThinkParam["goalAction_ToCautionImportant"] = &NpcThinkParam::goalAction_ToCautionImportant;
        utNpcThinkParam["shiftAnimeId_RangedAttack"] = &NpcThinkParam::shiftAnimeId_RangedAttack;
        utNpcThinkParam["actTypeOnNonBtlFailedPath"] = &NpcThinkParam::actTypeOnNonBtlFailedPath;
        utNpcThinkParam["isBuddyAI"] = &NpcThinkParam::isBuddyAI;
        utNpcThinkParam["goalAction_ToSearchLv1"] = &NpcThinkParam::goalAction_ToSearchLv1;
        utNpcThinkParam["goalAction_ToSearchLv2"] = &NpcThinkParam::goalAction_ToSearchLv2;
        utNpcThinkParam["enableJumpMove"] = &NpcThinkParam::enableJumpMove;
        utNpcThinkParam["disableLocalSteering"] = &NpcThinkParam::disableLocalSteering;
        utNpcThinkParam["goalAction_ToDisappear"] = &NpcThinkParam::goalAction_ToDisappear;
        utNpcThinkParam["changeStateAction_ToNormal"] = &NpcThinkParam::changeStateAction_ToNormal;
        utNpcThinkParam["MemoryTargetForgetTime"] = &NpcThinkParam::MemoryTargetForgetTime;
        utNpcThinkParam["rangedAttackId"] = &NpcThinkParam::rangedAttackId;
        utNpcThinkParam["useFall_onNormalCaution"] = &NpcThinkParam::useFall_onNormalCaution;
        utNpcThinkParam["useFall_onSearchBattle"] = &NpcThinkParam::useFall_onSearchBattle;
        utNpcThinkParam["enableJumpMove_onBattle"] = &NpcThinkParam::enableJumpMove_onBattle;
        utNpcThinkParam["backToHomeStuckAct"] = &NpcThinkParam::backToHomeStuckAct;
        utNpcThinkParam["soundBehaviorId01"] = &NpcThinkParam::soundBehaviorId01;
        utNpcThinkParam["soundBehaviorId02"] = &NpcThinkParam::soundBehaviorId02;
        utNpcThinkParam["soundBehaviorId03"] = &NpcThinkParam::soundBehaviorId03;
        utNpcThinkParam["soundBehaviorId04"] = &NpcThinkParam::soundBehaviorId04;
        utNpcThinkParam["soundBehaviorId05"] = &NpcThinkParam::soundBehaviorId05;
        utNpcThinkParam["soundBehaviorId06"] = &NpcThinkParam::soundBehaviorId06;
        utNpcThinkParam["soundBehaviorId07"] = &NpcThinkParam::soundBehaviorId07;
        utNpcThinkParam["soundBehaviorId08"] = &NpcThinkParam::soundBehaviorId08;
        utNpcThinkParam["weaponOffSpecialEffectId"] = &NpcThinkParam::weaponOffSpecialEffectId;
        utNpcThinkParam["weaponOnSpecialEffectId"] = &NpcThinkParam::weaponOnSpecialEffectId;
        utNpcThinkParam["weaponOffAnimId"] = &NpcThinkParam::weaponOffAnimId;
        utNpcThinkParam["weaponOnAnimId"] = &NpcThinkParam::weaponOnAnimId;
        utNpcThinkParam["surpriseAnimId"] = &NpcThinkParam::surpriseAnimId;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<NpcThinkParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<NpcThinkParam>>(nullptr);
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"logicId", false},
            {"battleGoalID", false},
            {"searchEye_dist", false},
            {"searchEye_angY", false},
            {"isNoAvoidHugeEnemy", false},
            {"enableWeaponOnOff", false},
            {"targetAILockDmyPoly", false},
            {"spEffectId_RangedAttack", false},
            {"searchTargetLv1ForgetTime", false},
            {"searchTargetLv2ForgetTime", false},
            {"BackHomeLife_OnHitEneWal", false},
            {"SightTargetForgetTime", false},
            {"idAttackCannotMove", false},
            {"ear_dist", false},
            {"callHelp_ActionAnimId", false},
            {"callHelp_CallActionId", false},
            {"eye_dist", false},
            {"isGuard_Act", false},
            {"ear_soundcut_dist", false},
            {"nose_dist", false},
            {"maxBackhomeDist", false},
            {"backhomeDist", false},
            {"backhomeBattleDist", false},
            {"nonBattleActLife", false},
            {"BackHome_LookTargetTime", false},
            {"BackHome_LookTargetDist", false},
            {"SoundTargetForgetTime", false},
            {"BattleStartDist", false},
            {"callHelp_MyPeerId", false},
            {"callHelp_CallPeerId", false},
            {"targetSys_DmgEffectRate", false},
            {"TeamAttackEffectivity", false},
            {"eye_angX", false},
            {"eye_angY", false},
            {"disableDark", false},
            {"caravanRole", false},
            {"callHelp_CallValidMinDistTarget", false},
            {"callHelp_CallValidRange", false},
            {"callHelp_ForgetTimeByArrival", false},
            {"callHelp_MinWaitTime", false},
            {"callHelp_MaxWaitTime", false},
            {"goalAction_ToCaution", false},
            {"ear_listenLevel", false},
            {"callHelp_ReplyBehaviorType", false},
            {"disablePathMove", false},
            {"skipArrivalVisibleCheck", false},
            {"thinkAttr_doAdmirer", false},
            {"enableNaviFlg_Edge", false},
            {"enableNaviFlg_LargeSpace", false},
            {"enableNaviFlg_Ladder", false},
            {"enableNaviFlg_Hole", false},
            {"enableNaviFlg_Door", false},
            {"enableNaviFlg_InSideWall", false},
            {"enableNaviFlg_Lava", false},
            {"enableNaviFlg_Edge_Ordinary", false},
            {"searchThreshold_Lv0toLv1", false},
            {"searchThreshold_Lv1toLv2", false},
            {"platoonReplyTime", false},
            {"platoonReplyAddRandomTime", false},
            {"searchEye_angX", false},
            {"isUpdateBattleSight", false},
            {"battleEye_updateDist", false},
            {"battleEye_updateAngX", false},
            {"battleEye_updateAngY", false},
            {"eye_BackOffsetDist", false},
            {"eye_BeginDist", false},
            {"actTypeOnFailedPath", false},
            {"goalAction_ToCautionImportant", false},
            {"shiftAnimeId_RangedAttack", false},
            {"actTypeOnNonBtlFailedPath", false},
            {"isBuddyAI", false},
            {"goalAction_ToSearchLv1", false},
            {"goalAction_ToSearchLv2", false},
            {"enableJumpMove", false},
            {"disableLocalSteering", false},
            {"goalAction_ToDisappear", false},
            {"changeStateAction_ToNormal", false},
            {"MemoryTargetForgetTime", false},
            {"rangedAttackId", false},
            {"useFall_onNormalCaution", false},
            {"useFall_onSearchBattle", false},
            {"enableJumpMove_onBattle", false},
            {"backToHomeStuckAct", false},
            {"soundBehaviorId01", false},
            {"soundBehaviorId02", false},
            {"soundBehaviorId03", false},
            {"soundBehaviorId04", false},
            {"soundBehaviorId05", false},
            {"soundBehaviorId06", false},
            {"soundBehaviorId07", false},
            {"soundBehaviorId08", false},
            {"weaponOffSpecialEffectId", false},
            {"weaponOnSpecialEffectId", false},
            {"weaponOffAnimId", false},
            {"weaponOnAnimId", false},
            {"surpriseAnimId", false},
        });
        return indexer;
    };
    paramsTable["NpcThinkParam"] = [tableLoader]() -> auto { return tableLoader(L"NpcThinkParam"); };
}

template<> void ParamTableIndexer<NpcThinkParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,logicId,battleGoalID,searchEye_dist,searchEye_angY,isNoAvoidHugeEnemy,enableWeaponOnOff,targetAILockDmyPoly,spEffectId_RangedAttack,searchTargetLv1ForgetTime,searchTargetLv2ForgetTime,BackHomeLife_OnHitEneWal,SightTargetForgetTime,idAttackCannotMove,ear_dist");
    fwprintf(f, L",callHelp_ActionAnimId,callHelp_CallActionId,eye_dist,isGuard_Act,ear_soundcut_dist,nose_dist,maxBackhomeDist,backhomeDist,backhomeBattleDist,nonBattleActLife,BackHome_LookTargetTime,BackHome_LookTargetDist,SoundTargetForgetTime,BattleStartDist,callHelp_MyPeerId,callHelp_CallPeerId");
    fwprintf(f, L",targetSys_DmgEffectRate,TeamAttackEffectivity,eye_angX,eye_angY,disableDark,caravanRole,callHelp_CallValidMinDistTarget,callHelp_CallValidRange,callHelp_ForgetTimeByArrival,callHelp_MinWaitTime,callHelp_MaxWaitTime,goalAction_ToCaution,ear_listenLevel,callHelp_ReplyBehaviorType,disablePathMove,skipArrivalVisibleCheck");
    fwprintf(f, L",thinkAttr_doAdmirer,enableNaviFlg_Edge,enableNaviFlg_LargeSpace,enableNaviFlg_Ladder,enableNaviFlg_Hole,enableNaviFlg_Door,enableNaviFlg_InSideWall,enableNaviFlg_Lava,enableNaviFlg_Edge_Ordinary,searchThreshold_Lv0toLv1,searchThreshold_Lv1toLv2,platoonReplyTime,platoonReplyAddRandomTime,searchEye_angX,isUpdateBattleSight,battleEye_updateDist");
    fwprintf(f, L",battleEye_updateAngX,battleEye_updateAngY,eye_BackOffsetDist,eye_BeginDist,actTypeOnFailedPath,goalAction_ToCautionImportant,shiftAnimeId_RangedAttack,actTypeOnNonBtlFailedPath,isBuddyAI,goalAction_ToSearchLv1,goalAction_ToSearchLv2,enableJumpMove,disableLocalSteering,goalAction_ToDisappear,changeStateAction_ToNormal,MemoryTargetForgetTime");
    fwprintf(f, L",rangedAttackId,useFall_onNormalCaution,useFall_onSearchBattle,enableJumpMove_onBattle,backToHomeStuckAct,soundBehaviorId01,soundBehaviorId02,soundBehaviorId03,soundBehaviorId04,soundBehaviorId05,soundBehaviorId06,soundBehaviorId07,soundBehaviorId08,weaponOffSpecialEffectId,weaponOnSpecialEffectId,weaponOffAnimId");
    fwprintf(f, L",weaponOnAnimId,surpriseAnimId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%d,%d,%u,%u,%u,%u,%u,%d,%g,%g,%g,%g,%d,%g,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%g,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%g,%g,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%u,%u,%u,%u,%u,%u,%u,%u,%g,%d,%u,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",
            this->paramId(i),
            param->disableParam_NT,
            param->logicId,
            param->battleGoalID,
            param->searchEye_dist,
            param->searchEye_angY,
            param->isNoAvoidHugeEnemy,
            param->enableWeaponOnOff,
            param->targetAILockDmyPoly,
            param->spEffectId_RangedAttack,
            param->searchTargetLv1ForgetTime,
            param->searchTargetLv2ForgetTime,
            param->BackHomeLife_OnHitEneWal,
            param->SightTargetForgetTime,
            param->idAttackCannotMove,
            param->ear_dist,
            param->callHelp_ActionAnimId,
            param->callHelp_CallActionId,
            param->eye_dist,
            param->isGuard_Act,
            param->ear_soundcut_dist,
            param->nose_dist,
            param->maxBackhomeDist,
            param->backhomeDist,
            param->backhomeBattleDist,
            param->nonBattleActLife,
            param->BackHome_LookTargetTime,
            param->BackHome_LookTargetDist,
            param->SoundTargetForgetTime,
            param->BattleStartDist,
            param->callHelp_MyPeerId,
            param->callHelp_CallPeerId,
            param->targetSys_DmgEffectRate,
            param->TeamAttackEffectivity,
            param->eye_angX,
            param->eye_angY,
            param->disableDark,
            param->caravanRole,
            param->callHelp_CallValidMinDistTarget,
            param->callHelp_CallValidRange,
            param->callHelp_ForgetTimeByArrival,
            param->callHelp_MinWaitTime,
            param->callHelp_MaxWaitTime,
            param->goalAction_ToCaution,
            param->ear_listenLevel,
            param->callHelp_ReplyBehaviorType,
            param->disablePathMove,
            param->skipArrivalVisibleCheck,
            param->thinkAttr_doAdmirer,
            param->enableNaviFlg_Edge,
            param->enableNaviFlg_LargeSpace,
            param->enableNaviFlg_Ladder,
            param->enableNaviFlg_Hole,
            param->enableNaviFlg_Door,
            param->enableNaviFlg_InSideWall,
            param->enableNaviFlg_Lava,
            param->enableNaviFlg_Edge_Ordinary,
            param->searchThreshold_Lv0toLv1,
            param->searchThreshold_Lv1toLv2,
            param->platoonReplyTime,
            param->platoonReplyAddRandomTime,
            param->searchEye_angX,
            param->isUpdateBattleSight,
            param->battleEye_updateDist,
            param->battleEye_updateAngX,
            param->battleEye_updateAngY,
            param->eye_BackOffsetDist,
            param->eye_BeginDist,
            param->actTypeOnFailedPath,
            param->goalAction_ToCautionImportant,
            param->shiftAnimeId_RangedAttack,
            param->actTypeOnNonBtlFailedPath,
            param->isBuddyAI,
            param->goalAction_ToSearchLv1,
            param->goalAction_ToSearchLv2,
            param->enableJumpMove,
            param->disableLocalSteering,
            param->goalAction_ToDisappear,
            param->changeStateAction_ToNormal,
            param->MemoryTargetForgetTime,
            param->rangedAttackId,
            param->useFall_onNormalCaution,
            param->useFall_onSearchBattle,
            param->enableJumpMove_onBattle,
            param->backToHomeStuckAct,
            param->soundBehaviorId01,
            param->soundBehaviorId02,
            param->soundBehaviorId03,
            param->soundBehaviorId04,
            param->soundBehaviorId05,
            param->soundBehaviorId06,
            param->soundBehaviorId07,
            param->soundBehaviorId08,
            param->weaponOffSpecialEffectId,
            param->weaponOnSpecialEffectId,
            param->weaponOffAnimId,
            param->weaponOnAnimId,
            param->surpriseAnimId
        );
    }
    fclose(f);
}

}
