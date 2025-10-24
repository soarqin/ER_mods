#include "../luabindings.h"
#include "../defs/PlayRegionParam.h"

namespace paramadjuster::params {

void registerPlayRegionParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["PlayRegionParam"]; usertype) return;
        auto indexerPlayRegionParam = state->new_usertype<ParamTableIndexer<PlayRegionParam>>("PlayRegionParamTableIndexer");
        indexerPlayRegionParam["count"] = sol::property(&ParamTableIndexer<PlayRegionParam>::count);
        indexerPlayRegionParam["__index"] = &ParamTableIndexer<PlayRegionParam>::at;
        indexerPlayRegionParam["id"] = &ParamTableIndexer<PlayRegionParam>::paramId;
        indexerPlayRegionParam["get"] = &ParamTableIndexer<PlayRegionParam>::get;
        auto utPlayRegionParam = state->new_usertype<PlayRegionParam>("PlayRegionParam");
        utPlayRegionParam["disableParam_NT"] = sol::property([](PlayRegionParam &param) -> uint8_t { return param.disableParam_NT; }, [](PlayRegionParam &param, uint8_t value) { param.disableParam_NT = value; });
        utPlayRegionParam["matchAreaId"] = &PlayRegionParam::matchAreaId;
        utPlayRegionParam["multiPlayStartLimitEventFlagId"] = &PlayRegionParam::multiPlayStartLimitEventFlagId;
        utPlayRegionParam["otherDisableDistance"] = &PlayRegionParam::otherDisableDistance;
        utPlayRegionParam["pcPositionSaveLimitEventFlagId"] = &PlayRegionParam::pcPositionSaveLimitEventFlagId;
        utPlayRegionParam["bossAreaId"] = &PlayRegionParam::bossAreaId;
        utPlayRegionParam["cultNpcWhiteGhostEntityId_byFree"] = &PlayRegionParam::cultNpcWhiteGhostEntityId_byFree;
        utPlayRegionParam["bMapGuradianRegion"] = &PlayRegionParam::bMapGuradianRegion;
        utPlayRegionParam["bYellowCostumeRegion"] = sol::property([](PlayRegionParam &param) -> uint8_t { return param.bYellowCostumeRegion; }, [](PlayRegionParam &param, uint8_t value) { param.bYellowCostumeRegion = value; });
        utPlayRegionParam["multiPlayStartLimitEventFlagId_targetFlagState"] = sol::property([](PlayRegionParam &param) -> uint8_t { return param.multiPlayStartLimitEventFlagId_targetFlagState; }, [](PlayRegionParam &param, uint8_t value) { param.multiPlayStartLimitEventFlagId_targetFlagState = value; });
        utPlayRegionParam["breakInLimitEventFlagId_1_targetFlagState"] = sol::property([](PlayRegionParam &param) -> uint8_t { return param.breakInLimitEventFlagId_1_targetFlagState; }, [](PlayRegionParam &param, uint8_t value) { param.breakInLimitEventFlagId_1_targetFlagState = value; });
        utPlayRegionParam["whiteSignLimitEventFlagId_1_targetFlagState"] = sol::property([](PlayRegionParam &param) -> uint8_t { return param.whiteSignLimitEventFlagId_1_targetFlagState; }, [](PlayRegionParam &param, uint8_t value) { param.whiteSignLimitEventFlagId_1_targetFlagState = value; });
        utPlayRegionParam["redSignLimitEventFlagId_1_targetFlagState"] = sol::property([](PlayRegionParam &param) -> uint8_t { return param.redSignLimitEventFlagId_1_targetFlagState; }, [](PlayRegionParam &param, uint8_t value) { param.redSignLimitEventFlagId_1_targetFlagState = value; });
        utPlayRegionParam["breakInLimitEventFlagId_2_targetFlagState"] = sol::property([](PlayRegionParam &param) -> uint8_t { return param.breakInLimitEventFlagId_2_targetFlagState; }, [](PlayRegionParam &param, uint8_t value) { param.breakInLimitEventFlagId_2_targetFlagState = value; });
        utPlayRegionParam["breakInLimitEventFlagId_3_targetFlagState"] = sol::property([](PlayRegionParam &param) -> uint8_t { return param.breakInLimitEventFlagId_3_targetFlagState; }, [](PlayRegionParam &param, uint8_t value) { param.breakInLimitEventFlagId_3_targetFlagState = value; });
        utPlayRegionParam["whiteSignLimitEventFlagId_2_targetFlagState"] = sol::property([](PlayRegionParam &param) -> uint8_t { return param.whiteSignLimitEventFlagId_2_targetFlagState; }, [](PlayRegionParam &param, uint8_t value) { param.whiteSignLimitEventFlagId_2_targetFlagState = value; });
        utPlayRegionParam["warpItemUsePermitBonfireId_1"] = &PlayRegionParam::warpItemUsePermitBonfireId_1;
        utPlayRegionParam["warpItemUsePermitBonfireId_2"] = &PlayRegionParam::warpItemUsePermitBonfireId_2;
        utPlayRegionParam["warpItemUsePermitBonfireId_3"] = &PlayRegionParam::warpItemUsePermitBonfireId_3;
        utPlayRegionParam["warpItemUsePermitBonfireId_4"] = &PlayRegionParam::warpItemUsePermitBonfireId_4;
        utPlayRegionParam["warpItemUsePermitBonfireId_5"] = &PlayRegionParam::warpItemUsePermitBonfireId_5;
        utPlayRegionParam["warpItemProhibitionEventFlagId_1"] = &PlayRegionParam::warpItemProhibitionEventFlagId_1;
        utPlayRegionParam["warpItemProhibitionEventFlagId_2"] = &PlayRegionParam::warpItemProhibitionEventFlagId_2;
        utPlayRegionParam["warpItemProhibitionEventFlagId_3"] = &PlayRegionParam::warpItemProhibitionEventFlagId_3;
        utPlayRegionParam["warpItemProhibitionEventFlagId_4"] = &PlayRegionParam::warpItemProhibitionEventFlagId_4;
        utPlayRegionParam["warpItemProhibitionEventFlagId_5"] = &PlayRegionParam::warpItemProhibitionEventFlagId_5;
        utPlayRegionParam["enableBloodstain"] = sol::property([](PlayRegionParam &param) -> uint8_t { return param.enableBloodstain; }, [](PlayRegionParam &param, uint8_t value) { param.enableBloodstain = value; });
        utPlayRegionParam["enableBloodMessage"] = sol::property([](PlayRegionParam &param) -> uint8_t { return param.enableBloodMessage; }, [](PlayRegionParam &param, uint8_t value) { param.enableBloodMessage = value; });
        utPlayRegionParam["enableGhost"] = sol::property([](PlayRegionParam &param) -> uint8_t { return param.enableGhost; }, [](PlayRegionParam &param, uint8_t value) { param.enableGhost = value; });
        utPlayRegionParam["dispMask00"] = sol::property([](PlayRegionParam &param) -> uint8_t { return param.dispMask00; }, [](PlayRegionParam &param, uint8_t value) { param.dispMask00 = value; });
        utPlayRegionParam["dispMask01"] = sol::property([](PlayRegionParam &param) -> uint8_t { return param.dispMask01; }, [](PlayRegionParam &param, uint8_t value) { param.dispMask01 = value; });
        utPlayRegionParam["whiteSignLimitEventFlagId_3_targetFlagState"] = sol::property([](PlayRegionParam &param) -> uint8_t { return param.whiteSignLimitEventFlagId_3_targetFlagState; }, [](PlayRegionParam &param, uint8_t value) { param.whiteSignLimitEventFlagId_3_targetFlagState = value; });
        utPlayRegionParam["redSignLimitEventFlagId_2_targetFlagState"] = sol::property([](PlayRegionParam &param) -> uint8_t { return param.redSignLimitEventFlagId_2_targetFlagState; }, [](PlayRegionParam &param, uint8_t value) { param.redSignLimitEventFlagId_2_targetFlagState = value; });
        utPlayRegionParam["redSignLimitEventFlagId_3_targetFlagState"] = sol::property([](PlayRegionParam &param) -> uint8_t { return param.redSignLimitEventFlagId_3_targetFlagState; }, [](PlayRegionParam &param, uint8_t value) { param.redSignLimitEventFlagId_3_targetFlagState = value; });
        utPlayRegionParam["isAutoIntrudePoint"] = sol::property([](PlayRegionParam &param) -> uint8_t { return param.isAutoIntrudePoint; }, [](PlayRegionParam &param, uint8_t value) { param.isAutoIntrudePoint = value; });
        utPlayRegionParam["unknown_0x45_1"] = sol::property([](PlayRegionParam &param) -> uint8_t { return param.unknown_0x45_1; }, [](PlayRegionParam &param, uint8_t value) { param.unknown_0x45_1 = value; });
        utPlayRegionParam["multiPlayHASHostLimitEventFlagId"] = &PlayRegionParam::multiPlayHASHostLimitEventFlagId;
        utPlayRegionParam["otherMaxDistance"] = &PlayRegionParam::otherMaxDistance;
        utPlayRegionParam["signPuddleOpenEventFlagId"] = &PlayRegionParam::signPuddleOpenEventFlagId;
        utPlayRegionParam["areaNo"] = &PlayRegionParam::areaNo;
        utPlayRegionParam["gridXNo"] = &PlayRegionParam::gridXNo;
        utPlayRegionParam["gridZNo"] = &PlayRegionParam::gridZNo;
        utPlayRegionParam["posX"] = &PlayRegionParam::posX;
        utPlayRegionParam["posY"] = &PlayRegionParam::posY;
        utPlayRegionParam["posZ"] = &PlayRegionParam::posZ;
        utPlayRegionParam["breakInLimitEventFlagId_1"] = &PlayRegionParam::breakInLimitEventFlagId_1;
        utPlayRegionParam["whiteSignLimitEventFlagId_1"] = &PlayRegionParam::whiteSignLimitEventFlagId_1;
        utPlayRegionParam["matchAreaSignCreateLimitEventFlagId"] = &PlayRegionParam::matchAreaSignCreateLimitEventFlagId;
        utPlayRegionParam["signAimId_1"] = &PlayRegionParam::signAimId_1;
        utPlayRegionParam["signAimId_2"] = &PlayRegionParam::signAimId_2;
        utPlayRegionParam["signAimId_3"] = &PlayRegionParam::signAimId_3;
        utPlayRegionParam["signAimId_4"] = &PlayRegionParam::signAimId_4;
        utPlayRegionParam["signAimId_5"] = &PlayRegionParam::signAimId_5;
        utPlayRegionParam["signAimId_6"] = &PlayRegionParam::signAimId_6;
        utPlayRegionParam["signAimId_7"] = &PlayRegionParam::signAimId_7;
        utPlayRegionParam["signAimId_8"] = &PlayRegionParam::signAimId_8;
        utPlayRegionParam["redSignLimitEventFlagId_1"] = &PlayRegionParam::redSignLimitEventFlagId_1;
        utPlayRegionParam["breakInLimitEventFlagId_2"] = &PlayRegionParam::breakInLimitEventFlagId_2;
        utPlayRegionParam["breakInLimitEventFlagId_3"] = &PlayRegionParam::breakInLimitEventFlagId_3;
        utPlayRegionParam["whiteSignLimitEventFlagId_2"] = &PlayRegionParam::whiteSignLimitEventFlagId_2;
        utPlayRegionParam["whiteSignLimitEventFlagId_3"] = &PlayRegionParam::whiteSignLimitEventFlagId_3;
        utPlayRegionParam["redSignLimitEventFlagId_2"] = &PlayRegionParam::redSignLimitEventFlagId_2;
        utPlayRegionParam["redSignLimitEventFlagId_3"] = &PlayRegionParam::redSignLimitEventFlagId_3;
        utPlayRegionParam["bossId_1"] = &PlayRegionParam::bossId_1;
        utPlayRegionParam["bossId_2"] = &PlayRegionParam::bossId_2;
        utPlayRegionParam["bossId_3"] = &PlayRegionParam::bossId_3;
        utPlayRegionParam["bossId_4"] = &PlayRegionParam::bossId_4;
        utPlayRegionParam["bossId_5"] = &PlayRegionParam::bossId_5;
        utPlayRegionParam["bossId_6"] = &PlayRegionParam::bossId_6;
        utPlayRegionParam["bossId_7"] = &PlayRegionParam::bossId_7;
        utPlayRegionParam["bossId_8"] = &PlayRegionParam::bossId_8;
        utPlayRegionParam["bossId_9"] = &PlayRegionParam::bossId_9;
        utPlayRegionParam["bossId_10"] = &PlayRegionParam::bossId_10;
        utPlayRegionParam["bossId_11"] = &PlayRegionParam::bossId_11;
        utPlayRegionParam["bossId_12"] = &PlayRegionParam::bossId_12;
        utPlayRegionParam["bossId_13"] = &PlayRegionParam::bossId_13;
        utPlayRegionParam["bossId_14"] = &PlayRegionParam::bossId_14;
        utPlayRegionParam["bossId_15"] = &PlayRegionParam::bossId_15;
        utPlayRegionParam["bossId_16"] = &PlayRegionParam::bossId_16;
        utPlayRegionParam["mapMenuUnlockEventId"] = &PlayRegionParam::mapMenuUnlockEventId;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<PlayRegionParam>>(gParamMgr.findTable(L"PlayRegionParam")); };
    paramsTable["PlayRegionParam"] = tableLoader;
}

}
