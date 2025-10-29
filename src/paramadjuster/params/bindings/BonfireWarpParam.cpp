#include "../luabindings.h"
#include "../defs/BonfireWarpParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<BonfireWarpParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerBonfireWarpParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["BonfireWarpParam"]; usertype) return;
        auto indexerBonfireWarpParam = state->new_usertype<ParamTableIndexer<BonfireWarpParam>>("BonfireWarpParamTableIndexer");
        indexerBonfireWarpParam["count"] = sol::property(&ParamTableIndexer<BonfireWarpParam>::count);
        indexerBonfireWarpParam["__index"] = &ParamTableIndexer<BonfireWarpParam>::at;
        indexerBonfireWarpParam["id"] = &ParamTableIndexer<BonfireWarpParam>::paramId;
        indexerBonfireWarpParam["get"] = &ParamTableIndexer<BonfireWarpParam>::get;
        indexerBonfireWarpParam["exportToCsv"] = &ParamTableIndexer<BonfireWarpParam>::exportToCsv;
        indexerBonfireWarpParam["importFromCsv"] = &ParamTableIndexer<BonfireWarpParam>::importFromCsv;
        auto utBonfireWarpParam = state->new_usertype<BonfireWarpParam>("BonfireWarpParam");
        utBonfireWarpParam["disableParam_NT"] = sol::property([](BonfireWarpParam &param) -> uint8_t { return param.disableParam_NT; }, [](BonfireWarpParam &param, uint8_t value) { param.disableParam_NT = value; });
        utBonfireWarpParam["eventflagId"] = &BonfireWarpParam::eventflagId;
        utBonfireWarpParam["bonfireEntityId"] = &BonfireWarpParam::bonfireEntityId;
        utBonfireWarpParam["bonfireSubCategorySortId"] = &BonfireWarpParam::bonfireSubCategorySortId;
        utBonfireWarpParam["forbiddenIconId"] = &BonfireWarpParam::forbiddenIconId;
        utBonfireWarpParam["dispMinZoomStep"] = &BonfireWarpParam::dispMinZoomStep;
        utBonfireWarpParam["selectMinZoomStep"] = &BonfireWarpParam::selectMinZoomStep;
        utBonfireWarpParam["bonfireSubCategoryId"] = &BonfireWarpParam::bonfireSubCategoryId;
        utBonfireWarpParam["clearedEventFlagId"] = &BonfireWarpParam::clearedEventFlagId;
        utBonfireWarpParam["iconId"] = &BonfireWarpParam::iconId;
        utBonfireWarpParam["dispMask00"] = sol::property([](BonfireWarpParam &param) -> uint8_t { return param.dispMask00; }, [](BonfireWarpParam &param, uint8_t value) { param.dispMask00 = value; });
        utBonfireWarpParam["dispMask01"] = sol::property([](BonfireWarpParam &param) -> uint8_t { return param.dispMask01; }, [](BonfireWarpParam &param, uint8_t value) { param.dispMask01 = value; });
        utBonfireWarpParam["dispMask02"] = sol::property([](BonfireWarpParam &param) -> uint8_t { return param.dispMask02; }, [](BonfireWarpParam &param, uint8_t value) { param.dispMask02 = value; });
        utBonfireWarpParam["areaNo"] = &BonfireWarpParam::areaNo;
        utBonfireWarpParam["gridXNo"] = &BonfireWarpParam::gridXNo;
        utBonfireWarpParam["gridZNo"] = &BonfireWarpParam::gridZNo;
        utBonfireWarpParam["posX"] = &BonfireWarpParam::posX;
        utBonfireWarpParam["posY"] = &BonfireWarpParam::posY;
        utBonfireWarpParam["posZ"] = &BonfireWarpParam::posZ;
        utBonfireWarpParam["textId1"] = &BonfireWarpParam::textId1;
        utBonfireWarpParam["textEnableFlagId1"] = &BonfireWarpParam::textEnableFlagId1;
        utBonfireWarpParam["textDisableFlagId1"] = &BonfireWarpParam::textDisableFlagId1;
        utBonfireWarpParam["textId2"] = &BonfireWarpParam::textId2;
        utBonfireWarpParam["textEnableFlagId2"] = &BonfireWarpParam::textEnableFlagId2;
        utBonfireWarpParam["textDisableFlagId2"] = &BonfireWarpParam::textDisableFlagId2;
        utBonfireWarpParam["textId3"] = &BonfireWarpParam::textId3;
        utBonfireWarpParam["textEnableFlagId3"] = &BonfireWarpParam::textEnableFlagId3;
        utBonfireWarpParam["textDisableFlagId3"] = &BonfireWarpParam::textDisableFlagId3;
        utBonfireWarpParam["textId4"] = &BonfireWarpParam::textId4;
        utBonfireWarpParam["textEnableFlagId4"] = &BonfireWarpParam::textEnableFlagId4;
        utBonfireWarpParam["textDisableFlagId4"] = &BonfireWarpParam::textDisableFlagId4;
        utBonfireWarpParam["textId5"] = &BonfireWarpParam::textId5;
        utBonfireWarpParam["textEnableFlagId5"] = &BonfireWarpParam::textEnableFlagId5;
        utBonfireWarpParam["textDisableFlagId5"] = &BonfireWarpParam::textDisableFlagId5;
        utBonfireWarpParam["textId6"] = &BonfireWarpParam::textId6;
        utBonfireWarpParam["textEnableFlagId6"] = &BonfireWarpParam::textEnableFlagId6;
        utBonfireWarpParam["textDisableFlagId6"] = &BonfireWarpParam::textDisableFlagId6;
        utBonfireWarpParam["textId7"] = &BonfireWarpParam::textId7;
        utBonfireWarpParam["textEnableFlagId7"] = &BonfireWarpParam::textEnableFlagId7;
        utBonfireWarpParam["textDisableFlagId7"] = &BonfireWarpParam::textDisableFlagId7;
        utBonfireWarpParam["textId8"] = &BonfireWarpParam::textId8;
        utBonfireWarpParam["textEnableFlagId8"] = &BonfireWarpParam::textEnableFlagId8;
        utBonfireWarpParam["textDisableFlagId8"] = &BonfireWarpParam::textDisableFlagId8;
        utBonfireWarpParam["textType1"] = &BonfireWarpParam::textType1;
        utBonfireWarpParam["textType2"] = &BonfireWarpParam::textType2;
        utBonfireWarpParam["textType3"] = &BonfireWarpParam::textType3;
        utBonfireWarpParam["textType4"] = &BonfireWarpParam::textType4;
        utBonfireWarpParam["textType5"] = &BonfireWarpParam::textType5;
        utBonfireWarpParam["textType6"] = &BonfireWarpParam::textType6;
        utBonfireWarpParam["textType7"] = &BonfireWarpParam::textType7;
        utBonfireWarpParam["textType8"] = &BonfireWarpParam::textType8;
        utBonfireWarpParam["noIgnitionSfxDmypolyId_0"] = &BonfireWarpParam::noIgnitionSfxDmypolyId_0;
        utBonfireWarpParam["noIgnitionSfxId_0"] = &BonfireWarpParam::noIgnitionSfxId_0;
        utBonfireWarpParam["noIgnitionSfxDmypolyId_1"] = &BonfireWarpParam::noIgnitionSfxDmypolyId_1;
        utBonfireWarpParam["noIgnitionSfxId_1"] = &BonfireWarpParam::noIgnitionSfxId_1;
        utBonfireWarpParam["textEnableFlag2Id1"] = &BonfireWarpParam::textEnableFlag2Id1;
        utBonfireWarpParam["textEnableFlag2Id2"] = &BonfireWarpParam::textEnableFlag2Id2;
        utBonfireWarpParam["textEnableFlag2Id3"] = &BonfireWarpParam::textEnableFlag2Id3;
        utBonfireWarpParam["textEnableFlag2Id4"] = &BonfireWarpParam::textEnableFlag2Id4;
        utBonfireWarpParam["textEnableFlag2Id5"] = &BonfireWarpParam::textEnableFlag2Id5;
        utBonfireWarpParam["textEnableFlag2Id6"] = &BonfireWarpParam::textEnableFlag2Id6;
        utBonfireWarpParam["textEnableFlag2Id7"] = &BonfireWarpParam::textEnableFlag2Id7;
        utBonfireWarpParam["textEnableFlag2Id8"] = &BonfireWarpParam::textEnableFlag2Id8;
        utBonfireWarpParam["textDisableFlag2Id1"] = &BonfireWarpParam::textDisableFlag2Id1;
        utBonfireWarpParam["textDisableFlag2Id2"] = &BonfireWarpParam::textDisableFlag2Id2;
        utBonfireWarpParam["textDisableFlag2Id3"] = &BonfireWarpParam::textDisableFlag2Id3;
        utBonfireWarpParam["textDisableFlag2Id4"] = &BonfireWarpParam::textDisableFlag2Id4;
        utBonfireWarpParam["textDisableFlag2Id5"] = &BonfireWarpParam::textDisableFlag2Id5;
        utBonfireWarpParam["textDisableFlag2Id6"] = &BonfireWarpParam::textDisableFlag2Id6;
        utBonfireWarpParam["textDisableFlag2Id7"] = &BonfireWarpParam::textDisableFlag2Id7;
        utBonfireWarpParam["textDisableFlag2Id8"] = &BonfireWarpParam::textDisableFlag2Id8;
        utBonfireWarpParam["altIconId"] = &BonfireWarpParam::altIconId;
        utBonfireWarpParam["altForbiddenIconId"] = &BonfireWarpParam::altForbiddenIconId;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<BonfireWarpParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<BonfireWarpParam>>(nullptr);
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"eventflagId", false},
            {"bonfireEntityId", false},
            {"bonfireSubCategorySortId", false},
            {"forbiddenIconId", false},
            {"dispMinZoomStep", false},
            {"selectMinZoomStep", false},
            {"bonfireSubCategoryId", false},
            {"clearedEventFlagId", false},
            {"iconId", false},
            {"dispMask00", false},
            {"dispMask01", false},
            {"dispMask02", false},
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
            {"noIgnitionSfxDmypolyId_0", false},
            {"noIgnitionSfxId_0", false},
            {"noIgnitionSfxDmypolyId_1", false},
            {"noIgnitionSfxId_1", false},
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
            {"altIconId", false},
            {"altForbiddenIconId", false},
        });
        return indexer;
    };
    paramsTable["BonfireWarpParam"] = [tableLoader]() -> auto { return tableLoader(L"BonfireWarpParam"); };
}

template<> void ParamTableIndexer<BonfireWarpParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,eventflagId,bonfireEntityId,bonfireSubCategorySortId,forbiddenIconId,dispMinZoomStep,selectMinZoomStep,bonfireSubCategoryId,clearedEventFlagId,iconId,dispMask00,dispMask01,dispMask02,areaNo,gridXNo,gridZNo,posX,posY,posZ,textId1,textEnableFlagId1,textDisableFlagId1,textId2,textEnableFlagId2,textDisableFlagId2,textId3,textEnableFlagId3,textDisableFlagId3,textId4,textEnableFlagId4,textDisableFlagId4,textId5,textEnableFlagId5,textDisableFlagId5,textId6,textEnableFlagId6,textDisableFlagId6,textId7,textEnableFlagId7,textDisableFlagId7,textId8,textEnableFlagId8,textDisableFlagId8,textType1,textType2,textType3,textType4,textType5,textType6,textType7,textType8,noIgnitionSfxDmypolyId_0,noIgnitionSfxId_0,noIgnitionSfxDmypolyId_1,noIgnitionSfxId_1,textEnableFlag2Id1,textEnableFlag2Id2,textEnableFlag2Id3,textEnableFlag2Id4,textEnableFlag2Id5,textEnableFlag2Id6,textEnableFlag2Id7,textEnableFlag2Id8,textDisableFlag2Id1,textDisableFlag2Id2,textDisableFlag2Id3,textDisableFlag2Id4,textDisableFlag2Id5,textDisableFlag2Id6,textDisableFlag2Id7,textDisableFlag2Id8,altIconId,altForbiddenIconId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%u,%u,%u,%u,%d,%u,%u,%u,%u,%u,%u,%u,%u,%g,%g,%g,%d,%u,%u,%d,%u,%u,%d,%u,%u,%d,%u,%u,%d,%u,%u,%d,%u,%u,%d,%u,%u,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u\n",
            this->paramId(i),
            param->disableParam_NT,
            param->eventflagId,
            param->bonfireEntityId,
            param->bonfireSubCategorySortId,
            param->forbiddenIconId,
            param->dispMinZoomStep,
            param->selectMinZoomStep,
            param->bonfireSubCategoryId,
            param->clearedEventFlagId,
            param->iconId,
            param->dispMask00,
            param->dispMask01,
            param->dispMask02,
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
            param->noIgnitionSfxDmypolyId_0,
            param->noIgnitionSfxId_0,
            param->noIgnitionSfxDmypolyId_1,
            param->noIgnitionSfxId_1,
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
            param->textDisableFlag2Id8,
            param->altIconId,
            param->altForbiddenIconId
        );
    }
    fclose(f);
}

}
