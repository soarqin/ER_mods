#include "../luabindings.h"
#include "../defs/GameAreaParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<GameAreaParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerGameAreaParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["GameAreaParam"]; usertype) return;
        auto indexerGameAreaParam = state->new_usertype<ParamTableIndexer<GameAreaParam>>("GameAreaParamTableIndexer");
        indexerGameAreaParam["count"] = sol::property(&ParamTableIndexer<GameAreaParam>::count);
        indexerGameAreaParam["__index"] = &ParamTableIndexer<GameAreaParam>::at;
        indexerGameAreaParam["id"] = &ParamTableIndexer<GameAreaParam>::paramId;
        indexerGameAreaParam["get"] = &ParamTableIndexer<GameAreaParam>::get;
        indexerGameAreaParam["exportToCsv"] = &ParamTableIndexer<GameAreaParam>::exportToCsv;
        indexerGameAreaParam["importFromCsv"] = &ParamTableIndexer<GameAreaParam>::importFromCsv;
        auto utGameAreaParam = state->new_usertype<GameAreaParam>("GameAreaParam");
        utGameAreaParam["disableParam_NT"] = sol::property([](GameAreaParam &param) -> uint8_t { return param.disableParam_NT; }, [](GameAreaParam &param, uint8_t value) { param.disableParam_NT = value; });
        utGameAreaParam["bonusSoul_single"] = &GameAreaParam::bonusSoul_single;
        utGameAreaParam["bonusSoul_multi"] = &GameAreaParam::bonusSoul_multi;
        utGameAreaParam["humanityPointCountFlagIdTop"] = &GameAreaParam::humanityPointCountFlagIdTop;
        utGameAreaParam["humanityDropPoint1"] = &GameAreaParam::humanityDropPoint1;
        utGameAreaParam["humanityDropPoint2"] = &GameAreaParam::humanityDropPoint2;
        utGameAreaParam["humanityDropPoint3"] = &GameAreaParam::humanityDropPoint3;
        utGameAreaParam["humanityDropPoint4"] = &GameAreaParam::humanityDropPoint4;
        utGameAreaParam["humanityDropPoint5"] = &GameAreaParam::humanityDropPoint5;
        utGameAreaParam["humanityDropPoint6"] = &GameAreaParam::humanityDropPoint6;
        utGameAreaParam["humanityDropPoint7"] = &GameAreaParam::humanityDropPoint7;
        utGameAreaParam["humanityDropPoint8"] = &GameAreaParam::humanityDropPoint8;
        utGameAreaParam["humanityDropPoint9"] = &GameAreaParam::humanityDropPoint9;
        utGameAreaParam["humanityDropPoint10"] = &GameAreaParam::humanityDropPoint10;
        utGameAreaParam["soloBreakInPoint_Min"] = &GameAreaParam::soloBreakInPoint_Min;
        utGameAreaParam["soloBreakInPoint_Max"] = &GameAreaParam::soloBreakInPoint_Max;
        utGameAreaParam["defeatBossFlagId_forSignAimList"] = &GameAreaParam::defeatBossFlagId_forSignAimList;
        utGameAreaParam["displayAimFlagId"] = &GameAreaParam::displayAimFlagId;
        utGameAreaParam["foundBossFlagId"] = &GameAreaParam::foundBossFlagId;
        utGameAreaParam["foundBossTextId"] = &GameAreaParam::foundBossTextId;
        utGameAreaParam["notFindBossTextId"] = &GameAreaParam::notFindBossTextId;
        utGameAreaParam["bossChallengeFlagId"] = &GameAreaParam::bossChallengeFlagId;
        utGameAreaParam["defeatBossFlagId"] = &GameAreaParam::defeatBossFlagId;
        utGameAreaParam["bossPosX"] = &GameAreaParam::bossPosX;
        utGameAreaParam["bossPosY"] = &GameAreaParam::bossPosY;
        utGameAreaParam["bossPosZ"] = &GameAreaParam::bossPosZ;
        utGameAreaParam["bossMapAreaNo"] = &GameAreaParam::bossMapAreaNo;
        utGameAreaParam["bossMapBlockNo"] = &GameAreaParam::bossMapBlockNo;
        utGameAreaParam["bossMapMapNo"] = &GameAreaParam::bossMapMapNo;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<GameAreaParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<GameAreaParam>>(nullptr);
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"bonusSoul_single", false},
            {"bonusSoul_multi", false},
            {"humanityPointCountFlagIdTop", false},
            {"humanityDropPoint1", false},
            {"humanityDropPoint2", false},
            {"humanityDropPoint3", false},
            {"humanityDropPoint4", false},
            {"humanityDropPoint5", false},
            {"humanityDropPoint6", false},
            {"humanityDropPoint7", false},
            {"humanityDropPoint8", false},
            {"humanityDropPoint9", false},
            {"humanityDropPoint10", false},
            {"soloBreakInPoint_Min", false},
            {"soloBreakInPoint_Max", false},
            {"defeatBossFlagId_forSignAimList", false},
            {"displayAimFlagId", false},
            {"foundBossFlagId", false},
            {"foundBossTextId", false},
            {"notFindBossTextId", false},
            {"bossChallengeFlagId", false},
            {"defeatBossFlagId", false},
            {"bossPosX", false},
            {"bossPosY", false},
            {"bossPosZ", false},
            {"bossMapAreaNo", false},
            {"bossMapBlockNo", false},
            {"bossMapMapNo", false},
        });
        return indexer;
    };
    paramsTable["GameAreaParam"] = [tableLoader]() -> auto { return tableLoader(L"GameAreaParam"); };
}

template<> void ParamTableIndexer<GameAreaParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,bonusSoul_single,bonusSoul_multi,humanityPointCountFlagIdTop,humanityDropPoint1,humanityDropPoint2,humanityDropPoint3,humanityDropPoint4,humanityDropPoint5,humanityDropPoint6,humanityDropPoint7,humanityDropPoint8,humanityDropPoint9,humanityDropPoint10,soloBreakInPoint_Min,soloBreakInPoint_Max,defeatBossFlagId_forSignAimList,displayAimFlagId,foundBossFlagId,foundBossTextId,notFindBossTextId,bossChallengeFlagId,defeatBossFlagId,bossPosX,bossPosY,bossPosZ,bossMapAreaNo,bossMapBlockNo,bossMapMapNo\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%u,%u,%g,%g,%g,%u,%u,%u\n",
            this->paramId(i),
            param->disableParam_NT,
            param->bonusSoul_single,
            param->bonusSoul_multi,
            param->humanityPointCountFlagIdTop,
            param->humanityDropPoint1,
            param->humanityDropPoint2,
            param->humanityDropPoint3,
            param->humanityDropPoint4,
            param->humanityDropPoint5,
            param->humanityDropPoint6,
            param->humanityDropPoint7,
            param->humanityDropPoint8,
            param->humanityDropPoint9,
            param->humanityDropPoint10,
            param->soloBreakInPoint_Min,
            param->soloBreakInPoint_Max,
            param->defeatBossFlagId_forSignAimList,
            param->displayAimFlagId,
            param->foundBossFlagId,
            param->foundBossTextId,
            param->notFindBossTextId,
            param->bossChallengeFlagId,
            param->defeatBossFlagId,
            param->bossPosX,
            param->bossPosY,
            param->bossPosZ,
            param->bossMapAreaNo,
            param->bossMapBlockNo,
            param->bossMapMapNo
        );
    }
    fclose(f);
}

}
