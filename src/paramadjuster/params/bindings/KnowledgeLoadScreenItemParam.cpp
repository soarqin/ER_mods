#include "../luabindings.h"
#include "../defs/KnowledgeLoadScreenItemParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<KnowledgeLoadScreenItemParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerKnowledgeLoadScreenItemParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["KnowledgeLoadScreenItemParam"]; usertype) return;
        auto indexerKnowledgeLoadScreenItemParam = state->new_usertype<ParamTableIndexer<KnowledgeLoadScreenItemParam>>("KnowledgeLoadScreenItemParamTableIndexer");
        indexerKnowledgeLoadScreenItemParam["count"] = sol::property(&ParamTableIndexer<KnowledgeLoadScreenItemParam>::count);
        indexerKnowledgeLoadScreenItemParam["__index"] = &ParamTableIndexer<KnowledgeLoadScreenItemParam>::at;
        indexerKnowledgeLoadScreenItemParam["id"] = &ParamTableIndexer<KnowledgeLoadScreenItemParam>::paramId;
        indexerKnowledgeLoadScreenItemParam["get"] = &ParamTableIndexer<KnowledgeLoadScreenItemParam>::get;
        indexerKnowledgeLoadScreenItemParam["exportToCsv"] = &ParamTableIndexer<KnowledgeLoadScreenItemParam>::exportToCsv;
        indexerKnowledgeLoadScreenItemParam["importFromCsv"] = &ParamTableIndexer<KnowledgeLoadScreenItemParam>::importFromCsv;
        auto utKnowledgeLoadScreenItemParam = state->new_usertype<KnowledgeLoadScreenItemParam>("KnowledgeLoadScreenItemParam");
        utKnowledgeLoadScreenItemParam["disableParam_NT"] = sol::property([](KnowledgeLoadScreenItemParam &param) -> uint8_t { return param.disableParam_NT; }, [](KnowledgeLoadScreenItemParam &param, uint8_t value) { param.disableParam_NT = value; });
        utKnowledgeLoadScreenItemParam["unlockFlagId"] = &KnowledgeLoadScreenItemParam::unlockFlagId;
        utKnowledgeLoadScreenItemParam["invalidFlagId"] = &KnowledgeLoadScreenItemParam::invalidFlagId;
        utKnowledgeLoadScreenItemParam["msgId"] = &KnowledgeLoadScreenItemParam::msgId;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<KnowledgeLoadScreenItemParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<KnowledgeLoadScreenItemParam>>(nullptr);
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"unlockFlagId", false},
            {"invalidFlagId", false},
            {"msgId", false},
        });
        return indexer;
    };
    paramsTable["KnowledgeLoadScreenItemParam"] = [tableLoader]() -> auto { return tableLoader(L"KnowledgeLoadScreenItemParam"); };
}

template<> void ParamTableIndexer<KnowledgeLoadScreenItemParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,unlockFlagId,invalidFlagId,msgId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%d\n",
            this->paramId(i),
            param->disableParam_NT,
            param->unlockFlagId,
            param->invalidFlagId,
            param->msgId
        );
    }
    fclose(f);
}

}
