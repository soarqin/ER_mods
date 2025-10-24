#include "../luabindings.h"
#include "../defs/CalcCorrectGraph.h"

namespace paramadjuster::params {

void registerCalcCorrectGraph(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["CalcCorrectGraph"]; usertype) return;
        auto indexerCalcCorrectGraph = state->new_usertype<ParamTableIndexer<CalcCorrectGraph>>("CalcCorrectGraphTableIndexer");
        indexerCalcCorrectGraph["count"] = sol::property(&ParamTableIndexer<CalcCorrectGraph>::count);
        indexerCalcCorrectGraph["__index"] = &ParamTableIndexer<CalcCorrectGraph>::at;
        indexerCalcCorrectGraph["id"] = &ParamTableIndexer<CalcCorrectGraph>::paramId;
        indexerCalcCorrectGraph["get"] = &ParamTableIndexer<CalcCorrectGraph>::get;
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
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<CalcCorrectGraph>>(gParamMgr.findTable(L"CalcCorrectGraph")); };
    paramsTable["CalcCorrectGraph"] = tableLoader;
}

}
