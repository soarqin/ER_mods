#include "../luabindings.h"
#include "../defs/CutsceneGparamWeatherParam.h"

namespace paramadjuster::params {

void registerCutsceneGparamWeatherParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["CutsceneGparamWeatherParam"]; usertype) return;
        auto indexerCutsceneGparamWeatherParam = state->new_usertype<ParamTableIndexer<CutsceneGparamWeatherParam>>("CutsceneGparamWeatherParamTableIndexer");
        indexerCutsceneGparamWeatherParam["count"] = sol::property(&ParamTableIndexer<CutsceneGparamWeatherParam>::count);
        indexerCutsceneGparamWeatherParam["__index"] = &ParamTableIndexer<CutsceneGparamWeatherParam>::at;
        indexerCutsceneGparamWeatherParam["id"] = &ParamTableIndexer<CutsceneGparamWeatherParam>::paramId;
        indexerCutsceneGparamWeatherParam["get"] = &ParamTableIndexer<CutsceneGparamWeatherParam>::get;
        auto utCutsceneGparamWeatherParam = state->new_usertype<CutsceneGparamWeatherParam>("CutsceneGparamWeatherParam");
        utCutsceneGparamWeatherParam["disableParam_NT"] = sol::property([](CutsceneGparamWeatherParam &param) -> uint8_t { return param.disableParam_NT; }, [](CutsceneGparamWeatherParam &param, uint8_t value) { param.disableParam_NT = value; });
        utCutsceneGparamWeatherParam["disableParam_Debug"] = sol::property([](CutsceneGparamWeatherParam &param) -> uint8_t { return param.disableParam_Debug; }, [](CutsceneGparamWeatherParam &param, uint8_t value) { param.disableParam_Debug = value; });
        utCutsceneGparamWeatherParam["DstWeather_Sunny"] = &CutsceneGparamWeatherParam::DstWeather_Sunny;
        utCutsceneGparamWeatherParam["DstWeather_ClearSky"] = &CutsceneGparamWeatherParam::DstWeather_ClearSky;
        utCutsceneGparamWeatherParam["DstWeather_WeakCloudy"] = &CutsceneGparamWeatherParam::DstWeather_WeakCloudy;
        utCutsceneGparamWeatherParam["DstWeather_Cloud"] = &CutsceneGparamWeatherParam::DstWeather_Cloud;
        utCutsceneGparamWeatherParam["DstWeather_Rain"] = &CutsceneGparamWeatherParam::DstWeather_Rain;
        utCutsceneGparamWeatherParam["DstWeather_HeavyRain"] = &CutsceneGparamWeatherParam::DstWeather_HeavyRain;
        utCutsceneGparamWeatherParam["DstWeather_Storm"] = &CutsceneGparamWeatherParam::DstWeather_Storm;
        utCutsceneGparamWeatherParam["DstWeather_StormForBattle"] = &CutsceneGparamWeatherParam::DstWeather_StormForBattle;
        utCutsceneGparamWeatherParam["DstWeather_Snow"] = &CutsceneGparamWeatherParam::DstWeather_Snow;
        utCutsceneGparamWeatherParam["DstWeather_HeavySnow"] = &CutsceneGparamWeatherParam::DstWeather_HeavySnow;
        utCutsceneGparamWeatherParam["DstWeather_Fog"] = &CutsceneGparamWeatherParam::DstWeather_Fog;
        utCutsceneGparamWeatherParam["DstWeather_HeavyFog"] = &CutsceneGparamWeatherParam::DstWeather_HeavyFog;
        utCutsceneGparamWeatherParam["DstWeather_SandStorm"] = &CutsceneGparamWeatherParam::DstWeather_SandStorm;
        utCutsceneGparamWeatherParam["DstWeather_HeavyFogRain"] = &CutsceneGparamWeatherParam::DstWeather_HeavyFogRain;
        utCutsceneGparamWeatherParam["PostPlayIngameWeather"] = &CutsceneGparamWeatherParam::PostPlayIngameWeather;
        utCutsceneGparamWeatherParam["IndoorOutdoorType"] = &CutsceneGparamWeatherParam::IndoorOutdoorType;
        utCutsceneGparamWeatherParam["TakeOverDstWeather_Sunny"] = &CutsceneGparamWeatherParam::TakeOverDstWeather_Sunny;
        utCutsceneGparamWeatherParam["TakeOverDstWeather_ClearSky"] = &CutsceneGparamWeatherParam::TakeOverDstWeather_ClearSky;
        utCutsceneGparamWeatherParam["TakeOverDstWeather_WeakCloudy"] = &CutsceneGparamWeatherParam::TakeOverDstWeather_WeakCloudy;
        utCutsceneGparamWeatherParam["TakeOverDstWeather_Cloud"] = &CutsceneGparamWeatherParam::TakeOverDstWeather_Cloud;
        utCutsceneGparamWeatherParam["TakeOverDstWeather_Rain"] = &CutsceneGparamWeatherParam::TakeOverDstWeather_Rain;
        utCutsceneGparamWeatherParam["TakeOverDstWeather_HeavyRain"] = &CutsceneGparamWeatherParam::TakeOverDstWeather_HeavyRain;
        utCutsceneGparamWeatherParam["TakeOverDstWeather_Storm"] = &CutsceneGparamWeatherParam::TakeOverDstWeather_Storm;
        utCutsceneGparamWeatherParam["TakeOverDstWeather_StormForBattle"] = &CutsceneGparamWeatherParam::TakeOverDstWeather_StormForBattle;
        utCutsceneGparamWeatherParam["TakeOverDstWeather_Snow"] = &CutsceneGparamWeatherParam::TakeOverDstWeather_Snow;
        utCutsceneGparamWeatherParam["TakeOverDstWeather_HeavySnow"] = &CutsceneGparamWeatherParam::TakeOverDstWeather_HeavySnow;
        utCutsceneGparamWeatherParam["TakeOverDstWeather_Fog"] = &CutsceneGparamWeatherParam::TakeOverDstWeather_Fog;
        utCutsceneGparamWeatherParam["TakeOverDstWeather_HeavyFog"] = &CutsceneGparamWeatherParam::TakeOverDstWeather_HeavyFog;
        utCutsceneGparamWeatherParam["TakeOverDstWeather_SandStorm"] = &CutsceneGparamWeatherParam::TakeOverDstWeather_SandStorm;
        utCutsceneGparamWeatherParam["TakeOverDstWeather_HeavyFogRain"] = &CutsceneGparamWeatherParam::TakeOverDstWeather_HeavyFogRain;
        utCutsceneGparamWeatherParam["DstWeather_Snowstorm"] = &CutsceneGparamWeatherParam::DstWeather_Snowstorm;
        utCutsceneGparamWeatherParam["DstWeather_LightningStorm"] = &CutsceneGparamWeatherParam::DstWeather_LightningStorm;
        utCutsceneGparamWeatherParam["DstWeather_Reserved3"] = &CutsceneGparamWeatherParam::DstWeather_Reserved3;
        utCutsceneGparamWeatherParam["DstWeather_Reserved4"] = &CutsceneGparamWeatherParam::DstWeather_Reserved4;
        utCutsceneGparamWeatherParam["DstWeather_Reserved5"] = &CutsceneGparamWeatherParam::DstWeather_Reserved5;
        utCutsceneGparamWeatherParam["DstWeather_Reserved6"] = &CutsceneGparamWeatherParam::DstWeather_Reserved6;
        utCutsceneGparamWeatherParam["DstWeather_Reserved7"] = &CutsceneGparamWeatherParam::DstWeather_Reserved7;
        utCutsceneGparamWeatherParam["DstWeather_Reserved8"] = &CutsceneGparamWeatherParam::DstWeather_Reserved8;
        utCutsceneGparamWeatherParam["TakeOverDstWeather_Snowstorm"] = &CutsceneGparamWeatherParam::TakeOverDstWeather_Snowstorm;
        utCutsceneGparamWeatherParam["TakeOverDstWeather_LightningStorm"] = &CutsceneGparamWeatherParam::TakeOverDstWeather_LightningStorm;
        utCutsceneGparamWeatherParam["TakeOverDstWeather_Reserved3"] = &CutsceneGparamWeatherParam::TakeOverDstWeather_Reserved3;
        utCutsceneGparamWeatherParam["TakeOverDstWeather_Reserved4"] = &CutsceneGparamWeatherParam::TakeOverDstWeather_Reserved4;
        utCutsceneGparamWeatherParam["TakeOverDstWeather_Reserved5"] = &CutsceneGparamWeatherParam::TakeOverDstWeather_Reserved5;
        utCutsceneGparamWeatherParam["TakeOverDstWeather_Reserved6"] = &CutsceneGparamWeatherParam::TakeOverDstWeather_Reserved6;
        utCutsceneGparamWeatherParam["TakeOverDstWeather_Reserved7"] = &CutsceneGparamWeatherParam::TakeOverDstWeather_Reserved7;
        utCutsceneGparamWeatherParam["TakeOverDstWeather_Reserved8"] = &CutsceneGparamWeatherParam::TakeOverDstWeather_Reserved8;
        utCutsceneGparamWeatherParam["IsEnableApplyMapGdRegionIdForGparam"] = &CutsceneGparamWeatherParam::IsEnableApplyMapGdRegionIdForGparam;
        utCutsceneGparamWeatherParam["OverrideMapGdRegionId"] = &CutsceneGparamWeatherParam::OverrideMapGdRegionId;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<CutsceneGparamWeatherParam>>(gParamMgr.findTable(L"CutsceneGparamWeatherParam")); };
    paramsTable["CutsceneGparamWeatherParam"] = tableLoader;
}

}
