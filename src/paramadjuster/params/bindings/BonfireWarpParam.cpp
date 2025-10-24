#include "../luabindings.h"
#include "../defs/BonfireWarpParam.h"

namespace paramadjuster::params {

void registerBonfireWarpParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["BonfireWarpParam"]; usertype) return;
        auto indexerBonfireWarpParam = state->new_usertype<ParamTableIndexer<BonfireWarpParam>>("BonfireWarpParamTableIndexer");
        indexerBonfireWarpParam["count"] = sol::property(&ParamTableIndexer<BonfireWarpParam>::count);
        indexerBonfireWarpParam["__index"] = &ParamTableIndexer<BonfireWarpParam>::at;
        indexerBonfireWarpParam["id"] = &ParamTableIndexer<BonfireWarpParam>::paramId;
        indexerBonfireWarpParam["get"] = &ParamTableIndexer<BonfireWarpParam>::get;
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
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<BonfireWarpParam>>(gParamMgr.findTable(L"BonfireWarpParam")); };
    paramsTable["BonfireWarpParam"] = tableLoader;
}

}
