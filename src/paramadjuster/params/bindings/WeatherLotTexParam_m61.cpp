#include "../luabindings.h"
#include "../defs/WeatherLotTexParam_m61.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<WeatherLotTexParam_m61>::exportToCsvImpl(const std::wstring &csvPath);

void registerWeatherLotTexParam_m61(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WeatherLotTexParam_m61"]; usertype) return;
        auto indexerWeatherLotTexParam_m61 = state->new_usertype<ParamTableIndexer<WeatherLotTexParam_m61>>("WeatherLotTexParam_m61TableIndexer");
        indexerWeatherLotTexParam_m61["count"] = sol::property(&ParamTableIndexer<WeatherLotTexParam_m61>::count);
        indexerWeatherLotTexParam_m61["__index"] = &ParamTableIndexer<WeatherLotTexParam_m61>::at;
        indexerWeatherLotTexParam_m61["id"] = &ParamTableIndexer<WeatherLotTexParam_m61>::paramId;
        indexerWeatherLotTexParam_m61["get"] = &ParamTableIndexer<WeatherLotTexParam_m61>::get;
        indexerWeatherLotTexParam_m61["exportToCsv"] = &ParamTableIndexer<WeatherLotTexParam_m61>::exportToCsv;
        indexerWeatherLotTexParam_m61["importFromCsv"] = &ParamTableIndexer<WeatherLotTexParam_m61>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<WeatherLotTexParam_m61>>(state, L"WeatherLotTexParam_m61");
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"srcR", false},
            {"srcG", false},
            {"srcB", false},
            {"weatherLogId", false},
            {"unknown_0xc", false},
            {"unknown_0x10", false},
            {"unknown_0x14", false},
            {"unknown_0x18", false},
        });
        return indexer;
    };
    paramsTable["WeatherLotTexParam_m61"] = tableLoader;
}

template<> void ParamTableIndexer<WeatherLotTexParam_m61>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,srcR,srcG,srcB,weatherLogId,unknown_0xc,unknown_0x10,unknown_0x14,unknown_0x18\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%u,%d,%d,%d,%d,%d\n",
            this->paramId(i),
            param->disableParam_NT,
            param->srcR,
            param->srcG,
            param->srcB,
            param->weatherLogId,
            param->unknown_0xc,
            param->unknown_0x10,
            param->unknown_0x14,
            param->unknown_0x18
        );
    }
    fclose(f);
}

}
