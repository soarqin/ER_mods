#include "../luabindings.h"
#include "../defs/CharaInitParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<CharaInitParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerCharaInitParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["CharaInitParam"]; usertype) return;
        auto indexerCharaInitParam = state->new_usertype<ParamTableIndexer<CharaInitParam>>("CharaInitParamTableIndexer");
        indexerCharaInitParam["count"] = sol::property(&ParamTableIndexer<CharaInitParam>::count);
        indexerCharaInitParam["__index"] = &ParamTableIndexer<CharaInitParam>::at;
        indexerCharaInitParam["id"] = &ParamTableIndexer<CharaInitParam>::paramId;
        indexerCharaInitParam["get"] = &ParamTableIndexer<CharaInitParam>::get;
        indexerCharaInitParam["exportToCsv"] = &ParamTableIndexer<CharaInitParam>::exportToCsv;
        indexerCharaInitParam["importFromCsv"] = &ParamTableIndexer<CharaInitParam>::importFromCsv;
        auto utCharaInitParam = state->new_usertype<CharaInitParam>("CharaInitParam");
        utCharaInitParam["baseRec_mp"] = &CharaInitParam::baseRec_mp;
        utCharaInitParam["baseRec_sp"] = &CharaInitParam::baseRec_sp;
        utCharaInitParam["red_Falldam"] = &CharaInitParam::red_Falldam;
        utCharaInitParam["soul"] = &CharaInitParam::soul;
        utCharaInitParam["equip_Wep_Right"] = &CharaInitParam::equip_Wep_Right;
        utCharaInitParam["equip_Subwep_Right"] = &CharaInitParam::equip_Subwep_Right;
        utCharaInitParam["equip_Wep_Left"] = &CharaInitParam::equip_Wep_Left;
        utCharaInitParam["equip_Subwep_Left"] = &CharaInitParam::equip_Subwep_Left;
        utCharaInitParam["equip_Helm"] = &CharaInitParam::equip_Helm;
        utCharaInitParam["equip_Armer"] = &CharaInitParam::equip_Armer;
        utCharaInitParam["equip_Gaunt"] = &CharaInitParam::equip_Gaunt;
        utCharaInitParam["equip_Leg"] = &CharaInitParam::equip_Leg;
        utCharaInitParam["equip_Arrow"] = &CharaInitParam::equip_Arrow;
        utCharaInitParam["equip_Bolt"] = &CharaInitParam::equip_Bolt;
        utCharaInitParam["equip_SubArrow"] = &CharaInitParam::equip_SubArrow;
        utCharaInitParam["equip_SubBolt"] = &CharaInitParam::equip_SubBolt;
        utCharaInitParam["equip_Accessory01"] = &CharaInitParam::equip_Accessory01;
        utCharaInitParam["equip_Accessory02"] = &CharaInitParam::equip_Accessory02;
        utCharaInitParam["equip_Accessory03"] = &CharaInitParam::equip_Accessory03;
        utCharaInitParam["equip_Accessory04"] = &CharaInitParam::equip_Accessory04;
        utCharaInitParam["unknown_0x50"] = &CharaInitParam::unknown_0x50;
        utCharaInitParam["unknown_0x51"] = &CharaInitParam::unknown_0x51;
        utCharaInitParam["elixir_material00"] = &CharaInitParam::elixir_material00;
        utCharaInitParam["elixir_material01"] = &CharaInitParam::elixir_material01;
        utCharaInitParam["elixir_material02"] = &CharaInitParam::elixir_material02;
        utCharaInitParam["equip_Spell_01"] = &CharaInitParam::equip_Spell_01;
        utCharaInitParam["equip_Spell_02"] = &CharaInitParam::equip_Spell_02;
        utCharaInitParam["equip_Spell_03"] = &CharaInitParam::equip_Spell_03;
        utCharaInitParam["equip_Spell_04"] = &CharaInitParam::equip_Spell_04;
        utCharaInitParam["equip_Spell_05"] = &CharaInitParam::equip_Spell_05;
        utCharaInitParam["equip_Spell_06"] = &CharaInitParam::equip_Spell_06;
        utCharaInitParam["equip_Spell_07"] = &CharaInitParam::equip_Spell_07;
        utCharaInitParam["item_01"] = &CharaInitParam::item_01;
        utCharaInitParam["item_02"] = &CharaInitParam::item_02;
        utCharaInitParam["item_03"] = &CharaInitParam::item_03;
        utCharaInitParam["item_04"] = &CharaInitParam::item_04;
        utCharaInitParam["item_05"] = &CharaInitParam::item_05;
        utCharaInitParam["item_06"] = &CharaInitParam::item_06;
        utCharaInitParam["item_07"] = &CharaInitParam::item_07;
        utCharaInitParam["item_08"] = &CharaInitParam::item_08;
        utCharaInitParam["item_09"] = &CharaInitParam::item_09;
        utCharaInitParam["item_10"] = &CharaInitParam::item_10;
        utCharaInitParam["npcPlayerFaceGenId"] = &CharaInitParam::npcPlayerFaceGenId;
        utCharaInitParam["npcPlayerThinkId"] = &CharaInitParam::npcPlayerThinkId;
        utCharaInitParam["baseHp"] = &CharaInitParam::baseHp;
        utCharaInitParam["baseMp"] = &CharaInitParam::baseMp;
        utCharaInitParam["baseSp"] = &CharaInitParam::baseSp;
        utCharaInitParam["arrowNum"] = &CharaInitParam::arrowNum;
        utCharaInitParam["boltNum"] = &CharaInitParam::boltNum;
        utCharaInitParam["subArrowNum"] = &CharaInitParam::subArrowNum;
        utCharaInitParam["subBoltNum"] = &CharaInitParam::subBoltNum;
        utCharaInitParam["soulLv"] = &CharaInitParam::soulLv;
        utCharaInitParam["baseVit"] = &CharaInitParam::baseVit;
        utCharaInitParam["baseWil"] = &CharaInitParam::baseWil;
        utCharaInitParam["baseEnd"] = &CharaInitParam::baseEnd;
        utCharaInitParam["baseStr"] = &CharaInitParam::baseStr;
        utCharaInitParam["baseDex"] = &CharaInitParam::baseDex;
        utCharaInitParam["baseMag"] = &CharaInitParam::baseMag;
        utCharaInitParam["baseFai"] = &CharaInitParam::baseFai;
        utCharaInitParam["baseLuc"] = &CharaInitParam::baseLuc;
        utCharaInitParam["baseHeroPoint"] = &CharaInitParam::baseHeroPoint;
        utCharaInitParam["baseDurability"] = &CharaInitParam::baseDurability;
        utCharaInitParam["itemNum_01"] = &CharaInitParam::itemNum_01;
        utCharaInitParam["itemNum_02"] = &CharaInitParam::itemNum_02;
        utCharaInitParam["itemNum_03"] = &CharaInitParam::itemNum_03;
        utCharaInitParam["itemNum_04"] = &CharaInitParam::itemNum_04;
        utCharaInitParam["itemNum_05"] = &CharaInitParam::itemNum_05;
        utCharaInitParam["itemNum_06"] = &CharaInitParam::itemNum_06;
        utCharaInitParam["itemNum_07"] = &CharaInitParam::itemNum_07;
        utCharaInitParam["itemNum_08"] = &CharaInitParam::itemNum_08;
        utCharaInitParam["itemNum_09"] = &CharaInitParam::itemNum_09;
        utCharaInitParam["itemNum_10"] = &CharaInitParam::itemNum_10;
        utCharaInitParam["gestureId0"] = &CharaInitParam::gestureId0;
        utCharaInitParam["gestureId1"] = &CharaInitParam::gestureId1;
        utCharaInitParam["gestureId2"] = &CharaInitParam::gestureId2;
        utCharaInitParam["gestureId3"] = &CharaInitParam::gestureId3;
        utCharaInitParam["gestureId4"] = &CharaInitParam::gestureId4;
        utCharaInitParam["gestureId5"] = &CharaInitParam::gestureId5;
        utCharaInitParam["gestureId6"] = &CharaInitParam::gestureId6;
        utCharaInitParam["npcPlayerType"] = &CharaInitParam::npcPlayerType;
        utCharaInitParam["npcPlayerDrawType"] = &CharaInitParam::npcPlayerDrawType;
        utCharaInitParam["npcPlayerSex"] = &CharaInitParam::npcPlayerSex;
        utCharaInitParam["vowType"] = sol::property([](CharaInitParam &param) -> uint8_t { return param.vowType; }, [](CharaInitParam &param, uint8_t value) { param.vowType = value; });
        utCharaInitParam["isSyncTarget"] = sol::property([](CharaInitParam &param) -> uint8_t { return param.isSyncTarget; }, [](CharaInitParam &param, uint8_t value) { param.isSyncTarget = value; });
        utCharaInitParam["wepParamType_Right1"] = &CharaInitParam::wepParamType_Right1;
        utCharaInitParam["wepParamType_Right2"] = &CharaInitParam::wepParamType_Right2;
        utCharaInitParam["wepParamType_Right3"] = &CharaInitParam::wepParamType_Right3;
        utCharaInitParam["wepParamType_Left1"] = &CharaInitParam::wepParamType_Left1;
        utCharaInitParam["wepParamType_Left2"] = &CharaInitParam::wepParamType_Left2;
        utCharaInitParam["wepParamType_Left3"] = &CharaInitParam::wepParamType_Left3;
        utCharaInitParam["equip_Subwep_Right3"] = &CharaInitParam::equip_Subwep_Right3;
        utCharaInitParam["equip_Subwep_Left3"] = &CharaInitParam::equip_Subwep_Left3;
        utCharaInitParam["secondaryItem_01"] = &CharaInitParam::secondaryItem_01;
        utCharaInitParam["secondaryItem_02"] = &CharaInitParam::secondaryItem_02;
        utCharaInitParam["secondaryItem_03"] = &CharaInitParam::secondaryItem_03;
        utCharaInitParam["secondaryItem_04"] = &CharaInitParam::secondaryItem_04;
        utCharaInitParam["secondaryItem_05"] = &CharaInitParam::secondaryItem_05;
        utCharaInitParam["secondaryItem_06"] = &CharaInitParam::secondaryItem_06;
        utCharaInitParam["secondaryItemNum_01"] = &CharaInitParam::secondaryItemNum_01;
        utCharaInitParam["secondaryItemNum_02"] = &CharaInitParam::secondaryItemNum_02;
        utCharaInitParam["secondaryItemNum_03"] = &CharaInitParam::secondaryItemNum_03;
        utCharaInitParam["secondaryItemNum_04"] = &CharaInitParam::secondaryItemNum_04;
        utCharaInitParam["secondaryItemNum_05"] = &CharaInitParam::secondaryItemNum_05;
        utCharaInitParam["secondaryItemNum_06"] = &CharaInitParam::secondaryItemNum_06;
        utCharaInitParam["HpEstMax"] = &CharaInitParam::HpEstMax;
        utCharaInitParam["MpEstMax"] = &CharaInitParam::MpEstMax;
        utCharaInitParam["voiceType"] = &CharaInitParam::voiceType;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<CharaInitParam>>(state, L"CharaInitParam");
        indexer->setFieldNames({
            {"baseRec_mp", false},
            {"baseRec_sp", false},
            {"red_Falldam", false},
            {"soul", false},
            {"equip_Wep_Right", false},
            {"equip_Subwep_Right", false},
            {"equip_Wep_Left", false},
            {"equip_Subwep_Left", false},
            {"equip_Helm", false},
            {"equip_Armer", false},
            {"equip_Gaunt", false},
            {"equip_Leg", false},
            {"equip_Arrow", false},
            {"equip_Bolt", false},
            {"equip_SubArrow", false},
            {"equip_SubBolt", false},
            {"equip_Accessory01", false},
            {"equip_Accessory02", false},
            {"equip_Accessory03", false},
            {"equip_Accessory04", false},
            {"unknown_0x50", false},
            {"unknown_0x51", false},
            {"elixir_material00", false},
            {"elixir_material01", false},
            {"elixir_material02", false},
            {"equip_Spell_01", false},
            {"equip_Spell_02", false},
            {"equip_Spell_03", false},
            {"equip_Spell_04", false},
            {"equip_Spell_05", false},
            {"equip_Spell_06", false},
            {"equip_Spell_07", false},
            {"item_01", false},
            {"item_02", false},
            {"item_03", false},
            {"item_04", false},
            {"item_05", false},
            {"item_06", false},
            {"item_07", false},
            {"item_08", false},
            {"item_09", false},
            {"item_10", false},
            {"npcPlayerFaceGenId", false},
            {"npcPlayerThinkId", false},
            {"baseHp", false},
            {"baseMp", false},
            {"baseSp", false},
            {"arrowNum", false},
            {"boltNum", false},
            {"subArrowNum", false},
            {"subBoltNum", false},
            {"soulLv", false},
            {"baseVit", false},
            {"baseWil", false},
            {"baseEnd", false},
            {"baseStr", false},
            {"baseDex", false},
            {"baseMag", false},
            {"baseFai", false},
            {"baseLuc", false},
            {"baseHeroPoint", false},
            {"baseDurability", false},
            {"itemNum_01", false},
            {"itemNum_02", false},
            {"itemNum_03", false},
            {"itemNum_04", false},
            {"itemNum_05", false},
            {"itemNum_06", false},
            {"itemNum_07", false},
            {"itemNum_08", false},
            {"itemNum_09", false},
            {"itemNum_10", false},
            {"gestureId0", false},
            {"gestureId1", false},
            {"gestureId2", false},
            {"gestureId3", false},
            {"gestureId4", false},
            {"gestureId5", false},
            {"gestureId6", false},
            {"npcPlayerType", false},
            {"npcPlayerDrawType", false},
            {"npcPlayerSex", false},
            {"vowType", false},
            {"isSyncTarget", false},
            {"wepParamType_Right1", false},
            {"wepParamType_Right2", false},
            {"wepParamType_Right3", false},
            {"wepParamType_Left1", false},
            {"wepParamType_Left2", false},
            {"wepParamType_Left3", false},
            {"equip_Subwep_Right3", false},
            {"equip_Subwep_Left3", false},
            {"secondaryItem_01", false},
            {"secondaryItem_02", false},
            {"secondaryItem_03", false},
            {"secondaryItem_04", false},
            {"secondaryItem_05", false},
            {"secondaryItem_06", false},
            {"secondaryItemNum_01", false},
            {"secondaryItemNum_02", false},
            {"secondaryItemNum_03", false},
            {"secondaryItemNum_04", false},
            {"secondaryItemNum_05", false},
            {"secondaryItemNum_06", false},
            {"HpEstMax", false},
            {"MpEstMax", false},
            {"voiceType", false},
        });
        return indexer;
    };
    paramsTable["CharaInitParam"] = tableLoader;
}

template<> void ParamTableIndexer<CharaInitParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,baseRec_mp,baseRec_sp,red_Falldam,soul,equip_Wep_Right,equip_Subwep_Right,equip_Wep_Left,equip_Subwep_Left,equip_Helm,equip_Armer,equip_Gaunt,equip_Leg,equip_Arrow,equip_Bolt,equip_SubArrow,equip_SubBolt,equip_Accessory01,equip_Accessory02,equip_Accessory03,equip_Accessory04,unknown_0x50,unknown_0x51,elixir_material00,elixir_material01,elixir_material02,equip_Spell_01,equip_Spell_02,equip_Spell_03,equip_Spell_04,equip_Spell_05,equip_Spell_06,equip_Spell_07,item_01,item_02,item_03,item_04,item_05,item_06,item_07,item_08,item_09,item_10,npcPlayerFaceGenId,npcPlayerThinkId,baseHp,baseMp,baseSp,arrowNum,boltNum,subArrowNum,subBoltNum,soulLv,baseVit,baseWil,baseEnd,baseStr,baseDex,baseMag,baseFai,baseLuc,baseHeroPoint,baseDurability,itemNum_01,itemNum_02,itemNum_03,itemNum_04,itemNum_05,itemNum_06,itemNum_07,itemNum_08,itemNum_09,itemNum_10,gestureId0,gestureId1,gestureId2,gestureId3,gestureId4,gestureId5,gestureId6,npcPlayerType,npcPlayerDrawType,npcPlayerSex,vowType,isSyncTarget,wepParamType_Right1,wepParamType_Right2,wepParamType_Right3,wepParamType_Left1,wepParamType_Left2,wepParamType_Left3,equip_Subwep_Right3,equip_Subwep_Left3,secondaryItem_01,secondaryItem_02,secondaryItem_03,secondaryItem_04,secondaryItem_05,secondaryItem_06,secondaryItemNum_01,secondaryItemNum_02,secondaryItemNum_03,secondaryItemNum_04,secondaryItemNum_05,secondaryItemNum_06,HpEstMax,MpEstMax,voiceType\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g,%g,%g,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d,%u,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%d,%d,%u\n",
            this->paramId(i),
            param->baseRec_mp,
            param->baseRec_sp,
            param->red_Falldam,
            param->soul,
            param->equip_Wep_Right,
            param->equip_Subwep_Right,
            param->equip_Wep_Left,
            param->equip_Subwep_Left,
            param->equip_Helm,
            param->equip_Armer,
            param->equip_Gaunt,
            param->equip_Leg,
            param->equip_Arrow,
            param->equip_Bolt,
            param->equip_SubArrow,
            param->equip_SubBolt,
            param->equip_Accessory01,
            param->equip_Accessory02,
            param->equip_Accessory03,
            param->equip_Accessory04,
            param->unknown_0x50,
            param->unknown_0x51,
            param->elixir_material00,
            param->elixir_material01,
            param->elixir_material02,
            param->equip_Spell_01,
            param->equip_Spell_02,
            param->equip_Spell_03,
            param->equip_Spell_04,
            param->equip_Spell_05,
            param->equip_Spell_06,
            param->equip_Spell_07,
            param->item_01,
            param->item_02,
            param->item_03,
            param->item_04,
            param->item_05,
            param->item_06,
            param->item_07,
            param->item_08,
            param->item_09,
            param->item_10,
            param->npcPlayerFaceGenId,
            param->npcPlayerThinkId,
            param->baseHp,
            param->baseMp,
            param->baseSp,
            param->arrowNum,
            param->boltNum,
            param->subArrowNum,
            param->subBoltNum,
            param->soulLv,
            param->baseVit,
            param->baseWil,
            param->baseEnd,
            param->baseStr,
            param->baseDex,
            param->baseMag,
            param->baseFai,
            param->baseLuc,
            param->baseHeroPoint,
            param->baseDurability,
            param->itemNum_01,
            param->itemNum_02,
            param->itemNum_03,
            param->itemNum_04,
            param->itemNum_05,
            param->itemNum_06,
            param->itemNum_07,
            param->itemNum_08,
            param->itemNum_09,
            param->itemNum_10,
            param->gestureId0,
            param->gestureId1,
            param->gestureId2,
            param->gestureId3,
            param->gestureId4,
            param->gestureId5,
            param->gestureId6,
            param->npcPlayerType,
            param->npcPlayerDrawType,
            param->npcPlayerSex,
            param->vowType,
            param->isSyncTarget,
            param->wepParamType_Right1,
            param->wepParamType_Right2,
            param->wepParamType_Right3,
            param->wepParamType_Left1,
            param->wepParamType_Left2,
            param->wepParamType_Left3,
            param->equip_Subwep_Right3,
            param->equip_Subwep_Left3,
            param->secondaryItem_01,
            param->secondaryItem_02,
            param->secondaryItem_03,
            param->secondaryItem_04,
            param->secondaryItem_05,
            param->secondaryItem_06,
            param->secondaryItemNum_01,
            param->secondaryItemNum_02,
            param->secondaryItemNum_03,
            param->secondaryItemNum_04,
            param->secondaryItemNum_05,
            param->secondaryItemNum_06,
            param->HpEstMax,
            param->MpEstMax,
            param->voiceType
        );
    }
    fclose(f);
}

}
