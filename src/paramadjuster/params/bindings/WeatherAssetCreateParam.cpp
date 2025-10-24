#include "../luabindings.h"
#include "../defs/WeatherAssetCreateParam.h"

namespace paramadjuster::params {

void registerWeatherAssetCreateParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WeatherAssetCreateParam"]; usertype) return;
        auto indexerWeatherAssetCreateParam = state->new_usertype<ParamTableIndexer<WeatherAssetCreateParam>>("WeatherAssetCreateParamTableIndexer");
        indexerWeatherAssetCreateParam["count"] = sol::property(&ParamTableIndexer<WeatherAssetCreateParam>::count);
        indexerWeatherAssetCreateParam["__index"] = &ParamTableIndexer<WeatherAssetCreateParam>::at;
        indexerWeatherAssetCreateParam["id"] = &ParamTableIndexer<WeatherAssetCreateParam>::paramId;
        indexerWeatherAssetCreateParam["get"] = &ParamTableIndexer<WeatherAssetCreateParam>::get;
        auto utWeatherAssetCreateParam = state->new_usertype<WeatherAssetCreateParam>("WeatherAssetCreateParam");
        utWeatherAssetCreateParam["AssetId"] = &WeatherAssetCreateParam::AssetId;
        utWeatherAssetCreateParam["SlotNo"] = &WeatherAssetCreateParam::SlotNo;
        utWeatherAssetCreateParam["CreateConditionType"] = &WeatherAssetCreateParam::CreateConditionType;
        utWeatherAssetCreateParam["TransitionSrcWeather"] = &WeatherAssetCreateParam::TransitionSrcWeather;
        utWeatherAssetCreateParam["TransitionDstWeather"] = &WeatherAssetCreateParam::TransitionDstWeather;
        utWeatherAssetCreateParam["ElapsedTimeCheckweather"] = &WeatherAssetCreateParam::ElapsedTimeCheckweather;
        utWeatherAssetCreateParam["ElapsedTime"] = &WeatherAssetCreateParam::ElapsedTime;
        utWeatherAssetCreateParam["CreateDelayTime"] = &WeatherAssetCreateParam::CreateDelayTime;
        utWeatherAssetCreateParam["CreateProbability"] = &WeatherAssetCreateParam::CreateProbability;
        utWeatherAssetCreateParam["LifeTime"] = &WeatherAssetCreateParam::LifeTime;
        utWeatherAssetCreateParam["FadeTime"] = &WeatherAssetCreateParam::FadeTime;
        utWeatherAssetCreateParam["EnableCreateTimeMin"] = &WeatherAssetCreateParam::EnableCreateTimeMin;
        utWeatherAssetCreateParam["EnableCreateTimeMax"] = &WeatherAssetCreateParam::EnableCreateTimeMax;
        utWeatherAssetCreateParam["CreatePoint0"] = &WeatherAssetCreateParam::CreatePoint0;
        utWeatherAssetCreateParam["CreatePoint1"] = &WeatherAssetCreateParam::CreatePoint1;
        utWeatherAssetCreateParam["CreatePoint2"] = &WeatherAssetCreateParam::CreatePoint2;
        utWeatherAssetCreateParam["CreatePoint3"] = &WeatherAssetCreateParam::CreatePoint3;
        utWeatherAssetCreateParam["CreateAssetLimitId0"] = &WeatherAssetCreateParam::CreateAssetLimitId0;
        utWeatherAssetCreateParam["CreateAssetLimitId1"] = &WeatherAssetCreateParam::CreateAssetLimitId1;
        utWeatherAssetCreateParam["CreateAssetLimitId2"] = &WeatherAssetCreateParam::CreateAssetLimitId2;
        utWeatherAssetCreateParam["CreateAssetLimitId3"] = &WeatherAssetCreateParam::CreateAssetLimitId3;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<WeatherAssetCreateParam>>(gParamMgr.findTable(L"WeatherAssetCreateParam")); };
    paramsTable["WeatherAssetCreateParam"] = tableLoader;
}

}
