#include "../luabindings.h"
#include "../defs/GameAreaParam.h"

namespace paramadjuster::params {

void registerGameAreaParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["GameAreaParam"]; usertype) return;
        auto indexerGameAreaParam = state->new_usertype<ParamTableIndexer<GameAreaParam>>("GameAreaParamTableIndexer");
        indexerGameAreaParam["count"] = sol::property(&ParamTableIndexer<GameAreaParam>::count);
        indexerGameAreaParam["__index"] = &ParamTableIndexer<GameAreaParam>::at;
        indexerGameAreaParam["id"] = &ParamTableIndexer<GameAreaParam>::paramId;
        indexerGameAreaParam["get"] = &ParamTableIndexer<GameAreaParam>::get;
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
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<GameAreaParam>>(gParamMgr.findTable(L"GameAreaParam")); };
    paramsTable["GameAreaParam"] = tableLoader;
}

}
