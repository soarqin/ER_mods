#include "../luabindings.h"
#include "../defs/CutsceneGparamTimeParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<CutsceneGparamTimeParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerCutsceneGparamTimeParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["CutsceneGparamTimeParam"]; usertype) return;
        auto indexerCutsceneGparamTimeParam = state->new_usertype<ParamTableIndexer<CutsceneGparamTimeParam>>("CutsceneGparamTimeParamTableIndexer");
        indexerCutsceneGparamTimeParam["count"] = sol::property(&ParamTableIndexer<CutsceneGparamTimeParam>::count);
        indexerCutsceneGparamTimeParam["__index"] = &ParamTableIndexer<CutsceneGparamTimeParam>::at;
        indexerCutsceneGparamTimeParam["id"] = &ParamTableIndexer<CutsceneGparamTimeParam>::paramId;
        indexerCutsceneGparamTimeParam["get"] = &ParamTableIndexer<CutsceneGparamTimeParam>::get;
        indexerCutsceneGparamTimeParam["exportToCsv"] = &ParamTableIndexer<CutsceneGparamTimeParam>::exportToCsv;
        indexerCutsceneGparamTimeParam["importFromCsv"] = &ParamTableIndexer<CutsceneGparamTimeParam>::importFromCsv;
        auto utCutsceneGparamTimeParam = state->new_usertype<CutsceneGparamTimeParam>("CutsceneGparamTimeParam");
        utCutsceneGparamTimeParam["disableParam_NT"] = sol::property([](CutsceneGparamTimeParam &param) -> uint8_t { return param.disableParam_NT; }, [](CutsceneGparamTimeParam &param, uint8_t value) { param.disableParam_NT = value; });
        utCutsceneGparamTimeParam["disableParam_Debug"] = sol::property([](CutsceneGparamTimeParam &param) -> uint8_t { return param.disableParam_Debug; }, [](CutsceneGparamTimeParam &param, uint8_t value) { param.disableParam_Debug = value; });
        utCutsceneGparamTimeParam["DstTimezone_Morning"] = &CutsceneGparamTimeParam::DstTimezone_Morning;
        utCutsceneGparamTimeParam["DstTimezone_Noon"] = &CutsceneGparamTimeParam::DstTimezone_Noon;
        utCutsceneGparamTimeParam["DstTimezone_AfterNoon"] = &CutsceneGparamTimeParam::DstTimezone_AfterNoon;
        utCutsceneGparamTimeParam["DstTimezone_Evening"] = &CutsceneGparamTimeParam::DstTimezone_Evening;
        utCutsceneGparamTimeParam["DstTimezone_Night"] = &CutsceneGparamTimeParam::DstTimezone_Night;
        utCutsceneGparamTimeParam["DstTimezone_DeepNightA"] = &CutsceneGparamTimeParam::DstTimezone_DeepNightA;
        utCutsceneGparamTimeParam["DstTimezone_DeepNightB"] = &CutsceneGparamTimeParam::DstTimezone_DeepNightB;
        utCutsceneGparamTimeParam["PostPlayIngameTime"] = &CutsceneGparamTimeParam::PostPlayIngameTime;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<CutsceneGparamTimeParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<CutsceneGparamTimeParam>>(nullptr);
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"disableParam_Debug", false},
            {"DstTimezone_Morning", false},
            {"DstTimezone_Noon", false},
            {"DstTimezone_AfterNoon", false},
            {"DstTimezone_Evening", false},
            {"DstTimezone_Night", false},
            {"DstTimezone_DeepNightA", false},
            {"DstTimezone_DeepNightB", false},
            {"PostPlayIngameTime", false},
        });
        return indexer;
    };
    paramsTable["CutsceneGparamTimeParam"] = [tableLoader]() -> auto { return tableLoader(L"CutsceneGparamTimeParam"); };
}

template<> void ParamTableIndexer<CutsceneGparamTimeParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,disableParam_Debug,DstTimezone_Morning,DstTimezone_Noon,DstTimezone_AfterNoon,DstTimezone_Evening,DstTimezone_Night,DstTimezone_DeepNightA,DstTimezone_DeepNightB,PostPlayIngameTime\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%u,%u,%u,%u,%u,%u,%g\n",
            this->paramId(i),
            param->disableParam_NT,
            param->disableParam_Debug,
            param->DstTimezone_Morning,
            param->DstTimezone_Noon,
            param->DstTimezone_AfterNoon,
            param->DstTimezone_Evening,
            param->DstTimezone_Night,
            param->DstTimezone_DeepNightA,
            param->DstTimezone_DeepNightB,
            param->PostPlayIngameTime
        );
    }
    fclose(f);
}

}
