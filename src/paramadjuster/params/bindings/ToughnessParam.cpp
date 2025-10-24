#include "../luabindings.h"
#include "../defs/ToughnessParam.h"

namespace paramadjuster::params {

void registerToughnessParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ToughnessParam"]; usertype) return;
        auto indexerToughnessParam = state->new_usertype<ParamTableIndexer<ToughnessParam>>("ToughnessParamTableIndexer");
        indexerToughnessParam["count"] = sol::property(&ParamTableIndexer<ToughnessParam>::count);
        indexerToughnessParam["__index"] = &ParamTableIndexer<ToughnessParam>::at;
        indexerToughnessParam["id"] = &ParamTableIndexer<ToughnessParam>::paramId;
        indexerToughnessParam["get"] = &ParamTableIndexer<ToughnessParam>::get;
        auto utToughnessParam = state->new_usertype<ToughnessParam>("ToughnessParam");
        utToughnessParam["correctionRate"] = &ToughnessParam::correctionRate;
        utToughnessParam["minToughness"] = &ToughnessParam::minToughness;
        utToughnessParam["isNonEffectiveCorrectionForMin"] = &ToughnessParam::isNonEffectiveCorrectionForMin;
        utToughnessParam["spEffectId"] = &ToughnessParam::spEffectId;
        utToughnessParam["proCorrectionRate"] = &ToughnessParam::proCorrectionRate;
        utToughnessParam["unk1"] = &ToughnessParam::unk1;
        utToughnessParam["unk2"] = &ToughnessParam::unk2;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<ToughnessParam>>(gParamMgr.findTable(L"ToughnessParam")); };
    paramsTable["ToughnessParam"] = tableLoader;
}

}
