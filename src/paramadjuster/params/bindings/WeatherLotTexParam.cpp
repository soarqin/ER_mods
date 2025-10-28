#include "../luabindings.h"
#include "../defs/WeatherLotTexParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<WeatherLotTexParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerWeatherLotTexParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WeatherLotTexParam"]; usertype) return;
        auto indexerWeatherLotTexParam = state->new_usertype<ParamTableIndexer<WeatherLotTexParam>>("WeatherLotTexParamTableIndexer");
        indexerWeatherLotTexParam["count"] = sol::property(&ParamTableIndexer<WeatherLotTexParam>::count);
        indexerWeatherLotTexParam["__index"] = &ParamTableIndexer<WeatherLotTexParam>::at;
        indexerWeatherLotTexParam["id"] = &ParamTableIndexer<WeatherLotTexParam>::paramId;
        indexerWeatherLotTexParam["get"] = &ParamTableIndexer<WeatherLotTexParam>::get;
        indexerWeatherLotTexParam["exportToCsv"] = &ParamTableIndexer<WeatherLotTexParam>::exportToCsv;
        indexerWeatherLotTexParam["importFromCsv"] = &ParamTableIndexer<WeatherLotTexParam>::importFromCsv;
        auto utWeatherLotTexParam = state->new_usertype<WeatherLotTexParam>("WeatherLotTexParam");
        utWeatherLotTexParam["disableParam_NT"] = sol::property([](WeatherLotTexParam &param) -> uint8_t { return param.disableParam_NT; }, [](WeatherLotTexParam &param, uint8_t value) { param.disableParam_NT = value; });
        utWeatherLotTexParam["srcR"] = &WeatherLotTexParam::srcR;
        utWeatherLotTexParam["srcG"] = &WeatherLotTexParam::srcG;
        utWeatherLotTexParam["srcB"] = &WeatherLotTexParam::srcB;
        utWeatherLotTexParam["weatherLogId"] = &WeatherLotTexParam::weatherLogId;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<WeatherLotTexParam>>(state, L"WeatherLotTexParam");
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"srcR", false},
            {"srcG", false},
            {"srcB", false},
            {"weatherLogId", false},
        });
        return indexer;
    };
    paramsTable["WeatherLotTexParam"] = tableLoader;
}

template<> void ParamTableIndexer<WeatherLotTexParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,srcR,srcG,srcB,weatherLogId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%u,%d\n",
            this->paramId(i),
            param->disableParam_NT,
            param->srcR,
            param->srcG,
            param->srcB,
            param->weatherLogId
        );
    }
    fclose(f);
}

}
