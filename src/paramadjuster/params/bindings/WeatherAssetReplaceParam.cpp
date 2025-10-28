#include "../luabindings.h"
#include "../defs/WeatherAssetReplaceParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<WeatherAssetReplaceParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerWeatherAssetReplaceParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WeatherAssetReplaceParam"]; usertype) return;
        auto indexerWeatherAssetReplaceParam = state->new_usertype<ParamTableIndexer<WeatherAssetReplaceParam>>("WeatherAssetReplaceParamTableIndexer");
        indexerWeatherAssetReplaceParam["count"] = sol::property(&ParamTableIndexer<WeatherAssetReplaceParam>::count);
        indexerWeatherAssetReplaceParam["__index"] = &ParamTableIndexer<WeatherAssetReplaceParam>::at;
        indexerWeatherAssetReplaceParam["id"] = &ParamTableIndexer<WeatherAssetReplaceParam>::paramId;
        indexerWeatherAssetReplaceParam["get"] = &ParamTableIndexer<WeatherAssetReplaceParam>::get;
        indexerWeatherAssetReplaceParam["exportToCsv"] = &ParamTableIndexer<WeatherAssetReplaceParam>::exportToCsv;
        indexerWeatherAssetReplaceParam["importFromCsv"] = &ParamTableIndexer<WeatherAssetReplaceParam>::importFromCsv;
        auto utWeatherAssetReplaceParam = state->new_usertype<WeatherAssetReplaceParam>("WeatherAssetReplaceParam");
        utWeatherAssetReplaceParam["mapId"] = &WeatherAssetReplaceParam::mapId;
        utWeatherAssetReplaceParam["TransitionSrcWeather"] = &WeatherAssetReplaceParam::TransitionSrcWeather;
        utWeatherAssetReplaceParam["isFireAsh"] = &WeatherAssetReplaceParam::isFireAsh;
        utWeatherAssetReplaceParam["reserved2"] = &WeatherAssetReplaceParam::reserved2;
        utWeatherAssetReplaceParam["AssetId0"] = &WeatherAssetReplaceParam::AssetId0;
        utWeatherAssetReplaceParam["AssetId1"] = &WeatherAssetReplaceParam::AssetId1;
        utWeatherAssetReplaceParam["AssetId2"] = &WeatherAssetReplaceParam::AssetId2;
        utWeatherAssetReplaceParam["AssetId3"] = &WeatherAssetReplaceParam::AssetId3;
        utWeatherAssetReplaceParam["AssetId4"] = &WeatherAssetReplaceParam::AssetId4;
        utWeatherAssetReplaceParam["AssetId5"] = &WeatherAssetReplaceParam::AssetId5;
        utWeatherAssetReplaceParam["AssetId6"] = &WeatherAssetReplaceParam::AssetId6;
        utWeatherAssetReplaceParam["AssetId7"] = &WeatherAssetReplaceParam::AssetId7;
        utWeatherAssetReplaceParam["CreateAssetLimitId0"] = &WeatherAssetReplaceParam::CreateAssetLimitId0;
        utWeatherAssetReplaceParam["CreateAssetLimitId1"] = &WeatherAssetReplaceParam::CreateAssetLimitId1;
        utWeatherAssetReplaceParam["CreateAssetLimitId2"] = &WeatherAssetReplaceParam::CreateAssetLimitId2;
        utWeatherAssetReplaceParam["CreateAssetLimitId3"] = &WeatherAssetReplaceParam::CreateAssetLimitId3;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<WeatherAssetReplaceParam>>(state, L"WeatherAssetReplaceParam");
        indexer->setFieldNames({
            {"mapId", false},
            {"TransitionSrcWeather", false},
            {"isFireAsh", false},
            {"reserved2", false},
            {"AssetId0", false},
            {"AssetId1", false},
            {"AssetId2", false},
            {"AssetId3", false},
            {"AssetId4", false},
            {"AssetId5", false},
            {"AssetId6", false},
            {"AssetId7", false},
            {"CreateAssetLimitId0", false},
            {"CreateAssetLimitId1", false},
            {"CreateAssetLimitId2", false},
            {"CreateAssetLimitId3", false},
        });
        return indexer;
    };
    paramsTable["WeatherAssetReplaceParam"] = tableLoader;
}

template<> void ParamTableIndexer<WeatherAssetReplaceParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,mapId,TransitionSrcWeather,isFireAsh,reserved2,AssetId0,AssetId1,AssetId2,AssetId3,AssetId4,AssetId5,AssetId6,AssetId7,CreateAssetLimitId0,CreateAssetLimitId1,CreateAssetLimitId2,CreateAssetLimitId3\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%d,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",
            this->paramId(i),
            param->mapId,
            param->TransitionSrcWeather,
            param->isFireAsh,
            param->reserved2,
            param->AssetId0,
            param->AssetId1,
            param->AssetId2,
            param->AssetId3,
            param->AssetId4,
            param->AssetId5,
            param->AssetId6,
            param->AssetId7,
            param->CreateAssetLimitId0,
            param->CreateAssetLimitId1,
            param->CreateAssetLimitId2,
            param->CreateAssetLimitId3
        );
    }
    fclose(f);
}

}
