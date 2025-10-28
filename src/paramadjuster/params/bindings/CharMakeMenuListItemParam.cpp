#include "../luabindings.h"
#include "../defs/CharMakeMenuListItemParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<CharMakeMenuListItemParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerCharMakeMenuListItemParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["CharMakeMenuListItemParam"]; usertype) return;
        auto indexerCharMakeMenuListItemParam = state->new_usertype<ParamTableIndexer<CharMakeMenuListItemParam>>("CharMakeMenuListItemParamTableIndexer");
        indexerCharMakeMenuListItemParam["count"] = sol::property(&ParamTableIndexer<CharMakeMenuListItemParam>::count);
        indexerCharMakeMenuListItemParam["__index"] = &ParamTableIndexer<CharMakeMenuListItemParam>::at;
        indexerCharMakeMenuListItemParam["id"] = &ParamTableIndexer<CharMakeMenuListItemParam>::paramId;
        indexerCharMakeMenuListItemParam["get"] = &ParamTableIndexer<CharMakeMenuListItemParam>::get;
        indexerCharMakeMenuListItemParam["exportToCsv"] = &ParamTableIndexer<CharMakeMenuListItemParam>::exportToCsv;
        indexerCharMakeMenuListItemParam["importFromCsv"] = &ParamTableIndexer<CharMakeMenuListItemParam>::importFromCsv;
        auto utCharMakeMenuListItemParam = state->new_usertype<CharMakeMenuListItemParam>("CharMakeMenuListItemParam");
        utCharMakeMenuListItemParam["value"] = &CharMakeMenuListItemParam::value;
        utCharMakeMenuListItemParam["captionId"] = &CharMakeMenuListItemParam::captionId;
        utCharMakeMenuListItemParam["iconId"] = &CharMakeMenuListItemParam::iconId;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<CharMakeMenuListItemParam>>(state, L"CharMakeMenuListItemParam");
        indexer->setFieldNames({
            {"value", false},
            {"captionId", false},
            {"iconId", false},
        });
        return indexer;
    };
    paramsTable["CharMakeMenuListItemParam"] = tableLoader;
}

template<> void ParamTableIndexer<CharMakeMenuListItemParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,value,captionId,iconId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%u\n",
            this->paramId(i),
            param->value,
            param->captionId,
            param->iconId
        );
    }
    fclose(f);
}

}
