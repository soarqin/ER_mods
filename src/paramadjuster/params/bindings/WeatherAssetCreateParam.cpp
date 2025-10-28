#include "../luabindings.h"
#include "../defs/WeatherAssetCreateParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<WeatherAssetCreateParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerWeatherAssetCreateParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WeatherAssetCreateParam"]; usertype) return;
        auto indexerWeatherAssetCreateParam = state->new_usertype<ParamTableIndexer<WeatherAssetCreateParam>>("WeatherAssetCreateParamTableIndexer");
        indexerWeatherAssetCreateParam["count"] = sol::property(&ParamTableIndexer<WeatherAssetCreateParam>::count);
        indexerWeatherAssetCreateParam["__index"] = &ParamTableIndexer<WeatherAssetCreateParam>::at;
        indexerWeatherAssetCreateParam["id"] = &ParamTableIndexer<WeatherAssetCreateParam>::paramId;
        indexerWeatherAssetCreateParam["get"] = &ParamTableIndexer<WeatherAssetCreateParam>::get;
        indexerWeatherAssetCreateParam["exportToCsv"] = &ParamTableIndexer<WeatherAssetCreateParam>::exportToCsv;
        indexerWeatherAssetCreateParam["importFromCsv"] = &ParamTableIndexer<WeatherAssetCreateParam>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<WeatherAssetCreateParam>>(state, L"WeatherAssetCreateParam");
        indexer->setFieldNames({
            {"AssetId", false},
            {"SlotNo", false},
            {"CreateConditionType", false},
            {"TransitionSrcWeather", false},
            {"TransitionDstWeather", false},
            {"ElapsedTimeCheckweather", false},
            {"ElapsedTime", false},
            {"CreateDelayTime", false},
            {"CreateProbability", false},
            {"LifeTime", false},
            {"FadeTime", false},
            {"EnableCreateTimeMin", false},
            {"EnableCreateTimeMax", false},
            {"CreatePoint0", false},
            {"CreatePoint1", false},
            {"CreatePoint2", false},
            {"CreatePoint3", false},
            {"CreateAssetLimitId0", false},
            {"CreateAssetLimitId1", false},
            {"CreateAssetLimitId2", false},
            {"CreateAssetLimitId3", false},
        });
        return indexer;
    };
    paramsTable["WeatherAssetCreateParam"] = tableLoader;
}

template<> void ParamTableIndexer<WeatherAssetCreateParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,AssetId,SlotNo,CreateConditionType,TransitionSrcWeather,TransitionDstWeather,ElapsedTimeCheckweather,ElapsedTime,CreateDelayTime,CreateProbability,LifeTime,FadeTime,EnableCreateTimeMin,EnableCreateTimeMax,CreatePoint0,CreatePoint1,CreatePoint2,CreatePoint3,CreateAssetLimitId0,CreateAssetLimitId1,CreateAssetLimitId2,CreateAssetLimitId3\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%d,%d,%d,%g,%g,%u,%g,%g,%g,%g,%d,%d,%d,%d,%d,%d,%d,%d\n",
            this->paramId(i),
            param->AssetId,
            param->SlotNo,
            param->CreateConditionType,
            param->TransitionSrcWeather,
            param->TransitionDstWeather,
            param->ElapsedTimeCheckweather,
            param->ElapsedTime,
            param->CreateDelayTime,
            param->CreateProbability,
            param->LifeTime,
            param->FadeTime,
            param->EnableCreateTimeMin,
            param->EnableCreateTimeMax,
            param->CreatePoint0,
            param->CreatePoint1,
            param->CreatePoint2,
            param->CreatePoint3,
            param->CreateAssetLimitId0,
            param->CreateAssetLimitId1,
            param->CreateAssetLimitId2,
            param->CreateAssetLimitId3
        );
    }
    fclose(f);
}

}
