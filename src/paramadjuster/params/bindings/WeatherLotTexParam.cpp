#include "../luabindings.h"
#include "../defs/WeatherLotTexParam.h"

namespace paramadjuster::params {

void registerWeatherLotTexParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WeatherLotTexParam"]; usertype) return;
        auto indexerWeatherLotTexParam = state->new_usertype<ParamTableIndexer<WeatherLotTexParam>>("WeatherLotTexParamTableIndexer");
        indexerWeatherLotTexParam["count"] = sol::property(&ParamTableIndexer<WeatherLotTexParam>::count);
        indexerWeatherLotTexParam["__index"] = &ParamTableIndexer<WeatherLotTexParam>::at;
        indexerWeatherLotTexParam["id"] = &ParamTableIndexer<WeatherLotTexParam>::paramId;
        indexerWeatherLotTexParam["get"] = &ParamTableIndexer<WeatherLotTexParam>::get;
        auto utWeatherLotTexParam = state->new_usertype<WeatherLotTexParam>("WeatherLotTexParam");
        utWeatherLotTexParam["disableParam_NT"] = sol::property([](WeatherLotTexParam &param) -> uint8_t { return param.disableParam_NT; }, [](WeatherLotTexParam &param, uint8_t value) { param.disableParam_NT = value; });
        utWeatherLotTexParam["srcR"] = &WeatherLotTexParam::srcR;
        utWeatherLotTexParam["srcG"] = &WeatherLotTexParam::srcG;
        utWeatherLotTexParam["srcB"] = &WeatherLotTexParam::srcB;
        utWeatherLotTexParam["weatherLogId"] = &WeatherLotTexParam::weatherLogId;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<WeatherLotTexParam>>(gParamMgr.findTable(L"WeatherLotTexParam")); };
    paramsTable["WeatherLotTexParam"] = tableLoader;
}

}
