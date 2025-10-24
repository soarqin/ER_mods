#include "../luabindings.h"
#include "../defs/KnowledgeLoadScreenItemParam.h"

namespace paramadjuster::params {

void registerKnowledgeLoadScreenItemParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["KnowledgeLoadScreenItemParam"]; usertype) return;
        auto indexerKnowledgeLoadScreenItemParam = state->new_usertype<ParamTableIndexer<KnowledgeLoadScreenItemParam>>("KnowledgeLoadScreenItemParamTableIndexer");
        indexerKnowledgeLoadScreenItemParam["count"] = sol::property(&ParamTableIndexer<KnowledgeLoadScreenItemParam>::count);
        indexerKnowledgeLoadScreenItemParam["__index"] = &ParamTableIndexer<KnowledgeLoadScreenItemParam>::at;
        indexerKnowledgeLoadScreenItemParam["id"] = &ParamTableIndexer<KnowledgeLoadScreenItemParam>::paramId;
        indexerKnowledgeLoadScreenItemParam["get"] = &ParamTableIndexer<KnowledgeLoadScreenItemParam>::get;
        auto utKnowledgeLoadScreenItemParam = state->new_usertype<KnowledgeLoadScreenItemParam>("KnowledgeLoadScreenItemParam");
        utKnowledgeLoadScreenItemParam["disableParam_NT"] = sol::property([](KnowledgeLoadScreenItemParam &param) -> uint8_t { return param.disableParam_NT; }, [](KnowledgeLoadScreenItemParam &param, uint8_t value) { param.disableParam_NT = value; });
        utKnowledgeLoadScreenItemParam["unlockFlagId"] = &KnowledgeLoadScreenItemParam::unlockFlagId;
        utKnowledgeLoadScreenItemParam["invalidFlagId"] = &KnowledgeLoadScreenItemParam::invalidFlagId;
        utKnowledgeLoadScreenItemParam["msgId"] = &KnowledgeLoadScreenItemParam::msgId;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<KnowledgeLoadScreenItemParam>>(gParamMgr.findTable(L"KnowledgeLoadScreenItemParam")); };
    paramsTable["KnowledgeLoadScreenItemParam"] = tableLoader;
}

}
