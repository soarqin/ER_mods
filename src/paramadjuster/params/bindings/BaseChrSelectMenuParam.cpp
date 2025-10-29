#include "../luabindings.h"
#include "../defs/BaseChrSelectMenuParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<BaseChrSelectMenuParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerBaseChrSelectMenuParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["BaseChrSelectMenuParam"]; usertype) return;
        auto indexerBaseChrSelectMenuParam = state->new_usertype<ParamTableIndexer<BaseChrSelectMenuParam>>("BaseChrSelectMenuParamTableIndexer");
        indexerBaseChrSelectMenuParam["count"] = sol::property(&ParamTableIndexer<BaseChrSelectMenuParam>::count);
        indexerBaseChrSelectMenuParam["__index"] = &ParamTableIndexer<BaseChrSelectMenuParam>::at;
        indexerBaseChrSelectMenuParam["id"] = &ParamTableIndexer<BaseChrSelectMenuParam>::paramId;
        indexerBaseChrSelectMenuParam["get"] = &ParamTableIndexer<BaseChrSelectMenuParam>::get;
        indexerBaseChrSelectMenuParam["exportToCsv"] = &ParamTableIndexer<BaseChrSelectMenuParam>::exportToCsv;
        indexerBaseChrSelectMenuParam["importFromCsv"] = &ParamTableIndexer<BaseChrSelectMenuParam>::importFromCsv;
        auto utBaseChrSelectMenuParam = state->new_usertype<BaseChrSelectMenuParam>("BaseChrSelectMenuParam");
        utBaseChrSelectMenuParam["disableParam_NT"] = sol::property([](BaseChrSelectMenuParam &param) -> uint8_t { return param.disableParam_NT; }, [](BaseChrSelectMenuParam &param, uint8_t value) { param.disableParam_NT = value; });
        utBaseChrSelectMenuParam["chrInitParam"] = &BaseChrSelectMenuParam::chrInitParam;
        utBaseChrSelectMenuParam["originChrInitParam"] = &BaseChrSelectMenuParam::originChrInitParam;
        utBaseChrSelectMenuParam["imageId"] = &BaseChrSelectMenuParam::imageId;
        utBaseChrSelectMenuParam["textId"] = &BaseChrSelectMenuParam::textId;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<BaseChrSelectMenuParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<BaseChrSelectMenuParam>>(nullptr);
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"chrInitParam", false},
            {"originChrInitParam", false},
            {"imageId", false},
            {"textId", false},
        });
        return indexer;
    };
    paramsTable["BaseChrSelectMenuParam"] = [tableLoader]() -> auto { return tableLoader(L"BaseChrSelectMenuParam"); };
}

template<> void ParamTableIndexer<BaseChrSelectMenuParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,chrInitParam,originChrInitParam,imageId,textId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%d,%d\n",
            this->paramId(i),
            param->disableParam_NT,
            param->chrInitParam,
            param->originChrInitParam,
            param->imageId,
            param->textId
        );
    }
    fclose(f);
}

}
