#include "../luabindings.h"
#include "../defs/RoleParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<RoleParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerRoleParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["RoleParam"]; usertype) return;
        auto indexerRoleParam = state->new_usertype<ParamTableIndexer<RoleParam>>("RoleParamTableIndexer");
        indexerRoleParam["count"] = sol::property(&ParamTableIndexer<RoleParam>::count);
        indexerRoleParam["__index"] = &ParamTableIndexer<RoleParam>::at;
        indexerRoleParam["id"] = &ParamTableIndexer<RoleParam>::paramId;
        indexerRoleParam["get"] = &ParamTableIndexer<RoleParam>::get;
        indexerRoleParam["exportToCsv"] = &ParamTableIndexer<RoleParam>::exportToCsv;
        indexerRoleParam["importFromCsv"] = &ParamTableIndexer<RoleParam>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<RoleParam>>(state, L"RoleParam");
        indexer->setFieldNames({
            {"teamType", false},
            {"phantomParamId", false},
            {"spEffectID0", false},
            {"spEffectID1", false},
            {"spEffectID2", false},
            {"spEffectID3", false},
            {"spEffectID4", false},
            {"spEffectID5", false},
            {"spEffectID6", false},
            {"spEffectID7", false},
            {"spEffectID8", false},
            {"spEffectID9", false},
            {"sosSignSfxId", false},
            {"mySosSignSfxId", false},
            {"summonStartAnimId", false},
            {"itemlotParamId", false},
            {"voiceChatGroup", false},
            {"roleNameColor", false},
            {"roleNameId", false},
            {"threatLv", false},
            {"phantomParamId_vowRank1", false},
            {"phantomParamId_vowRank2", false},
            {"phantomParamId_vowRank3", false},
            {"spEffectID_vowRank0", false},
            {"spEffectID_vowRank1", false},
            {"spEffectID_vowRank2", false},
            {"spEffectID_vowRank3", false},
            {"signPhantomId", false},
            {"nonPlayerSummonStartAnimId", false},
        });
        return indexer;
    };
    paramsTable["RoleParam"] = tableLoader;
}

template<> void ParamTableIndexer<RoleParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,teamType,phantomParamId,spEffectID0,spEffectID1,spEffectID2,spEffectID3,spEffectID4,spEffectID5,spEffectID6,spEffectID7,spEffectID8,spEffectID9,sosSignSfxId,mySosSignSfxId,summonStartAnimId,itemlotParamId,voiceChatGroup,roleNameColor,roleNameId,threatLv,phantomParamId_vowRank1,phantomParamId_vowRank2,phantomParamId_vowRank3,spEffectID_vowRank0,spEffectID_vowRank1,spEffectID_vowRank2,spEffectID_vowRank3,signPhantomId,nonPlayerSummonStartAnimId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%d,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",
            this->paramId(i),
            param->teamType,
            param->phantomParamId,
            param->spEffectID0,
            param->spEffectID1,
            param->spEffectID2,
            param->spEffectID3,
            param->spEffectID4,
            param->spEffectID5,
            param->spEffectID6,
            param->spEffectID7,
            param->spEffectID8,
            param->spEffectID9,
            param->sosSignSfxId,
            param->mySosSignSfxId,
            param->summonStartAnimId,
            param->itemlotParamId,
            param->voiceChatGroup,
            param->roleNameColor,
            param->roleNameId,
            param->threatLv,
            param->phantomParamId_vowRank1,
            param->phantomParamId_vowRank2,
            param->phantomParamId_vowRank3,
            param->spEffectID_vowRank0,
            param->spEffectID_vowRank1,
            param->spEffectID_vowRank2,
            param->spEffectID_vowRank3,
            param->signPhantomId,
            param->nonPlayerSummonStartAnimId
        );
    }
    fclose(f);
}

}
