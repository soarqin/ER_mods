#include "../luabindings.h"
#include "../defs/WhiteSignCoolTimeParam.h"

namespace paramadjuster::params {

void registerWhiteSignCoolTimeParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WhiteSignCoolTimeParam"]; usertype) return;
        auto indexerWhiteSignCoolTimeParam = state->new_usertype<ParamTableIndexer<WhiteSignCoolTimeParam>>("WhiteSignCoolTimeParamTableIndexer");
        indexerWhiteSignCoolTimeParam["count"] = sol::property(&ParamTableIndexer<WhiteSignCoolTimeParam>::count);
        indexerWhiteSignCoolTimeParam["__index"] = &ParamTableIndexer<WhiteSignCoolTimeParam>::at;
        indexerWhiteSignCoolTimeParam["id"] = &ParamTableIndexer<WhiteSignCoolTimeParam>::paramId;
        indexerWhiteSignCoolTimeParam["get"] = &ParamTableIndexer<WhiteSignCoolTimeParam>::get;
        auto utWhiteSignCoolTimeParam = state->new_usertype<WhiteSignCoolTimeParam>("WhiteSignCoolTimeParam");
        utWhiteSignCoolTimeParam["limitationTime_Normal"] = &WhiteSignCoolTimeParam::limitationTime_Normal;
        utWhiteSignCoolTimeParam["limitationTime_NormalDriedFinger"] = &WhiteSignCoolTimeParam::limitationTime_NormalDriedFinger;
        utWhiteSignCoolTimeParam["limitationTime_Guardian"] = &WhiteSignCoolTimeParam::limitationTime_Guardian;
        utWhiteSignCoolTimeParam["limitationTime_GuardianDriedFinger"] = &WhiteSignCoolTimeParam::limitationTime_GuardianDriedFinger;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<WhiteSignCoolTimeParam>>(gParamMgr.findTable(L"WhiteSignCoolTimeParam")); };
    paramsTable["WhiteSignCoolTimeParam"] = tableLoader;
}

}
