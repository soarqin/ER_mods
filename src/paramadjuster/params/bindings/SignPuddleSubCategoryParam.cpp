#include "../luabindings.h"
#include "../defs/SignPuddleSubCategoryParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<SignPuddleSubCategoryParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerSignPuddleSubCategoryParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["SignPuddleSubCategoryParam"]; usertype) return;
        auto indexerSignPuddleSubCategoryParam = state->new_usertype<ParamTableIndexer<SignPuddleSubCategoryParam>>("SignPuddleSubCategoryParamTableIndexer");
        indexerSignPuddleSubCategoryParam["count"] = sol::property(&ParamTableIndexer<SignPuddleSubCategoryParam>::count);
        indexerSignPuddleSubCategoryParam["__index"] = &ParamTableIndexer<SignPuddleSubCategoryParam>::at;
        indexerSignPuddleSubCategoryParam["id"] = &ParamTableIndexer<SignPuddleSubCategoryParam>::paramId;
        indexerSignPuddleSubCategoryParam["get"] = &ParamTableIndexer<SignPuddleSubCategoryParam>::get;
        indexerSignPuddleSubCategoryParam["exportToCsv"] = &ParamTableIndexer<SignPuddleSubCategoryParam>::exportToCsv;
        indexerSignPuddleSubCategoryParam["importFromCsv"] = &ParamTableIndexer<SignPuddleSubCategoryParam>::importFromCsv;
        auto utSignPuddleSubCategoryParam = state->new_usertype<SignPuddleSubCategoryParam>("SignPuddleSubCategoryParam");
        utSignPuddleSubCategoryParam["signPuddleCategoryText"] = &SignPuddleSubCategoryParam::signPuddleCategoryText;
        utSignPuddleSubCategoryParam["signPuddleTabId"] = &SignPuddleSubCategoryParam::signPuddleTabId;
        utSignPuddleSubCategoryParam["unknown_0xa"] = &SignPuddleSubCategoryParam::unknown_0xa;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<SignPuddleSubCategoryParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<SignPuddleSubCategoryParam>>(nullptr);
        indexer->setFieldNames({
            {"signPuddleCategoryText", false},
            {"signPuddleTabId", false},
            {"unknown_0xa", false},
        });
        return indexer;
    };
    paramsTable["SignPuddleSubCategoryParam"] = [tableLoader]() -> auto { return tableLoader(L"SignPuddleSubCategoryParam"); };
}

template<> void ParamTableIndexer<SignPuddleSubCategoryParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,signPuddleCategoryText,signPuddleTabId,unknown_0xa\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%u,%u\n",
            this->paramId(i),
            param->signPuddleCategoryText,
            param->signPuddleTabId,
            param->unknown_0xa
        );
    }
    fclose(f);
}

}
