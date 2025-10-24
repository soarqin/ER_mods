#include "../luabindings.h"
#include "../defs/MapGridCreateHeightLimitInfo.h"

namespace paramadjuster::params {

void registerMapGridCreateHeightLimitInfo(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MapGridCreateHeightLimitInfo"]; usertype) return;
        auto indexerMapGridCreateHeightLimitInfo = state->new_usertype<ParamTableIndexer<MapGridCreateHeightLimitInfo>>("MapGridCreateHeightLimitInfoTableIndexer");
        indexerMapGridCreateHeightLimitInfo["count"] = sol::property(&ParamTableIndexer<MapGridCreateHeightLimitInfo>::count);
        indexerMapGridCreateHeightLimitInfo["__index"] = &ParamTableIndexer<MapGridCreateHeightLimitInfo>::at;
        indexerMapGridCreateHeightLimitInfo["id"] = &ParamTableIndexer<MapGridCreateHeightLimitInfo>::paramId;
        indexerMapGridCreateHeightLimitInfo["get"] = &ParamTableIndexer<MapGridCreateHeightLimitInfo>::get;
        auto utMapGridCreateHeightLimitInfo = state->new_usertype<MapGridCreateHeightLimitInfo>("MapGridCreateHeightLimitInfo");
        utMapGridCreateHeightLimitInfo["GridEnableCreateHeightMin"] = &MapGridCreateHeightLimitInfo::GridEnableCreateHeightMin;
        utMapGridCreateHeightLimitInfo["GridEnableCreateHeightMax"] = &MapGridCreateHeightLimitInfo::GridEnableCreateHeightMax;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<MapGridCreateHeightLimitInfo>>(gParamMgr.findTable(L"MapGridCreateHeightLimitInfo")); };
    paramsTable["MapGridCreateHeightLimitInfoParam"] = tableLoader;
}

}
