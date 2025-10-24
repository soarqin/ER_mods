#include "../luabindings.h"
#include "../defs/CutsceneGparamTimeParam.h"

namespace paramadjuster::params {

void registerCutsceneGparamTimeParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["CutsceneGparamTimeParam"]; usertype) return;
        auto indexerCutsceneGparamTimeParam = state->new_usertype<ParamTableIndexer<CutsceneGparamTimeParam>>("CutsceneGparamTimeParamTableIndexer");
        indexerCutsceneGparamTimeParam["count"] = sol::property(&ParamTableIndexer<CutsceneGparamTimeParam>::count);
        indexerCutsceneGparamTimeParam["__index"] = &ParamTableIndexer<CutsceneGparamTimeParam>::at;
        indexerCutsceneGparamTimeParam["id"] = &ParamTableIndexer<CutsceneGparamTimeParam>::paramId;
        indexerCutsceneGparamTimeParam["get"] = &ParamTableIndexer<CutsceneGparamTimeParam>::get;
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
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<CutsceneGparamTimeParam>>(gParamMgr.findTable(L"CutsceneGparamTimeParam")); };
    paramsTable["CutsceneGparamTimeParam"] = tableLoader;
}

}
