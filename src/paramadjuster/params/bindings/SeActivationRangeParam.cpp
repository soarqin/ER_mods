#include "../luabindings.h"
#include "../defs/SeActivationRangeParam.h"

namespace paramadjuster::params {

void registerSeActivationRangeParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["SeActivationRangeParam"]; usertype) return;
        auto indexerSeActivationRangeParam = state->new_usertype<ParamTableIndexer<SeActivationRangeParam>>("SeActivationRangeParamTableIndexer");
        indexerSeActivationRangeParam["count"] = sol::property(&ParamTableIndexer<SeActivationRangeParam>::count);
        indexerSeActivationRangeParam["__index"] = &ParamTableIndexer<SeActivationRangeParam>::at;
        indexerSeActivationRangeParam["id"] = &ParamTableIndexer<SeActivationRangeParam>::paramId;
        indexerSeActivationRangeParam["get"] = &ParamTableIndexer<SeActivationRangeParam>::get;
        auto utSeActivationRangeParam = state->new_usertype<SeActivationRangeParam>("SeActivationRangeParam");
        utSeActivationRangeParam["activateRange"] = &SeActivationRangeParam::activateRange;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<SeActivationRangeParam>>(gParamMgr.findTable(L"SeActivationRangeParam")); };
    paramsTable["SeActivationRangeParam"] = tableLoader;
}

}
