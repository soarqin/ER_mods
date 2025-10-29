#include "../luabindings.h"
#include "../defs/HitEffectSfxParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<HitEffectSfxParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerHitEffectSfxParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["HitEffectSfxParam"]; usertype) return;
        auto indexerHitEffectSfxParam = state->new_usertype<ParamTableIndexer<HitEffectSfxParam>>("HitEffectSfxParamTableIndexer");
        indexerHitEffectSfxParam["count"] = sol::property(&ParamTableIndexer<HitEffectSfxParam>::count);
        indexerHitEffectSfxParam["__index"] = &ParamTableIndexer<HitEffectSfxParam>::at;
        indexerHitEffectSfxParam["id"] = &ParamTableIndexer<HitEffectSfxParam>::paramId;
        indexerHitEffectSfxParam["get"] = &ParamTableIndexer<HitEffectSfxParam>::get;
        indexerHitEffectSfxParam["exportToCsv"] = &ParamTableIndexer<HitEffectSfxParam>::exportToCsv;
        indexerHitEffectSfxParam["importFromCsv"] = &ParamTableIndexer<HitEffectSfxParam>::importFromCsv;
        auto utHitEffectSfxParam = state->new_usertype<HitEffectSfxParam>("HitEffectSfxParam");
        utHitEffectSfxParam["Slash_Normal"] = &HitEffectSfxParam::Slash_Normal;
        utHitEffectSfxParam["Slash_S"] = &HitEffectSfxParam::Slash_S;
        utHitEffectSfxParam["Slash_L"] = &HitEffectSfxParam::Slash_L;
        utHitEffectSfxParam["Slash_Specific1"] = &HitEffectSfxParam::Slash_Specific1;
        utHitEffectSfxParam["Slash_Specific2"] = &HitEffectSfxParam::Slash_Specific2;
        utHitEffectSfxParam["Blow_Normal"] = &HitEffectSfxParam::Blow_Normal;
        utHitEffectSfxParam["Blow_S"] = &HitEffectSfxParam::Blow_S;
        utHitEffectSfxParam["Blow_L"] = &HitEffectSfxParam::Blow_L;
        utHitEffectSfxParam["Blow_Specific1"] = &HitEffectSfxParam::Blow_Specific1;
        utHitEffectSfxParam["Blow_Specific2"] = &HitEffectSfxParam::Blow_Specific2;
        utHitEffectSfxParam["Thrust_Normal"] = &HitEffectSfxParam::Thrust_Normal;
        utHitEffectSfxParam["Thrust_S"] = &HitEffectSfxParam::Thrust_S;
        utHitEffectSfxParam["Thrust_L"] = &HitEffectSfxParam::Thrust_L;
        utHitEffectSfxParam["Thrust_Specific1"] = &HitEffectSfxParam::Thrust_Specific1;
        utHitEffectSfxParam["Thrust_Specific2"] = &HitEffectSfxParam::Thrust_Specific2;
        utHitEffectSfxParam["Neutral_Normal"] = &HitEffectSfxParam::Neutral_Normal;
        utHitEffectSfxParam["Neutral_S"] = &HitEffectSfxParam::Neutral_S;
        utHitEffectSfxParam["Neutral_L"] = &HitEffectSfxParam::Neutral_L;
        utHitEffectSfxParam["Neutral_Specific1"] = &HitEffectSfxParam::Neutral_Specific1;
        utHitEffectSfxParam["Neutral_Specific2"] = &HitEffectSfxParam::Neutral_Specific2;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<HitEffectSfxParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<HitEffectSfxParam>>(nullptr);
        indexer->setFieldNames({
            {"Slash_Normal", false},
            {"Slash_S", false},
            {"Slash_L", false},
            {"Slash_Specific1", false},
            {"Slash_Specific2", false},
            {"Blow_Normal", false},
            {"Blow_S", false},
            {"Blow_L", false},
            {"Blow_Specific1", false},
            {"Blow_Specific2", false},
            {"Thrust_Normal", false},
            {"Thrust_S", false},
            {"Thrust_L", false},
            {"Thrust_Specific1", false},
            {"Thrust_Specific2", false},
            {"Neutral_Normal", false},
            {"Neutral_S", false},
            {"Neutral_L", false},
            {"Neutral_Specific1", false},
            {"Neutral_Specific2", false},
        });
        return indexer;
    };
    paramsTable["HitEffectSfxParam"] = [tableLoader]() -> auto { return tableLoader(L"HitEffectSfxParam"); };
}

template<> void ParamTableIndexer<HitEffectSfxParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,Slash_Normal,Slash_S,Slash_L,Slash_Specific1,Slash_Specific2,Blow_Normal,Blow_S,Blow_L,Blow_Specific1,Blow_Specific2,Thrust_Normal,Thrust_S,Thrust_L,Thrust_Specific1,Thrust_Specific2,Neutral_Normal,Neutral_S,Neutral_L,Neutral_Specific1,Neutral_Specific2\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",
            this->paramId(i),
            param->Slash_Normal,
            param->Slash_S,
            param->Slash_L,
            param->Slash_Specific1,
            param->Slash_Specific2,
            param->Blow_Normal,
            param->Blow_S,
            param->Blow_L,
            param->Blow_Specific1,
            param->Blow_Specific2,
            param->Thrust_Normal,
            param->Thrust_S,
            param->Thrust_L,
            param->Thrust_Specific1,
            param->Thrust_Specific2,
            param->Neutral_Normal,
            param->Neutral_S,
            param->Neutral_L,
            param->Neutral_Specific1,
            param->Neutral_Specific2
        );
    }
    fclose(f);
}

}
