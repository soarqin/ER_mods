#include "../luabindings.h"
#include "../defs/ChrModelParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<ChrModelParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerChrModelParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ChrModelParam"]; usertype) return;
        auto indexerChrModelParam = state->new_usertype<ParamTableIndexer<ChrModelParam>>("ChrModelParamTableIndexer");
        indexerChrModelParam["count"] = sol::property(&ParamTableIndexer<ChrModelParam>::count);
        indexerChrModelParam["__index"] = &ParamTableIndexer<ChrModelParam>::at;
        indexerChrModelParam["id"] = &ParamTableIndexer<ChrModelParam>::paramId;
        indexerChrModelParam["get"] = &ParamTableIndexer<ChrModelParam>::get;
        indexerChrModelParam["exportToCsv"] = &ParamTableIndexer<ChrModelParam>::exportToCsv;
        indexerChrModelParam["importFromCsv"] = &ParamTableIndexer<ChrModelParam>::importFromCsv;
        auto utChrModelParam = state->new_usertype<ChrModelParam>("ChrModelParam");
        utChrModelParam["disableParam_NT"] = sol::property([](ChrModelParam &param) -> uint8_t { return param.disableParam_NT; }, [](ChrModelParam &param, uint8_t value) { param.disableParam_NT = value; });
        utChrModelParam["modelMemoryType"] = &ChrModelParam::modelMemoryType;
        utChrModelParam["texMemoryType"] = &ChrModelParam::texMemoryType;
        utChrModelParam["cameraDitherFadeId"] = &ChrModelParam::cameraDitherFadeId;
        utChrModelParam["reportAnimMemSizeMb"] = &ChrModelParam::reportAnimMemSizeMb;
        utChrModelParam["unk"] = &ChrModelParam::unk;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<ChrModelParam>>(state, L"ChrModelParam");
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"modelMemoryType", false},
            {"texMemoryType", false},
            {"cameraDitherFadeId", false},
            {"reportAnimMemSizeMb", false},
            {"unk", false},
        });
        return indexer;
    };
    paramsTable["ChrModelParam"] = tableLoader;
}

template<> void ParamTableIndexer<ChrModelParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,modelMemoryType,texMemoryType,cameraDitherFadeId,reportAnimMemSizeMb,unk\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%d,%g,%u\n",
            this->paramId(i),
            param->disableParam_NT,
            param->modelMemoryType,
            param->texMemoryType,
            param->cameraDitherFadeId,
            param->reportAnimMemSizeMb,
            param->unk
        );
    }
    fclose(f);
}

}
