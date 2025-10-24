#include "../luabindings.h"
#include "../defs/CharMakeMenuListItemParam.h"

namespace paramadjuster::params {

void registerCharMakeMenuListItemParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["CharMakeMenuListItemParam"]; usertype) return;
        auto indexerCharMakeMenuListItemParam = state->new_usertype<ParamTableIndexer<CharMakeMenuListItemParam>>("CharMakeMenuListItemParamTableIndexer");
        indexerCharMakeMenuListItemParam["count"] = sol::property(&ParamTableIndexer<CharMakeMenuListItemParam>::count);
        indexerCharMakeMenuListItemParam["__index"] = &ParamTableIndexer<CharMakeMenuListItemParam>::at;
        indexerCharMakeMenuListItemParam["id"] = &ParamTableIndexer<CharMakeMenuListItemParam>::paramId;
        indexerCharMakeMenuListItemParam["get"] = &ParamTableIndexer<CharMakeMenuListItemParam>::get;
        auto utCharMakeMenuListItemParam = state->new_usertype<CharMakeMenuListItemParam>("CharMakeMenuListItemParam");
        utCharMakeMenuListItemParam["value"] = &CharMakeMenuListItemParam::value;
        utCharMakeMenuListItemParam["captionId"] = &CharMakeMenuListItemParam::captionId;
        utCharMakeMenuListItemParam["iconId"] = &CharMakeMenuListItemParam::iconId;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<CharMakeMenuListItemParam>>(gParamMgr.findTable(L"CharMakeMenuListItemParam")); };
    paramsTable["CharMakeMenuListItemParam"] = tableLoader;
}

}
