#include "../luabindings.h"
#include "../defs/GrassTypeParam.h"

namespace paramadjuster::params {

void registerGrassTypeParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["GrassTypeParam"]; usertype) return;
        auto indexerGrassTypeParam = state->new_usertype<ParamTableIndexer<GrassTypeParam>>("GrassTypeParamTableIndexer");
        indexerGrassTypeParam["count"] = sol::property(&ParamTableIndexer<GrassTypeParam>::count);
        indexerGrassTypeParam["__index"] = &ParamTableIndexer<GrassTypeParam>::at;
        indexerGrassTypeParam["id"] = &ParamTableIndexer<GrassTypeParam>::paramId;
        indexerGrassTypeParam["get"] = &ParamTableIndexer<GrassTypeParam>::get;
        auto utGrassTypeParam = state->new_usertype<GrassTypeParam>("GrassTypeParam");
        utGrassTypeParam["lodRange"] = &GrassTypeParam::lodRange;
        utGrassTypeParam["lod0ClusterType"] = &GrassTypeParam::lod0ClusterType;
        utGrassTypeParam["lod1ClusterType"] = &GrassTypeParam::lod1ClusterType;
        utGrassTypeParam["lod2ClusterType"] = &GrassTypeParam::lod2ClusterType;
        utGrassTypeParam["distributionType"] = &GrassTypeParam::distributionType;
        utGrassTypeParam["baseDensity"] = &GrassTypeParam::baseDensity;
        utGrassTypeParam["model0Name"] = sol::property([](GrassTypeParam &param) -> std::wstring { return param.model0Name; }, [](GrassTypeParam &param, const std::wstring& value) { cStrToFixedStrW(param.model0Name, value); });
        utGrassTypeParam["flatTextureName"] = sol::property([](GrassTypeParam &param) -> std::wstring { return param.flatTextureName; }, [](GrassTypeParam &param, const std::wstring& value) { cStrToFixedStrW(param.flatTextureName, value); });
        utGrassTypeParam["billboardTextureName"] = sol::property([](GrassTypeParam &param) -> std::wstring { return param.billboardTextureName; }, [](GrassTypeParam &param, const std::wstring& value) { cStrToFixedStrW(param.billboardTextureName, value); });
        utGrassTypeParam["normalInfluence"] = &GrassTypeParam::normalInfluence;
        utGrassTypeParam["inclinationMax"] = &GrassTypeParam::inclinationMax;
        utGrassTypeParam["inclinationJitter"] = &GrassTypeParam::inclinationJitter;
        utGrassTypeParam["scaleBaseMin"] = &GrassTypeParam::scaleBaseMin;
        utGrassTypeParam["scaleBaseMax"] = &GrassTypeParam::scaleBaseMax;
        utGrassTypeParam["scaleHeightMin"] = &GrassTypeParam::scaleHeightMin;
        utGrassTypeParam["scaleHeightMax"] = &GrassTypeParam::scaleHeightMax;
        utGrassTypeParam["colorShade1_r"] = &GrassTypeParam::colorShade1_r;
        utGrassTypeParam["colorShade1_g"] = &GrassTypeParam::colorShade1_g;
        utGrassTypeParam["colorShade1_b"] = &GrassTypeParam::colorShade1_b;
        utGrassTypeParam["colorShade2_r"] = &GrassTypeParam::colorShade2_r;
        utGrassTypeParam["colorShade2_g"] = &GrassTypeParam::colorShade2_g;
        utGrassTypeParam["colorShade2_b"] = &GrassTypeParam::colorShade2_b;
        utGrassTypeParam["flatSplitType"] = &GrassTypeParam::flatSplitType;
        utGrassTypeParam["flatBladeCount"] = &GrassTypeParam::flatBladeCount;
        utGrassTypeParam["flatSlant"] = &GrassTypeParam::flatSlant;
        utGrassTypeParam["flatRadius"] = &GrassTypeParam::flatRadius;
        utGrassTypeParam["castShadow"] = &GrassTypeParam::castShadow;
        utGrassTypeParam["windAmplitude"] = &GrassTypeParam::windAmplitude;
        utGrassTypeParam["windCycle"] = &GrassTypeParam::windCycle;
        utGrassTypeParam["orientationAngle"] = &GrassTypeParam::orientationAngle;
        utGrassTypeParam["orientationRange"] = &GrassTypeParam::orientationRange;
        utGrassTypeParam["spacing"] = &GrassTypeParam::spacing;
        utGrassTypeParam["dithering"] = &GrassTypeParam::dithering;
        utGrassTypeParam["simpleModelName"] = sol::property([](GrassTypeParam &param) -> std::wstring { return param.simpleModelName; }, [](GrassTypeParam &param, const std::wstring& value) { cStrToFixedStrW(param.simpleModelName, value); });
        utGrassTypeParam["model1Name"] = sol::property([](GrassTypeParam &param) -> std::wstring { return param.model1Name; }, [](GrassTypeParam &param, const std::wstring& value) { cStrToFixedStrW(param.model1Name, value); });
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<GrassTypeParam>>(gParamMgr.findTable(L"GrassTypeParam")); };
    paramsTable["GrassTypeParam"] = tableLoader;
    paramsTable["GrassTypeParam_Lv1"] = tableLoader;
    paramsTable["GrassTypeParam_Lv2"] = tableLoader;
}

}
