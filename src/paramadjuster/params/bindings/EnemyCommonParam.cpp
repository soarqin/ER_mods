#include "../luabindings.h"
#include "../defs/EnemyCommonParam.h"

namespace paramadjuster::params {

void registerEnemyCommonParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["EnemyCommonParam"]; usertype) return;
        auto indexerEnemyCommonParam = state->new_usertype<ParamTableIndexer<EnemyCommonParam>>("EnemyCommonParamTableIndexer");
        indexerEnemyCommonParam["count"] = sol::property(&ParamTableIndexer<EnemyCommonParam>::count);
        indexerEnemyCommonParam["__index"] = &ParamTableIndexer<EnemyCommonParam>::at;
        indexerEnemyCommonParam["id"] = &ParamTableIndexer<EnemyCommonParam>::paramId;
        indexerEnemyCommonParam["get"] = &ParamTableIndexer<EnemyCommonParam>::get;
        auto utEnemyCommonParam = state->new_usertype<EnemyCommonParam>("EnemyCommonParam");
        utEnemyCommonParam["soundTargetTryApproachTime"] = &EnemyCommonParam::soundTargetTryApproachTime;
        utEnemyCommonParam["searchTargetTryApproachTime"] = &EnemyCommonParam::searchTargetTryApproachTime;
        utEnemyCommonParam["memoryTargetTryApproachTime"] = &EnemyCommonParam::memoryTargetTryApproachTime;
        utEnemyCommonParam["activateChrByTime_PhantomId"] = &EnemyCommonParam::activateChrByTime_PhantomId;
        utEnemyCommonParam["findUnfavorableFailedPointDist"] = &EnemyCommonParam::findUnfavorableFailedPointDist;
        utEnemyCommonParam["findUnfavorableFailedPointHeight"] = &EnemyCommonParam::findUnfavorableFailedPointHeight;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<EnemyCommonParam>>(gParamMgr.findTable(L"EnemyCommonParam")); };
    paramsTable["EnemyCommonParam"] = tableLoader;
}

}
