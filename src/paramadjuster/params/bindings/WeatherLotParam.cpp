#include "../luabindings.h"
#include "../defs/WeatherLotParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<WeatherLotParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerWeatherLotParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WeatherLotParam"]; usertype) return;
        auto indexerWeatherLotParam = state->new_usertype<ParamTableIndexer<WeatherLotParam>>("WeatherLotParamTableIndexer");
        indexerWeatherLotParam["count"] = sol::property(&ParamTableIndexer<WeatherLotParam>::count);
        indexerWeatherLotParam["__index"] = &ParamTableIndexer<WeatherLotParam>::at;
        indexerWeatherLotParam["id"] = &ParamTableIndexer<WeatherLotParam>::paramId;
        indexerWeatherLotParam["get"] = &ParamTableIndexer<WeatherLotParam>::get;
        indexerWeatherLotParam["exportToCsv"] = &ParamTableIndexer<WeatherLotParam>::exportToCsv;
        indexerWeatherLotParam["importFromCsv"] = &ParamTableIndexer<WeatherLotParam>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<WeatherLotParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<WeatherLotParam>>(nullptr);
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"weatherType0", false},
            {"weatherType1", false},
            {"weatherType2", false},
            {"weatherType3", false},
            {"weatherType4", false},
            {"weatherType5", false},
            {"weatherType6", false},
            {"weatherType7", false},
            {"weatherType8", false},
            {"weatherType9", false},
            {"weatherType10", false},
            {"weatherType11", false},
            {"weatherType12", false},
            {"weatherType13", false},
            {"weatherType14", false},
            {"weatherType15", false},
            {"lotteryWeight0", false},
            {"lotteryWeight1", false},
            {"lotteryWeight2", false},
            {"lotteryWeight3", false},
            {"lotteryWeight4", false},
            {"lotteryWeight5", false},
            {"lotteryWeight6", false},
            {"lotteryWeight7", false},
            {"lotteryWeight8", false},
            {"lotteryWeight9", false},
            {"lotteryWeight10", false},
            {"lotteryWeight11", false},
            {"lotteryWeight12", false},
            {"lotteryWeight13", false},
            {"lotteryWeight14", false},
            {"lotteryWeight15", false},
            {"timezoneLimit", false},
            {"timezoneStartHour", false},
            {"timezoneStartMinute", false},
            {"timezoneEndHour", false},
            {"timezoneEndMinute", false},
        });
        return indexer;
    };
    paramsTable["WeatherLotParam"] = [tableLoader]() -> auto { return tableLoader(L"WeatherLotParam"); };
}

template<> void ParamTableIndexer<WeatherLotParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,weatherType0,weatherType1,weatherType2,weatherType3,weatherType4,weatherType5,weatherType6,weatherType7,weatherType8,weatherType9,weatherType10,weatherType11,weatherType12,weatherType13");
    fwprintf(f, L",weatherType14,weatherType15,lotteryWeight0,lotteryWeight1,lotteryWeight2,lotteryWeight3,lotteryWeight4,lotteryWeight5,lotteryWeight6,lotteryWeight7,lotteryWeight8,lotteryWeight9,lotteryWeight10,lotteryWeight11,lotteryWeight12,lotteryWeight13");
    fwprintf(f, L",lotteryWeight14,lotteryWeight15,timezoneLimit,timezoneStartHour,timezoneStartMinute,timezoneEndHour,timezoneEndMinute\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u\n",
            this->paramId(i),
            param->disableParam_NT,
            param->weatherType0,
            param->weatherType1,
            param->weatherType2,
            param->weatherType3,
            param->weatherType4,
            param->weatherType5,
            param->weatherType6,
            param->weatherType7,
            param->weatherType8,
            param->weatherType9,
            param->weatherType10,
            param->weatherType11,
            param->weatherType12,
            param->weatherType13,
            param->weatherType14,
            param->weatherType15,
            param->lotteryWeight0,
            param->lotteryWeight1,
            param->lotteryWeight2,
            param->lotteryWeight3,
            param->lotteryWeight4,
            param->lotteryWeight5,
            param->lotteryWeight6,
            param->lotteryWeight7,
            param->lotteryWeight8,
            param->lotteryWeight9,
            param->lotteryWeight10,
            param->lotteryWeight11,
            param->lotteryWeight12,
            param->lotteryWeight13,
            param->lotteryWeight14,
            param->lotteryWeight15,
            param->timezoneLimit,
            param->timezoneStartHour,
            param->timezoneStartMinute,
            param->timezoneEndHour,
            param->timezoneEndMinute
        );
    }
    fclose(f);
}

}
