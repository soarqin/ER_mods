#include "../luabindings.h"
#include "../defs/WaypointParam.h"

namespace paramadjuster::params {

void registerWaypointParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WaypointParam"]; usertype) return;
        auto indexerWaypointParam = state->new_usertype<ParamTableIndexer<WaypointParam>>("WaypointParamTableIndexer");
        indexerWaypointParam["count"] = sol::property(&ParamTableIndexer<WaypointParam>::count);
        indexerWaypointParam["__index"] = &ParamTableIndexer<WaypointParam>::at;
        indexerWaypointParam["id"] = &ParamTableIndexer<WaypointParam>::paramId;
        indexerWaypointParam["get"] = &ParamTableIndexer<WaypointParam>::get;
        auto utWaypointParam = state->new_usertype<WaypointParam>("WaypointParam");
        utWaypointParam["attribute1"] = &WaypointParam::attribute1;
        utWaypointParam["attribute2"] = &WaypointParam::attribute2;
        utWaypointParam["attribute3"] = &WaypointParam::attribute3;
        utWaypointParam["attribute4"] = &WaypointParam::attribute4;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<WaypointParam>>(gParamMgr.findTable(L"WaypointParam")); };
    paramsTable["WaypointParam"] = tableLoader;
}

}
