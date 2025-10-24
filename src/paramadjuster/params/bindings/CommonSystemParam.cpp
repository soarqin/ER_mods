#include "../luabindings.h"
#include "../defs/CommonSystemParam.h"

namespace paramadjuster::params {

void registerCommonSystemParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["CommonSystemParam"]; usertype) return;
        auto indexerCommonSystemParam = state->new_usertype<ParamTableIndexer<CommonSystemParam>>("CommonSystemParamTableIndexer");
        indexerCommonSystemParam["count"] = sol::property(&ParamTableIndexer<CommonSystemParam>::count);
        indexerCommonSystemParam["__index"] = &ParamTableIndexer<CommonSystemParam>::at;
        indexerCommonSystemParam["id"] = &ParamTableIndexer<CommonSystemParam>::paramId;
        indexerCommonSystemParam["get"] = &ParamTableIndexer<CommonSystemParam>::get;
        auto utCommonSystemParam = state->new_usertype<CommonSystemParam>("CommonSystemParam");
        utCommonSystemParam["mapSaveMapNameIdOnGameStart"] = &CommonSystemParam::mapSaveMapNameIdOnGameStart;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<CommonSystemParam>>(gParamMgr.findTable(L"CommonSystemParam")); };
    paramsTable["CommonSystemParam"] = tableLoader;
}

}
