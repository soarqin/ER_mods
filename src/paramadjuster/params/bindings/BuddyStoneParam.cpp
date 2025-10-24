#include "../luabindings.h"
#include "../defs/BuddyStoneParam.h"

namespace paramadjuster::params {

void registerBuddyStoneParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["BuddyStoneParam"]; usertype) return;
        auto indexerBuddyStoneParam = state->new_usertype<ParamTableIndexer<BuddyStoneParam>>("BuddyStoneParamTableIndexer");
        indexerBuddyStoneParam["count"] = sol::property(&ParamTableIndexer<BuddyStoneParam>::count);
        indexerBuddyStoneParam["__index"] = &ParamTableIndexer<BuddyStoneParam>::at;
        indexerBuddyStoneParam["id"] = &ParamTableIndexer<BuddyStoneParam>::paramId;
        indexerBuddyStoneParam["get"] = &ParamTableIndexer<BuddyStoneParam>::get;
        auto utBuddyStoneParam = state->new_usertype<BuddyStoneParam>("BuddyStoneParam");
        utBuddyStoneParam["disableParam_NT"] = sol::property([](BuddyStoneParam &param) -> uint8_t { return param.disableParam_NT; }, [](BuddyStoneParam &param, uint8_t value) { param.disableParam_NT = value; });
        utBuddyStoneParam["talkChrEntityId"] = &BuddyStoneParam::talkChrEntityId;
        utBuddyStoneParam["eliminateTargetEntityId"] = &BuddyStoneParam::eliminateTargetEntityId;
        utBuddyStoneParam["summonedEventFlagId"] = &BuddyStoneParam::summonedEventFlagId;
        utBuddyStoneParam["isSpecial"] = sol::property([](BuddyStoneParam &param) -> uint8_t { return param.isSpecial; }, [](BuddyStoneParam &param, uint8_t value) { param.isSpecial = value; });
        utBuddyStoneParam["buddyId"] = &BuddyStoneParam::buddyId;
        utBuddyStoneParam["dopingSpEffectId"] = &BuddyStoneParam::dopingSpEffectId;
        utBuddyStoneParam["activateRange"] = &BuddyStoneParam::activateRange;
        utBuddyStoneParam["overwriteReturnRange"] = &BuddyStoneParam::overwriteReturnRange;
        utBuddyStoneParam["overwriteActivateRegionEntityId"] = &BuddyStoneParam::overwriteActivateRegionEntityId;
        utBuddyStoneParam["warnRegionEntityId"] = &BuddyStoneParam::warnRegionEntityId;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<BuddyStoneParam>>(gParamMgr.findTable(L"BuddyStoneParam")); };
    paramsTable["BuddyStoneParam"] = tableLoader;
}

}
