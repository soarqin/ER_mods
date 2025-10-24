#include "../luabindings.h"
#include "../defs/SignPuddleTabParam.h"

namespace paramadjuster::params {

void registerSignPuddleTabParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["SignPuddleTabParam"]; usertype) return;
        auto indexerSignPuddleTabParam = state->new_usertype<ParamTableIndexer<SignPuddleTabParam>>("SignPuddleTabParamTableIndexer");
        indexerSignPuddleTabParam["count"] = sol::property(&ParamTableIndexer<SignPuddleTabParam>::count);
        indexerSignPuddleTabParam["__index"] = &ParamTableIndexer<SignPuddleTabParam>::at;
        indexerSignPuddleTabParam["id"] = &ParamTableIndexer<SignPuddleTabParam>::paramId;
        indexerSignPuddleTabParam["get"] = &ParamTableIndexer<SignPuddleTabParam>::get;
        auto utSignPuddleTabParam = state->new_usertype<SignPuddleTabParam>("SignPuddleTabParam");
        utSignPuddleTabParam["isDlcTab"] = &SignPuddleTabParam::isDlcTab;
        utSignPuddleTabParam["tabTextId"] = &SignPuddleTabParam::tabTextId;
        utSignPuddleTabParam["unknown_0x8"] = &SignPuddleTabParam::unknown_0x8;
        utSignPuddleTabParam["unknown_0xc"] = &SignPuddleTabParam::unknown_0xc;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<SignPuddleTabParam>>(gParamMgr.findTable(L"SignPuddleTabParam")); };
    paramsTable["SignPuddleTabParam"] = tableLoader;
}

}
