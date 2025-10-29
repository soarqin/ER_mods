#include "../luabindings.h"
#include "../defs/SeMaterialConvertParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<SeMaterialConvertParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerSeMaterialConvertParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["SeMaterialConvertParam"]; usertype) return;
        auto indexerSeMaterialConvertParam = state->new_usertype<ParamTableIndexer<SeMaterialConvertParam>>("SeMaterialConvertParamTableIndexer");
        indexerSeMaterialConvertParam["count"] = sol::property(&ParamTableIndexer<SeMaterialConvertParam>::count);
        indexerSeMaterialConvertParam["__index"] = &ParamTableIndexer<SeMaterialConvertParam>::at;
        indexerSeMaterialConvertParam["id"] = &ParamTableIndexer<SeMaterialConvertParam>::paramId;
        indexerSeMaterialConvertParam["get"] = &ParamTableIndexer<SeMaterialConvertParam>::get;
        indexerSeMaterialConvertParam["exportToCsv"] = &ParamTableIndexer<SeMaterialConvertParam>::exportToCsv;
        indexerSeMaterialConvertParam["importFromCsv"] = &ParamTableIndexer<SeMaterialConvertParam>::importFromCsv;
        auto utSeMaterialConvertParam = state->new_usertype<SeMaterialConvertParam>("SeMaterialConvertParam");
        utSeMaterialConvertParam["seMaterialId"] = &SeMaterialConvertParam::seMaterialId;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<SeMaterialConvertParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<SeMaterialConvertParam>>(nullptr);
        indexer->setFieldNames({
            {"seMaterialId", false},
        });
        return indexer;
    };
    paramsTable["SeMaterialConvertParam"] = [tableLoader]() -> auto { return tableLoader(L"SeMaterialConvertParam"); };
}

template<> void ParamTableIndexer<SeMaterialConvertParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,seMaterialId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u\n",
            this->paramId(i),
            param->seMaterialId
        );
    }
    fclose(f);
}

}
