#include "../luabindings.h"
#include "../defs/RoleParam.h"

namespace paramadjuster::params {

void registerRoleParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["RoleParam"]; usertype) return;
        auto indexerRoleParam = state->new_usertype<ParamTableIndexer<RoleParam>>("RoleParamTableIndexer");
        indexerRoleParam["count"] = sol::property(&ParamTableIndexer<RoleParam>::count);
        indexerRoleParam["__index"] = &ParamTableIndexer<RoleParam>::at;
        indexerRoleParam["id"] = &ParamTableIndexer<RoleParam>::paramId;
        indexerRoleParam["get"] = &ParamTableIndexer<RoleParam>::get;
        auto utRoleParam = state->new_usertype<RoleParam>("RoleParam");
        utRoleParam["teamType"] = &RoleParam::teamType;
        utRoleParam["phantomParamId"] = &RoleParam::phantomParamId;
        utRoleParam["spEffectID0"] = &RoleParam::spEffectID0;
        utRoleParam["spEffectID1"] = &RoleParam::spEffectID1;
        utRoleParam["spEffectID2"] = &RoleParam::spEffectID2;
        utRoleParam["spEffectID3"] = &RoleParam::spEffectID3;
        utRoleParam["spEffectID4"] = &RoleParam::spEffectID4;
        utRoleParam["spEffectID5"] = &RoleParam::spEffectID5;
        utRoleParam["spEffectID6"] = &RoleParam::spEffectID6;
        utRoleParam["spEffectID7"] = &RoleParam::spEffectID7;
        utRoleParam["spEffectID8"] = &RoleParam::spEffectID8;
        utRoleParam["spEffectID9"] = &RoleParam::spEffectID9;
        utRoleParam["sosSignSfxId"] = &RoleParam::sosSignSfxId;
        utRoleParam["mySosSignSfxId"] = &RoleParam::mySosSignSfxId;
        utRoleParam["summonStartAnimId"] = &RoleParam::summonStartAnimId;
        utRoleParam["itemlotParamId"] = &RoleParam::itemlotParamId;
        utRoleParam["voiceChatGroup"] = &RoleParam::voiceChatGroup;
        utRoleParam["roleNameColor"] = &RoleParam::roleNameColor;
        utRoleParam["roleNameId"] = &RoleParam::roleNameId;
        utRoleParam["threatLv"] = &RoleParam::threatLv;
        utRoleParam["phantomParamId_vowRank1"] = &RoleParam::phantomParamId_vowRank1;
        utRoleParam["phantomParamId_vowRank2"] = &RoleParam::phantomParamId_vowRank2;
        utRoleParam["phantomParamId_vowRank3"] = &RoleParam::phantomParamId_vowRank3;
        utRoleParam["spEffectID_vowRank0"] = &RoleParam::spEffectID_vowRank0;
        utRoleParam["spEffectID_vowRank1"] = &RoleParam::spEffectID_vowRank1;
        utRoleParam["spEffectID_vowRank2"] = &RoleParam::spEffectID_vowRank2;
        utRoleParam["spEffectID_vowRank3"] = &RoleParam::spEffectID_vowRank3;
        utRoleParam["signPhantomId"] = &RoleParam::signPhantomId;
        utRoleParam["nonPlayerSummonStartAnimId"] = &RoleParam::nonPlayerSummonStartAnimId;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<RoleParam>>(gParamMgr.findTable(L"RoleParam")); };
    paramsTable["RoleParam"] = tableLoader;
}

}
