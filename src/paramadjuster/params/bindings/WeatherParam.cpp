#include "../luabindings.h"
#include "../defs/WeatherParam.h"

namespace paramadjuster::params {

void registerWeatherParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WeatherParam"]; usertype) return;
        auto indexerWeatherParam = state->new_usertype<ParamTableIndexer<WeatherParam>>("WeatherParamTableIndexer");
        indexerWeatherParam["count"] = sol::property(&ParamTableIndexer<WeatherParam>::count);
        indexerWeatherParam["__index"] = &ParamTableIndexer<WeatherParam>::at;
        indexerWeatherParam["id"] = &ParamTableIndexer<WeatherParam>::paramId;
        indexerWeatherParam["get"] = &ParamTableIndexer<WeatherParam>::get;
        auto utWeatherParam = state->new_usertype<WeatherParam>("WeatherParam");
        utWeatherParam["SfxId"] = &WeatherParam::SfxId;
        utWeatherParam["WindSfxId"] = &WeatherParam::WindSfxId;
        utWeatherParam["GroundHitSfxId"] = &WeatherParam::GroundHitSfxId;
        utWeatherParam["SoundId"] = &WeatherParam::SoundId;
        utWeatherParam["WetTime"] = &WeatherParam::WetTime;
        utWeatherParam["GparamId"] = &WeatherParam::GparamId;
        utWeatherParam["NextLotIngameSecondsMin"] = &WeatherParam::NextLotIngameSecondsMin;
        utWeatherParam["NextLotIngameSecondsMax"] = &WeatherParam::NextLotIngameSecondsMax;
        utWeatherParam["WetSpEffectId00"] = &WeatherParam::WetSpEffectId00;
        utWeatherParam["WetSpEffectId01"] = &WeatherParam::WetSpEffectId01;
        utWeatherParam["WetSpEffectId02"] = &WeatherParam::WetSpEffectId02;
        utWeatherParam["WetSpEffectId03"] = &WeatherParam::WetSpEffectId03;
        utWeatherParam["WetSpEffectId04"] = &WeatherParam::WetSpEffectId04;
        utWeatherParam["SfxIdInoor"] = &WeatherParam::SfxIdInoor;
        utWeatherParam["SfxIdOutdoor"] = &WeatherParam::SfxIdOutdoor;
        utWeatherParam["aiSightRate"] = &WeatherParam::aiSightRate;
        utWeatherParam["DistViewWeatherGparamOverrideWeight"] = &WeatherParam::DistViewWeatherGparamOverrideWeight;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<WeatherParam>>(gParamMgr.findTable(L"WeatherParam")); };
    paramsTable["WeatherParam"] = tableLoader;
}

}
