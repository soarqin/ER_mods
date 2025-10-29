#include "../luabindings.h"
#include "../defs/MenuPropertySpecParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<MenuPropertySpecParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerMenuPropertySpecParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MenuPropertySpecParam"]; usertype) return;
        auto indexerMenuPropertySpecParam = state->new_usertype<ParamTableIndexer<MenuPropertySpecParam>>("MenuPropertySpecParamTableIndexer");
        indexerMenuPropertySpecParam["count"] = sol::property(&ParamTableIndexer<MenuPropertySpecParam>::count);
        indexerMenuPropertySpecParam["__index"] = &ParamTableIndexer<MenuPropertySpecParam>::at;
        indexerMenuPropertySpecParam["id"] = &ParamTableIndexer<MenuPropertySpecParam>::paramId;
        indexerMenuPropertySpecParam["get"] = &ParamTableIndexer<MenuPropertySpecParam>::get;
        indexerMenuPropertySpecParam["exportToCsv"] = &ParamTableIndexer<MenuPropertySpecParam>::exportToCsv;
        indexerMenuPropertySpecParam["importFromCsv"] = &ParamTableIndexer<MenuPropertySpecParam>::importFromCsv;
        auto utMenuPropertySpecParam = state->new_usertype<MenuPropertySpecParam>("MenuPropertySpecParam");
        utMenuPropertySpecParam["CaptionTextID"] = &MenuPropertySpecParam::CaptionTextID;
        utMenuPropertySpecParam["IconID"] = &MenuPropertySpecParam::IconID;
        utMenuPropertySpecParam["RequiredPropertyID"] = &MenuPropertySpecParam::RequiredPropertyID;
        utMenuPropertySpecParam["CompareType"] = &MenuPropertySpecParam::CompareType;
        utMenuPropertySpecParam["FormatType"] = &MenuPropertySpecParam::FormatType;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<MenuPropertySpecParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<MenuPropertySpecParam>>(nullptr);
        indexer->setFieldNames({
            {"CaptionTextID", false},
            {"IconID", false},
            {"RequiredPropertyID", false},
            {"CompareType", false},
            {"FormatType", false},
        });
        return indexer;
    };
    paramsTable["MenuPropertySpecParam"] = [tableLoader]() -> auto { return tableLoader(L"MenuPropertySpecParam"); };
}

template<> void ParamTableIndexer<MenuPropertySpecParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,CaptionTextID,IconID,RequiredPropertyID,CompareType,FormatType\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%u,%d,%u\n",
            this->paramId(i),
            param->CaptionTextID,
            param->IconID,
            param->RequiredPropertyID,
            param->CompareType,
            param->FormatType
        );
    }
    fclose(f);
}

}
