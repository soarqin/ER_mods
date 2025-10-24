#include "../luabindings.h"
#include "../defs/CoolTimeParam.h"

namespace paramadjuster::params {

void registerCoolTimeParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["CoolTimeParam"]; usertype) return;
        auto indexerCoolTimeParam = state->new_usertype<ParamTableIndexer<CoolTimeParam>>("CoolTimeParamTableIndexer");
        indexerCoolTimeParam["count"] = sol::property(&ParamTableIndexer<CoolTimeParam>::count);
        indexerCoolTimeParam["__index"] = &ParamTableIndexer<CoolTimeParam>::at;
        indexerCoolTimeParam["id"] = &ParamTableIndexer<CoolTimeParam>::paramId;
        indexerCoolTimeParam["get"] = &ParamTableIndexer<CoolTimeParam>::get;
        auto utCoolTimeParam = state->new_usertype<CoolTimeParam>("CoolTimeParam");
        utCoolTimeParam["limitationTime_0"] = &CoolTimeParam::limitationTime_0;
        utCoolTimeParam["observeTime_0"] = &CoolTimeParam::observeTime_0;
        utCoolTimeParam["limitationTime_1"] = &CoolTimeParam::limitationTime_1;
        utCoolTimeParam["observeTime_1"] = &CoolTimeParam::observeTime_1;
        utCoolTimeParam["limitationTime_2"] = &CoolTimeParam::limitationTime_2;
        utCoolTimeParam["observeTime_2"] = &CoolTimeParam::observeTime_2;
        utCoolTimeParam["limitationTime_3"] = &CoolTimeParam::limitationTime_3;
        utCoolTimeParam["observeTime_3"] = &CoolTimeParam::observeTime_3;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<CoolTimeParam>>(gParamMgr.findTable(L"CoolTimeParam")); };
    paramsTable["CoolTimeParam"] = tableLoader;
}

}
