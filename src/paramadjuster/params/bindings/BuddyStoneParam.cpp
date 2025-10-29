#include "../luabindings.h"
#include "../defs/BuddyStoneParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<BuddyStoneParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerBuddyStoneParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["BuddyStoneParam"]; usertype) return;
        auto indexerBuddyStoneParam = state->new_usertype<ParamTableIndexer<BuddyStoneParam>>("BuddyStoneParamTableIndexer");
        indexerBuddyStoneParam["count"] = sol::property(&ParamTableIndexer<BuddyStoneParam>::count);
        indexerBuddyStoneParam["__index"] = &ParamTableIndexer<BuddyStoneParam>::at;
        indexerBuddyStoneParam["id"] = &ParamTableIndexer<BuddyStoneParam>::paramId;
        indexerBuddyStoneParam["get"] = &ParamTableIndexer<BuddyStoneParam>::get;
        indexerBuddyStoneParam["exportToCsv"] = &ParamTableIndexer<BuddyStoneParam>::exportToCsv;
        indexerBuddyStoneParam["importFromCsv"] = &ParamTableIndexer<BuddyStoneParam>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<BuddyStoneParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<BuddyStoneParam>>(nullptr);
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"talkChrEntityId", false},
            {"eliminateTargetEntityId", false},
            {"summonedEventFlagId", false},
            {"isSpecial", false},
            {"buddyId", false},
            {"dopingSpEffectId", false},
            {"activateRange", false},
            {"overwriteReturnRange", false},
            {"overwriteActivateRegionEntityId", false},
            {"warnRegionEntityId", false},
        });
        return indexer;
    };
    paramsTable["BuddyStoneParam"] = [tableLoader]() -> auto { return tableLoader(L"BuddyStoneParam"); };
}

template<> void ParamTableIndexer<BuddyStoneParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,talkChrEntityId,eliminateTargetEntityId,summonedEventFlagId,isSpecial,buddyId,dopingSpEffectId,activateRange,overwriteReturnRange,overwriteActivateRegionEntityId,warnRegionEntityId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%u,%u,%d,%d,%u,%d,%u,%u\n",
            this->paramId(i),
            param->disableParam_NT,
            param->talkChrEntityId,
            param->eliminateTargetEntityId,
            param->summonedEventFlagId,
            param->isSpecial,
            param->buddyId,
            param->dopingSpEffectId,
            param->activateRange,
            param->overwriteReturnRange,
            param->overwriteActivateRegionEntityId,
            param->warnRegionEntityId
        );
    }
    fclose(f);
}

}
