#include "../luabindings.h"
#include "../defs/NpcAiActionParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<NpcAiActionParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerNpcAiActionParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["NpcAiActionParam"]; usertype) return;
        auto indexerNpcAiActionParam = state->new_usertype<ParamTableIndexer<NpcAiActionParam>>("NpcAiActionParamTableIndexer");
        indexerNpcAiActionParam["count"] = sol::property(&ParamTableIndexer<NpcAiActionParam>::count);
        indexerNpcAiActionParam["__index"] = &ParamTableIndexer<NpcAiActionParam>::at;
        indexerNpcAiActionParam["id"] = &ParamTableIndexer<NpcAiActionParam>::paramId;
        indexerNpcAiActionParam["get"] = &ParamTableIndexer<NpcAiActionParam>::get;
        indexerNpcAiActionParam["exportToCsv"] = &ParamTableIndexer<NpcAiActionParam>::exportToCsv;
        indexerNpcAiActionParam["importFromCsv"] = &ParamTableIndexer<NpcAiActionParam>::importFromCsv;
        auto utNpcAiActionParam = state->new_usertype<NpcAiActionParam>("NpcAiActionParam");
        utNpcAiActionParam["moveDir"] = &NpcAiActionParam::moveDir;
        utNpcAiActionParam["key1"] = &NpcAiActionParam::key1;
        utNpcAiActionParam["key2"] = &NpcAiActionParam::key2;
        utNpcAiActionParam["key3"] = &NpcAiActionParam::key3;
        utNpcAiActionParam["bMoveDirHold"] = &NpcAiActionParam::bMoveDirHold;
        utNpcAiActionParam["bKeyHold1"] = &NpcAiActionParam::bKeyHold1;
        utNpcAiActionParam["bKeyHold2"] = &NpcAiActionParam::bKeyHold2;
        utNpcAiActionParam["bKeyHold3"] = &NpcAiActionParam::bKeyHold3;
        utNpcAiActionParam["gestureId"] = &NpcAiActionParam::gestureId;
        utNpcAiActionParam["bLifeEndSuccess"] = &NpcAiActionParam::bLifeEndSuccess;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<NpcAiActionParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<NpcAiActionParam>>(nullptr);
        indexer->setFieldNames({
            {"moveDir", false},
            {"key1", false},
            {"key2", false},
            {"key3", false},
            {"bMoveDirHold", false},
            {"bKeyHold1", false},
            {"bKeyHold2", false},
            {"bKeyHold3", false},
            {"gestureId", false},
            {"bLifeEndSuccess", false},
        });
        return indexer;
    };
    paramsTable["NpcAiActionParam"] = [tableLoader]() -> auto { return tableLoader(L"NpcAiActionParam"); };
}

template<> void ParamTableIndexer<NpcAiActionParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,moveDir,key1,key2,key3,bMoveDirHold,bKeyHold1,bKeyHold2,bKeyHold3,gestureId,bLifeEndSuccess\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%u,%u,%u,%u,%u,%d,%u\n",
            this->paramId(i),
            param->moveDir,
            param->key1,
            param->key2,
            param->key3,
            param->bMoveDirHold,
            param->bKeyHold1,
            param->bKeyHold2,
            param->bKeyHold3,
            param->gestureId,
            param->bLifeEndSuccess
        );
    }
    fclose(f);
}

}
