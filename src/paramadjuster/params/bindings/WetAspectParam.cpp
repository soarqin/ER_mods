#include "../luabindings.h"
#include "../defs/WetAspectParam.h"

namespace paramadjuster::params {

void registerWetAspectParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WetAspectParam"]; usertype) return;
        auto indexerWetAspectParam = state->new_usertype<ParamTableIndexer<WetAspectParam>>("WetAspectParamTableIndexer");
        indexerWetAspectParam["count"] = sol::property(&ParamTableIndexer<WetAspectParam>::count);
        indexerWetAspectParam["__index"] = &ParamTableIndexer<WetAspectParam>::at;
        indexerWetAspectParam["id"] = &ParamTableIndexer<WetAspectParam>::paramId;
        indexerWetAspectParam["get"] = &ParamTableIndexer<WetAspectParam>::get;
        auto utWetAspectParam = state->new_usertype<WetAspectParam>("WetAspectParam");
        utWetAspectParam["baseColorR"] = &WetAspectParam::baseColorR;
        utWetAspectParam["baseColorG"] = &WetAspectParam::baseColorG;
        utWetAspectParam["baseColorB"] = &WetAspectParam::baseColorB;
        utWetAspectParam["baseColorA"] = &WetAspectParam::baseColorA;
        utWetAspectParam["metallic"] = &WetAspectParam::metallic;
        utWetAspectParam["metallicRate"] = &WetAspectParam::metallicRate;
        utWetAspectParam["shininessRate"] = &WetAspectParam::shininessRate;
        utWetAspectParam["shininess"] = &WetAspectParam::shininess;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<WetAspectParam>>(gParamMgr.findTable(L"WetAspectParam")); };
    paramsTable["WetAspectParam"] = tableLoader;
}

}
