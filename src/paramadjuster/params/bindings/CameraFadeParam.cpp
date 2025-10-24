#include "../luabindings.h"
#include "../defs/CameraFadeParam.h"

namespace paramadjuster::params {

void registerCameraFadeParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["CameraFadeParam"]; usertype) return;
        auto indexerCameraFadeParam = state->new_usertype<ParamTableIndexer<CameraFadeParam>>("CameraFadeParamTableIndexer");
        indexerCameraFadeParam["count"] = sol::property(&ParamTableIndexer<CameraFadeParam>::count);
        indexerCameraFadeParam["__index"] = &ParamTableIndexer<CameraFadeParam>::at;
        indexerCameraFadeParam["id"] = &ParamTableIndexer<CameraFadeParam>::paramId;
        indexerCameraFadeParam["get"] = &ParamTableIndexer<CameraFadeParam>::get;
        auto utCameraFadeParam = state->new_usertype<CameraFadeParam>("CameraFadeParam");
        utCameraFadeParam["NearMinDist"] = &CameraFadeParam::NearMinDist;
        utCameraFadeParam["NearMaxDist"] = &CameraFadeParam::NearMaxDist;
        utCameraFadeParam["FarMinDist"] = &CameraFadeParam::FarMinDist;
        utCameraFadeParam["FarMaxDist"] = &CameraFadeParam::FarMaxDist;
        utCameraFadeParam["MiddleAlpha"] = &CameraFadeParam::MiddleAlpha;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<CameraFadeParam>>(gParamMgr.findTable(L"CameraFadeParam")); };
    paramsTable["CameraFadeParam"] = tableLoader;
}

}
