#include "../luabindings.h"
#include "../defs/BehaviorParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<BehaviorParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerBehaviorParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["BehaviorParam"]; usertype) return;
        auto indexerBehaviorParam = state->new_usertype<ParamTableIndexer<BehaviorParam>>("BehaviorParamTableIndexer");
        indexerBehaviorParam["count"] = sol::property(&ParamTableIndexer<BehaviorParam>::count);
        indexerBehaviorParam["__index"] = &ParamTableIndexer<BehaviorParam>::at;
        indexerBehaviorParam["id"] = &ParamTableIndexer<BehaviorParam>::paramId;
        indexerBehaviorParam["get"] = &ParamTableIndexer<BehaviorParam>::get;
        indexerBehaviorParam["exportToCsv"] = &ParamTableIndexer<BehaviorParam>::exportToCsv;
        indexerBehaviorParam["importFromCsv"] = &ParamTableIndexer<BehaviorParam>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<BehaviorParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<BehaviorParam>>(nullptr);
        indexer->setFieldNames({
            {"variationId", false},
            {"behaviorJudgeId", false},
            {"ezStateBehaviorType_old", false},
            {"refType", false},
            {"refId", false},
            {"consumeSA", false},
            {"stamina", false},
            {"consumeDurability", false},
            {"category", false},
            {"heroPoint", false},
        });
        return indexer;
    };
    paramsTable["BehaviorParam"] = [tableLoader]() -> auto { return tableLoader(L"BehaviorParam"); };
    paramsTable["BehaviorParam_PC"] = [tableLoader]() -> auto { return tableLoader(L"BehaviorParam_PC"); };
}

template<> void ParamTableIndexer<BehaviorParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,variationId,behaviorJudgeId,ezStateBehaviorType_old,refType,refId,consumeSA,stamina,consumeDurability,category,heroPoint\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%u,%u,%d,%g,%d,%d,%u,%u\n",
            this->paramId(i),
            param->variationId,
            param->behaviorJudgeId,
            param->ezStateBehaviorType_old,
            param->refType,
            param->refId,
            param->consumeSA,
            param->stamina,
            param->consumeDurability,
            param->category,
            param->heroPoint
        );
    }
    fclose(f);
}

}
