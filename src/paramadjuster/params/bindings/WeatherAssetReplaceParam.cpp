#include "../luabindings.h"
#include "../defs/WeatherAssetReplaceParam.h"

namespace paramadjuster::params {

void registerWeatherAssetReplaceParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WeatherAssetReplaceParam"]; usertype) return;
        auto indexerWeatherAssetReplaceParam = state->new_usertype<ParamTableIndexer<WeatherAssetReplaceParam>>("WeatherAssetReplaceParamTableIndexer");
        indexerWeatherAssetReplaceParam["count"] = sol::property(&ParamTableIndexer<WeatherAssetReplaceParam>::count);
        indexerWeatherAssetReplaceParam["__index"] = &ParamTableIndexer<WeatherAssetReplaceParam>::at;
        indexerWeatherAssetReplaceParam["id"] = &ParamTableIndexer<WeatherAssetReplaceParam>::paramId;
        indexerWeatherAssetReplaceParam["get"] = &ParamTableIndexer<WeatherAssetReplaceParam>::get;
        auto utWeatherAssetReplaceParam = state->new_usertype<WeatherAssetReplaceParam>("WeatherAssetReplaceParam");
        utWeatherAssetReplaceParam["mapId"] = &WeatherAssetReplaceParam::mapId;
        utWeatherAssetReplaceParam["TransitionSrcWeather"] = &WeatherAssetReplaceParam::TransitionSrcWeather;
        utWeatherAssetReplaceParam["isFireAsh"] = &WeatherAssetReplaceParam::isFireAsh;
        utWeatherAssetReplaceParam["reserved2"] = &WeatherAssetReplaceParam::reserved2;
        utWeatherAssetReplaceParam["AssetId0"] = &WeatherAssetReplaceParam::AssetId0;
        utWeatherAssetReplaceParam["AssetId1"] = &WeatherAssetReplaceParam::AssetId1;
        utWeatherAssetReplaceParam["AssetId2"] = &WeatherAssetReplaceParam::AssetId2;
        utWeatherAssetReplaceParam["AssetId3"] = &WeatherAssetReplaceParam::AssetId3;
        utWeatherAssetReplaceParam["AssetId4"] = &WeatherAssetReplaceParam::AssetId4;
        utWeatherAssetReplaceParam["AssetId5"] = &WeatherAssetReplaceParam::AssetId5;
        utWeatherAssetReplaceParam["AssetId6"] = &WeatherAssetReplaceParam::AssetId6;
        utWeatherAssetReplaceParam["AssetId7"] = &WeatherAssetReplaceParam::AssetId7;
        utWeatherAssetReplaceParam["CreateAssetLimitId0"] = &WeatherAssetReplaceParam::CreateAssetLimitId0;
        utWeatherAssetReplaceParam["CreateAssetLimitId1"] = &WeatherAssetReplaceParam::CreateAssetLimitId1;
        utWeatherAssetReplaceParam["CreateAssetLimitId2"] = &WeatherAssetReplaceParam::CreateAssetLimitId2;
        utWeatherAssetReplaceParam["CreateAssetLimitId3"] = &WeatherAssetReplaceParam::CreateAssetLimitId3;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<WeatherAssetReplaceParam>>(gParamMgr.findTable(L"WeatherAssetReplaceParam")); };
    paramsTable["WeatherAssetReplaceParam"] = tableLoader;
}

}
