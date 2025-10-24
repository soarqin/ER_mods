#include "../luabindings.h"
#include "../defs/WeatherLotTexParam_m61.h"

namespace paramadjuster::params {

void registerWeatherLotTexParam_m61(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WeatherLotTexParam_m61"]; usertype) return;
        auto indexerWeatherLotTexParam_m61 = state->new_usertype<ParamTableIndexer<WeatherLotTexParam_m61>>("WeatherLotTexParam_m61TableIndexer");
        indexerWeatherLotTexParam_m61["count"] = sol::property(&ParamTableIndexer<WeatherLotTexParam_m61>::count);
        indexerWeatherLotTexParam_m61["__index"] = &ParamTableIndexer<WeatherLotTexParam_m61>::at;
        indexerWeatherLotTexParam_m61["id"] = &ParamTableIndexer<WeatherLotTexParam_m61>::paramId;
        indexerWeatherLotTexParam_m61["get"] = &ParamTableIndexer<WeatherLotTexParam_m61>::get;
        auto utWeatherLotTexParam_m61 = state->new_usertype<WeatherLotTexParam_m61>("WeatherLotTexParam_m61");
        utWeatherLotTexParam_m61["disableParam_NT"] = sol::property([](WeatherLotTexParam_m61 &param) -> uint8_t { return param.disableParam_NT; }, [](WeatherLotTexParam_m61 &param, uint8_t value) { param.disableParam_NT = value; });
        utWeatherLotTexParam_m61["srcR"] = &WeatherLotTexParam_m61::srcR;
        utWeatherLotTexParam_m61["srcG"] = &WeatherLotTexParam_m61::srcG;
        utWeatherLotTexParam_m61["srcB"] = &WeatherLotTexParam_m61::srcB;
        utWeatherLotTexParam_m61["weatherLogId"] = &WeatherLotTexParam_m61::weatherLogId;
        utWeatherLotTexParam_m61["unknown_0xc"] = &WeatherLotTexParam_m61::unknown_0xc;
        utWeatherLotTexParam_m61["unknown_0x10"] = &WeatherLotTexParam_m61::unknown_0x10;
        utWeatherLotTexParam_m61["unknown_0x14"] = &WeatherLotTexParam_m61::unknown_0x14;
        utWeatherLotTexParam_m61["unknown_0x18"] = &WeatherLotTexParam_m61::unknown_0x18;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<WeatherLotTexParam_m61>>(gParamMgr.findTable(L"WeatherLotTexParam_m61")); };
    paramsTable["WeatherLotTexParam_m61"] = tableLoader;
}

}
