#include "../luabindings.h"
#include "../defs/MapDefaultInfoParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<MapDefaultInfoParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerMapDefaultInfoParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MapDefaultInfoParam"]; usertype) return;
        auto indexerMapDefaultInfoParam = state->new_usertype<ParamTableIndexer<MapDefaultInfoParam>>("MapDefaultInfoParamTableIndexer");
        indexerMapDefaultInfoParam["count"] = sol::property(&ParamTableIndexer<MapDefaultInfoParam>::count);
        indexerMapDefaultInfoParam["__index"] = &ParamTableIndexer<MapDefaultInfoParam>::at;
        indexerMapDefaultInfoParam["id"] = &ParamTableIndexer<MapDefaultInfoParam>::paramId;
        indexerMapDefaultInfoParam["get"] = &ParamTableIndexer<MapDefaultInfoParam>::get;
        indexerMapDefaultInfoParam["exportToCsv"] = &ParamTableIndexer<MapDefaultInfoParam>::exportToCsv;
        indexerMapDefaultInfoParam["importFromCsv"] = &ParamTableIndexer<MapDefaultInfoParam>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<MapDefaultInfoParam>>(state, L"MapDefaultInfoParam");
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"EnableFastTravelEventFlagId", false},
            {"WeatherLotTimeOffsetIngameSeconds", false},
            {"WeatherCreateAssetLimitId", false},
            {"MapAiSightType", false},
            {"SoundIndoorType", false},
            {"ReverbDefaultType", false},
            {"BgmPlaceInfo", false},
            {"EnvPlaceInfo", false},
            {"MapAdditionalSoundBankId", false},
            {"MapHeightForSound", false},
            {"IsEnableBlendTimezoneEnvmap", false},
            {"OverrideGIResolution_XSS", false},
            {"MapLoHiChangeBorderDist_XZ", false},
            {"MapLoHiChangeBorderDist_Y", false},
            {"MapLoHiChangePlayDist", false},
            {"MapAutoDrawGroupBackFacePixelNum", false},
            {"PlayerLigntScale", false},
            {"IsEnableTimezonnePlayerLigntScale", false},
            {"isDisableAutoCliffWind", false},
            {"OpenChrActivateThreshold", false},
            {"MapMimicryEstablishmentParamId", false},
            {"OverrideGIResolution_XSX", false},
        });
        return indexer;
    };
    paramsTable["MapDefaultInfoParam"] = tableLoader;
}

template<> void ParamTableIndexer<MapDefaultInfoParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,EnableFastTravelEventFlagId,WeatherLotTimeOffsetIngameSeconds,WeatherCreateAssetLimitId,MapAiSightType,SoundIndoorType,ReverbDefaultType,BgmPlaceInfo,EnvPlaceInfo,MapAdditionalSoundBankId,MapHeightForSound,IsEnableBlendTimezoneEnvmap,OverrideGIResolution_XSS,MapLoHiChangeBorderDist_XZ,MapLoHiChangeBorderDist_Y,MapLoHiChangePlayDist,MapAutoDrawGroupBackFacePixelNum,PlayerLigntScale,IsEnableTimezonnePlayerLigntScale,isDisableAutoCliffWind,OpenChrActivateThreshold,MapMimicryEstablishmentParamId,OverrideGIResolution_XSX\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%d,%d,%u,%u,%d,%d,%d,%d,%d,%u,%d,%g,%g,%g,%u,%g,%u,%u,%d,%d,%d\n",
            this->paramId(i),
            param->disableParam_NT,
            param->EnableFastTravelEventFlagId,
            param->WeatherLotTimeOffsetIngameSeconds,
            param->WeatherCreateAssetLimitId,
            param->MapAiSightType,
            param->SoundIndoorType,
            param->ReverbDefaultType,
            param->BgmPlaceInfo,
            param->EnvPlaceInfo,
            param->MapAdditionalSoundBankId,
            param->MapHeightForSound,
            param->IsEnableBlendTimezoneEnvmap,
            param->OverrideGIResolution_XSS,
            param->MapLoHiChangeBorderDist_XZ,
            param->MapLoHiChangeBorderDist_Y,
            param->MapLoHiChangePlayDist,
            param->MapAutoDrawGroupBackFacePixelNum,
            param->PlayerLigntScale,
            param->IsEnableTimezonnePlayerLigntScale,
            param->isDisableAutoCliffWind,
            param->OpenChrActivateThreshold,
            param->MapMimicryEstablishmentParamId,
            param->OverrideGIResolution_XSX
        );
    }
    fclose(f);
}

}
