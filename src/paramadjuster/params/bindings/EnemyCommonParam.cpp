#include "../luabindings.h"
#include "../defs/EnemyCommonParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<EnemyCommonParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerEnemyCommonParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["EnemyCommonParam"]; usertype) return;
        auto indexerEnemyCommonParam = state->new_usertype<ParamTableIndexer<EnemyCommonParam>>("EnemyCommonParamTableIndexer");
        indexerEnemyCommonParam["count"] = sol::property(&ParamTableIndexer<EnemyCommonParam>::count);
        indexerEnemyCommonParam["__index"] = &ParamTableIndexer<EnemyCommonParam>::at;
        indexerEnemyCommonParam["id"] = &ParamTableIndexer<EnemyCommonParam>::paramId;
        indexerEnemyCommonParam["get"] = &ParamTableIndexer<EnemyCommonParam>::get;
        indexerEnemyCommonParam["exportToCsv"] = &ParamTableIndexer<EnemyCommonParam>::exportToCsv;
        indexerEnemyCommonParam["importFromCsv"] = &ParamTableIndexer<EnemyCommonParam>::importFromCsv;
        auto utEnemyCommonParam = state->new_usertype<EnemyCommonParam>("EnemyCommonParam");
        utEnemyCommonParam["soundTargetTryApproachTime"] = &EnemyCommonParam::soundTargetTryApproachTime;
        utEnemyCommonParam["searchTargetTryApproachTime"] = &EnemyCommonParam::searchTargetTryApproachTime;
        utEnemyCommonParam["memoryTargetTryApproachTime"] = &EnemyCommonParam::memoryTargetTryApproachTime;
        utEnemyCommonParam["activateChrByTime_PhantomId"] = &EnemyCommonParam::activateChrByTime_PhantomId;
        utEnemyCommonParam["findUnfavorableFailedPointDist"] = &EnemyCommonParam::findUnfavorableFailedPointDist;
        utEnemyCommonParam["findUnfavorableFailedPointHeight"] = &EnemyCommonParam::findUnfavorableFailedPointHeight;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<EnemyCommonParam>>(state, L"EnemyCommonParam");
        indexer->setFieldNames({
            {"soundTargetTryApproachTime", false},
            {"searchTargetTryApproachTime", false},
            {"memoryTargetTryApproachTime", false},
            {"activateChrByTime_PhantomId", false},
            {"findUnfavorableFailedPointDist", false},
            {"findUnfavorableFailedPointHeight", false},
        });
        return indexer;
    };
    paramsTable["EnemyCommonParam"] = tableLoader;
}

template<> void ParamTableIndexer<EnemyCommonParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,soundTargetTryApproachTime,searchTargetTryApproachTime,memoryTargetTryApproachTime,activateChrByTime_PhantomId,findUnfavorableFailedPointDist,findUnfavorableFailedPointHeight\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%d,%g,%g\n",
            this->paramId(i),
            param->soundTargetTryApproachTime,
            param->searchTargetTryApproachTime,
            param->memoryTargetTryApproachTime,
            param->activateChrByTime_PhantomId,
            param->findUnfavorableFailedPointDist,
            param->findUnfavorableFailedPointHeight
        );
    }
    fclose(f);
}

}
