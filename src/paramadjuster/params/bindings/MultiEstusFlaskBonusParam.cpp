#include "../luabindings.h"
#include "../defs/MultiEstusFlaskBonusParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<MultiEstusFlaskBonusParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerMultiEstusFlaskBonusParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MultiEstusFlaskBonusParam"]; usertype) return;
        auto indexerMultiEstusFlaskBonusParam = state->new_usertype<ParamTableIndexer<MultiEstusFlaskBonusParam>>("MultiEstusFlaskBonusParamTableIndexer");
        indexerMultiEstusFlaskBonusParam["count"] = sol::property(&ParamTableIndexer<MultiEstusFlaskBonusParam>::count);
        indexerMultiEstusFlaskBonusParam["__index"] = &ParamTableIndexer<MultiEstusFlaskBonusParam>::at;
        indexerMultiEstusFlaskBonusParam["id"] = &ParamTableIndexer<MultiEstusFlaskBonusParam>::paramId;
        indexerMultiEstusFlaskBonusParam["get"] = &ParamTableIndexer<MultiEstusFlaskBonusParam>::get;
        indexerMultiEstusFlaskBonusParam["exportToCsv"] = &ParamTableIndexer<MultiEstusFlaskBonusParam>::exportToCsv;
        indexerMultiEstusFlaskBonusParam["importFromCsv"] = &ParamTableIndexer<MultiEstusFlaskBonusParam>::importFromCsv;
        auto utMultiEstusFlaskBonusParam = state->new_usertype<MultiEstusFlaskBonusParam>("MultiEstusFlaskBonusParam");
        utMultiEstusFlaskBonusParam["host"] = &MultiEstusFlaskBonusParam::host;
        utMultiEstusFlaskBonusParam["WhiteGhost_None"] = &MultiEstusFlaskBonusParam::WhiteGhost_None;
        utMultiEstusFlaskBonusParam["WhiteGhost_Umbasa"] = &MultiEstusFlaskBonusParam::WhiteGhost_Umbasa;
        utMultiEstusFlaskBonusParam["WhiteGhost_Berserker"] = &MultiEstusFlaskBonusParam::WhiteGhost_Berserker;
        utMultiEstusFlaskBonusParam["BlackGhost_None_Sign"] = &MultiEstusFlaskBonusParam::BlackGhost_None_Sign;
        utMultiEstusFlaskBonusParam["BlackGhost_Umbasa_Sign"] = &MultiEstusFlaskBonusParam::BlackGhost_Umbasa_Sign;
        utMultiEstusFlaskBonusParam["BlackGhost_Berserker_Sign"] = &MultiEstusFlaskBonusParam::BlackGhost_Berserker_Sign;
        utMultiEstusFlaskBonusParam["BlackGhost_None_Invade"] = &MultiEstusFlaskBonusParam::BlackGhost_None_Invade;
        utMultiEstusFlaskBonusParam["BlackGhost_Umbasa_Invade"] = &MultiEstusFlaskBonusParam::BlackGhost_Umbasa_Invade;
        utMultiEstusFlaskBonusParam["BlackGhost_Berserker_Invade"] = &MultiEstusFlaskBonusParam::BlackGhost_Berserker_Invade;
        utMultiEstusFlaskBonusParam["RedHunter1"] = &MultiEstusFlaskBonusParam::RedHunter1;
        utMultiEstusFlaskBonusParam["RedHunter2"] = &MultiEstusFlaskBonusParam::RedHunter2;
        utMultiEstusFlaskBonusParam["GuardianOfForest"] = &MultiEstusFlaskBonusParam::GuardianOfForest;
        utMultiEstusFlaskBonusParam["GuardianOfAnor"] = &MultiEstusFlaskBonusParam::GuardianOfAnor;
        utMultiEstusFlaskBonusParam["BattleRoyal"] = &MultiEstusFlaskBonusParam::BattleRoyal;
        utMultiEstusFlaskBonusParam["YellowMonk"] = &MultiEstusFlaskBonusParam::YellowMonk;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<MultiEstusFlaskBonusParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<MultiEstusFlaskBonusParam>>(nullptr);
        indexer->setFieldNames({
            {"host", false},
            {"WhiteGhost_None", false},
            {"WhiteGhost_Umbasa", false},
            {"WhiteGhost_Berserker", false},
            {"BlackGhost_None_Sign", false},
            {"BlackGhost_Umbasa_Sign", false},
            {"BlackGhost_Berserker_Sign", false},
            {"BlackGhost_None_Invade", false},
            {"BlackGhost_Umbasa_Invade", false},
            {"BlackGhost_Berserker_Invade", false},
            {"RedHunter1", false},
            {"RedHunter2", false},
            {"GuardianOfForest", false},
            {"GuardianOfAnor", false},
            {"BattleRoyal", false},
            {"YellowMonk", false},
        });
        return indexer;
    };
    paramsTable["MultiHPEstusFlaskBonusParam"] = [tableLoader]() -> auto { return tableLoader(L"MultiHPEstusFlaskBonusParam"); };
    paramsTable["MultiMPEstusFlaskBonusParam"] = [tableLoader]() -> auto { return tableLoader(L"MultiMPEstusFlaskBonusParam"); };
}

template<> void ParamTableIndexer<MultiEstusFlaskBonusParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,host,WhiteGhost_None,WhiteGhost_Umbasa,WhiteGhost_Berserker,BlackGhost_None_Sign,BlackGhost_Umbasa_Sign,BlackGhost_Berserker_Sign,BlackGhost_None_Invade,BlackGhost_Umbasa_Invade,BlackGhost_Berserker_Invade,RedHunter1,RedHunter2,GuardianOfForest,GuardianOfAnor,BattleRoyal");
    fwprintf(f, L",YellowMonk\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u\n",
            this->paramId(i),
            param->host,
            param->WhiteGhost_None,
            param->WhiteGhost_Umbasa,
            param->WhiteGhost_Berserker,
            param->BlackGhost_None_Sign,
            param->BlackGhost_Umbasa_Sign,
            param->BlackGhost_Berserker_Sign,
            param->BlackGhost_None_Invade,
            param->BlackGhost_Umbasa_Invade,
            param->BlackGhost_Berserker_Invade,
            param->RedHunter1,
            param->RedHunter2,
            param->GuardianOfForest,
            param->GuardianOfAnor,
            param->BattleRoyal,
            param->YellowMonk
        );
    }
    fclose(f);
}

}
