#include "../luabindings.h"
#include "../defs/SignPuddleSubCategoryParam.h"

namespace paramadjuster::params {

void registerSignPuddleSubCategoryParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["SignPuddleSubCategoryParam"]; usertype) return;
        auto indexerSignPuddleSubCategoryParam = state->new_usertype<ParamTableIndexer<SignPuddleSubCategoryParam>>("SignPuddleSubCategoryParamTableIndexer");
        indexerSignPuddleSubCategoryParam["count"] = sol::property(&ParamTableIndexer<SignPuddleSubCategoryParam>::count);
        indexerSignPuddleSubCategoryParam["__index"] = &ParamTableIndexer<SignPuddleSubCategoryParam>::at;
        indexerSignPuddleSubCategoryParam["id"] = &ParamTableIndexer<SignPuddleSubCategoryParam>::paramId;
        indexerSignPuddleSubCategoryParam["get"] = &ParamTableIndexer<SignPuddleSubCategoryParam>::get;
        auto utSignPuddleSubCategoryParam = state->new_usertype<SignPuddleSubCategoryParam>("SignPuddleSubCategoryParam");
        utSignPuddleSubCategoryParam["signPuddleCategoryText"] = &SignPuddleSubCategoryParam::signPuddleCategoryText;
        utSignPuddleSubCategoryParam["signPuddleTabId"] = &SignPuddleSubCategoryParam::signPuddleTabId;
        utSignPuddleSubCategoryParam["unknown_0xa"] = &SignPuddleSubCategoryParam::unknown_0xa;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<SignPuddleSubCategoryParam>>(gParamMgr.findTable(L"SignPuddleSubCategoryParam")); };
    paramsTable["SignPuddleSubCategoryParam"] = tableLoader;
}

}
