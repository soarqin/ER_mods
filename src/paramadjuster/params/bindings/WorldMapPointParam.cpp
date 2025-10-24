#include "../luabindings.h"
#include "../defs/WorldMapPointParam.h"

namespace paramadjuster::params {

void registerWorldMapPointParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WorldMapPointParam"]; usertype) return;
        auto indexerWorldMapPointParam = state->new_usertype<ParamTableIndexer<WorldMapPointParam>>("WorldMapPointParamTableIndexer");
        indexerWorldMapPointParam["count"] = sol::property(&ParamTableIndexer<WorldMapPointParam>::count);
        indexerWorldMapPointParam["__index"] = &ParamTableIndexer<WorldMapPointParam>::at;
        indexerWorldMapPointParam["id"] = &ParamTableIndexer<WorldMapPointParam>::paramId;
        indexerWorldMapPointParam["get"] = &ParamTableIndexer<WorldMapPointParam>::get;
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
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<WorldMapPointParam>>(gParamMgr.findTable(L"WorldMapPointParam")); };
    paramsTable["WorldMapPointParam"] = tableLoader;
}

}
