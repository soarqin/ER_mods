#include "../luabindings.h"
#include "../defs/MenuValueTableSpecParam.h"

namespace paramadjuster::params {

void registerMenuValueTableSpecParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MenuValueTableSpecParam"]; usertype) return;
        auto indexerMenuValueTableSpecParam = state->new_usertype<ParamTableIndexer<MenuValueTableSpecParam>>("MenuValueTableSpecParamTableIndexer");
        indexerMenuValueTableSpecParam["count"] = sol::property(&ParamTableIndexer<MenuValueTableSpecParam>::count);
        indexerMenuValueTableSpecParam["__index"] = &ParamTableIndexer<MenuValueTableSpecParam>::at;
        indexerMenuValueTableSpecParam["id"] = &ParamTableIndexer<MenuValueTableSpecParam>::paramId;
        indexerMenuValueTableSpecParam["get"] = &ParamTableIndexer<MenuValueTableSpecParam>::get;
        auto utMenuValueTableSpecParam = state->new_usertype<MenuValueTableSpecParam>("MenuValueTableSpecParam");
        utMenuValueTableSpecParam["value"] = &MenuValueTableSpecParam::value;
        utMenuValueTableSpecParam["textId"] = &MenuValueTableSpecParam::textId;
        utMenuValueTableSpecParam["compareType"] = &MenuValueTableSpecParam::compareType;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<MenuValueTableSpecParam>>(gParamMgr.findTable(L"MenuValueTableSpecParam")); };
    paramsTable["MenuValueTableParam"] = tableLoader;
}

}
