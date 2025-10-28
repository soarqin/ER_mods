#include "../luabindings.h"
#include "../defs/MenuValueTableSpecParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<MenuValueTableSpecParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerMenuValueTableSpecParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MenuValueTableSpecParam"]; usertype) return;
        auto indexerMenuValueTableSpecParam = state->new_usertype<ParamTableIndexer<MenuValueTableSpecParam>>("MenuValueTableSpecParamTableIndexer");
        indexerMenuValueTableSpecParam["count"] = sol::property(&ParamTableIndexer<MenuValueTableSpecParam>::count);
        indexerMenuValueTableSpecParam["__index"] = &ParamTableIndexer<MenuValueTableSpecParam>::at;
        indexerMenuValueTableSpecParam["id"] = &ParamTableIndexer<MenuValueTableSpecParam>::paramId;
        indexerMenuValueTableSpecParam["get"] = &ParamTableIndexer<MenuValueTableSpecParam>::get;
        indexerMenuValueTableSpecParam["exportToCsv"] = &ParamTableIndexer<MenuValueTableSpecParam>::exportToCsv;
        indexerMenuValueTableSpecParam["importFromCsv"] = &ParamTableIndexer<MenuValueTableSpecParam>::importFromCsv;
        auto utMenuValueTableSpecParam = state->new_usertype<MenuValueTableSpecParam>("MenuValueTableSpecParam");
        utMenuValueTableSpecParam["value"] = &MenuValueTableSpecParam::value;
        utMenuValueTableSpecParam["textId"] = &MenuValueTableSpecParam::textId;
        utMenuValueTableSpecParam["compareType"] = &MenuValueTableSpecParam::compareType;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<MenuValueTableSpecParam>>(state, L"MenuValueTableSpecParam");
        indexer->setFieldNames({
            {"value", false},
            {"textId", false},
            {"compareType", false},
        });
        return indexer;
    };
    paramsTable["MenuValueTableParam"] = tableLoader;
}

template<> void ParamTableIndexer<MenuValueTableSpecParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,value,textId,compareType\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d\n",
            this->paramId(i),
            param->value,
            param->textId,
            param->compareType
        );
    }
    fclose(f);
}

}
