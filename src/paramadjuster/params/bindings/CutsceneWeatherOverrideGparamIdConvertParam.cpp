#include "../luabindings.h"
#include "../defs/CutsceneWeatherOverrideGparamIdConvertParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<CutsceneWeatherOverrideGparamIdConvertParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerCutsceneWeatherOverrideGparamIdConvertParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["CutsceneWeatherOverrideGparamIdConvertParam"]; usertype) return;
        auto indexerCutsceneWeatherOverrideGparamIdConvertParam = state->new_usertype<ParamTableIndexer<CutsceneWeatherOverrideGparamIdConvertParam>>("CutsceneWeatherOverrideGparamIdConvertParamTableIndexer");
        indexerCutsceneWeatherOverrideGparamIdConvertParam["count"] = sol::property(&ParamTableIndexer<CutsceneWeatherOverrideGparamIdConvertParam>::count);
        indexerCutsceneWeatherOverrideGparamIdConvertParam["__index"] = &ParamTableIndexer<CutsceneWeatherOverrideGparamIdConvertParam>::at;
        indexerCutsceneWeatherOverrideGparamIdConvertParam["id"] = &ParamTableIndexer<CutsceneWeatherOverrideGparamIdConvertParam>::paramId;
        indexerCutsceneWeatherOverrideGparamIdConvertParam["get"] = &ParamTableIndexer<CutsceneWeatherOverrideGparamIdConvertParam>::get;
        indexerCutsceneWeatherOverrideGparamIdConvertParam["exportToCsv"] = &ParamTableIndexer<CutsceneWeatherOverrideGparamIdConvertParam>::exportToCsv;
        indexerCutsceneWeatherOverrideGparamIdConvertParam["importFromCsv"] = &ParamTableIndexer<CutsceneWeatherOverrideGparamIdConvertParam>::importFromCsv;
        auto utCutsceneWeatherOverrideGparamIdConvertParam = state->new_usertype<CutsceneWeatherOverrideGparamIdConvertParam>("CutsceneWeatherOverrideGparamIdConvertParam");
        utCutsceneWeatherOverrideGparamIdConvertParam["weatherOverrideGparamId"] = &CutsceneWeatherOverrideGparamIdConvertParam::weatherOverrideGparamId;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<CutsceneWeatherOverrideGparamIdConvertParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<CutsceneWeatherOverrideGparamIdConvertParam>>(nullptr);
        indexer->setFieldNames({
            {"weatherOverrideGparamId", false},
        });
        return indexer;
    };
    paramsTable["CutsceneWeatherOverrideGparamConvertParam"] = [tableLoader]() -> auto { return tableLoader(L"CutsceneWeatherOverrideGparamConvertParam"); };
}

template<> void ParamTableIndexer<CutsceneWeatherOverrideGparamIdConvertParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,weatherOverrideGparamId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u\n",
            this->paramId(i),
            param->weatherOverrideGparamId
        );
    }
    fclose(f);
}

}
