#include "../luabindings.h"
#include "../defs/MaterialEx.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<MaterialEx>::exportToCsvImpl(const std::wstring &csvPath);

void registerMaterialEx(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MaterialEx"]; usertype) return;
        auto indexerMaterialEx = state->new_usertype<ParamTableIndexer<MaterialEx>>("MaterialExTableIndexer");
        indexerMaterialEx["count"] = sol::property(&ParamTableIndexer<MaterialEx>::count);
        indexerMaterialEx["__index"] = &ParamTableIndexer<MaterialEx>::at;
        indexerMaterialEx["id"] = &ParamTableIndexer<MaterialEx>::paramId;
        indexerMaterialEx["get"] = &ParamTableIndexer<MaterialEx>::get;
        indexerMaterialEx["exportToCsv"] = &ParamTableIndexer<MaterialEx>::exportToCsv;
        indexerMaterialEx["importFromCsv"] = &ParamTableIndexer<MaterialEx>::importFromCsv;
        auto utMaterialEx = state->new_usertype<MaterialEx>("MaterialEx");
        utMaterialEx["paramName"] = sol::property([](MaterialEx &param) -> std::wstring { return param.paramName; }, [](MaterialEx &param, const std::wstring& value) { cStrToFixedStrW(param.paramName, value); });
        utMaterialEx["materialId"] = &MaterialEx::materialId;
        utMaterialEx["materialParamValue0"] = &MaterialEx::materialParamValue0;
        utMaterialEx["materialParamValue1"] = &MaterialEx::materialParamValue1;
        utMaterialEx["materialParamValue2"] = &MaterialEx::materialParamValue2;
        utMaterialEx["materialParamValue3"] = &MaterialEx::materialParamValue3;
        utMaterialEx["materialParamValue4"] = &MaterialEx::materialParamValue4;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<MaterialEx>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<MaterialEx>>(nullptr);
        indexer->setFieldNames({
            {"paramName", true},
            {"materialId", false},
            {"materialParamValue0", false},
            {"materialParamValue1", false},
            {"materialParamValue2", false},
            {"materialParamValue3", false},
            {"materialParamValue4", false},
        });
        return indexer;
    };
    paramsTable["MaterialExParam"] = [tableLoader]() -> auto { return tableLoader(L"MaterialExParam"); };
}

template<> void ParamTableIndexer<MaterialEx>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,paramName,materialId,materialParamValue0,materialParamValue1,materialParamValue2,materialParamValue3,materialParamValue4\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,\"%ls\",%d,%g,%g,%g,%g,%g\n",
            this->paramId(i),
            param->paramName,
            param->materialId,
            param->materialParamValue0,
            param->materialParamValue1,
            param->materialParamValue2,
            param->materialParamValue3,
            param->materialParamValue4
        );
    }
    fclose(f);
}

}
