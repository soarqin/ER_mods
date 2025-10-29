#include "../luabindings.h"
#include "../defs/GparamRefSettingsParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<GparamRefSettingsParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerGparamRefSettingsParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["GparamRefSettingsParam"]; usertype) return;
        auto indexerGparamRefSettingsParam = state->new_usertype<ParamTableIndexer<GparamRefSettingsParam>>("GparamRefSettingsParamTableIndexer");
        indexerGparamRefSettingsParam["count"] = sol::property(&ParamTableIndexer<GparamRefSettingsParam>::count);
        indexerGparamRefSettingsParam["__index"] = &ParamTableIndexer<GparamRefSettingsParam>::at;
        indexerGparamRefSettingsParam["id"] = &ParamTableIndexer<GparamRefSettingsParam>::paramId;
        indexerGparamRefSettingsParam["get"] = &ParamTableIndexer<GparamRefSettingsParam>::get;
        indexerGparamRefSettingsParam["exportToCsv"] = &ParamTableIndexer<GparamRefSettingsParam>::exportToCsv;
        indexerGparamRefSettingsParam["importFromCsv"] = &ParamTableIndexer<GparamRefSettingsParam>::importFromCsv;
        auto utGparamRefSettingsParam = state->new_usertype<GparamRefSettingsParam>("GparamRefSettingsParam");
        utGparamRefSettingsParam["disableParam_NT"] = sol::property([](GparamRefSettingsParam &param) -> uint8_t { return param.disableParam_NT; }, [](GparamRefSettingsParam &param, uint8_t value) { param.disableParam_NT = value; });
        utGparamRefSettingsParam["RefTargetMapId"] = &GparamRefSettingsParam::RefTargetMapId;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<GparamRefSettingsParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<GparamRefSettingsParam>>(nullptr);
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"RefTargetMapId", false},
        });
        return indexer;
    };
    paramsTable["GparamRefSettings"] = [tableLoader]() -> auto { return tableLoader(L"GparamRefSettings"); };
}

template<> void ParamTableIndexer<GparamRefSettingsParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,RefTargetMapId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%d\n",
            this->paramId(i),
            param->disableParam_NT,
            param->RefTargetMapId
        );
    }
    fclose(f);
}

}
