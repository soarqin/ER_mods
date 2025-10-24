#include "../luabindings.h"
#include "../defs/MenuCommonParam.h"

namespace paramadjuster::params {

void registerMenuCommonParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MenuCommonParam"]; usertype) return;
        auto indexerMenuCommonParam = state->new_usertype<ParamTableIndexer<MenuCommonParam>>("MenuCommonParamTableIndexer");
        indexerMenuCommonParam["count"] = sol::property(&ParamTableIndexer<MenuCommonParam>::count);
        indexerMenuCommonParam["__index"] = &ParamTableIndexer<MenuCommonParam>::at;
        indexerMenuCommonParam["id"] = &ParamTableIndexer<MenuCommonParam>::paramId;
        indexerMenuCommonParam["get"] = &ParamTableIndexer<MenuCommonParam>::get;
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
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<MenuCommonParam>>(gParamMgr.findTable(L"MenuCommonParam")); };
    paramsTable["MenuCommonParam"] = tableLoader;
}

}
