#include "../luabindings.h"
#include "../defs/WorldMapLegacyConvParam.h"

namespace paramadjuster::params {

void registerWorldMapLegacyConvParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WorldMapLegacyConvParam"]; usertype) return;
        auto indexerWorldMapLegacyConvParam = state->new_usertype<ParamTableIndexer<WorldMapLegacyConvParam>>("WorldMapLegacyConvParamTableIndexer");
        indexerWorldMapLegacyConvParam["count"] = sol::property(&ParamTableIndexer<WorldMapLegacyConvParam>::count);
        indexerWorldMapLegacyConvParam["__index"] = &ParamTableIndexer<WorldMapLegacyConvParam>::at;
        indexerWorldMapLegacyConvParam["id"] = &ParamTableIndexer<WorldMapLegacyConvParam>::paramId;
        indexerWorldMapLegacyConvParam["get"] = &ParamTableIndexer<WorldMapLegacyConvParam>::get;
        auto utWorldMapLegacyConvParam = state->new_usertype<WorldMapLegacyConvParam>("WorldMapLegacyConvParam");
        utWorldMapLegacyConvParam["disableParam_NT"] = sol::property([](WorldMapLegacyConvParam &param) -> uint8_t { return param.disableParam_NT; }, [](WorldMapLegacyConvParam &param, uint8_t value) { param.disableParam_NT = value; });
        utWorldMapLegacyConvParam["srcAreaNo"] = &WorldMapLegacyConvParam::srcAreaNo;
        utWorldMapLegacyConvParam["srcGridXNo"] = &WorldMapLegacyConvParam::srcGridXNo;
        utWorldMapLegacyConvParam["srcGridZNo"] = &WorldMapLegacyConvParam::srcGridZNo;
        utWorldMapLegacyConvParam["srcPosX"] = &WorldMapLegacyConvParam::srcPosX;
        utWorldMapLegacyConvParam["srcPosY"] = &WorldMapLegacyConvParam::srcPosY;
        utWorldMapLegacyConvParam["srcPosZ"] = &WorldMapLegacyConvParam::srcPosZ;
        utWorldMapLegacyConvParam["dstAreaNo"] = &WorldMapLegacyConvParam::dstAreaNo;
        utWorldMapLegacyConvParam["dstGridXNo"] = &WorldMapLegacyConvParam::dstGridXNo;
        utWorldMapLegacyConvParam["dstGridZNo"] = &WorldMapLegacyConvParam::dstGridZNo;
        utWorldMapLegacyConvParam["dstPosX"] = &WorldMapLegacyConvParam::dstPosX;
        utWorldMapLegacyConvParam["dstPosY"] = &WorldMapLegacyConvParam::dstPosY;
        utWorldMapLegacyConvParam["dstPosZ"] = &WorldMapLegacyConvParam::dstPosZ;
        utWorldMapLegacyConvParam["isBasePoint"] = sol::property([](WorldMapLegacyConvParam &param) -> uint8_t { return param.isBasePoint; }, [](WorldMapLegacyConvParam &param, uint8_t value) { param.isBasePoint = value; });
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<WorldMapLegacyConvParam>>(gParamMgr.findTable(L"WorldMapLegacyConvParam")); };
    paramsTable["WorldMapLegacyConvParam"] = tableLoader;
}

}
