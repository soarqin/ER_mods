#include "../luabindings.h"
#include "../defs/CharMakeMenuTopParam.h"

namespace paramadjuster::params {

void registerCharMakeMenuTopParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["CharMakeMenuTopParam"]; usertype) return;
        auto indexerCharMakeMenuTopParam = state->new_usertype<ParamTableIndexer<CharMakeMenuTopParam>>("CharMakeMenuTopParamTableIndexer");
        indexerCharMakeMenuTopParam["count"] = sol::property(&ParamTableIndexer<CharMakeMenuTopParam>::count);
        indexerCharMakeMenuTopParam["__index"] = &ParamTableIndexer<CharMakeMenuTopParam>::at;
        indexerCharMakeMenuTopParam["id"] = &ParamTableIndexer<CharMakeMenuTopParam>::paramId;
        indexerCharMakeMenuTopParam["get"] = &ParamTableIndexer<CharMakeMenuTopParam>::get;
        auto utCharMakeMenuTopParam = state->new_usertype<CharMakeMenuTopParam>("CharMakeMenuTopParam");
        utCharMakeMenuTopParam["commandType"] = &CharMakeMenuTopParam::commandType;
        utCharMakeMenuTopParam["captionId"] = &CharMakeMenuTopParam::captionId;
        utCharMakeMenuTopParam["faceParamId"] = &CharMakeMenuTopParam::faceParamId;
        utCharMakeMenuTopParam["tableId"] = &CharMakeMenuTopParam::tableId;
        utCharMakeMenuTopParam["viewCondition"] = &CharMakeMenuTopParam::viewCondition;
        utCharMakeMenuTopParam["previewMode"] = &CharMakeMenuTopParam::previewMode;
        utCharMakeMenuTopParam["tableId2"] = &CharMakeMenuTopParam::tableId2;
        utCharMakeMenuTopParam["refFaceParamId"] = &CharMakeMenuTopParam::refFaceParamId;
        utCharMakeMenuTopParam["refTextId"] = &CharMakeMenuTopParam::refTextId;
        utCharMakeMenuTopParam["helpTextId"] = &CharMakeMenuTopParam::helpTextId;
        utCharMakeMenuTopParam["unlockEventFlagId"] = &CharMakeMenuTopParam::unlockEventFlagId;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<CharMakeMenuTopParam>>(gParamMgr.findTable(L"CharMakeMenuTopParam")); };
    paramsTable["CharMakeMenuTopParam"] = tableLoader;
}

}
