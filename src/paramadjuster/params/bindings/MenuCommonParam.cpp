#include "../luabindings.h"
#include "../defs/MenuCommonParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<MenuCommonParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerMenuCommonParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MenuCommonParam"]; usertype) return;
        auto indexerMenuCommonParam = state->new_usertype<ParamTableIndexer<MenuCommonParam>>("MenuCommonParamTableIndexer");
        indexerMenuCommonParam["count"] = sol::property(&ParamTableIndexer<MenuCommonParam>::count);
        indexerMenuCommonParam["__index"] = &ParamTableIndexer<MenuCommonParam>::at;
        indexerMenuCommonParam["id"] = &ParamTableIndexer<MenuCommonParam>::paramId;
        indexerMenuCommonParam["get"] = &ParamTableIndexer<MenuCommonParam>::get;
        indexerMenuCommonParam["exportToCsv"] = &ParamTableIndexer<MenuCommonParam>::exportToCsv;
        indexerMenuCommonParam["importFromCsv"] = &ParamTableIndexer<MenuCommonParam>::importFromCsv;
        auto utMenuCommonParam = state->new_usertype<MenuCommonParam>("MenuCommonParam");
        utMenuCommonParam["soloPlayDeath_ToFadeOutTime"] = &MenuCommonParam::soloPlayDeath_ToFadeOutTime;
        utMenuCommonParam["partyGhostDeath_ToFadeOutTime"] = &MenuCommonParam::partyGhostDeath_ToFadeOutTime;
        utMenuCommonParam["playerMaxHpLimit"] = &MenuCommonParam::playerMaxHpLimit;
        utMenuCommonParam["playerMaxMpLimit"] = &MenuCommonParam::playerMaxMpLimit;
        utMenuCommonParam["playerMaxSpLimit"] = &MenuCommonParam::playerMaxSpLimit;
        utMenuCommonParam["actionPanelChangeThreshold_Vel"] = &MenuCommonParam::actionPanelChangeThreshold_Vel;
        utMenuCommonParam["actionPanelChangeThreshold_PassTime"] = &MenuCommonParam::actionPanelChangeThreshold_PassTime;
        utMenuCommonParam["kgIconVspace"] = &MenuCommonParam::kgIconVspace;
        utMenuCommonParam["worldMapCursorSelectRadius"] = &MenuCommonParam::worldMapCursorSelectRadius;
        utMenuCommonParam["decalPosOffsetX"] = &MenuCommonParam::decalPosOffsetX;
        utMenuCommonParam["decalPosOffsetY"] = &MenuCommonParam::decalPosOffsetY;
        utMenuCommonParam["targetStateSearchDurationTime"] = &MenuCommonParam::targetStateSearchDurationTime;
        utMenuCommonParam["targetStateBattleDurationTime"] = &MenuCommonParam::targetStateBattleDurationTime;
        utMenuCommonParam["worldMapCursorSpeed"] = &MenuCommonParam::worldMapCursorSpeed;
        utMenuCommonParam["worldMapCursorFirstDistance"] = &MenuCommonParam::worldMapCursorFirstDistance;
        utMenuCommonParam["worldMapCursorFirstDelay"] = &MenuCommonParam::worldMapCursorFirstDelay;
        utMenuCommonParam["worldMapCursorWaitTime"] = &MenuCommonParam::worldMapCursorWaitTime;
        utMenuCommonParam["worldMapCursorSnapRadius"] = &MenuCommonParam::worldMapCursorSnapRadius;
        utMenuCommonParam["worldMapCursorSnapTime"] = &MenuCommonParam::worldMapCursorSnapTime;
        utMenuCommonParam["itemGetLogAliveTime"] = &MenuCommonParam::itemGetLogAliveTime;
        utMenuCommonParam["playerMaxSaLimit"] = &MenuCommonParam::playerMaxSaLimit;
        utMenuCommonParam["worldMap_IsChangeableLayerEventFlagId"] = &MenuCommonParam::worldMap_IsChangeableLayerEventFlagId;
        utMenuCommonParam["worldMap_TravelMargin"] = &MenuCommonParam::worldMap_TravelMargin;
        utMenuCommonParam["systemAnnounceScrollBufferTime"] = &MenuCommonParam::systemAnnounceScrollBufferTime;
        utMenuCommonParam["systemAnnounceScrollSpeed"] = &MenuCommonParam::systemAnnounceScrollSpeed;
        utMenuCommonParam["systemAnnounceNoScrollWaitTime"] = &MenuCommonParam::systemAnnounceNoScrollWaitTime;
        utMenuCommonParam["systemAnnounceScrollCount"] = &MenuCommonParam::systemAnnounceScrollCount;
        utMenuCommonParam["compassMemoDispDistance"] = &MenuCommonParam::compassMemoDispDistance;
        utMenuCommonParam["compassBonfireDispDistance"] = &MenuCommonParam::compassBonfireDispDistance;
        utMenuCommonParam["markerGoalThreshold"] = &MenuCommonParam::markerGoalThreshold;
        utMenuCommonParam["svSliderStep"] = &MenuCommonParam::svSliderStep;
        utMenuCommonParam["preOpeningMovie_WaitSec"] = &MenuCommonParam::preOpeningMovie_WaitSec;
        utMenuCommonParam["kgIconScale"] = &MenuCommonParam::kgIconScale;
        utMenuCommonParam["kgIconScale_forTable"] = &MenuCommonParam::kgIconScale_forTable;
        utMenuCommonParam["kgIconVspace_forTable"] = &MenuCommonParam::kgIconVspace_forTable;
        utMenuCommonParam["kgIconScale_forConfig"] = &MenuCommonParam::kgIconScale_forConfig;
        utMenuCommonParam["kgIconVspace_forConfig"] = &MenuCommonParam::kgIconVspace_forConfig;
        utMenuCommonParam["worldMap_SearchRadius"] = &MenuCommonParam::worldMap_SearchRadius;
        utMenuCommonParam["tutorialDisplayTime"] = &MenuCommonParam::tutorialDisplayTime;
        utMenuCommonParam["compassFriendHostInnerDistance"] = &MenuCommonParam::compassFriendHostInnerDistance;
        utMenuCommonParam["compassEnemyHostInnerDistance"] = &MenuCommonParam::compassEnemyHostInnerDistance;
        utMenuCommonParam["compassFriendGuestInnerDistance"] = &MenuCommonParam::compassFriendGuestInnerDistance;
        utMenuCommonParam["cutsceneKeyGuideAliveTime"] = &MenuCommonParam::cutsceneKeyGuideAliveTime;
        utMenuCommonParam["autoHideHpThresholdRatio"] = &MenuCommonParam::autoHideHpThresholdRatio;
        utMenuCommonParam["autoHideHpThresholdValue"] = &MenuCommonParam::autoHideHpThresholdValue;
        utMenuCommonParam["autoHideMpThresholdRatio"] = &MenuCommonParam::autoHideMpThresholdRatio;
        utMenuCommonParam["autoHideMpThresholdValue"] = &MenuCommonParam::autoHideMpThresholdValue;
        utMenuCommonParam["autoHideSpThresholdRatio"] = &MenuCommonParam::autoHideSpThresholdRatio;
        utMenuCommonParam["autoHideSpThresholdValue"] = &MenuCommonParam::autoHideSpThresholdValue;
        utMenuCommonParam["worldMapZoomAnimationTime"] = &MenuCommonParam::worldMapZoomAnimationTime;
        utMenuCommonParam["worldMapIconScaleMin"] = &MenuCommonParam::worldMapIconScaleMin;
        utMenuCommonParam["worldMap_TravelMargin_Point"] = &MenuCommonParam::worldMap_TravelMargin_Point;
        utMenuCommonParam["enemyTagSafeLeft"] = &MenuCommonParam::enemyTagSafeLeft;
        utMenuCommonParam["enemyTagSafeRight"] = &MenuCommonParam::enemyTagSafeRight;
        utMenuCommonParam["enemyTagSafeTop"] = &MenuCommonParam::enemyTagSafeTop;
        utMenuCommonParam["enemyTagSafeBottom"] = &MenuCommonParam::enemyTagSafeBottom;
        utMenuCommonParam["pcHorseHpRecoverDispThreshold"] = &MenuCommonParam::pcHorseHpRecoverDispThreshold;
        utMenuCommonParam["worldMap_DlcLayerEventFlagId"] = &MenuCommonParam::worldMap_DlcLayerEventFlagId;
        utMenuCommonParam["unknown_0xe4"] = &MenuCommonParam::unknown_0xe4;
        utMenuCommonParam["unknown_0xe5"] = &MenuCommonParam::unknown_0xe5;
        utMenuCommonParam["unknown_0xe6"] = &MenuCommonParam::unknown_0xe6;
        utMenuCommonParam["unknown_0xe7"] = &MenuCommonParam::unknown_0xe7;
        utMenuCommonParam["unknown_0xe8"] = &MenuCommonParam::unknown_0xe8;
        utMenuCommonParam["unknown_0xe9"] = &MenuCommonParam::unknown_0xe9;
        utMenuCommonParam["unknown_0xea"] = &MenuCommonParam::unknown_0xea;
        utMenuCommonParam["unknown_0xeb"] = &MenuCommonParam::unknown_0xeb;
        utMenuCommonParam["unknown_0xec"] = &MenuCommonParam::unknown_0xec;
        utMenuCommonParam["unknown_0xed"] = &MenuCommonParam::unknown_0xed;
        utMenuCommonParam["unknown_0xee"] = &MenuCommonParam::unknown_0xee;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<MenuCommonParam>>(state, L"MenuCommonParam");
        indexer->setFieldNames({
            {"soloPlayDeath_ToFadeOutTime", false},
            {"partyGhostDeath_ToFadeOutTime", false},
            {"playerMaxHpLimit", false},
            {"playerMaxMpLimit", false},
            {"playerMaxSpLimit", false},
            {"actionPanelChangeThreshold_Vel", false},
            {"actionPanelChangeThreshold_PassTime", false},
            {"kgIconVspace", false},
            {"worldMapCursorSelectRadius", false},
            {"decalPosOffsetX", false},
            {"decalPosOffsetY", false},
            {"targetStateSearchDurationTime", false},
            {"targetStateBattleDurationTime", false},
            {"worldMapCursorSpeed", false},
            {"worldMapCursorFirstDistance", false},
            {"worldMapCursorFirstDelay", false},
            {"worldMapCursorWaitTime", false},
            {"worldMapCursorSnapRadius", false},
            {"worldMapCursorSnapTime", false},
            {"itemGetLogAliveTime", false},
            {"playerMaxSaLimit", false},
            {"worldMap_IsChangeableLayerEventFlagId", false},
            {"worldMap_TravelMargin", false},
            {"systemAnnounceScrollBufferTime", false},
            {"systemAnnounceScrollSpeed", false},
            {"systemAnnounceNoScrollWaitTime", false},
            {"systemAnnounceScrollCount", false},
            {"compassMemoDispDistance", false},
            {"compassBonfireDispDistance", false},
            {"markerGoalThreshold", false},
            {"svSliderStep", false},
            {"preOpeningMovie_WaitSec", false},
            {"kgIconScale", false},
            {"kgIconScale_forTable", false},
            {"kgIconVspace_forTable", false},
            {"kgIconScale_forConfig", false},
            {"kgIconVspace_forConfig", false},
            {"worldMap_SearchRadius", false},
            {"tutorialDisplayTime", false},
            {"compassFriendHostInnerDistance", false},
            {"compassEnemyHostInnerDistance", false},
            {"compassFriendGuestInnerDistance", false},
            {"cutsceneKeyGuideAliveTime", false},
            {"autoHideHpThresholdRatio", false},
            {"autoHideHpThresholdValue", false},
            {"autoHideMpThresholdRatio", false},
            {"autoHideMpThresholdValue", false},
            {"autoHideSpThresholdRatio", false},
            {"autoHideSpThresholdValue", false},
            {"worldMapZoomAnimationTime", false},
            {"worldMapIconScaleMin", false},
            {"worldMap_TravelMargin_Point", false},
            {"enemyTagSafeLeft", false},
            {"enemyTagSafeRight", false},
            {"enemyTagSafeTop", false},
            {"enemyTagSafeBottom", false},
            {"pcHorseHpRecoverDispThreshold", false},
            {"worldMap_DlcLayerEventFlagId", false},
            {"unknown_0xe4", false},
            {"unknown_0xe5", false},
            {"unknown_0xe6", false},
            {"unknown_0xe7", false},
            {"unknown_0xe8", false},
            {"unknown_0xe9", false},
            {"unknown_0xea", false},
            {"unknown_0xeb", false},
            {"unknown_0xec", false},
            {"unknown_0xed", false},
            {"unknown_0xee", false},
        });
        return indexer;
    };
    paramsTable["MenuCommonParam"] = tableLoader;
}

template<> void ParamTableIndexer<MenuCommonParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,soloPlayDeath_ToFadeOutTime,partyGhostDeath_ToFadeOutTime,playerMaxHpLimit,playerMaxMpLimit,playerMaxSpLimit,actionPanelChangeThreshold_Vel,actionPanelChangeThreshold_PassTime,kgIconVspace,worldMapCursorSelectRadius,decalPosOffsetX,decalPosOffsetY,targetStateSearchDurationTime,targetStateBattleDurationTime,worldMapCursorSpeed,worldMapCursorFirstDistance,worldMapCursorFirstDelay,worldMapCursorWaitTime,worldMapCursorSnapRadius,worldMapCursorSnapTime,itemGetLogAliveTime,playerMaxSaLimit,worldMap_IsChangeableLayerEventFlagId,worldMap_TravelMargin,systemAnnounceScrollBufferTime,systemAnnounceScrollSpeed,systemAnnounceNoScrollWaitTime,systemAnnounceScrollCount,compassMemoDispDistance,compassBonfireDispDistance,markerGoalThreshold,svSliderStep,preOpeningMovie_WaitSec,kgIconScale,kgIconScale_forTable,kgIconVspace_forTable,kgIconScale_forConfig,kgIconVspace_forConfig,worldMap_SearchRadius,tutorialDisplayTime,compassFriendHostInnerDistance,compassEnemyHostInnerDistance,compassFriendGuestInnerDistance,cutsceneKeyGuideAliveTime,autoHideHpThresholdRatio,autoHideHpThresholdValue,autoHideMpThresholdRatio,autoHideMpThresholdValue,autoHideSpThresholdRatio,autoHideSpThresholdValue,worldMapZoomAnimationTime,worldMapIconScaleMin,worldMap_TravelMargin_Point,enemyTagSafeLeft,enemyTagSafeRight,enemyTagSafeTop,enemyTagSafeBottom,pcHorseHpRecoverDispThreshold,worldMap_DlcLayerEventFlagId,unknown_0xe4,unknown_0xe5,unknown_0xe6,unknown_0xe7,unknown_0xe8,unknown_0xe9,unknown_0xea,unknown_0xeb,unknown_0xec,unknown_0xed,unknown_0xee\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g,%g,%d,%d,%d,%g,%g,%d,%g,%d,%d,%g,%g,%g,%g,%g,%g,%g,%g,%g,%d,%u,%g,%g,%d,%g,%u,%g,%g,%g,%g,%g,%g,%g,%d,%g,%d,%g,%g,%g,%g,%g,%g,%g,%d,%g,%d,%g,%d,%g,%g,%g,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u\n",
            this->paramId(i),
            param->soloPlayDeath_ToFadeOutTime,
            param->partyGhostDeath_ToFadeOutTime,
            param->playerMaxHpLimit,
            param->playerMaxMpLimit,
            param->playerMaxSpLimit,
            param->actionPanelChangeThreshold_Vel,
            param->actionPanelChangeThreshold_PassTime,
            param->kgIconVspace,
            param->worldMapCursorSelectRadius,
            param->decalPosOffsetX,
            param->decalPosOffsetY,
            param->targetStateSearchDurationTime,
            param->targetStateBattleDurationTime,
            param->worldMapCursorSpeed,
            param->worldMapCursorFirstDistance,
            param->worldMapCursorFirstDelay,
            param->worldMapCursorWaitTime,
            param->worldMapCursorSnapRadius,
            param->worldMapCursorSnapTime,
            param->itemGetLogAliveTime,
            param->playerMaxSaLimit,
            param->worldMap_IsChangeableLayerEventFlagId,
            param->worldMap_TravelMargin,
            param->systemAnnounceScrollBufferTime,
            param->systemAnnounceScrollSpeed,
            param->systemAnnounceNoScrollWaitTime,
            param->systemAnnounceScrollCount,
            param->compassMemoDispDistance,
            param->compassBonfireDispDistance,
            param->markerGoalThreshold,
            param->svSliderStep,
            param->preOpeningMovie_WaitSec,
            param->kgIconScale,
            param->kgIconScale_forTable,
            param->kgIconVspace_forTable,
            param->kgIconScale_forConfig,
            param->kgIconVspace_forConfig,
            param->worldMap_SearchRadius,
            param->tutorialDisplayTime,
            param->compassFriendHostInnerDistance,
            param->compassEnemyHostInnerDistance,
            param->compassFriendGuestInnerDistance,
            param->cutsceneKeyGuideAliveTime,
            param->autoHideHpThresholdRatio,
            param->autoHideHpThresholdValue,
            param->autoHideMpThresholdRatio,
            param->autoHideMpThresholdValue,
            param->autoHideSpThresholdRatio,
            param->autoHideSpThresholdValue,
            param->worldMapZoomAnimationTime,
            param->worldMapIconScaleMin,
            param->worldMap_TravelMargin_Point,
            param->enemyTagSafeLeft,
            param->enemyTagSafeRight,
            param->enemyTagSafeTop,
            param->enemyTagSafeBottom,
            param->pcHorseHpRecoverDispThreshold,
            param->worldMap_DlcLayerEventFlagId,
            param->unknown_0xe4,
            param->unknown_0xe5,
            param->unknown_0xe6,
            param->unknown_0xe7,
            param->unknown_0xe8,
            param->unknown_0xe9,
            param->unknown_0xea,
            param->unknown_0xeb,
            param->unknown_0xec,
            param->unknown_0xed,
            param->unknown_0xee
        );
    }
    fclose(f);
}

}
