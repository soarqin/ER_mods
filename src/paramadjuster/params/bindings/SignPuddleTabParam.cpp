#include "../luabindings.h"
#include "../defs/SignPuddleTabParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<SignPuddleTabParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerSignPuddleTabParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["SignPuddleTabParam"]; usertype) return;
        auto indexerSignPuddleTabParam = state->new_usertype<ParamTableIndexer<SignPuddleTabParam>>("SignPuddleTabParamTableIndexer");
        indexerSignPuddleTabParam["count"] = sol::property(&ParamTableIndexer<SignPuddleTabParam>::count);
        indexerSignPuddleTabParam["__index"] = &ParamTableIndexer<SignPuddleTabParam>::at;
        indexerSignPuddleTabParam["id"] = &ParamTableIndexer<SignPuddleTabParam>::paramId;
        indexerSignPuddleTabParam["get"] = &ParamTableIndexer<SignPuddleTabParam>::get;
        indexerSignPuddleTabParam["exportToCsv"] = &ParamTableIndexer<SignPuddleTabParam>::exportToCsv;
        indexerSignPuddleTabParam["importFromCsv"] = &ParamTableIndexer<SignPuddleTabParam>::importFromCsv;
        auto utSignPuddleTabParam = state->new_usertype<SignPuddleTabParam>("SignPuddleTabParam");
        utSignPuddleTabParam["isDlcTab"] = &SignPuddleTabParam::isDlcTab;
        utSignPuddleTabParam["tabTextId"] = &SignPuddleTabParam::tabTextId;
        utSignPuddleTabParam["unknown_0x8"] = &SignPuddleTabParam::unknown_0x8;
        utSignPuddleTabParam["unknown_0xc"] = &SignPuddleTabParam::unknown_0xc;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<SignPuddleTabParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<SignPuddleTabParam>>(nullptr);
        indexer->setFieldNames({
            {"isDlcTab", false},
            {"tabTextId", false},
            {"unknown_0x8", false},
            {"unknown_0xc", false},
        });
        return indexer;
    };
    paramsTable["SignPuddleTabParam"] = [tableLoader]() -> auto { return tableLoader(L"SignPuddleTabParam"); };
}

template<> void ParamTableIndexer<SignPuddleTabParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,isDlcTab,tabTextId,unknown_0x8,unknown_0xc\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%d\n",
            this->paramId(i),
            param->isDlcTab,
            param->tabTextId,
            param->unknown_0x8,
            param->unknown_0xc
        );
    }
    fclose(f);
}

}
