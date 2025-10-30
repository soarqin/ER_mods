#include "../luabindings.h"
#include "../defs/PlayRegionParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<PlayRegionParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerPlayRegionParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["PlayRegionParam"]; usertype) return;
        auto indexerPlayRegionParam = state->new_usertype<ParamTableIndexer<PlayRegionParam>>("PlayRegionParamTableIndexer");
        indexerPlayRegionParam["count"] = sol::property(&ParamTableIndexer<PlayRegionParam>::count);
        indexerPlayRegionParam["__index"] = &ParamTableIndexer<PlayRegionParam>::at;
        indexerPlayRegionParam["id"] = &ParamTableIndexer<PlayRegionParam>::paramId;
        indexerPlayRegionParam["get"] = &ParamTableIndexer<PlayRegionParam>::get;
        indexerPlayRegionParam["exportToCsv"] = &ParamTableIndexer<PlayRegionParam>::exportToCsv;
        indexerPlayRegionParam["importFromCsv"] = &ParamTableIndexer<PlayRegionParam>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<PlayRegionParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<PlayRegionParam>>(nullptr);
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"matchAreaId", false},
            {"multiPlayStartLimitEventFlagId", false},
            {"otherDisableDistance", false},
            {"pcPositionSaveLimitEventFlagId", false},
            {"bossAreaId", false},
            {"cultNpcWhiteGhostEntityId_byFree", false},
            {"bMapGuradianRegion", false},
            {"bYellowCostumeRegion", false},
            {"multiPlayStartLimitEventFlagId_targetFlagState", false},
            {"breakInLimitEventFlagId_1_targetFlagState", false},
            {"whiteSignLimitEventFlagId_1_targetFlagState", false},
            {"redSignLimitEventFlagId_1_targetFlagState", false},
            {"breakInLimitEventFlagId_2_targetFlagState", false},
            {"breakInLimitEventFlagId_3_targetFlagState", false},
            {"whiteSignLimitEventFlagId_2_targetFlagState", false},
            {"warpItemUsePermitBonfireId_1", false},
            {"warpItemUsePermitBonfireId_2", false},
            {"warpItemUsePermitBonfireId_3", false},
            {"warpItemUsePermitBonfireId_4", false},
            {"warpItemUsePermitBonfireId_5", false},
            {"warpItemProhibitionEventFlagId_1", false},
            {"warpItemProhibitionEventFlagId_2", false},
            {"warpItemProhibitionEventFlagId_3", false},
            {"warpItemProhibitionEventFlagId_4", false},
            {"warpItemProhibitionEventFlagId_5", false},
            {"enableBloodstain", false},
            {"enableBloodMessage", false},
            {"enableGhost", false},
            {"dispMask00", false},
            {"dispMask01", false},
            {"whiteSignLimitEventFlagId_3_targetFlagState", false},
            {"redSignLimitEventFlagId_2_targetFlagState", false},
            {"redSignLimitEventFlagId_3_targetFlagState", false},
            {"isAutoIntrudePoint", false},
            {"unknown_0x45_1", false},
            {"multiPlayHASHostLimitEventFlagId", false},
            {"otherMaxDistance", false},
            {"signPuddleOpenEventFlagId", false},
            {"areaNo", false},
            {"gridXNo", false},
            {"gridZNo", false},
            {"posX", false},
            {"posY", false},
            {"posZ", false},
            {"breakInLimitEventFlagId_1", false},
            {"whiteSignLimitEventFlagId_1", false},
            {"matchAreaSignCreateLimitEventFlagId", false},
            {"signAimId_1", false},
            {"signAimId_2", false},
            {"signAimId_3", false},
            {"signAimId_4", false},
            {"signAimId_5", false},
            {"signAimId_6", false},
            {"signAimId_7", false},
            {"signAimId_8", false},
            {"redSignLimitEventFlagId_1", false},
            {"breakInLimitEventFlagId_2", false},
            {"breakInLimitEventFlagId_3", false},
            {"whiteSignLimitEventFlagId_2", false},
            {"whiteSignLimitEventFlagId_3", false},
            {"redSignLimitEventFlagId_2", false},
            {"redSignLimitEventFlagId_3", false},
            {"bossId_1", false},
            {"bossId_2", false},
            {"bossId_3", false},
            {"bossId_4", false},
            {"bossId_5", false},
            {"bossId_6", false},
            {"bossId_7", false},
            {"bossId_8", false},
            {"bossId_9", false},
            {"bossId_10", false},
            {"bossId_11", false},
            {"bossId_12", false},
            {"bossId_13", false},
            {"bossId_14", false},
            {"bossId_15", false},
            {"bossId_16", false},
            {"mapMenuUnlockEventId", false},
        });
        return indexer;
    };
    paramsTable["PlayRegionParam"] = [tableLoader]() -> auto { return tableLoader(L"PlayRegionParam"); };
}

template<> void ParamTableIndexer<PlayRegionParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,matchAreaId,multiPlayStartLimitEventFlagId,otherDisableDistance,pcPositionSaveLimitEventFlagId,bossAreaId,cultNpcWhiteGhostEntityId_byFree,bMapGuradianRegion,bYellowCostumeRegion,multiPlayStartLimitEventFlagId_targetFlagState,breakInLimitEventFlagId_1_targetFlagState,whiteSignLimitEventFlagId_1_targetFlagState,redSignLimitEventFlagId_1_targetFlagState,breakInLimitEventFlagId_2_targetFlagState,breakInLimitEventFlagId_3_targetFlagState");
    fwprintf(f, L",whiteSignLimitEventFlagId_2_targetFlagState,warpItemUsePermitBonfireId_1,warpItemUsePermitBonfireId_2,warpItemUsePermitBonfireId_3,warpItemUsePermitBonfireId_4,warpItemUsePermitBonfireId_5,warpItemProhibitionEventFlagId_1,warpItemProhibitionEventFlagId_2,warpItemProhibitionEventFlagId_3,warpItemProhibitionEventFlagId_4,warpItemProhibitionEventFlagId_5,enableBloodstain,enableBloodMessage,enableGhost,dispMask00,dispMask01");
    fwprintf(f, L",whiteSignLimitEventFlagId_3_targetFlagState,redSignLimitEventFlagId_2_targetFlagState,redSignLimitEventFlagId_3_targetFlagState,isAutoIntrudePoint,unknown_0x45_1,multiPlayHASHostLimitEventFlagId,otherMaxDistance,signPuddleOpenEventFlagId,areaNo,gridXNo,gridZNo,posX,posY,posZ,breakInLimitEventFlagId_1,whiteSignLimitEventFlagId_1");
    fwprintf(f, L",matchAreaSignCreateLimitEventFlagId,signAimId_1,signAimId_2,signAimId_3,signAimId_4,signAimId_5,signAimId_6,signAimId_7,signAimId_8,redSignLimitEventFlagId_1,breakInLimitEventFlagId_2,breakInLimitEventFlagId_3,whiteSignLimitEventFlagId_2,whiteSignLimitEventFlagId_3,redSignLimitEventFlagId_2,redSignLimitEventFlagId_3");
    fwprintf(f, L",bossId_1,bossId_2,bossId_3,bossId_4,bossId_5,bossId_6,bossId_7,bossId_8,bossId_9,bossId_10,bossId_11,bossId_12,bossId_13,bossId_14,bossId_15,bossId_16");
    fwprintf(f, L",mapMenuUnlockEventId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%d,%u,%g,%u,%u,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%g,%u,%u,%u,%u,%g,%g,%g,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u\n",
            this->paramId(i),
            param->disableParam_NT,
            param->matchAreaId,
            param->multiPlayStartLimitEventFlagId,
            param->otherDisableDistance,
            param->pcPositionSaveLimitEventFlagId,
            param->bossAreaId,
            param->cultNpcWhiteGhostEntityId_byFree,
            param->bMapGuradianRegion,
            param->bYellowCostumeRegion,
            param->multiPlayStartLimitEventFlagId_targetFlagState,
            param->breakInLimitEventFlagId_1_targetFlagState,
            param->whiteSignLimitEventFlagId_1_targetFlagState,
            param->redSignLimitEventFlagId_1_targetFlagState,
            param->breakInLimitEventFlagId_2_targetFlagState,
            param->breakInLimitEventFlagId_3_targetFlagState,
            param->whiteSignLimitEventFlagId_2_targetFlagState,
            param->warpItemUsePermitBonfireId_1,
            param->warpItemUsePermitBonfireId_2,
            param->warpItemUsePermitBonfireId_3,
            param->warpItemUsePermitBonfireId_4,
            param->warpItemUsePermitBonfireId_5,
            param->warpItemProhibitionEventFlagId_1,
            param->warpItemProhibitionEventFlagId_2,
            param->warpItemProhibitionEventFlagId_3,
            param->warpItemProhibitionEventFlagId_4,
            param->warpItemProhibitionEventFlagId_5,
            param->enableBloodstain,
            param->enableBloodMessage,
            param->enableGhost,
            param->dispMask00,
            param->dispMask01,
            param->whiteSignLimitEventFlagId_3_targetFlagState,
            param->redSignLimitEventFlagId_2_targetFlagState,
            param->redSignLimitEventFlagId_3_targetFlagState,
            param->isAutoIntrudePoint,
            param->unknown_0x45_1,
            param->multiPlayHASHostLimitEventFlagId,
            param->otherMaxDistance,
            param->signPuddleOpenEventFlagId,
            param->areaNo,
            param->gridXNo,
            param->gridZNo,
            param->posX,
            param->posY,
            param->posZ,
            param->breakInLimitEventFlagId_1,
            param->whiteSignLimitEventFlagId_1,
            param->matchAreaSignCreateLimitEventFlagId,
            param->signAimId_1,
            param->signAimId_2,
            param->signAimId_3,
            param->signAimId_4,
            param->signAimId_5,
            param->signAimId_6,
            param->signAimId_7,
            param->signAimId_8,
            param->redSignLimitEventFlagId_1,
            param->breakInLimitEventFlagId_2,
            param->breakInLimitEventFlagId_3,
            param->whiteSignLimitEventFlagId_2,
            param->whiteSignLimitEventFlagId_3,
            param->redSignLimitEventFlagId_2,
            param->redSignLimitEventFlagId_3,
            param->bossId_1,
            param->bossId_2,
            param->bossId_3,
            param->bossId_4,
            param->bossId_5,
            param->bossId_6,
            param->bossId_7,
            param->bossId_8,
            param->bossId_9,
            param->bossId_10,
            param->bossId_11,
            param->bossId_12,
            param->bossId_13,
            param->bossId_14,
            param->bossId_15,
            param->bossId_16,
            param->mapMenuUnlockEventId
        );
    }
    fclose(f);
}

}
