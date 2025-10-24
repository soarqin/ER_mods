#include "../luabindings.h"
#include "../defs/MenuPropertySpecParam.h"

namespace paramadjuster::params {

void registerMenuPropertySpecParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MenuPropertySpecParam"]; usertype) return;
        auto indexerMenuPropertySpecParam = state->new_usertype<ParamTableIndexer<MenuPropertySpecParam>>("MenuPropertySpecParamTableIndexer");
        indexerMenuPropertySpecParam["count"] = sol::property(&ParamTableIndexer<MenuPropertySpecParam>::count);
        indexerMenuPropertySpecParam["__index"] = &ParamTableIndexer<MenuPropertySpecParam>::at;
        indexerMenuPropertySpecParam["id"] = &ParamTableIndexer<MenuPropertySpecParam>::paramId;
        indexerMenuPropertySpecParam["get"] = &ParamTableIndexer<MenuPropertySpecParam>::get;
        auto utMenuPropertySpecParam = state->new_usertype<MenuPropertySpecParam>("MenuPropertySpecParam");
        utMenuPropertySpecParam["CaptionTextID"] = &MenuPropertySpecParam::CaptionTextID;
        utMenuPropertySpecParam["IconID"] = &MenuPropertySpecParam::IconID;
        utMenuPropertySpecParam["RequiredPropertyID"] = &MenuPropertySpecParam::RequiredPropertyID;
        utMenuPropertySpecParam["CompareType"] = &MenuPropertySpecParam::CompareType;
        utMenuPropertySpecParam["FormatType"] = &MenuPropertySpecParam::FormatType;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<MenuPropertySpecParam>>(gParamMgr.findTable(L"MenuPropertySpecParam")); };
    paramsTable["MenuPropertySpecParam"] = tableLoader;
}

}
