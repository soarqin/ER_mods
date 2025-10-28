#include "../luabindings.h"
#include "../defs/PartsDrawParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<PartsDrawParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerPartsDrawParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["PartsDrawParam"]; usertype) return;
        auto indexerPartsDrawParam = state->new_usertype<ParamTableIndexer<PartsDrawParam>>("PartsDrawParamTableIndexer");
        indexerPartsDrawParam["count"] = sol::property(&ParamTableIndexer<PartsDrawParam>::count);
        indexerPartsDrawParam["__index"] = &ParamTableIndexer<PartsDrawParam>::at;
        indexerPartsDrawParam["id"] = &ParamTableIndexer<PartsDrawParam>::paramId;
        indexerPartsDrawParam["get"] = &ParamTableIndexer<PartsDrawParam>::get;
        indexerPartsDrawParam["exportToCsv"] = &ParamTableIndexer<PartsDrawParam>::exportToCsv;
        indexerPartsDrawParam["importFromCsv"] = &ParamTableIndexer<PartsDrawParam>::importFromCsv;
        auto utPartsDrawParam = state->new_usertype<PartsDrawParam>("PartsDrawParam");
        utPartsDrawParam["lv01_BorderDist"] = &PartsDrawParam::lv01_BorderDist;
        utPartsDrawParam["lv01_PlayDist"] = &PartsDrawParam::lv01_PlayDist;
        utPartsDrawParam["lv12_BorderDist"] = &PartsDrawParam::lv12_BorderDist;
        utPartsDrawParam["lv12_PlayDist"] = &PartsDrawParam::lv12_PlayDist;
        utPartsDrawParam["lv23_BorderDist"] = &PartsDrawParam::lv23_BorderDist;
        utPartsDrawParam["lv23_PlayDist"] = &PartsDrawParam::lv23_PlayDist;
        utPartsDrawParam["lv34_BorderDist"] = &PartsDrawParam::lv34_BorderDist;
        utPartsDrawParam["lv34_PlayDist"] = &PartsDrawParam::lv34_PlayDist;
        utPartsDrawParam["lv45_BorderDist"] = &PartsDrawParam::lv45_BorderDist;
        utPartsDrawParam["lv45_PlayDist"] = &PartsDrawParam::lv45_PlayDist;
        utPartsDrawParam["tex_lv01_BorderDist"] = &PartsDrawParam::tex_lv01_BorderDist;
        utPartsDrawParam["tex_lv01_PlayDist"] = &PartsDrawParam::tex_lv01_PlayDist;
        utPartsDrawParam["enableCrossFade"] = sol::property([](PartsDrawParam &param) -> uint32_t { return param.enableCrossFade; }, [](PartsDrawParam &param, uint32_t value) { param.enableCrossFade = value; });
        utPartsDrawParam["drawDist"] = &PartsDrawParam::drawDist;
        utPartsDrawParam["drawFadeRange"] = &PartsDrawParam::drawFadeRange;
        utPartsDrawParam["shadowDrawDist"] = &PartsDrawParam::shadowDrawDist;
        utPartsDrawParam["shadowFadeRange"] = &PartsDrawParam::shadowFadeRange;
        utPartsDrawParam["motionBlur_BorderDist"] = &PartsDrawParam::motionBlur_BorderDist;
        utPartsDrawParam["isPointLightShadowSrc"] = &PartsDrawParam::isPointLightShadowSrc;
        utPartsDrawParam["isDirLightShadowSrc"] = &PartsDrawParam::isDirLightShadowSrc;
        utPartsDrawParam["isShadowDst"] = &PartsDrawParam::isShadowDst;
        utPartsDrawParam["isShadowOnly"] = &PartsDrawParam::isShadowOnly;
        utPartsDrawParam["drawByReflectCam"] = &PartsDrawParam::drawByReflectCam;
        utPartsDrawParam["drawOnlyReflectCam"] = &PartsDrawParam::drawOnlyReflectCam;
        utPartsDrawParam["IncludeLodMapLv"] = &PartsDrawParam::IncludeLodMapLv;
        utPartsDrawParam["isNoFarClipDraw"] = &PartsDrawParam::isNoFarClipDraw;
        utPartsDrawParam["lodType"] = &PartsDrawParam::lodType;
        utPartsDrawParam["shadowDrawLodOffset"] = &PartsDrawParam::shadowDrawLodOffset;
        utPartsDrawParam["isTraceCameraXZ"] = &PartsDrawParam::isTraceCameraXZ;
        utPartsDrawParam["isSkydomeDrawPhase"] = &PartsDrawParam::isSkydomeDrawPhase;
        utPartsDrawParam["DistantViewModel_BorderDist"] = &PartsDrawParam::DistantViewModel_BorderDist;
        utPartsDrawParam["DistantViewModel_PlayDist"] = &PartsDrawParam::DistantViewModel_PlayDist;
        utPartsDrawParam["LimtedActivate_BorderDist_forGrid"] = &PartsDrawParam::LimtedActivate_BorderDist_forGrid;
        utPartsDrawParam["LimtedActivate_PlayDist_forGrid"] = &PartsDrawParam::LimtedActivate_PlayDist_forGrid;
        utPartsDrawParam["zSortOffsetForNoFarClipDraw"] = &PartsDrawParam::zSortOffsetForNoFarClipDraw;
        utPartsDrawParam["shadowDrawAlphaTestDist"] = &PartsDrawParam::shadowDrawAlphaTestDist;
        utPartsDrawParam["fowardDrawEnvmapBlendType"] = &PartsDrawParam::fowardDrawEnvmapBlendType;
        utPartsDrawParam["LBDrawDistScaleParamID"] = &PartsDrawParam::LBDrawDistScaleParamID;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<PartsDrawParam>>(state, L"PartsDrawParam");
        indexer->setFieldNames({
            {"lv01_BorderDist", false},
            {"lv01_PlayDist", false},
            {"lv12_BorderDist", false},
            {"lv12_PlayDist", false},
            {"lv23_BorderDist", false},
            {"lv23_PlayDist", false},
            {"lv34_BorderDist", false},
            {"lv34_PlayDist", false},
            {"lv45_BorderDist", false},
            {"lv45_PlayDist", false},
            {"tex_lv01_BorderDist", false},
            {"tex_lv01_PlayDist", false},
            {"enableCrossFade", false},
            {"drawDist", false},
            {"drawFadeRange", false},
            {"shadowDrawDist", false},
            {"shadowFadeRange", false},
            {"motionBlur_BorderDist", false},
            {"isPointLightShadowSrc", false},
            {"isDirLightShadowSrc", false},
            {"isShadowDst", false},
            {"isShadowOnly", false},
            {"drawByReflectCam", false},
            {"drawOnlyReflectCam", false},
            {"IncludeLodMapLv", false},
            {"isNoFarClipDraw", false},
            {"lodType", false},
            {"shadowDrawLodOffset", false},
            {"isTraceCameraXZ", false},
            {"isSkydomeDrawPhase", false},
            {"DistantViewModel_BorderDist", false},
            {"DistantViewModel_PlayDist", false},
            {"LimtedActivate_BorderDist_forGrid", false},
            {"LimtedActivate_PlayDist_forGrid", false},
            {"zSortOffsetForNoFarClipDraw", false},
            {"shadowDrawAlphaTestDist", false},
            {"fowardDrawEnvmapBlendType", false},
            {"LBDrawDistScaleParamID", false},
        });
        return indexer;
    };
    paramsTable["PartsDrawParam"] = tableLoader;
}

template<> void ParamTableIndexer<PartsDrawParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,lv01_BorderDist,lv01_PlayDist,lv12_BorderDist,lv12_PlayDist,lv23_BorderDist,lv23_PlayDist,lv34_BorderDist,lv34_PlayDist,lv45_BorderDist,lv45_PlayDist,tex_lv01_BorderDist,tex_lv01_PlayDist,enableCrossFade,drawDist,drawFadeRange,shadowDrawDist,shadowFadeRange,motionBlur_BorderDist,isPointLightShadowSrc,isDirLightShadowSrc,isShadowDst,isShadowOnly,drawByReflectCam,drawOnlyReflectCam,IncludeLodMapLv,isNoFarClipDraw,lodType,shadowDrawLodOffset,isTraceCameraXZ,isSkydomeDrawPhase,DistantViewModel_BorderDist,DistantViewModel_PlayDist,LimtedActivate_BorderDist_forGrid,LimtedActivate_PlayDist_forGrid,zSortOffsetForNoFarClipDraw,shadowDrawAlphaTestDist,fowardDrawEnvmapBlendType,LBDrawDistScaleParamID\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%u,%g,%g,%g,%g,%g,%d,%d,%d,%d,%d,%d,%d,%u,%u,%d,%u,%u,%g,%g,%g,%g,%g,%g,%u,%u\n",
            this->paramId(i),
            param->lv01_BorderDist,
            param->lv01_PlayDist,
            param->lv12_BorderDist,
            param->lv12_PlayDist,
            param->lv23_BorderDist,
            param->lv23_PlayDist,
            param->lv34_BorderDist,
            param->lv34_PlayDist,
            param->lv45_BorderDist,
            param->lv45_PlayDist,
            param->tex_lv01_BorderDist,
            param->tex_lv01_PlayDist,
            param->enableCrossFade,
            param->drawDist,
            param->drawFadeRange,
            param->shadowDrawDist,
            param->shadowFadeRange,
            param->motionBlur_BorderDist,
            param->isPointLightShadowSrc,
            param->isDirLightShadowSrc,
            param->isShadowDst,
            param->isShadowOnly,
            param->drawByReflectCam,
            param->drawOnlyReflectCam,
            param->IncludeLodMapLv,
            param->isNoFarClipDraw,
            param->lodType,
            param->shadowDrawLodOffset,
            param->isTraceCameraXZ,
            param->isSkydomeDrawPhase,
            param->DistantViewModel_BorderDist,
            param->DistantViewModel_PlayDist,
            param->LimtedActivate_BorderDist_forGrid,
            param->LimtedActivate_PlayDist_forGrid,
            param->zSortOffsetForNoFarClipDraw,
            param->shadowDrawAlphaTestDist,
            param->fowardDrawEnvmapBlendType,
            param->LBDrawDistScaleParamID
        );
    }
    fclose(f);
}

}
