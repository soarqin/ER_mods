#include "../luabindings.h"
#include "../defs/ChrActivateConditionParam.h"

namespace paramadjuster::params {

void registerChrActivateConditionParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ChrActivateConditionParam"]; usertype) return;
        auto indexerChrActivateConditionParam = state->new_usertype<ParamTableIndexer<ChrActivateConditionParam>>("ChrActivateConditionParamTableIndexer");
        indexerChrActivateConditionParam["count"] = sol::property(&ParamTableIndexer<ChrActivateConditionParam>::count);
        indexerChrActivateConditionParam["__index"] = &ParamTableIndexer<ChrActivateConditionParam>::at;
        indexerChrActivateConditionParam["id"] = &ParamTableIndexer<ChrActivateConditionParam>::paramId;
        indexerChrActivateConditionParam["get"] = &ParamTableIndexer<ChrActivateConditionParam>::get;
        auto utChrActivateConditionParam = state->new_usertype<ChrActivateConditionParam>("ChrActivateConditionParam");
        utChrActivateConditionParam["weatherSunny"] = sol::property([](ChrActivateConditionParam &param) -> uint8_t { return param.weatherSunny; }, [](ChrActivateConditionParam &param, uint8_t value) { param.weatherSunny = value; });
        utChrActivateConditionParam["weatherClearSky"] = sol::property([](ChrActivateConditionParam &param) -> uint8_t { return param.weatherClearSky; }, [](ChrActivateConditionParam &param, uint8_t value) { param.weatherClearSky = value; });
        utChrActivateConditionParam["weatherWeakCloudy"] = sol::property([](ChrActivateConditionParam &param) -> uint8_t { return param.weatherWeakCloudy; }, [](ChrActivateConditionParam &param, uint8_t value) { param.weatherWeakCloudy = value; });
        utChrActivateConditionParam["weatherCloudy"] = sol::property([](ChrActivateConditionParam &param) -> uint8_t { return param.weatherCloudy; }, [](ChrActivateConditionParam &param, uint8_t value) { param.weatherCloudy = value; });
        utChrActivateConditionParam["weatherRain"] = sol::property([](ChrActivateConditionParam &param) -> uint8_t { return param.weatherRain; }, [](ChrActivateConditionParam &param, uint8_t value) { param.weatherRain = value; });
        utChrActivateConditionParam["weatherHeavyRain"] = sol::property([](ChrActivateConditionParam &param) -> uint8_t { return param.weatherHeavyRain; }, [](ChrActivateConditionParam &param, uint8_t value) { param.weatherHeavyRain = value; });
        utChrActivateConditionParam["weatherStorm"] = sol::property([](ChrActivateConditionParam &param) -> uint8_t { return param.weatherStorm; }, [](ChrActivateConditionParam &param, uint8_t value) { param.weatherStorm = value; });
        utChrActivateConditionParam["weatherStormForBattle"] = sol::property([](ChrActivateConditionParam &param) -> uint8_t { return param.weatherStormForBattle; }, [](ChrActivateConditionParam &param, uint8_t value) { param.weatherStormForBattle = value; });
        utChrActivateConditionParam["weatherSnow"] = sol::property([](ChrActivateConditionParam &param) -> uint8_t { return param.weatherSnow; }, [](ChrActivateConditionParam &param, uint8_t value) { param.weatherSnow = value; });
        utChrActivateConditionParam["weatherHeavySnow"] = sol::property([](ChrActivateConditionParam &param) -> uint8_t { return param.weatherHeavySnow; }, [](ChrActivateConditionParam &param, uint8_t value) { param.weatherHeavySnow = value; });
        utChrActivateConditionParam["weatherFog"] = sol::property([](ChrActivateConditionParam &param) -> uint8_t { return param.weatherFog; }, [](ChrActivateConditionParam &param, uint8_t value) { param.weatherFog = value; });
        utChrActivateConditionParam["weatherHeavyFog"] = sol::property([](ChrActivateConditionParam &param) -> uint8_t { return param.weatherHeavyFog; }, [](ChrActivateConditionParam &param, uint8_t value) { param.weatherHeavyFog = value; });
        utChrActivateConditionParam["weatherHeavyFogRain"] = sol::property([](ChrActivateConditionParam &param) -> uint8_t { return param.weatherHeavyFogRain; }, [](ChrActivateConditionParam &param, uint8_t value) { param.weatherHeavyFogRain = value; });
        utChrActivateConditionParam["weatherSandStorm"] = sol::property([](ChrActivateConditionParam &param) -> uint8_t { return param.weatherSandStorm; }, [](ChrActivateConditionParam &param, uint8_t value) { param.weatherSandStorm = value; });
        utChrActivateConditionParam["timeStartHour"] = &ChrActivateConditionParam::timeStartHour;
        utChrActivateConditionParam["timeStartMin"] = &ChrActivateConditionParam::timeStartMin;
        utChrActivateConditionParam["timeEndHour"] = &ChrActivateConditionParam::timeEndHour;
        utChrActivateConditionParam["timeEndMin"] = &ChrActivateConditionParam::timeEndMin;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<ChrActivateConditionParam>>(gParamMgr.findTable(L"ChrActivateConditionParam")); };
    paramsTable["ChrActivateConditionParam"] = tableLoader;
}

}
