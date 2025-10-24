#include "../luabindings.h"
#include "../defs/MenuPropertyLayoutParam.h"

namespace paramadjuster::params {

void registerMenuPropertyLayoutParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MenuPropertyLayoutParam"]; usertype) return;
        auto indexerMenuPropertyLayoutParam = state->new_usertype<ParamTableIndexer<MenuPropertyLayoutParam>>("MenuPropertyLayoutParamTableIndexer");
        indexerMenuPropertyLayoutParam["count"] = sol::property(&ParamTableIndexer<MenuPropertyLayoutParam>::count);
        indexerMenuPropertyLayoutParam["__index"] = &ParamTableIndexer<MenuPropertyLayoutParam>::at;
        indexerMenuPropertyLayoutParam["id"] = &ParamTableIndexer<MenuPropertyLayoutParam>::paramId;
        indexerMenuPropertyLayoutParam["get"] = &ParamTableIndexer<MenuPropertyLayoutParam>::get;
        auto utMenuPropertyLayoutParam = state->new_usertype<MenuPropertyLayoutParam>("MenuPropertyLayoutParam");
        utMenuPropertyLayoutParam["LayoutPath"] = sol::property([](MenuPropertyLayoutParam &param) -> std::string { return param.LayoutPath; }, [](MenuPropertyLayoutParam &param, const std::string& value) { cStrToFixedStr(param.LayoutPath, value); });
        utMenuPropertyLayoutParam["PropertyID"] = &MenuPropertyLayoutParam::PropertyID;
        utMenuPropertyLayoutParam["CaptionTextID"] = &MenuPropertyLayoutParam::CaptionTextID;
        utMenuPropertyLayoutParam["HelpTextID"] = &MenuPropertyLayoutParam::HelpTextID;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<MenuPropertyLayoutParam>>(gParamMgr.findTable(L"MenuPropertyLayoutParam")); };
    paramsTable["MenuPropertyLayoutParam"] = tableLoader;
}

}
