#include "../luabindings.h"
#include "../defs/WorldMapPointParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<WorldMapPointParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerWorldMapPointParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WorldMapPointParam"]; usertype) return;
        auto indexerWorldMapPointParam = state->new_usertype<ParamTableIndexer<WorldMapPointParam>>("WorldMapPointParamTableIndexer");
        indexerWorldMapPointParam["count"] = sol::property(&ParamTableIndexer<WorldMapPointParam>::count);
        indexerWorldMapPointParam["__index"] = &ParamTableIndexer<WorldMapPointParam>::at;
        indexerWorldMapPointParam["id"] = &ParamTableIndexer<WorldMapPointParam>::paramId;
        indexerWorldMapPointParam["get"] = &ParamTableIndexer<WorldMapPointParam>::get;
        indexerWorldMapPointParam["exportToCsv"] = &ParamTableIndexer<WorldMapPointParam>::exportToCsv;
        indexerWorldMapPointParam["importFromCsv"] = &ParamTableIndexer<WorldMapPointParam>::importFromCsv;
        auto utWorldMapPointParam = state->new_usertype<WorldMapPointParam>("WorldMapPointParam");
        utWorldMapPointParam["disableParam_NT"] = sol::property([](WorldMapPointParam &param) -> uint8_t { return param.disableParam_NT; }, [](WorldMapPointParam &param, uint8_t value) { param.disableParam_NT = value; });
        utWorldMapPointParam["eventFlagId"] = &WorldMapPointParam::eventFlagId;
        utWorldMapPointParam["distViewEventFlagId"] = &WorldMapPointParam::distViewEventFlagId;
        utWorldMapPointParam["iconId"] = &WorldMapPointParam::iconId;
        utWorldMapPointParam["bgmPlaceType"] = &WorldMapPointParam::bgmPlaceType;
        utWorldMapPointParam["isAreaIcon"] = sol::property([](WorldMapPointParam &param) -> uint8_t { return param.isAreaIcon; }, [](WorldMapPointParam &param, uint8_t value) { param.isAreaIcon = value; });
        utWorldMapPointParam["isOverrideDistViewMarkPos"] = sol::property([](WorldMapPointParam &param) -> uint8_t { return param.isOverrideDistViewMarkPos; }, [](WorldMapPointParam &param, uint8_t value) { param.isOverrideDistViewMarkPos = value; });
        utWorldMapPointParam["isEnableNoText"] = sol::property([](WorldMapPointParam &param) -> uint8_t { return param.isEnableNoText; }, [](WorldMapPointParam &param, uint8_t value) { param.isEnableNoText = value; });
        utWorldMapPointParam["areaNo_forDistViewMark"] = &WorldMapPointParam::areaNo_forDistViewMark;
        utWorldMapPointParam["gridXNo_forDistViewMark"] = &WorldMapPointParam::gridXNo_forDistViewMark;
        utWorldMapPointParam["gridZNo_forDistViewMark"] = &WorldMapPointParam::gridZNo_forDistViewMark;
        utWorldMapPointParam["clearedEventFlagId"] = &WorldMapPointParam::clearedEventFlagId;
        utWorldMapPointParam["dispMask00"] = sol::property([](WorldMapPointParam &param) -> uint8_t { return param.dispMask00; }, [](WorldMapPointParam &param, uint8_t value) { param.dispMask00 = value; });
        utWorldMapPointParam["dispMask01"] = sol::property([](WorldMapPointParam &param) -> uint8_t { return param.dispMask01; }, [](WorldMapPointParam &param, uint8_t value) { param.dispMask01 = value; });
        utWorldMapPointParam["dispMask02"] = sol::property([](WorldMapPointParam &param) -> uint8_t { return param.dispMask02; }, [](WorldMapPointParam &param, uint8_t value) { param.dispMask02 = value; });
        utWorldMapPointParam["distViewIconId"] = &WorldMapPointParam::distViewIconId;
        utWorldMapPointParam["angle"] = &WorldMapPointParam::angle;
        utWorldMapPointParam["areaNo"] = &WorldMapPointParam::areaNo;
        utWorldMapPointParam["gridXNo"] = &WorldMapPointParam::gridXNo;
        utWorldMapPointParam["gridZNo"] = &WorldMapPointParam::gridZNo;
        utWorldMapPointParam["posX"] = &WorldMapPointParam::posX;
        utWorldMapPointParam["posY"] = &WorldMapPointParam::posY;
        utWorldMapPointParam["posZ"] = &WorldMapPointParam::posZ;
        utWorldMapPointParam["textId1"] = &WorldMapPointParam::textId1;
        utWorldMapPointParam["textEnableFlagId1"] = &WorldMapPointParam::textEnableFlagId1;
        utWorldMapPointParam["textDisableFlagId1"] = &WorldMapPointParam::textDisableFlagId1;
        utWorldMapPointParam["textId2"] = &WorldMapPointParam::textId2;
        utWorldMapPointParam["textEnableFlagId2"] = &WorldMapPointParam::textEnableFlagId2;
        utWorldMapPointParam["textDisableFlagId2"] = &WorldMapPointParam::textDisableFlagId2;
        utWorldMapPointParam["textId3"] = &WorldMapPointParam::textId3;
        utWorldMapPointParam["textEnableFlagId3"] = &WorldMapPointParam::textEnableFlagId3;
        utWorldMapPointParam["textDisableFlagId3"] = &WorldMapPointParam::textDisableFlagId3;
        utWorldMapPointParam["textId4"] = &WorldMapPointParam::textId4;
        utWorldMapPointParam["textEnableFlagId4"] = &WorldMapPointParam::textEnableFlagId4;
        utWorldMapPointParam["textDisableFlagId4"] = &WorldMapPointParam::textDisableFlagId4;
        utWorldMapPointParam["textId5"] = &WorldMapPointParam::textId5;
        utWorldMapPointParam["textEnableFlagId5"] = &WorldMapPointParam::textEnableFlagId5;
        utWorldMapPointParam["textDisableFlagId5"] = &WorldMapPointParam::textDisableFlagId5;
        utWorldMapPointParam["textId6"] = &WorldMapPointParam::textId6;
        utWorldMapPointParam["textEnableFlagId6"] = &WorldMapPointParam::textEnableFlagId6;
        utWorldMapPointParam["textDisableFlagId6"] = &WorldMapPointParam::textDisableFlagId6;
        utWorldMapPointParam["textId7"] = &WorldMapPointParam::textId7;
        utWorldMapPointParam["textEnableFlagId7"] = &WorldMapPointParam::textEnableFlagId7;
        utWorldMapPointParam["textDisableFlagId7"] = &WorldMapPointParam::textDisableFlagId7;
        utWorldMapPointParam["textId8"] = &WorldMapPointParam::textId8;
        utWorldMapPointParam["textEnableFlagId8"] = &WorldMapPointParam::textEnableFlagId8;
        utWorldMapPointParam["textDisableFlagId8"] = &WorldMapPointParam::textDisableFlagId8;
        utWorldMapPointParam["textType1"] = &WorldMapPointParam::textType1;
        utWorldMapPointParam["textType2"] = &WorldMapPointParam::textType2;
        utWorldMapPointParam["textType3"] = &WorldMapPointParam::textType3;
        utWorldMapPointParam["textType4"] = &WorldMapPointParam::textType4;
        utWorldMapPointParam["textType5"] = &WorldMapPointParam::textType5;
        utWorldMapPointParam["textType6"] = &WorldMapPointParam::textType6;
        utWorldMapPointParam["textType7"] = &WorldMapPointParam::textType7;
        utWorldMapPointParam["textType8"] = &WorldMapPointParam::textType8;
        utWorldMapPointParam["distViewId"] = &WorldMapPointParam::distViewId;
        utWorldMapPointParam["posX_forDistViewMark"] = &WorldMapPointParam::posX_forDistViewMark;
        utWorldMapPointParam["posY_forDistViewMark"] = &WorldMapPointParam::posY_forDistViewMark;
        utWorldMapPointParam["posZ_forDistViewMark"] = &WorldMapPointParam::posZ_forDistViewMark;
        utWorldMapPointParam["distViewId1"] = &WorldMapPointParam::distViewId1;
        utWorldMapPointParam["distViewId2"] = &WorldMapPointParam::distViewId2;
        utWorldMapPointParam["distViewId3"] = &WorldMapPointParam::distViewId3;
        utWorldMapPointParam["dispMinZoomStep"] = &WorldMapPointParam::dispMinZoomStep;
        utWorldMapPointParam["selectMinZoomStep"] = &WorldMapPointParam::selectMinZoomStep;
        utWorldMapPointParam["entryFEType"] = &WorldMapPointParam::entryFEType;
        utWorldMapPointParam["unknown_0xb7"] = &WorldMapPointParam::unknown_0xb7;
        utWorldMapPointParam["altIconId"] = &WorldMapPointParam::altIconId;
        utWorldMapPointParam["textEnableFlag2Id1"] = &WorldMapPointParam::textEnableFlag2Id1;
        utWorldMapPointParam["textEnableFlag2Id2"] = &WorldMapPointParam::textEnableFlag2Id2;
        utWorldMapPointParam["textEnableFlag2Id3"] = &WorldMapPointParam::textEnableFlag2Id3;
        utWorldMapPointParam["textEnableFlag2Id4"] = &WorldMapPointParam::textEnableFlag2Id4;
        utWorldMapPointParam["textEnableFlag2Id5"] = &WorldMapPointParam::textEnableFlag2Id5;
        utWorldMapPointParam["textEnableFlag2Id6"] = &WorldMapPointParam::textEnableFlag2Id6;
        utWorldMapPointParam["textEnableFlag2Id7"] = &WorldMapPointParam::textEnableFlag2Id7;
        utWorldMapPointParam["textEnableFlag2Id8"] = &WorldMapPointParam::textEnableFlag2Id8;
        utWorldMapPointParam["textDisableFlag2Id1"] = &WorldMapPointParam::textDisableFlag2Id1;
        utWorldMapPointParam["textDisableFlag2Id2"] = &WorldMapPointParam::textDisableFlag2Id2;
        utWorldMapPointParam["textDisableFlag2Id3"] = &WorldMapPointParam::textDisableFlag2Id3;
        utWorldMapPointParam["textDisableFlag2Id4"] = &WorldMapPointParam::textDisableFlag2Id4;
        utWorldMapPointParam["textDisableFlag2Id5"] = &WorldMapPointParam::textDisableFlag2Id5;
        utWorldMapPointParam["textDisableFlag2Id6"] = &WorldMapPointParam::textDisableFlag2Id6;
        utWorldMapPointParam["textDisableFlag2Id7"] = &WorldMapPointParam::textDisableFlag2Id7;
        utWorldMapPointParam["textDisableFlag2Id8"] = &WorldMapPointParam::textDisableFlag2Id8;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<WorldMapPointParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<WorldMapPointParam>>(nullptr);
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"eventFlagId", false},
            {"distViewEventFlagId", false},
            {"iconId", false},
            {"bgmPlaceType", false},
            {"isAreaIcon", false},
            {"isOverrideDistViewMarkPos", false},
            {"isEnableNoText", false},
            {"areaNo_forDistViewMark", false},
            {"gridXNo_forDistViewMark", false},
            {"gridZNo_forDistViewMark", false},
            {"clearedEventFlagId", false},
            {"dispMask00", false},
            {"dispMask01", false},
            {"dispMask02", false},
            {"distViewIconId", false},
            {"angle", false},
            {"areaNo", false},
            {"gridXNo", false},
            {"gridZNo", false},
            {"posX", false},
            {"posY", false},
            {"posZ", false},
            {"textId1", false},
            {"textEnableFlagId1", false},
            {"textDisableFlagId1", false},
            {"textId2", false},
            {"textEnableFlagId2", false},
            {"textDisableFlagId2", false},
            {"textId3", false},
            {"textEnableFlagId3", false},
            {"textDisableFlagId3", false},
            {"textId4", false},
            {"textEnableFlagId4", false},
            {"textDisableFlagId4", false},
            {"textId5", false},
            {"textEnableFlagId5", false},
            {"textDisableFlagId5", false},
            {"textId6", false},
            {"textEnableFlagId6", false},
            {"textDisableFlagId6", false},
            {"textId7", false},
            {"textEnableFlagId7", false},
            {"textDisableFlagId7", false},
            {"textId8", false},
            {"textEnableFlagId8", false},
            {"textDisableFlagId8", false},
            {"textType1", false},
            {"textType2", false},
            {"textType3", false},
            {"textType4", false},
            {"textType5", false},
            {"textType6", false},
            {"textType7", false},
            {"textType8", false},
            {"distViewId", false},
            {"posX_forDistViewMark", false},
            {"posY_forDistViewMark", false},
            {"posZ_forDistViewMark", false},
            {"distViewId1", false},
            {"distViewId2", false},
            {"distViewId3", false},
            {"dispMinZoomStep", false},
            {"selectMinZoomStep", false},
            {"entryFEType", false},
            {"unknown_0xb7", false},
            {"altIconId", false},
            {"textEnableFlag2Id1", false},
            {"textEnableFlag2Id2", false},
            {"textEnableFlag2Id3", false},
            {"textEnableFlag2Id4", false},
            {"textEnableFlag2Id5", false},
            {"textEnableFlag2Id6", false},
            {"textEnableFlag2Id7", false},
            {"textEnableFlag2Id8", false},
            {"textDisableFlag2Id1", false},
            {"textDisableFlag2Id2", false},
            {"textDisableFlag2Id3", false},
            {"textDisableFlag2Id4", false},
            {"textDisableFlag2Id5", false},
            {"textDisableFlag2Id6", false},
            {"textDisableFlag2Id7", false},
            {"textDisableFlag2Id8", false},
        });
        return indexer;
    };
    paramsTable["WorldMapPointParam"] = [tableLoader]() -> auto { return tableLoader(L"WorldMapPointParam"); };
}

template<> void ParamTableIndexer<WorldMapPointParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,eventFlagId,distViewEventFlagId,iconId,bgmPlaceType,isAreaIcon,isOverrideDistViewMarkPos,isEnableNoText,areaNo_forDistViewMark,gridXNo_forDistViewMark,gridZNo_forDistViewMark,clearedEventFlagId,dispMask00,dispMask01,dispMask02,distViewIconId,angle,areaNo,gridXNo,gridZNo,posX,posY,posZ,textId1,textEnableFlagId1,textDisableFlagId1,textId2,textEnableFlagId2,textDisableFlagId2,textId3,textEnableFlagId3,textDisableFlagId3,textId4,textEnableFlagId4,textDisableFlagId4,textId5,textEnableFlagId5,textDisableFlagId5,textId6,textEnableFlagId6,textDisableFlagId6,textId7,textEnableFlagId7,textDisableFlagId7,textId8,textEnableFlagId8,textDisableFlagId8,textType1,textType2,textType3,textType4,textType5,textType6,textType7,textType8,distViewId,posX_forDistViewMark,posY_forDistViewMark,posZ_forDistViewMark,distViewId1,distViewId2,distViewId3,dispMinZoomStep,selectMinZoomStep,entryFEType,unknown_0xb7,altIconId,textEnableFlag2Id1,textEnableFlag2Id2,textEnableFlag2Id3,textEnableFlag2Id4,textEnableFlag2Id5,textEnableFlag2Id6,textEnableFlag2Id7,textEnableFlag2Id8,textDisableFlag2Id1,textDisableFlag2Id2,textDisableFlag2Id3,textDisableFlag2Id4,textDisableFlag2Id5,textDisableFlag2Id6,textDisableFlag2Id7,textDisableFlag2Id8\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%u,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%g,%u,%u,%u,%g,%g,%g,%d,%u,%u,%d,%u,%u,%d,%u,%u,%d,%u,%u,%d,%u,%u,%d,%u,%u,%d,%u,%u,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%g,%g,%g,%d,%d,%d,%u,%u,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",
            this->paramId(i),
            param->disableParam_NT,
            param->eventFlagId,
            param->distViewEventFlagId,
            param->iconId,
            param->bgmPlaceType,
            param->isAreaIcon,
            param->isOverrideDistViewMarkPos,
            param->isEnableNoText,
            param->areaNo_forDistViewMark,
            param->gridXNo_forDistViewMark,
            param->gridZNo_forDistViewMark,
            param->clearedEventFlagId,
            param->dispMask00,
            param->dispMask01,
            param->dispMask02,
            param->distViewIconId,
            param->angle,
            param->areaNo,
            param->gridXNo,
            param->gridZNo,
            param->posX,
            param->posY,
            param->posZ,
            param->textId1,
            param->textEnableFlagId1,
            param->textDisableFlagId1,
            param->textId2,
            param->textEnableFlagId2,
            param->textDisableFlagId2,
            param->textId3,
            param->textEnableFlagId3,
            param->textDisableFlagId3,
            param->textId4,
            param->textEnableFlagId4,
            param->textDisableFlagId4,
            param->textId5,
            param->textEnableFlagId5,
            param->textDisableFlagId5,
            param->textId6,
            param->textEnableFlagId6,
            param->textDisableFlagId6,
            param->textId7,
            param->textEnableFlagId7,
            param->textDisableFlagId7,
            param->textId8,
            param->textEnableFlagId8,
            param->textDisableFlagId8,
            param->textType1,
            param->textType2,
            param->textType3,
            param->textType4,
            param->textType5,
            param->textType6,
            param->textType7,
            param->textType8,
            param->distViewId,
            param->posX_forDistViewMark,
            param->posY_forDistViewMark,
            param->posZ_forDistViewMark,
            param->distViewId1,
            param->distViewId2,
            param->distViewId3,
            param->dispMinZoomStep,
            param->selectMinZoomStep,
            param->entryFEType,
            param->unknown_0xb7,
            param->altIconId,
            param->textEnableFlag2Id1,
            param->textEnableFlag2Id2,
            param->textEnableFlag2Id3,
            param->textEnableFlag2Id4,
            param->textEnableFlag2Id5,
            param->textEnableFlag2Id6,
            param->textEnableFlag2Id7,
            param->textEnableFlag2Id8,
            param->textDisableFlag2Id1,
            param->textDisableFlag2Id2,
            param->textDisableFlag2Id3,
            param->textDisableFlag2Id4,
            param->textDisableFlag2Id5,
            param->textDisableFlag2Id6,
            param->textDisableFlag2Id7,
            param->textDisableFlag2Id8
        );
    }
    fclose(f);
}

}
