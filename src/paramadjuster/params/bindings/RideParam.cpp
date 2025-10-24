#include "../luabindings.h"
#include "../defs/RideParam.h"

namespace paramadjuster::params {

void registerRideParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["RideParam"]; usertype) return;
        auto indexerRideParam = state->new_usertype<ParamTableIndexer<RideParam>>("RideParamTableIndexer");
        indexerRideParam["count"] = sol::property(&ParamTableIndexer<RideParam>::count);
        indexerRideParam["__index"] = &ParamTableIndexer<RideParam>::at;
        indexerRideParam["id"] = &ParamTableIndexer<RideParam>::paramId;
        indexerRideParam["get"] = &ParamTableIndexer<RideParam>::get;
        auto utRideParam = state->new_usertype<RideParam>("RideParam");
        utRideParam["atkChrId"] = &RideParam::atkChrId;
        utRideParam["defChrId"] = &RideParam::defChrId;
        utRideParam["rideCamParamId"] = &RideParam::rideCamParamId;
        utRideParam["atkChrAnimId"] = &RideParam::atkChrAnimId;
        utRideParam["defChrAnimId"] = &RideParam::defChrAnimId;
        utRideParam["defAdjustDmyId"] = &RideParam::defAdjustDmyId;
        utRideParam["defCheckDmyId"] = &RideParam::defCheckDmyId;
        utRideParam["diffAngMyToDef"] = &RideParam::diffAngMyToDef;
        utRideParam["dist"] = &RideParam::dist;
        utRideParam["upperYRange"] = &RideParam::upperYRange;
        utRideParam["lowerYRange"] = &RideParam::lowerYRange;
        utRideParam["diffAngMin"] = &RideParam::diffAngMin;
        utRideParam["diffAngMax"] = &RideParam::diffAngMax;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<RideParam>>(gParamMgr.findTable(L"RideParam")); };
    paramsTable["RideParam"] = tableLoader;
}

}
