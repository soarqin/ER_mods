#include "../luabindings.h"
#include "../defs/GrassTypeParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<GrassTypeParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerGrassTypeParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["GrassTypeParam"]; usertype) return;
        auto indexerGrassTypeParam = state->new_usertype<ParamTableIndexer<GrassTypeParam>>("GrassTypeParamTableIndexer");
        indexerGrassTypeParam["count"] = sol::property(&ParamTableIndexer<GrassTypeParam>::count);
        indexerGrassTypeParam["__index"] = &ParamTableIndexer<GrassTypeParam>::at;
        indexerGrassTypeParam["id"] = &ParamTableIndexer<GrassTypeParam>::paramId;
        indexerGrassTypeParam["get"] = &ParamTableIndexer<GrassTypeParam>::get;
        indexerGrassTypeParam["exportToCsv"] = &ParamTableIndexer<GrassTypeParam>::exportToCsv;
        indexerGrassTypeParam["importFromCsv"] = &ParamTableIndexer<GrassTypeParam>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<GrassTypeParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<GrassTypeParam>>(nullptr);
        indexer->setFieldNames({
            {"lodRange", false},
            {"lod0ClusterType", false},
            {"lod1ClusterType", false},
            {"lod2ClusterType", false},
            {"distributionType", false},
            {"baseDensity", false},
            {"model0Name", true},
            {"flatTextureName", true},
            {"billboardTextureName", true},
            {"normalInfluence", false},
            {"inclinationMax", false},
            {"inclinationJitter", false},
            {"scaleBaseMin", false},
            {"scaleBaseMax", false},
            {"scaleHeightMin", false},
            {"scaleHeightMax", false},
            {"colorShade1_r", false},
            {"colorShade1_g", false},
            {"colorShade1_b", false},
            {"colorShade2_r", false},
            {"colorShade2_g", false},
            {"colorShade2_b", false},
            {"flatSplitType", false},
            {"flatBladeCount", false},
            {"flatSlant", false},
            {"flatRadius", false},
            {"castShadow", false},
            {"windAmplitude", false},
            {"windCycle", false},
            {"orientationAngle", false},
            {"orientationRange", false},
            {"spacing", false},
            {"dithering", false},
            {"simpleModelName", true},
            {"model1Name", true},
        });
        return indexer;
    };
    paramsTable["GrassTypeParam"] = [tableLoader]() -> auto { return tableLoader(L"GrassTypeParam"); };
    paramsTable["GrassTypeParam_Lv1"] = [tableLoader]() -> auto { return tableLoader(L"GrassTypeParam_Lv1"); };
    paramsTable["GrassTypeParam_Lv2"] = [tableLoader]() -> auto { return tableLoader(L"GrassTypeParam_Lv2"); };
}

template<> void ParamTableIndexer<GrassTypeParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,lodRange,lod0ClusterType,lod1ClusterType,lod2ClusterType,distributionType,baseDensity,model0Name,flatTextureName,billboardTextureName,normalInfluence,inclinationMax,inclinationJitter,scaleBaseMin,scaleBaseMax,scaleHeightMin,scaleHeightMax,colorShade1_r,colorShade1_g,colorShade1_b,colorShade2_r,colorShade2_g,colorShade2_b,flatSplitType,flatBladeCount,flatSlant,flatRadius,castShadow,windAmplitude,windCycle,orientationAngle,orientationRange,spacing,dithering,simpleModelName,model1Name\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%u,%u,%g,\"%ls\",\"%ls\",\"%ls\",%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%g,%u,%u,%u,%g,%g,%g,%u,\"%ls\",\"%ls\"\n",
            this->paramId(i),
            param->lodRange,
            param->lod0ClusterType,
            param->lod1ClusterType,
            param->lod2ClusterType,
            param->distributionType,
            param->baseDensity,
            param->model0Name,
            param->flatTextureName,
            param->billboardTextureName,
            param->normalInfluence,
            param->inclinationMax,
            param->inclinationJitter,
            param->scaleBaseMin,
            param->scaleBaseMax,
            param->scaleHeightMin,
            param->scaleHeightMax,
            param->colorShade1_r,
            param->colorShade1_g,
            param->colorShade1_b,
            param->colorShade2_r,
            param->colorShade2_g,
            param->colorShade2_b,
            param->flatSplitType,
            param->flatBladeCount,
            param->flatSlant,
            param->flatRadius,
            param->castShadow,
            param->windAmplitude,
            param->windCycle,
            param->orientationAngle,
            param->orientationRange,
            param->spacing,
            param->dithering,
            param->simpleModelName,
            param->model1Name
        );
    }
    fclose(f);
}

}
