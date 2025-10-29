#include "../luabindings.h"
#include "../defs/MenuParamColorTable.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<MenuParamColorTable>::exportToCsvImpl(const std::wstring &csvPath);

void registerMenuParamColorTable(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MenuParamColorTable"]; usertype) return;
        auto indexerMenuParamColorTable = state->new_usertype<ParamTableIndexer<MenuParamColorTable>>("MenuParamColorTableTableIndexer");
        indexerMenuParamColorTable["count"] = sol::property(&ParamTableIndexer<MenuParamColorTable>::count);
        indexerMenuParamColorTable["__index"] = &ParamTableIndexer<MenuParamColorTable>::at;
        indexerMenuParamColorTable["id"] = &ParamTableIndexer<MenuParamColorTable>::paramId;
        indexerMenuParamColorTable["get"] = &ParamTableIndexer<MenuParamColorTable>::get;
        indexerMenuParamColorTable["exportToCsv"] = &ParamTableIndexer<MenuParamColorTable>::exportToCsv;
        indexerMenuParamColorTable["importFromCsv"] = &ParamTableIndexer<MenuParamColorTable>::importFromCsv;
        auto utMenuParamColorTable = state->new_usertype<MenuParamColorTable>("MenuParamColorTable");
        utMenuParamColorTable["lerpMode"] = &MenuParamColorTable::lerpMode;
        utMenuParamColorTable["h"] = &MenuParamColorTable::h;
        utMenuParamColorTable["s1"] = &MenuParamColorTable::s1;
        utMenuParamColorTable["v1"] = &MenuParamColorTable::v1;
        utMenuParamColorTable["s2"] = &MenuParamColorTable::s2;
        utMenuParamColorTable["v2"] = &MenuParamColorTable::v2;
        utMenuParamColorTable["s3"] = &MenuParamColorTable::s3;
        utMenuParamColorTable["v3"] = &MenuParamColorTable::v3;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<MenuParamColorTable>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<MenuParamColorTable>>(nullptr);
        indexer->setFieldNames({
            {"lerpMode", false},
            {"h", false},
            {"s1", false},
            {"v1", false},
            {"s2", false},
            {"v2", false},
            {"s3", false},
            {"v3", false},
        });
        return indexer;
    };
    paramsTable["MenuColorTableParam"] = [tableLoader]() -> auto { return tableLoader(L"MenuColorTableParam"); };
}

template<> void ParamTableIndexer<MenuParamColorTable>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,lerpMode,h,s1,v1,s2,v2,s3,v3\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%g,%g,%g,%g,%g,%g\n",
            this->paramId(i),
            param->lerpMode,
            param->h,
            param->s1,
            param->v1,
            param->s2,
            param->v2,
            param->s3,
            param->v3
        );
    }
    fclose(f);
}

}
