#include "../luabindings.h"
#include "../defs/WeatherParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<WeatherParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerWeatherParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WeatherParam"]; usertype) return;
        auto indexerWeatherParam = state->new_usertype<ParamTableIndexer<WeatherParam>>("WeatherParamTableIndexer");
        indexerWeatherParam["count"] = sol::property(&ParamTableIndexer<WeatherParam>::count);
        indexerWeatherParam["__index"] = &ParamTableIndexer<WeatherParam>::at;
        indexerWeatherParam["id"] = &ParamTableIndexer<WeatherParam>::paramId;
        indexerWeatherParam["get"] = &ParamTableIndexer<WeatherParam>::get;
        indexerWeatherParam["exportToCsv"] = &ParamTableIndexer<WeatherParam>::exportToCsv;
        indexerWeatherParam["importFromCsv"] = &ParamTableIndexer<WeatherParam>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<WeatherParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<WeatherParam>>(nullptr);
        indexer->setFieldNames({
            {"SfxId", false},
            {"WindSfxId", false},
            {"GroundHitSfxId", false},
            {"SoundId", false},
            {"WetTime", false},
            {"GparamId", false},
            {"NextLotIngameSecondsMin", false},
            {"NextLotIngameSecondsMax", false},
            {"WetSpEffectId00", false},
            {"WetSpEffectId01", false},
            {"WetSpEffectId02", false},
            {"WetSpEffectId03", false},
            {"WetSpEffectId04", false},
            {"SfxIdInoor", false},
            {"SfxIdOutdoor", false},
            {"aiSightRate", false},
            {"DistViewWeatherGparamOverrideWeight", false},
        });
        return indexer;
    };
    paramsTable["WeatherParam"] = [tableLoader]() -> auto { return tableLoader(L"WeatherParam"); };
}

template<> void ParamTableIndexer<WeatherParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,SfxId,WindSfxId,GroundHitSfxId,SoundId,WetTime,GparamId,NextLotIngameSecondsMin,NextLotIngameSecondsMax,WetSpEffectId00,WetSpEffectId01,WetSpEffectId02,WetSpEffectId03,WetSpEffectId04,SfxIdInoor,SfxIdOutdoor");
    fwprintf(f, L",aiSightRate,DistViewWeatherGparamOverrideWeight\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%d,%g,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d,%g,%g\n",
            this->paramId(i),
            param->SfxId,
            param->WindSfxId,
            param->GroundHitSfxId,
            param->SoundId,
            param->WetTime,
            param->GparamId,
            param->NextLotIngameSecondsMin,
            param->NextLotIngameSecondsMax,
            param->WetSpEffectId00,
            param->WetSpEffectId01,
            param->WetSpEffectId02,
            param->WetSpEffectId03,
            param->WetSpEffectId04,
            param->SfxIdInoor,
            param->SfxIdOutdoor,
            param->aiSightRate,
            param->DistViewWeatherGparamOverrideWeight
        );
    }
    fclose(f);
}

}
