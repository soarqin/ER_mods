#include "../luabindings.h"
#include "../defs/CutsceneWeatherOverrideGparamIdConvertParam.h"

namespace paramadjuster::params {

void registerCutsceneWeatherOverrideGparamIdConvertParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["CutsceneWeatherOverrideGparamIdConvertParam"]; usertype) return;
        auto indexerCutsceneWeatherOverrideGparamIdConvertParam = state->new_usertype<ParamTableIndexer<CutsceneWeatherOverrideGparamIdConvertParam>>("CutsceneWeatherOverrideGparamIdConvertParamTableIndexer");
        indexerCutsceneWeatherOverrideGparamIdConvertParam["count"] = sol::property(&ParamTableIndexer<CutsceneWeatherOverrideGparamIdConvertParam>::count);
        indexerCutsceneWeatherOverrideGparamIdConvertParam["__index"] = &ParamTableIndexer<CutsceneWeatherOverrideGparamIdConvertParam>::at;
        indexerCutsceneWeatherOverrideGparamIdConvertParam["id"] = &ParamTableIndexer<CutsceneWeatherOverrideGparamIdConvertParam>::paramId;
        indexerCutsceneWeatherOverrideGparamIdConvertParam["get"] = &ParamTableIndexer<CutsceneWeatherOverrideGparamIdConvertParam>::get;
        auto utCutsceneWeatherOverrideGparamIdConvertParam = state->new_usertype<CutsceneWeatherOverrideGparamIdConvertParam>("CutsceneWeatherOverrideGparamIdConvertParam");
        utCutsceneWeatherOverrideGparamIdConvertParam["weatherOverrideGparamId"] = &CutsceneWeatherOverrideGparamIdConvertParam::weatherOverrideGparamId;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<CutsceneWeatherOverrideGparamIdConvertParam>>(gParamMgr.findTable(L"CutsceneWeatherOverrideGparamIdConvertParam")); };
    paramsTable["CutsceneWeatherOverrideGparamConvertParam"] = tableLoader;
}

}
