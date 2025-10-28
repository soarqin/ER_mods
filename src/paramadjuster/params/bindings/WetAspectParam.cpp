#include "../luabindings.h"
#include "../defs/WetAspectParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<WetAspectParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerWetAspectParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WetAspectParam"]; usertype) return;
        auto indexerWetAspectParam = state->new_usertype<ParamTableIndexer<WetAspectParam>>("WetAspectParamTableIndexer");
        indexerWetAspectParam["count"] = sol::property(&ParamTableIndexer<WetAspectParam>::count);
        indexerWetAspectParam["__index"] = &ParamTableIndexer<WetAspectParam>::at;
        indexerWetAspectParam["id"] = &ParamTableIndexer<WetAspectParam>::paramId;
        indexerWetAspectParam["get"] = &ParamTableIndexer<WetAspectParam>::get;
        indexerWetAspectParam["exportToCsv"] = &ParamTableIndexer<WetAspectParam>::exportToCsv;
        indexerWetAspectParam["importFromCsv"] = &ParamTableIndexer<WetAspectParam>::importFromCsv;
        auto utWetAspectParam = state->new_usertype<WetAspectParam>("WetAspectParam");
        utWetAspectParam["baseColorR"] = &WetAspectParam::baseColorR;
        utWetAspectParam["baseColorG"] = &WetAspectParam::baseColorG;
        utWetAspectParam["baseColorB"] = &WetAspectParam::baseColorB;
        utWetAspectParam["baseColorA"] = &WetAspectParam::baseColorA;
        utWetAspectParam["metallic"] = &WetAspectParam::metallic;
        utWetAspectParam["metallicRate"] = &WetAspectParam::metallicRate;
        utWetAspectParam["shininessRate"] = &WetAspectParam::shininessRate;
        utWetAspectParam["shininess"] = &WetAspectParam::shininess;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<WetAspectParam>>(state, L"WetAspectParam");
        indexer->setFieldNames({
            {"baseColorR", false},
            {"baseColorG", false},
            {"baseColorB", false},
            {"baseColorA", false},
            {"metallic", false},
            {"metallicRate", false},
            {"shininessRate", false},
            {"shininess", false},
        });
        return indexer;
    };
    paramsTable["WetAspectParam"] = tableLoader;
}

template<> void ParamTableIndexer<WetAspectParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,baseColorR,baseColorG,baseColorB,baseColorA,metallic,metallicRate,shininessRate,shininess\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%g,%u,%g,%g,%u\n",
            this->paramId(i),
            param->baseColorR,
            param->baseColorG,
            param->baseColorB,
            param->baseColorA,
            param->metallic,
            param->metallicRate,
            param->shininessRate,
            param->shininess
        );
    }
    fclose(f);
}

}
