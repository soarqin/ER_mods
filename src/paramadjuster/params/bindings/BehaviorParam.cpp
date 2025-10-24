#include "../luabindings.h"
#include "../defs/BehaviorParam.h"

namespace paramadjuster::params {

void registerBehaviorParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["BehaviorParam"]; usertype) return;
        auto indexerBehaviorParam = state->new_usertype<ParamTableIndexer<BehaviorParam>>("BehaviorParamTableIndexer");
        indexerBehaviorParam["count"] = sol::property(&ParamTableIndexer<BehaviorParam>::count);
        indexerBehaviorParam["__index"] = &ParamTableIndexer<BehaviorParam>::at;
        indexerBehaviorParam["id"] = &ParamTableIndexer<BehaviorParam>::paramId;
        indexerBehaviorParam["get"] = &ParamTableIndexer<BehaviorParam>::get;
        auto utBehaviorParam = state->new_usertype<BehaviorParam>("BehaviorParam");
        utBehaviorParam["variationId"] = &BehaviorParam::variationId;
        utBehaviorParam["behaviorJudgeId"] = &BehaviorParam::behaviorJudgeId;
        utBehaviorParam["ezStateBehaviorType_old"] = &BehaviorParam::ezStateBehaviorType_old;
        utBehaviorParam["refType"] = &BehaviorParam::refType;
        utBehaviorParam["refId"] = &BehaviorParam::refId;
        utBehaviorParam["consumeSA"] = &BehaviorParam::consumeSA;
        utBehaviorParam["stamina"] = &BehaviorParam::stamina;
        utBehaviorParam["consumeDurability"] = &BehaviorParam::consumeDurability;
        utBehaviorParam["category"] = &BehaviorParam::category;
        utBehaviorParam["heroPoint"] = &BehaviorParam::heroPoint;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<BehaviorParam>>(gParamMgr.findTable(L"BehaviorParam")); };
    paramsTable["BehaviorParam"] = tableLoader;
    paramsTable["BehaviorParam_PC"] = tableLoader;
}

}
