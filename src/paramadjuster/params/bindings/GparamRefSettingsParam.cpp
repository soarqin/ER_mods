#include "../luabindings.h"
#include "../defs/GparamRefSettingsParam.h"

namespace paramadjuster::params {

void registerGparamRefSettingsParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["GparamRefSettingsParam"]; usertype) return;
        auto indexerGparamRefSettingsParam = state->new_usertype<ParamTableIndexer<GparamRefSettingsParam>>("GparamRefSettingsParamTableIndexer");
        indexerGparamRefSettingsParam["count"] = sol::property(&ParamTableIndexer<GparamRefSettingsParam>::count);
        indexerGparamRefSettingsParam["__index"] = &ParamTableIndexer<GparamRefSettingsParam>::at;
        indexerGparamRefSettingsParam["id"] = &ParamTableIndexer<GparamRefSettingsParam>::paramId;
        indexerGparamRefSettingsParam["get"] = &ParamTableIndexer<GparamRefSettingsParam>::get;
        auto utGparamRefSettingsParam = state->new_usertype<GparamRefSettingsParam>("GparamRefSettingsParam");
        utGparamRefSettingsParam["disableParam_NT"] = sol::property([](GparamRefSettingsParam &param) -> uint8_t { return param.disableParam_NT; }, [](GparamRefSettingsParam &param, uint8_t value) { param.disableParam_NT = value; });
        utGparamRefSettingsParam["RefTargetMapId"] = &GparamRefSettingsParam::RefTargetMapId;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<GparamRefSettingsParam>>(gParamMgr.findTable(L"GparamRefSettingsParam")); };
    paramsTable["GparamRefSettings"] = tableLoader;
}

}
