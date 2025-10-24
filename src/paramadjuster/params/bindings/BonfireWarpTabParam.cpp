#include "../luabindings.h"
#include "../defs/BonfireWarpTabParam.h"

namespace paramadjuster::params {

void registerBonfireWarpTabParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["BonfireWarpTabParam"]; usertype) return;
        auto indexerBonfireWarpTabParam = state->new_usertype<ParamTableIndexer<BonfireWarpTabParam>>("BonfireWarpTabParamTableIndexer");
        indexerBonfireWarpTabParam["count"] = sol::property(&ParamTableIndexer<BonfireWarpTabParam>::count);
        indexerBonfireWarpTabParam["__index"] = &ParamTableIndexer<BonfireWarpTabParam>::at;
        indexerBonfireWarpTabParam["id"] = &ParamTableIndexer<BonfireWarpTabParam>::paramId;
        indexerBonfireWarpTabParam["get"] = &ParamTableIndexer<BonfireWarpTabParam>::get;
        auto utBonfireWarpTabParam = state->new_usertype<BonfireWarpTabParam>("BonfireWarpTabParam");
        utBonfireWarpTabParam["disableParam_NT"] = sol::property([](BonfireWarpTabParam &param) -> uint8_t { return param.disableParam_NT; }, [](BonfireWarpTabParam &param, uint8_t value) { param.disableParam_NT = value; });
        utBonfireWarpTabParam["textId"] = &BonfireWarpTabParam::textId;
        utBonfireWarpTabParam["sortId"] = &BonfireWarpTabParam::sortId;
        utBonfireWarpTabParam["iconId"] = &BonfireWarpTabParam::iconId;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<BonfireWarpTabParam>>(gParamMgr.findTable(L"BonfireWarpTabParam")); };
    paramsTable["BonfireWarpTabParam"] = tableLoader;
}

}
