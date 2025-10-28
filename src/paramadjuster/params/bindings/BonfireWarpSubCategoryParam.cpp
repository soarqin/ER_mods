#include "../luabindings.h"
#include "../defs/BonfireWarpSubCategoryParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<BonfireWarpSubCategoryParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerBonfireWarpSubCategoryParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["BonfireWarpSubCategoryParam"]; usertype) return;
        auto indexerBonfireWarpSubCategoryParam = state->new_usertype<ParamTableIndexer<BonfireWarpSubCategoryParam>>("BonfireWarpSubCategoryParamTableIndexer");
        indexerBonfireWarpSubCategoryParam["count"] = sol::property(&ParamTableIndexer<BonfireWarpSubCategoryParam>::count);
        indexerBonfireWarpSubCategoryParam["__index"] = &ParamTableIndexer<BonfireWarpSubCategoryParam>::at;
        indexerBonfireWarpSubCategoryParam["id"] = &ParamTableIndexer<BonfireWarpSubCategoryParam>::paramId;
        indexerBonfireWarpSubCategoryParam["get"] = &ParamTableIndexer<BonfireWarpSubCategoryParam>::get;
        indexerBonfireWarpSubCategoryParam["exportToCsv"] = &ParamTableIndexer<BonfireWarpSubCategoryParam>::exportToCsv;
        indexerBonfireWarpSubCategoryParam["importFromCsv"] = &ParamTableIndexer<BonfireWarpSubCategoryParam>::importFromCsv;
        auto utBonfireWarpSubCategoryParam = state->new_usertype<BonfireWarpSubCategoryParam>("BonfireWarpSubCategoryParam");
        utBonfireWarpSubCategoryParam["disableParam_NT"] = sol::property([](BonfireWarpSubCategoryParam &param) -> uint8_t { return param.disableParam_NT; }, [](BonfireWarpSubCategoryParam &param, uint8_t value) { param.disableParam_NT = value; });
        utBonfireWarpSubCategoryParam["textId"] = &BonfireWarpSubCategoryParam::textId;
        utBonfireWarpSubCategoryParam["tabId"] = &BonfireWarpSubCategoryParam::tabId;
        utBonfireWarpSubCategoryParam["sortId"] = &BonfireWarpSubCategoryParam::sortId;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<BonfireWarpSubCategoryParam>>(state, L"BonfireWarpSubCategoryParam");
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"textId", false},
            {"tabId", false},
            {"sortId", false},
        });
        return indexer;
    };
    paramsTable["BonfireWarpSubCategoryParam"] = tableLoader;
}

template<> void ParamTableIndexer<BonfireWarpSubCategoryParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,textId,tabId,sortId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%d,%u,%u\n",
            this->paramId(i),
            param->disableParam_NT,
            param->textId,
            param->tabId,
            param->sortId
        );
    }
    fclose(f);
}

}
