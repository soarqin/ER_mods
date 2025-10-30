#include "../luabindings.h"
#include "../defs/CutsceneGparamWeatherParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<CutsceneGparamWeatherParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerCutsceneGparamWeatherParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["CutsceneGparamWeatherParam"]; usertype) return;
        auto indexerCutsceneGparamWeatherParam = state->new_usertype<ParamTableIndexer<CutsceneGparamWeatherParam>>("CutsceneGparamWeatherParamTableIndexer");
        indexerCutsceneGparamWeatherParam["count"] = sol::property(&ParamTableIndexer<CutsceneGparamWeatherParam>::count);
        indexerCutsceneGparamWeatherParam["__index"] = &ParamTableIndexer<CutsceneGparamWeatherParam>::at;
        indexerCutsceneGparamWeatherParam["id"] = &ParamTableIndexer<CutsceneGparamWeatherParam>::paramId;
        indexerCutsceneGparamWeatherParam["get"] = &ParamTableIndexer<CutsceneGparamWeatherParam>::get;
        indexerCutsceneGparamWeatherParam["exportToCsv"] = &ParamTableIndexer<CutsceneGparamWeatherParam>::exportToCsv;
        indexerCutsceneGparamWeatherParam["importFromCsv"] = &ParamTableIndexer<CutsceneGparamWeatherParam>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<CutsceneGparamWeatherParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<CutsceneGparamWeatherParam>>(nullptr);
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"disableParam_Debug", false},
            {"DstWeather_Sunny", false},
            {"DstWeather_ClearSky", false},
            {"DstWeather_WeakCloudy", false},
            {"DstWeather_Cloud", false},
            {"DstWeather_Rain", false},
            {"DstWeather_HeavyRain", false},
            {"DstWeather_Storm", false},
            {"DstWeather_StormForBattle", false},
            {"DstWeather_Snow", false},
            {"DstWeather_HeavySnow", false},
            {"DstWeather_Fog", false},
            {"DstWeather_HeavyFog", false},
            {"DstWeather_SandStorm", false},
            {"DstWeather_HeavyFogRain", false},
            {"PostPlayIngameWeather", false},
            {"IndoorOutdoorType", false},
            {"TakeOverDstWeather_Sunny", false},
            {"TakeOverDstWeather_ClearSky", false},
            {"TakeOverDstWeather_WeakCloudy", false},
            {"TakeOverDstWeather_Cloud", false},
            {"TakeOverDstWeather_Rain", false},
            {"TakeOverDstWeather_HeavyRain", false},
            {"TakeOverDstWeather_Storm", false},
            {"TakeOverDstWeather_StormForBattle", false},
            {"TakeOverDstWeather_Snow", false},
            {"TakeOverDstWeather_HeavySnow", false},
            {"TakeOverDstWeather_Fog", false},
            {"TakeOverDstWeather_HeavyFog", false},
            {"TakeOverDstWeather_SandStorm", false},
            {"TakeOverDstWeather_HeavyFogRain", false},
            {"DstWeather_Snowstorm", false},
            {"DstWeather_LightningStorm", false},
            {"DstWeather_Reserved3", false},
            {"DstWeather_Reserved4", false},
            {"DstWeather_Reserved5", false},
            {"DstWeather_Reserved6", false},
            {"DstWeather_Reserved7", false},
            {"DstWeather_Reserved8", false},
            {"TakeOverDstWeather_Snowstorm", false},
            {"TakeOverDstWeather_LightningStorm", false},
            {"TakeOverDstWeather_Reserved3", false},
            {"TakeOverDstWeather_Reserved4", false},
            {"TakeOverDstWeather_Reserved5", false},
            {"TakeOverDstWeather_Reserved6", false},
            {"TakeOverDstWeather_Reserved7", false},
            {"TakeOverDstWeather_Reserved8", false},
            {"IsEnableApplyMapGdRegionIdForGparam", false},
            {"OverrideMapGdRegionId", false},
        });
        return indexer;
    };
    paramsTable["CutsceneGparamWeatherParam"] = [tableLoader]() -> auto { return tableLoader(L"CutsceneGparamWeatherParam"); };
}

template<> void ParamTableIndexer<CutsceneGparamWeatherParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,disableParam_Debug,DstWeather_Sunny,DstWeather_ClearSky,DstWeather_WeakCloudy,DstWeather_Cloud,DstWeather_Rain,DstWeather_HeavyRain,DstWeather_Storm,DstWeather_StormForBattle,DstWeather_Snow,DstWeather_HeavySnow,DstWeather_Fog,DstWeather_HeavyFog,DstWeather_SandStorm");
    fwprintf(f, L",DstWeather_HeavyFogRain,PostPlayIngameWeather,IndoorOutdoorType,TakeOverDstWeather_Sunny,TakeOverDstWeather_ClearSky,TakeOverDstWeather_WeakCloudy,TakeOverDstWeather_Cloud,TakeOverDstWeather_Rain,TakeOverDstWeather_HeavyRain,TakeOverDstWeather_Storm,TakeOverDstWeather_StormForBattle,TakeOverDstWeather_Snow,TakeOverDstWeather_HeavySnow,TakeOverDstWeather_Fog,TakeOverDstWeather_HeavyFog,TakeOverDstWeather_SandStorm");
    fwprintf(f, L",TakeOverDstWeather_HeavyFogRain,DstWeather_Snowstorm,DstWeather_LightningStorm,DstWeather_Reserved3,DstWeather_Reserved4,DstWeather_Reserved5,DstWeather_Reserved6,DstWeather_Reserved7,DstWeather_Reserved8,TakeOverDstWeather_Snowstorm,TakeOverDstWeather_LightningStorm,TakeOverDstWeather_Reserved3,TakeOverDstWeather_Reserved4,TakeOverDstWeather_Reserved5,TakeOverDstWeather_Reserved6,TakeOverDstWeather_Reserved7");
    fwprintf(f, L",TakeOverDstWeather_Reserved8,IsEnableApplyMapGdRegionIdForGparam,OverrideMapGdRegionId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d\n",
            this->paramId(i),
            param->disableParam_NT,
            param->disableParam_Debug,
            param->DstWeather_Sunny,
            param->DstWeather_ClearSky,
            param->DstWeather_WeakCloudy,
            param->DstWeather_Cloud,
            param->DstWeather_Rain,
            param->DstWeather_HeavyRain,
            param->DstWeather_Storm,
            param->DstWeather_StormForBattle,
            param->DstWeather_Snow,
            param->DstWeather_HeavySnow,
            param->DstWeather_Fog,
            param->DstWeather_HeavyFog,
            param->DstWeather_SandStorm,
            param->DstWeather_HeavyFogRain,
            param->PostPlayIngameWeather,
            param->IndoorOutdoorType,
            param->TakeOverDstWeather_Sunny,
            param->TakeOverDstWeather_ClearSky,
            param->TakeOverDstWeather_WeakCloudy,
            param->TakeOverDstWeather_Cloud,
            param->TakeOverDstWeather_Rain,
            param->TakeOverDstWeather_HeavyRain,
            param->TakeOverDstWeather_Storm,
            param->TakeOverDstWeather_StormForBattle,
            param->TakeOverDstWeather_Snow,
            param->TakeOverDstWeather_HeavySnow,
            param->TakeOverDstWeather_Fog,
            param->TakeOverDstWeather_HeavyFog,
            param->TakeOverDstWeather_SandStorm,
            param->TakeOverDstWeather_HeavyFogRain,
            param->DstWeather_Snowstorm,
            param->DstWeather_LightningStorm,
            param->DstWeather_Reserved3,
            param->DstWeather_Reserved4,
            param->DstWeather_Reserved5,
            param->DstWeather_Reserved6,
            param->DstWeather_Reserved7,
            param->DstWeather_Reserved8,
            param->TakeOverDstWeather_Snowstorm,
            param->TakeOverDstWeather_LightningStorm,
            param->TakeOverDstWeather_Reserved3,
            param->TakeOverDstWeather_Reserved4,
            param->TakeOverDstWeather_Reserved5,
            param->TakeOverDstWeather_Reserved6,
            param->TakeOverDstWeather_Reserved7,
            param->TakeOverDstWeather_Reserved8,
            param->IsEnableApplyMapGdRegionIdForGparam,
            param->OverrideMapGdRegionId
        );
    }
    fclose(f);
}

}
