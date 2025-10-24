#include "../luabindings.h"
#include "../defs/WeatherLotParam.h"

namespace paramadjuster::params {

void registerWeatherLotParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WeatherLotParam"]; usertype) return;
        auto indexerWeatherLotParam = state->new_usertype<ParamTableIndexer<WeatherLotParam>>("WeatherLotParamTableIndexer");
        indexerWeatherLotParam["count"] = sol::property(&ParamTableIndexer<WeatherLotParam>::count);
        indexerWeatherLotParam["__index"] = &ParamTableIndexer<WeatherLotParam>::at;
        indexerWeatherLotParam["id"] = &ParamTableIndexer<WeatherLotParam>::paramId;
        indexerWeatherLotParam["get"] = &ParamTableIndexer<WeatherLotParam>::get;
        auto utWeatherLotParam = state->new_usertype<WeatherLotParam>("WeatherLotParam");
        utWeatherLotParam["disableParam_NT"] = sol::property([](WeatherLotParam &param) -> uint8_t { return param.disableParam_NT; }, [](WeatherLotParam &param, uint8_t value) { param.disableParam_NT = value; });
        utWeatherLotParam["weatherType0"] = &WeatherLotParam::weatherType0;
        utWeatherLotParam["weatherType1"] = &WeatherLotParam::weatherType1;
        utWeatherLotParam["weatherType2"] = &WeatherLotParam::weatherType2;
        utWeatherLotParam["weatherType3"] = &WeatherLotParam::weatherType3;
        utWeatherLotParam["weatherType4"] = &WeatherLotParam::weatherType4;
        utWeatherLotParam["weatherType5"] = &WeatherLotParam::weatherType5;
        utWeatherLotParam["weatherType6"] = &WeatherLotParam::weatherType6;
        utWeatherLotParam["weatherType7"] = &WeatherLotParam::weatherType7;
        utWeatherLotParam["weatherType8"] = &WeatherLotParam::weatherType8;
        utWeatherLotParam["weatherType9"] = &WeatherLotParam::weatherType9;
        utWeatherLotParam["weatherType10"] = &WeatherLotParam::weatherType10;
        utWeatherLotParam["weatherType11"] = &WeatherLotParam::weatherType11;
        utWeatherLotParam["weatherType12"] = &WeatherLotParam::weatherType12;
        utWeatherLotParam["weatherType13"] = &WeatherLotParam::weatherType13;
        utWeatherLotParam["weatherType14"] = &WeatherLotParam::weatherType14;
        utWeatherLotParam["weatherType15"] = &WeatherLotParam::weatherType15;
        utWeatherLotParam["lotteryWeight0"] = &WeatherLotParam::lotteryWeight0;
        utWeatherLotParam["lotteryWeight1"] = &WeatherLotParam::lotteryWeight1;
        utWeatherLotParam["lotteryWeight2"] = &WeatherLotParam::lotteryWeight2;
        utWeatherLotParam["lotteryWeight3"] = &WeatherLotParam::lotteryWeight3;
        utWeatherLotParam["lotteryWeight4"] = &WeatherLotParam::lotteryWeight4;
        utWeatherLotParam["lotteryWeight5"] = &WeatherLotParam::lotteryWeight5;
        utWeatherLotParam["lotteryWeight6"] = &WeatherLotParam::lotteryWeight6;
        utWeatherLotParam["lotteryWeight7"] = &WeatherLotParam::lotteryWeight7;
        utWeatherLotParam["lotteryWeight8"] = &WeatherLotParam::lotteryWeight8;
        utWeatherLotParam["lotteryWeight9"] = &WeatherLotParam::lotteryWeight9;
        utWeatherLotParam["lotteryWeight10"] = &WeatherLotParam::lotteryWeight10;
        utWeatherLotParam["lotteryWeight11"] = &WeatherLotParam::lotteryWeight11;
        utWeatherLotParam["lotteryWeight12"] = &WeatherLotParam::lotteryWeight12;
        utWeatherLotParam["lotteryWeight13"] = &WeatherLotParam::lotteryWeight13;
        utWeatherLotParam["lotteryWeight14"] = &WeatherLotParam::lotteryWeight14;
        utWeatherLotParam["lotteryWeight15"] = &WeatherLotParam::lotteryWeight15;
        utWeatherLotParam["timezoneLimit"] = &WeatherLotParam::timezoneLimit;
        utWeatherLotParam["timezoneStartHour"] = &WeatherLotParam::timezoneStartHour;
        utWeatherLotParam["timezoneStartMinute"] = &WeatherLotParam::timezoneStartMinute;
        utWeatherLotParam["timezoneEndHour"] = &WeatherLotParam::timezoneEndHour;
        utWeatherLotParam["timezoneEndMinute"] = &WeatherLotParam::timezoneEndMinute;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<WeatherLotParam>>(gParamMgr.findTable(L"WeatherLotParam")); };
    paramsTable["WeatherLotParam"] = tableLoader;
}

}
