#include "../luabindings.h"
#include "../defs/MultiSoulBonusRateParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<MultiSoulBonusRateParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerMultiSoulBonusRateParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MultiSoulBonusRateParam"]; usertype) return;
        auto indexerMultiSoulBonusRateParam = state->new_usertype<ParamTableIndexer<MultiSoulBonusRateParam>>("MultiSoulBonusRateParamTableIndexer");
        indexerMultiSoulBonusRateParam["count"] = sol::property(&ParamTableIndexer<MultiSoulBonusRateParam>::count);
        indexerMultiSoulBonusRateParam["__index"] = &ParamTableIndexer<MultiSoulBonusRateParam>::at;
        indexerMultiSoulBonusRateParam["id"] = &ParamTableIndexer<MultiSoulBonusRateParam>::paramId;
        indexerMultiSoulBonusRateParam["get"] = &ParamTableIndexer<MultiSoulBonusRateParam>::get;
        indexerMultiSoulBonusRateParam["exportToCsv"] = &ParamTableIndexer<MultiSoulBonusRateParam>::exportToCsv;
        indexerMultiSoulBonusRateParam["importFromCsv"] = &ParamTableIndexer<MultiSoulBonusRateParam>::importFromCsv;
        auto utMultiSoulBonusRateParam = state->new_usertype<MultiSoulBonusRateParam>("MultiSoulBonusRateParam");
        utMultiSoulBonusRateParam["host"] = &MultiSoulBonusRateParam::host;
        utMultiSoulBonusRateParam["WhiteGhost_None"] = &MultiSoulBonusRateParam::WhiteGhost_None;
        utMultiSoulBonusRateParam["WhiteGhost_Umbasa"] = &MultiSoulBonusRateParam::WhiteGhost_Umbasa;
        utMultiSoulBonusRateParam["WhiteGhost_Berserker"] = &MultiSoulBonusRateParam::WhiteGhost_Berserker;
        utMultiSoulBonusRateParam["BlackGhost_None_Sign"] = &MultiSoulBonusRateParam::BlackGhost_None_Sign;
        utMultiSoulBonusRateParam["BlackGhost_Umbasa_Sign"] = &MultiSoulBonusRateParam::BlackGhost_Umbasa_Sign;
        utMultiSoulBonusRateParam["BlackGhost_Berserker_Sign"] = &MultiSoulBonusRateParam::BlackGhost_Berserker_Sign;
        utMultiSoulBonusRateParam["BlackGhost_None_Invade"] = &MultiSoulBonusRateParam::BlackGhost_None_Invade;
        utMultiSoulBonusRateParam["BlackGhost_Umbasa_Invade"] = &MultiSoulBonusRateParam::BlackGhost_Umbasa_Invade;
        utMultiSoulBonusRateParam["BlackGhost_Berserker_Invade"] = &MultiSoulBonusRateParam::BlackGhost_Berserker_Invade;
        utMultiSoulBonusRateParam["RedHunter1"] = &MultiSoulBonusRateParam::RedHunter1;
        utMultiSoulBonusRateParam["RedHunter2"] = &MultiSoulBonusRateParam::RedHunter2;
        utMultiSoulBonusRateParam["GuardianOfForest"] = &MultiSoulBonusRateParam::GuardianOfForest;
        utMultiSoulBonusRateParam["GuardianOfAnor"] = &MultiSoulBonusRateParam::GuardianOfAnor;
        utMultiSoulBonusRateParam["BattleRoyal"] = &MultiSoulBonusRateParam::BattleRoyal;
        utMultiSoulBonusRateParam["YellowMonk"] = &MultiSoulBonusRateParam::YellowMonk;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<MultiSoulBonusRateParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<MultiSoulBonusRateParam>>(nullptr);
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
    paramsTable["MultiSoulBonusRateParam"] = [tableLoader]() -> auto { return tableLoader(L"MultiSoulBonusRateParam"); };
}

template<> void ParamTableIndexer<MultiSoulBonusRateParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,host,WhiteGhost_None,WhiteGhost_Umbasa,WhiteGhost_Berserker,BlackGhost_None_Sign,BlackGhost_Umbasa_Sign,BlackGhost_Berserker_Sign,BlackGhost_None_Invade,BlackGhost_Umbasa_Invade,BlackGhost_Berserker_Invade,RedHunter1,RedHunter2,GuardianOfForest,GuardianOfAnor,BattleRoyal,YellowMonk\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g\n",
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
