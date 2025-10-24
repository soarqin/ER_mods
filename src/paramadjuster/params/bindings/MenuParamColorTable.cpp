#include "../luabindings.h"
#include "../defs/MenuParamColorTable.h"

namespace paramadjuster::params {

void registerMenuParamColorTable(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MenuParamColorTable"]; usertype) return;
        auto indexerMenuParamColorTable = state->new_usertype<ParamTableIndexer<MenuParamColorTable>>("MenuParamColorTableTableIndexer");
        indexerMenuParamColorTable["count"] = sol::property(&ParamTableIndexer<MenuParamColorTable>::count);
        indexerMenuParamColorTable["__index"] = &ParamTableIndexer<MenuParamColorTable>::at;
        indexerMenuParamColorTable["id"] = &ParamTableIndexer<MenuParamColorTable>::paramId;
        indexerMenuParamColorTable["get"] = &ParamTableIndexer<MenuParamColorTable>::get;
        auto utMenuParamColorTable = state->new_usertype<MenuParamColorTable>("MenuParamColorTable");
        utMenuParamColorTable["lerpMode"] = &MenuParamColorTable::lerpMode;
        utMenuParamColorTable["h"] = &MenuParamColorTable::h;
        utMenuParamColorTable["s1"] = &MenuParamColorTable::s1;
        utMenuParamColorTable["v1"] = &MenuParamColorTable::v1;
        utMenuParamColorTable["s2"] = &MenuParamColorTable::s2;
        utMenuParamColorTable["v2"] = &MenuParamColorTable::v2;
        utMenuParamColorTable["s3"] = &MenuParamColorTable::s3;
        utMenuParamColorTable["v3"] = &MenuParamColorTable::v3;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<MenuParamColorTable>>(gParamMgr.findTable(L"MenuParamColorTable")); };
    paramsTable["MenuColorTableParam"] = tableLoader;
}

}
