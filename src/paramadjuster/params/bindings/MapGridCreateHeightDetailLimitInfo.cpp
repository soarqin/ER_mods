#include "../luabindings.h"
#include "../defs/MapGridCreateHeightDetailLimitInfo.h"

namespace paramadjuster::params {

void registerMapGridCreateHeightDetailLimitInfo(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MapGridCreateHeightDetailLimitInfo"]; usertype) return;
        auto indexerMapGridCreateHeightDetailLimitInfo = state->new_usertype<ParamTableIndexer<MapGridCreateHeightDetailLimitInfo>>("MapGridCreateHeightDetailLimitInfoTableIndexer");
        indexerMapGridCreateHeightDetailLimitInfo["count"] = sol::property(&ParamTableIndexer<MapGridCreateHeightDetailLimitInfo>::count);
        indexerMapGridCreateHeightDetailLimitInfo["__index"] = &ParamTableIndexer<MapGridCreateHeightDetailLimitInfo>::at;
        indexerMapGridCreateHeightDetailLimitInfo["id"] = &ParamTableIndexer<MapGridCreateHeightDetailLimitInfo>::paramId;
        indexerMapGridCreateHeightDetailLimitInfo["get"] = &ParamTableIndexer<MapGridCreateHeightDetailLimitInfo>::get;
        auto utMapGridCreateHeightDetailLimitInfo = state->new_usertype<MapGridCreateHeightDetailLimitInfo>("MapGridCreateHeightDetailLimitInfo");
        utMapGridCreateHeightDetailLimitInfo["mapId"] = &MapGridCreateHeightDetailLimitInfo::mapId;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x4"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x4;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x8"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x8;
        utMapGridCreateHeightDetailLimitInfo["unknown_0xc"] = &MapGridCreateHeightDetailLimitInfo::unknown_0xc;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x10"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x10;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x14"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x14;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x18"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x18;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x1c"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x1c;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x20"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x20;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x24"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x24;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x28"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x28;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x2c"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x2c;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x2d"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x2d;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x2e"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x2e;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x2f"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x2f;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x30"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x30;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x31"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x31;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x32"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x32;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x34"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x34;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x38"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x38;
        utMapGridCreateHeightDetailLimitInfo["unknown_0x3c"] = &MapGridCreateHeightDetailLimitInfo::unknown_0x3c;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<MapGridCreateHeightDetailLimitInfo>>(gParamMgr.findTable(L"MapGridCreateHeightDetailLimitInfo")); };
    paramsTable["MapGridCreateHeightDetailLimitInfo"] = tableLoader;
}

}
