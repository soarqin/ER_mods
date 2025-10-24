#include "../luabindings.h"
#include "../defs/KeyAssignMenuItemParam.h"

namespace paramadjuster::params {

void registerKeyAssignMenuItemParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["KeyAssignMenuItemParam"]; usertype) return;
        auto indexerKeyAssignMenuItemParam = state->new_usertype<ParamTableIndexer<KeyAssignMenuItemParam>>("KeyAssignMenuItemParamTableIndexer");
        indexerKeyAssignMenuItemParam["count"] = sol::property(&ParamTableIndexer<KeyAssignMenuItemParam>::count);
        indexerKeyAssignMenuItemParam["__index"] = &ParamTableIndexer<KeyAssignMenuItemParam>::at;
        indexerKeyAssignMenuItemParam["id"] = &ParamTableIndexer<KeyAssignMenuItemParam>::paramId;
        indexerKeyAssignMenuItemParam["get"] = &ParamTableIndexer<KeyAssignMenuItemParam>::get;
        auto utKeyAssignMenuItemParam = state->new_usertype<KeyAssignMenuItemParam>("KeyAssignMenuItemParam");
        utKeyAssignMenuItemParam["textID"] = &KeyAssignMenuItemParam::textID;
        utKeyAssignMenuItemParam["key"] = &KeyAssignMenuItemParam::key;
        utKeyAssignMenuItemParam["enableUnassign"] = &KeyAssignMenuItemParam::enableUnassign;
        utKeyAssignMenuItemParam["enablePadConfig"] = &KeyAssignMenuItemParam::enablePadConfig;
        utKeyAssignMenuItemParam["enableMouseConfig"] = &KeyAssignMenuItemParam::enableMouseConfig;
        utKeyAssignMenuItemParam["group"] = &KeyAssignMenuItemParam::group;
        utKeyAssignMenuItemParam["mappingTextID"] = &KeyAssignMenuItemParam::mappingTextID;
        utKeyAssignMenuItemParam["viewPad"] = &KeyAssignMenuItemParam::viewPad;
        utKeyAssignMenuItemParam["viewKeyboardMouse"] = &KeyAssignMenuItemParam::viewKeyboardMouse;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<KeyAssignMenuItemParam>>(gParamMgr.findTable(L"KeyAssignMenuItemParam")); };
    paramsTable["KeyAssignMenuItemParam"] = tableLoader;
}

}
