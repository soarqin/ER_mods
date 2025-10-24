#include "../luabindings.h"
#include "../defs/MapDefaultInfoParam.h"

namespace paramadjuster::params {

void registerMapDefaultInfoParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MapDefaultInfoParam"]; usertype) return;
        auto indexerMapDefaultInfoParam = state->new_usertype<ParamTableIndexer<MapDefaultInfoParam>>("MapDefaultInfoParamTableIndexer");
        indexerMapDefaultInfoParam["count"] = sol::property(&ParamTableIndexer<MapDefaultInfoParam>::count);
        indexerMapDefaultInfoParam["__index"] = &ParamTableIndexer<MapDefaultInfoParam>::at;
        indexerMapDefaultInfoParam["id"] = &ParamTableIndexer<MapDefaultInfoParam>::paramId;
        indexerMapDefaultInfoParam["get"] = &ParamTableIndexer<MapDefaultInfoParam>::get;
        auto utMapDefaultInfoParam = state->new_usertype<MapDefaultInfoParam>("MapDefaultInfoParam");
        utMapDefaultInfoParam["disableParam_NT"] = sol::property([](MapDefaultInfoParam &param) -> uint8_t { return param.disableParam_NT; }, [](MapDefaultInfoParam &param, uint8_t value) { param.disableParam_NT = value; });
        utMapDefaultInfoParam["EnableFastTravelEventFlagId"] = &MapDefaultInfoParam::EnableFastTravelEventFlagId;
        utMapDefaultInfoParam["WeatherLotTimeOffsetIngameSeconds"] = &MapDefaultInfoParam::WeatherLotTimeOffsetIngameSeconds;
        utMapDefaultInfoParam["WeatherCreateAssetLimitId"] = &MapDefaultInfoParam::WeatherCreateAssetLimitId;
        utMapDefaultInfoParam["MapAiSightType"] = &MapDefaultInfoParam::MapAiSightType;
        utMapDefaultInfoParam["SoundIndoorType"] = &MapDefaultInfoParam::SoundIndoorType;
        utMapDefaultInfoParam["ReverbDefaultType"] = &MapDefaultInfoParam::ReverbDefaultType;
        utMapDefaultInfoParam["BgmPlaceInfo"] = &MapDefaultInfoParam::BgmPlaceInfo;
        utMapDefaultInfoParam["EnvPlaceInfo"] = &MapDefaultInfoParam::EnvPlaceInfo;
        utMapDefaultInfoParam["MapAdditionalSoundBankId"] = &MapDefaultInfoParam::MapAdditionalSoundBankId;
        utMapDefaultInfoParam["MapHeightForSound"] = &MapDefaultInfoParam::MapHeightForSound;
        utMapDefaultInfoParam["IsEnableBlendTimezoneEnvmap"] = &MapDefaultInfoParam::IsEnableBlendTimezoneEnvmap;
        utMapDefaultInfoParam["OverrideGIResolution_XSS"] = &MapDefaultInfoParam::OverrideGIResolution_XSS;
        utMapDefaultInfoParam["MapLoHiChangeBorderDist_XZ"] = &MapDefaultInfoParam::MapLoHiChangeBorderDist_XZ;
        utMapDefaultInfoParam["MapLoHiChangeBorderDist_Y"] = &MapDefaultInfoParam::MapLoHiChangeBorderDist_Y;
        utMapDefaultInfoParam["MapLoHiChangePlayDist"] = &MapDefaultInfoParam::MapLoHiChangePlayDist;
        utMapDefaultInfoParam["MapAutoDrawGroupBackFacePixelNum"] = &MapDefaultInfoParam::MapAutoDrawGroupBackFacePixelNum;
        utMapDefaultInfoParam["PlayerLigntScale"] = &MapDefaultInfoParam::PlayerLigntScale;
        utMapDefaultInfoParam["IsEnableTimezonnePlayerLigntScale"] = &MapDefaultInfoParam::IsEnableTimezonnePlayerLigntScale;
        utMapDefaultInfoParam["isDisableAutoCliffWind"] = &MapDefaultInfoParam::isDisableAutoCliffWind;
        utMapDefaultInfoParam["OpenChrActivateThreshold"] = &MapDefaultInfoParam::OpenChrActivateThreshold;
        utMapDefaultInfoParam["MapMimicryEstablishmentParamId"] = &MapDefaultInfoParam::MapMimicryEstablishmentParamId;
        utMapDefaultInfoParam["OverrideGIResolution_XSX"] = &MapDefaultInfoParam::OverrideGIResolution_XSX;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<MapDefaultInfoParam>>(gParamMgr.findTable(L"MapDefaultInfoParam")); };
    paramsTable["MapDefaultInfoParam"] = tableLoader;
}

}
