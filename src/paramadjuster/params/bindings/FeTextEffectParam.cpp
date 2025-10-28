#include "../luabindings.h"
#include "../defs/FeTextEffectParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<FeTextEffectParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerFeTextEffectParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["FeTextEffectParam"]; usertype) return;
        auto indexerFeTextEffectParam = state->new_usertype<ParamTableIndexer<FeTextEffectParam>>("FeTextEffectParamTableIndexer");
        indexerFeTextEffectParam["count"] = sol::property(&ParamTableIndexer<FeTextEffectParam>::count);
        indexerFeTextEffectParam["__index"] = &ParamTableIndexer<FeTextEffectParam>::at;
        indexerFeTextEffectParam["id"] = &ParamTableIndexer<FeTextEffectParam>::paramId;
        indexerFeTextEffectParam["get"] = &ParamTableIndexer<FeTextEffectParam>::get;
        indexerFeTextEffectParam["exportToCsv"] = &ParamTableIndexer<FeTextEffectParam>::exportToCsv;
        indexerFeTextEffectParam["importFromCsv"] = &ParamTableIndexer<FeTextEffectParam>::importFromCsv;
        auto utFeTextEffectParam = state->new_usertype<FeTextEffectParam>("FeTextEffectParam");
        utFeTextEffectParam["resId"] = &FeTextEffectParam::resId;
        utFeTextEffectParam["textId"] = &FeTextEffectParam::textId;
        utFeTextEffectParam["seId"] = &FeTextEffectParam::seId;
        utFeTextEffectParam["canMixMapName"] = sol::property([](FeTextEffectParam &param) -> uint8_t { return param.canMixMapName; }, [](FeTextEffectParam &param, uint8_t value) { param.canMixMapName = value; });
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<FeTextEffectParam>>(state, L"FeTextEffectParam");
        indexer->setFieldNames({
            {"resId", false},
            {"textId", false},
            {"seId", false},
            {"canMixMapName", false},
        });
        return indexer;
    };
    paramsTable["FeTextEffectParam"] = tableLoader;
}

template<> void ParamTableIndexer<FeTextEffectParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,resId,textId,seId,canMixMapName\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%u\n",
            this->paramId(i),
            param->resId,
            param->textId,
            param->seId,
            param->canMixMapName
        );
    }
    fclose(f);
}

}
