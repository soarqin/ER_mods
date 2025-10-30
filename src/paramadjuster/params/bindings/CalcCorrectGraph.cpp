#include "../luabindings.h"
#include "../defs/CalcCorrectGraph.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<CalcCorrectGraph>::exportToCsvImpl(const std::wstring &csvPath);

void registerCalcCorrectGraph(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["CalcCorrectGraph"]; usertype) return;
        auto indexerCalcCorrectGraph = state->new_usertype<ParamTableIndexer<CalcCorrectGraph>>("CalcCorrectGraphTableIndexer");
        indexerCalcCorrectGraph["count"] = sol::property(&ParamTableIndexer<CalcCorrectGraph>::count);
        indexerCalcCorrectGraph["__index"] = &ParamTableIndexer<CalcCorrectGraph>::at;
        indexerCalcCorrectGraph["id"] = &ParamTableIndexer<CalcCorrectGraph>::paramId;
        indexerCalcCorrectGraph["get"] = &ParamTableIndexer<CalcCorrectGraph>::get;
        indexerCalcCorrectGraph["exportToCsv"] = &ParamTableIndexer<CalcCorrectGraph>::exportToCsv;
        indexerCalcCorrectGraph["importFromCsv"] = &ParamTableIndexer<CalcCorrectGraph>::importFromCsv;
        auto utCalcCorrectGraph = state->new_usertype<CalcCorrectGraph>("CalcCorrectGraph");
        utCalcCorrectGraph["stageMaxVal0"] = &CalcCorrectGraph::stageMaxVal0;
        utCalcCorrectGraph["stageMaxVal1"] = &CalcCorrectGraph::stageMaxVal1;
        utCalcCorrectGraph["stageMaxVal2"] = &CalcCorrectGraph::stageMaxVal2;
        utCalcCorrectGraph["stageMaxVal3"] = &CalcCorrectGraph::stageMaxVal3;
        utCalcCorrectGraph["stageMaxVal4"] = &CalcCorrectGraph::stageMaxVal4;
        utCalcCorrectGraph["stageMaxGrowVal0"] = &CalcCorrectGraph::stageMaxGrowVal0;
        utCalcCorrectGraph["stageMaxGrowVal1"] = &CalcCorrectGraph::stageMaxGrowVal1;
        utCalcCorrectGraph["stageMaxGrowVal2"] = &CalcCorrectGraph::stageMaxGrowVal2;
        utCalcCorrectGraph["stageMaxGrowVal3"] = &CalcCorrectGraph::stageMaxGrowVal3;
        utCalcCorrectGraph["stageMaxGrowVal4"] = &CalcCorrectGraph::stageMaxGrowVal4;
        utCalcCorrectGraph["adjPt_maxGrowVal0"] = &CalcCorrectGraph::adjPt_maxGrowVal0;
        utCalcCorrectGraph["adjPt_maxGrowVal1"] = &CalcCorrectGraph::adjPt_maxGrowVal1;
        utCalcCorrectGraph["adjPt_maxGrowVal2"] = &CalcCorrectGraph::adjPt_maxGrowVal2;
        utCalcCorrectGraph["adjPt_maxGrowVal3"] = &CalcCorrectGraph::adjPt_maxGrowVal3;
        utCalcCorrectGraph["adjPt_maxGrowVal4"] = &CalcCorrectGraph::adjPt_maxGrowVal4;
        utCalcCorrectGraph["init_inclination_soul"] = &CalcCorrectGraph::init_inclination_soul;
        utCalcCorrectGraph["adjustment_value"] = &CalcCorrectGraph::adjustment_value;
        utCalcCorrectGraph["boundry_inclination_soul"] = &CalcCorrectGraph::boundry_inclination_soul;
        utCalcCorrectGraph["boundry_value"] = &CalcCorrectGraph::boundry_value;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<CalcCorrectGraph>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<CalcCorrectGraph>>(nullptr);
        indexer->setFieldNames({
            {"stageMaxVal0", false},
            {"stageMaxVal1", false},
            {"stageMaxVal2", false},
            {"stageMaxVal3", false},
            {"stageMaxVal4", false},
            {"stageMaxGrowVal0", false},
            {"stageMaxGrowVal1", false},
            {"stageMaxGrowVal2", false},
            {"stageMaxGrowVal3", false},
            {"stageMaxGrowVal4", false},
            {"adjPt_maxGrowVal0", false},
            {"adjPt_maxGrowVal1", false},
            {"adjPt_maxGrowVal2", false},
            {"adjPt_maxGrowVal3", false},
            {"adjPt_maxGrowVal4", false},
            {"init_inclination_soul", false},
            {"adjustment_value", false},
            {"boundry_inclination_soul", false},
            {"boundry_value", false},
        });
        return indexer;
    };
    paramsTable["CalcCorrectGraph"] = [tableLoader]() -> auto { return tableLoader(L"CalcCorrectGraph"); };
}

template<> void ParamTableIndexer<CalcCorrectGraph>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,stageMaxVal0,stageMaxVal1,stageMaxVal2,stageMaxVal3,stageMaxVal4,stageMaxGrowVal0,stageMaxGrowVal1,stageMaxGrowVal2,stageMaxGrowVal3,stageMaxGrowVal4,adjPt_maxGrowVal0,adjPt_maxGrowVal1,adjPt_maxGrowVal2,adjPt_maxGrowVal3,adjPt_maxGrowVal4");
    fwprintf(f, L",init_inclination_soul,adjustment_value,boundry_inclination_soul,boundry_value\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g\n",
            this->paramId(i),
            param->stageMaxVal0,
            param->stageMaxVal1,
            param->stageMaxVal2,
            param->stageMaxVal3,
            param->stageMaxVal4,
            param->stageMaxGrowVal0,
            param->stageMaxGrowVal1,
            param->stageMaxGrowVal2,
            param->stageMaxGrowVal3,
            param->stageMaxGrowVal4,
            param->adjPt_maxGrowVal0,
            param->adjPt_maxGrowVal1,
            param->adjPt_maxGrowVal2,
            param->adjPt_maxGrowVal3,
            param->adjPt_maxGrowVal4,
            param->init_inclination_soul,
            param->adjustment_value,
            param->boundry_inclination_soul,
            param->boundry_value
        );
    }
    fclose(f);
}

}
