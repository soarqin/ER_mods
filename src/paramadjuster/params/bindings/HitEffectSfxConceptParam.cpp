#include "../luabindings.h"
#include "../defs/HitEffectSfxConceptParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<HitEffectSfxConceptParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerHitEffectSfxConceptParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["HitEffectSfxConceptParam"]; usertype) return;
        auto indexerHitEffectSfxConceptParam = state->new_usertype<ParamTableIndexer<HitEffectSfxConceptParam>>("HitEffectSfxConceptParamTableIndexer");
        indexerHitEffectSfxConceptParam["count"] = sol::property(&ParamTableIndexer<HitEffectSfxConceptParam>::count);
        indexerHitEffectSfxConceptParam["__index"] = &ParamTableIndexer<HitEffectSfxConceptParam>::at;
        indexerHitEffectSfxConceptParam["id"] = &ParamTableIndexer<HitEffectSfxConceptParam>::paramId;
        indexerHitEffectSfxConceptParam["get"] = &ParamTableIndexer<HitEffectSfxConceptParam>::get;
        indexerHitEffectSfxConceptParam["exportToCsv"] = &ParamTableIndexer<HitEffectSfxConceptParam>::exportToCsv;
        indexerHitEffectSfxConceptParam["importFromCsv"] = &ParamTableIndexer<HitEffectSfxConceptParam>::importFromCsv;
        auto utHitEffectSfxConceptParam = state->new_usertype<HitEffectSfxConceptParam>("HitEffectSfxConceptParam");
        utHitEffectSfxConceptParam["atkIron_1"] = &HitEffectSfxConceptParam::atkIron_1;
        utHitEffectSfxConceptParam["atkIron_2"] = &HitEffectSfxConceptParam::atkIron_2;
        utHitEffectSfxConceptParam["atkLeather_1"] = &HitEffectSfxConceptParam::atkLeather_1;
        utHitEffectSfxConceptParam["atkLeather_2"] = &HitEffectSfxConceptParam::atkLeather_2;
        utHitEffectSfxConceptParam["atkWood_1"] = &HitEffectSfxConceptParam::atkWood_1;
        utHitEffectSfxConceptParam["atkWood_2"] = &HitEffectSfxConceptParam::atkWood_2;
        utHitEffectSfxConceptParam["atkBody_1"] = &HitEffectSfxConceptParam::atkBody_1;
        utHitEffectSfxConceptParam["atkBody_2"] = &HitEffectSfxConceptParam::atkBody_2;
        utHitEffectSfxConceptParam["atkStone_1"] = &HitEffectSfxConceptParam::atkStone_1;
        utHitEffectSfxConceptParam["atkStone_2"] = &HitEffectSfxConceptParam::atkStone_2;
        utHitEffectSfxConceptParam["atkNone_1"] = &HitEffectSfxConceptParam::atkNone_1;
        utHitEffectSfxConceptParam["atkNone_2"] = &HitEffectSfxConceptParam::atkNone_2;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<HitEffectSfxConceptParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<HitEffectSfxConceptParam>>(nullptr);
        indexer->setFieldNames({
            {"atkIron_1", false},
            {"atkIron_2", false},
            {"atkLeather_1", false},
            {"atkLeather_2", false},
            {"atkWood_1", false},
            {"atkWood_2", false},
            {"atkBody_1", false},
            {"atkBody_2", false},
            {"atkStone_1", false},
            {"atkStone_2", false},
            {"atkNone_1", false},
            {"atkNone_2", false},
        });
        return indexer;
    };
    paramsTable["HitEffectSfxConceptParam"] = [tableLoader]() -> auto { return tableLoader(L"HitEffectSfxConceptParam"); };
}

template<> void ParamTableIndexer<HitEffectSfxConceptParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,atkIron_1,atkIron_2,atkLeather_1,atkLeather_2,atkWood_1,atkWood_2,atkBody_1,atkBody_2,atkStone_1,atkStone_2,atkNone_1,atkNone_2\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",
            this->paramId(i),
            param->atkIron_1,
            param->atkIron_2,
            param->atkLeather_1,
            param->atkLeather_2,
            param->atkWood_1,
            param->atkWood_2,
            param->atkBody_1,
            param->atkBody_2,
            param->atkStone_1,
            param->atkStone_2,
            param->atkNone_1,
            param->atkNone_2
        );
    }
    fclose(f);
}

}
