#include "../luabindings.h"
#include "../defs/KeyAssignParam.h"

namespace paramadjuster::params {

void registerKeyAssignParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["KeyAssignParam"]; usertype) return;
        auto indexerKeyAssignParam = state->new_usertype<ParamTableIndexer<KeyAssignParam>>("KeyAssignParamTableIndexer");
        indexerKeyAssignParam["count"] = sol::property(&ParamTableIndexer<KeyAssignParam>::count);
        indexerKeyAssignParam["__index"] = &ParamTableIndexer<KeyAssignParam>::at;
        indexerKeyAssignParam["id"] = &ParamTableIndexer<KeyAssignParam>::paramId;
        indexerKeyAssignParam["get"] = &ParamTableIndexer<KeyAssignParam>::get;
        auto utKeyAssignParam = state->new_usertype<KeyAssignParam>("KeyAssignParam");
        utKeyAssignParam["padKeyId"] = &KeyAssignParam::padKeyId;
        utKeyAssignParam["keyboardModifyKey"] = &KeyAssignParam::keyboardModifyKey;
        utKeyAssignParam["keyboardKeyId"] = &KeyAssignParam::keyboardKeyId;
        utKeyAssignParam["mouseModifyKey"] = &KeyAssignParam::mouseModifyKey;
        utKeyAssignParam["mouseKeyId"] = &KeyAssignParam::mouseKeyId;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<KeyAssignParam>>(gParamMgr.findTable(L"KeyAssignParam")); };
    paramsTable["KeyAssignParam_TypeA"] = tableLoader;
    paramsTable["KeyAssignParam_TypeB"] = tableLoader;
    paramsTable["KeyAssignParam_TypeC"] = tableLoader;
}

}
