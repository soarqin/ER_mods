#include "../luabindings.h"
#include "../defs/PartsDrawParam.h"

namespace paramadjuster::params {

void registerPartsDrawParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["PartsDrawParam"]; usertype) return;
        auto indexerPartsDrawParam = state->new_usertype<ParamTableIndexer<PartsDrawParam>>("PartsDrawParamTableIndexer");
        indexerPartsDrawParam["count"] = sol::property(&ParamTableIndexer<PartsDrawParam>::count);
        indexerPartsDrawParam["__index"] = &ParamTableIndexer<PartsDrawParam>::at;
        indexerPartsDrawParam["id"] = &ParamTableIndexer<PartsDrawParam>::paramId;
        indexerPartsDrawParam["get"] = &ParamTableIndexer<PartsDrawParam>::get;
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
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<PartsDrawParam>>(gParamMgr.findTable(L"PartsDrawParam")); };
    paramsTable["PartsDrawParam"] = tableLoader;
}

}
