#include "../luabindings.h"
#include "../defs/BonfireWarpTabParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<BonfireWarpTabParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerBonfireWarpTabParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["BonfireWarpTabParam"]; usertype) return;
        auto indexerBonfireWarpTabParam = state->new_usertype<ParamTableIndexer<BonfireWarpTabParam>>("BonfireWarpTabParamTableIndexer");
        indexerBonfireWarpTabParam["count"] = sol::property(&ParamTableIndexer<BonfireWarpTabParam>::count);
        indexerBonfireWarpTabParam["__index"] = &ParamTableIndexer<BonfireWarpTabParam>::at;
        indexerBonfireWarpTabParam["id"] = &ParamTableIndexer<BonfireWarpTabParam>::paramId;
        indexerBonfireWarpTabParam["get"] = &ParamTableIndexer<BonfireWarpTabParam>::get;
        indexerBonfireWarpTabParam["exportToCsv"] = &ParamTableIndexer<BonfireWarpTabParam>::exportToCsv;
        indexerBonfireWarpTabParam["importFromCsv"] = &ParamTableIndexer<BonfireWarpTabParam>::importFromCsv;
        auto utBonfireWarpTabParam = state->new_usertype<BonfireWarpTabParam>("BonfireWarpTabParam");
        utBonfireWarpTabParam["disableParam_NT"] = sol::property([](BonfireWarpTabParam &param) -> uint8_t { return param.disableParam_NT; }, [](BonfireWarpTabParam &param, uint8_t value) { param.disableParam_NT = value; });
        utBonfireWarpTabParam["textId"] = &BonfireWarpTabParam::textId;
        utBonfireWarpTabParam["sortId"] = &BonfireWarpTabParam::sortId;
        utBonfireWarpTabParam["iconId"] = &BonfireWarpTabParam::iconId;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<BonfireWarpTabParam>>(state, L"BonfireWarpTabParam");
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"textId", false},
            {"sortId", false},
            {"iconId", false},
        });
        return indexer;
    };
    paramsTable["BonfireWarpTabParam"] = tableLoader;
}

template<> void ParamTableIndexer<BonfireWarpTabParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,textId,sortId,iconId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%d,%d,%u\n",
            this->paramId(i),
            param->disableParam_NT,
            param->textId,
            param->sortId,
            param->iconId
        );
    }
    fclose(f);
}

}
