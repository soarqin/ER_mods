#include "../luabindings.h"
#include "../defs/EstusFlaskRecoveryParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<EstusFlaskRecoveryParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerEstusFlaskRecoveryParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["EstusFlaskRecoveryParam"]; usertype) return;
        auto indexerEstusFlaskRecoveryParam = state->new_usertype<ParamTableIndexer<EstusFlaskRecoveryParam>>("EstusFlaskRecoveryParamTableIndexer");
        indexerEstusFlaskRecoveryParam["count"] = sol::property(&ParamTableIndexer<EstusFlaskRecoveryParam>::count);
        indexerEstusFlaskRecoveryParam["__index"] = &ParamTableIndexer<EstusFlaskRecoveryParam>::at;
        indexerEstusFlaskRecoveryParam["id"] = &ParamTableIndexer<EstusFlaskRecoveryParam>::paramId;
        indexerEstusFlaskRecoveryParam["get"] = &ParamTableIndexer<EstusFlaskRecoveryParam>::get;
        indexerEstusFlaskRecoveryParam["exportToCsv"] = &ParamTableIndexer<EstusFlaskRecoveryParam>::exportToCsv;
        indexerEstusFlaskRecoveryParam["importFromCsv"] = &ParamTableIndexer<EstusFlaskRecoveryParam>::importFromCsv;
        auto utEstusFlaskRecoveryParam = state->new_usertype<EstusFlaskRecoveryParam>("EstusFlaskRecoveryParam");
        utEstusFlaskRecoveryParam["host"] = &EstusFlaskRecoveryParam::host;
        utEstusFlaskRecoveryParam["invadeOrb_None"] = &EstusFlaskRecoveryParam::invadeOrb_None;
        utEstusFlaskRecoveryParam["invadeOrb_Umbasa"] = &EstusFlaskRecoveryParam::invadeOrb_Umbasa;
        utEstusFlaskRecoveryParam["invadeOrb_Berserker"] = &EstusFlaskRecoveryParam::invadeOrb_Berserker;
        utEstusFlaskRecoveryParam["invadeOrb_Sinners"] = &EstusFlaskRecoveryParam::invadeOrb_Sinners;
        utEstusFlaskRecoveryParam["invadeSign_None"] = &EstusFlaskRecoveryParam::invadeSign_None;
        utEstusFlaskRecoveryParam["invadeSign_Umbasa"] = &EstusFlaskRecoveryParam::invadeSign_Umbasa;
        utEstusFlaskRecoveryParam["invadeSign_Berserker"] = &EstusFlaskRecoveryParam::invadeSign_Berserker;
        utEstusFlaskRecoveryParam["invadeSign_Sinners"] = &EstusFlaskRecoveryParam::invadeSign_Sinners;
        utEstusFlaskRecoveryParam["invadeRing_Sinners"] = &EstusFlaskRecoveryParam::invadeRing_Sinners;
        utEstusFlaskRecoveryParam["invadeRing_Rosalia"] = &EstusFlaskRecoveryParam::invadeRing_Rosalia;
        utEstusFlaskRecoveryParam["invadeRing_Forest"] = &EstusFlaskRecoveryParam::invadeRing_Forest;
        utEstusFlaskRecoveryParam["coopSign_None"] = &EstusFlaskRecoveryParam::coopSign_None;
        utEstusFlaskRecoveryParam["coopSign_Umbasa"] = &EstusFlaskRecoveryParam::coopSign_Umbasa;
        utEstusFlaskRecoveryParam["coopSign_Berserker"] = &EstusFlaskRecoveryParam::coopSign_Berserker;
        utEstusFlaskRecoveryParam["coopSign_Sinners"] = &EstusFlaskRecoveryParam::coopSign_Sinners;
        utEstusFlaskRecoveryParam["coopRing_RedHunter"] = &EstusFlaskRecoveryParam::coopRing_RedHunter;
        utEstusFlaskRecoveryParam["invadeRing_Anor"] = &EstusFlaskRecoveryParam::invadeRing_Anor;
        utEstusFlaskRecoveryParam["paramReplaceRate"] = &EstusFlaskRecoveryParam::paramReplaceRate;
        utEstusFlaskRecoveryParam["paramReplaceId"] = &EstusFlaskRecoveryParam::paramReplaceId;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<EstusFlaskRecoveryParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<EstusFlaskRecoveryParam>>(nullptr);
        indexer->setFieldNames({
            {"host", false},
            {"invadeOrb_None", false},
            {"invadeOrb_Umbasa", false},
            {"invadeOrb_Berserker", false},
            {"invadeOrb_Sinners", false},
            {"invadeSign_None", false},
            {"invadeSign_Umbasa", false},
            {"invadeSign_Berserker", false},
            {"invadeSign_Sinners", false},
            {"invadeRing_Sinners", false},
            {"invadeRing_Rosalia", false},
            {"invadeRing_Forest", false},
            {"coopSign_None", false},
            {"coopSign_Umbasa", false},
            {"coopSign_Berserker", false},
            {"coopSign_Sinners", false},
            {"coopRing_RedHunter", false},
            {"invadeRing_Anor", false},
            {"paramReplaceRate", false},
            {"paramReplaceId", false},
        });
        return indexer;
    };
    paramsTable["HPEstusFlaskRecoveryParam"] = [tableLoader]() -> auto { return tableLoader(L"HPEstusFlaskRecoveryParam"); };
    paramsTable["MPEstusFlaskRecoveryParam"] = [tableLoader]() -> auto { return tableLoader(L"MPEstusFlaskRecoveryParam"); };
}

template<> void ParamTableIndexer<EstusFlaskRecoveryParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,host,invadeOrb_None,invadeOrb_Umbasa,invadeOrb_Berserker,invadeOrb_Sinners,invadeSign_None,invadeSign_Umbasa,invadeSign_Berserker,invadeSign_Sinners,invadeRing_Sinners,invadeRing_Rosalia,invadeRing_Forest,coopSign_None,coopSign_Umbasa,coopSign_Berserker");
    fwprintf(f, L",coopSign_Sinners,coopRing_RedHunter,invadeRing_Anor,paramReplaceRate,paramReplaceId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d\n",
            this->paramId(i),
            param->host,
            param->invadeOrb_None,
            param->invadeOrb_Umbasa,
            param->invadeOrb_Berserker,
            param->invadeOrb_Sinners,
            param->invadeSign_None,
            param->invadeSign_Umbasa,
            param->invadeSign_Berserker,
            param->invadeSign_Sinners,
            param->invadeRing_Sinners,
            param->invadeRing_Rosalia,
            param->invadeRing_Forest,
            param->coopSign_None,
            param->coopSign_Umbasa,
            param->coopSign_Berserker,
            param->coopSign_Sinners,
            param->coopRing_RedHunter,
            param->invadeRing_Anor,
            param->paramReplaceRate,
            param->paramReplaceId
        );
    }
    fclose(f);
}

}
