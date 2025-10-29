#include "../luabindings.h"
#include "../defs/MagicParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<MagicParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerMagicParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MagicParam"]; usertype) return;
        auto indexerMagicParam = state->new_usertype<ParamTableIndexer<MagicParam>>("MagicParamTableIndexer");
        indexerMagicParam["count"] = sol::property(&ParamTableIndexer<MagicParam>::count);
        indexerMagicParam["__index"] = &ParamTableIndexer<MagicParam>::at;
        indexerMagicParam["id"] = &ParamTableIndexer<MagicParam>::paramId;
        indexerMagicParam["get"] = &ParamTableIndexer<MagicParam>::get;
        indexerMagicParam["exportToCsv"] = &ParamTableIndexer<MagicParam>::exportToCsv;
        indexerMagicParam["importFromCsv"] = &ParamTableIndexer<MagicParam>::importFromCsv;
        auto utMagicParam = state->new_usertype<MagicParam>("MagicParam");
        utMagicParam["disableParam_NT"] = sol::property([](MagicParam &param) -> uint8_t { return param.disableParam_NT; }, [](MagicParam &param, uint8_t value) { param.disableParam_NT = value; });
        utMagicParam["yesNoDialogMessageId"] = &MagicParam::yesNoDialogMessageId;
        utMagicParam["limitCancelSpEffectId"] = &MagicParam::limitCancelSpEffectId;
        utMagicParam["sortId"] = &MagicParam::sortId;
        utMagicParam["requirementLuck"] = &MagicParam::requirementLuck;
        utMagicParam["aiNotifyType"] = &MagicParam::aiNotifyType;
        utMagicParam["mp"] = &MagicParam::mp;
        utMagicParam["stamina"] = &MagicParam::stamina;
        utMagicParam["iconId"] = &MagicParam::iconId;
        utMagicParam["behaviorId"] = &MagicParam::behaviorId;
        utMagicParam["mtrlItemId"] = &MagicParam::mtrlItemId;
        utMagicParam["replaceMagicId"] = &MagicParam::replaceMagicId;
        utMagicParam["maxQuantity"] = &MagicParam::maxQuantity;
        utMagicParam["refCategory1"] = &MagicParam::refCategory1;
        utMagicParam["overDexterity"] = &MagicParam::overDexterity;
        utMagicParam["refCategory2"] = &MagicParam::refCategory2;
        utMagicParam["slotLength"] = &MagicParam::slotLength;
        utMagicParam["requirementIntellect"] = &MagicParam::requirementIntellect;
        utMagicParam["requirementFaith"] = &MagicParam::requirementFaith;
        utMagicParam["analogDexterityMin"] = &MagicParam::analogDexterityMin;
        utMagicParam["analogDexterityMax"] = &MagicParam::analogDexterityMax;
        utMagicParam["ezStateBehaviorType"] = &MagicParam::ezStateBehaviorType;
        utMagicParam["refCategory3"] = &MagicParam::refCategory3;
        utMagicParam["spEffectCategory"] = &MagicParam::spEffectCategory;
        utMagicParam["refType"] = &MagicParam::refType;
        utMagicParam["opmeMenuType"] = &MagicParam::opmeMenuType;
        utMagicParam["refCategory4"] = &MagicParam::refCategory4;
        utMagicParam["hasSpEffectType"] = &MagicParam::hasSpEffectType;
        utMagicParam["replaceCategory"] = &MagicParam::replaceCategory;
        utMagicParam["useLimitCategory"] = &MagicParam::useLimitCategory;
        utMagicParam["vowType0"] = sol::property([](MagicParam &param) -> uint8_t { return param.vowType0; }, [](MagicParam &param, uint8_t value) { param.vowType0 = value; });
        utMagicParam["vowType1"] = sol::property([](MagicParam &param) -> uint8_t { return param.vowType1; }, [](MagicParam &param, uint8_t value) { param.vowType1 = value; });
        utMagicParam["vowType2"] = sol::property([](MagicParam &param) -> uint8_t { return param.vowType2; }, [](MagicParam &param, uint8_t value) { param.vowType2 = value; });
        utMagicParam["vowType3"] = sol::property([](MagicParam &param) -> uint8_t { return param.vowType3; }, [](MagicParam &param, uint8_t value) { param.vowType3 = value; });
        utMagicParam["vowType4"] = sol::property([](MagicParam &param) -> uint8_t { return param.vowType4; }, [](MagicParam &param, uint8_t value) { param.vowType4 = value; });
        utMagicParam["vowType5"] = sol::property([](MagicParam &param) -> uint8_t { return param.vowType5; }, [](MagicParam &param, uint8_t value) { param.vowType5 = value; });
        utMagicParam["vowType6"] = sol::property([](MagicParam &param) -> uint8_t { return param.vowType6; }, [](MagicParam &param, uint8_t value) { param.vowType6 = value; });
        utMagicParam["vowType7"] = sol::property([](MagicParam &param) -> uint8_t { return param.vowType7; }, [](MagicParam &param, uint8_t value) { param.vowType7 = value; });
        utMagicParam["enable_multi"] = sol::property([](MagicParam &param) -> uint8_t { return param.enable_multi; }, [](MagicParam &param, uint8_t value) { param.enable_multi = value; });
        utMagicParam["enable_multi_only"] = sol::property([](MagicParam &param) -> uint8_t { return param.enable_multi_only; }, [](MagicParam &param, uint8_t value) { param.enable_multi_only = value; });
        utMagicParam["isEnchant"] = sol::property([](MagicParam &param) -> uint8_t { return param.isEnchant; }, [](MagicParam &param, uint8_t value) { param.isEnchant = value; });
        utMagicParam["isShieldEnchant"] = sol::property([](MagicParam &param) -> uint8_t { return param.isShieldEnchant; }, [](MagicParam &param, uint8_t value) { param.isShieldEnchant = value; });
        utMagicParam["enable_live"] = sol::property([](MagicParam &param) -> uint8_t { return param.enable_live; }, [](MagicParam &param, uint8_t value) { param.enable_live = value; });
        utMagicParam["enable_gray"] = sol::property([](MagicParam &param) -> uint8_t { return param.enable_gray; }, [](MagicParam &param, uint8_t value) { param.enable_gray = value; });
        utMagicParam["enable_white"] = sol::property([](MagicParam &param) -> uint8_t { return param.enable_white; }, [](MagicParam &param, uint8_t value) { param.enable_white = value; });
        utMagicParam["enable_black"] = sol::property([](MagicParam &param) -> uint8_t { return param.enable_black; }, [](MagicParam &param, uint8_t value) { param.enable_black = value; });
        utMagicParam["disableOffline"] = sol::property([](MagicParam &param) -> uint8_t { return param.disableOffline; }, [](MagicParam &param, uint8_t value) { param.disableOffline = value; });
        utMagicParam["castResonanceMagic"] = sol::property([](MagicParam &param) -> uint8_t { return param.castResonanceMagic; }, [](MagicParam &param, uint8_t value) { param.castResonanceMagic = value; });
        utMagicParam["isValidTough_ProtSADmg"] = sol::property([](MagicParam &param) -> uint8_t { return param.isValidTough_ProtSADmg; }, [](MagicParam &param, uint8_t value) { param.isValidTough_ProtSADmg = value; });
        utMagicParam["isWarpMagic"] = sol::property([](MagicParam &param) -> uint8_t { return param.isWarpMagic; }, [](MagicParam &param, uint8_t value) { param.isWarpMagic = value; });
        utMagicParam["enableRiding"] = sol::property([](MagicParam &param) -> uint8_t { return param.enableRiding; }, [](MagicParam &param, uint8_t value) { param.enableRiding = value; });
        utMagicParam["disableRiding"] = sol::property([](MagicParam &param) -> uint8_t { return param.disableRiding; }, [](MagicParam &param, uint8_t value) { param.disableRiding = value; });
        utMagicParam["isUseNoAttackRegion"] = sol::property([](MagicParam &param) -> uint8_t { return param.isUseNoAttackRegion; }, [](MagicParam &param, uint8_t value) { param.isUseNoAttackRegion = value; });
        utMagicParam["vowType8"] = sol::property([](MagicParam &param) -> uint8_t { return param.vowType8; }, [](MagicParam &param, uint8_t value) { param.vowType8 = value; });
        utMagicParam["vowType9"] = sol::property([](MagicParam &param) -> uint8_t { return param.vowType9; }, [](MagicParam &param, uint8_t value) { param.vowType9 = value; });
        utMagicParam["vowType10"] = sol::property([](MagicParam &param) -> uint8_t { return param.vowType10; }, [](MagicParam &param, uint8_t value) { param.vowType10 = value; });
        utMagicParam["vowType11"] = sol::property([](MagicParam &param) -> uint8_t { return param.vowType11; }, [](MagicParam &param, uint8_t value) { param.vowType11 = value; });
        utMagicParam["vowType12"] = sol::property([](MagicParam &param) -> uint8_t { return param.vowType12; }, [](MagicParam &param, uint8_t value) { param.vowType12 = value; });
        utMagicParam["vowType13"] = sol::property([](MagicParam &param) -> uint8_t { return param.vowType13; }, [](MagicParam &param, uint8_t value) { param.vowType13 = value; });
        utMagicParam["vowType14"] = sol::property([](MagicParam &param) -> uint8_t { return param.vowType14; }, [](MagicParam &param, uint8_t value) { param.vowType14 = value; });
        utMagicParam["vowType15"] = sol::property([](MagicParam &param) -> uint8_t { return param.vowType15; }, [](MagicParam &param, uint8_t value) { param.vowType15 = value; });
        utMagicParam["castSfxId"] = &MagicParam::castSfxId;
        utMagicParam["fireSfxId"] = &MagicParam::fireSfxId;
        utMagicParam["effectSfxId"] = &MagicParam::effectSfxId;
        utMagicParam["toughnessCorrectRate"] = &MagicParam::toughnessCorrectRate;
        utMagicParam["ReplacementStatusType"] = &MagicParam::ReplacementStatusType;
        utMagicParam["ReplacementStatus1"] = &MagicParam::ReplacementStatus1;
        utMagicParam["ReplacementStatus2"] = &MagicParam::ReplacementStatus2;
        utMagicParam["ReplacementStatus3"] = &MagicParam::ReplacementStatus3;
        utMagicParam["ReplacementStatus4"] = &MagicParam::ReplacementStatus4;
        utMagicParam["refCategory5"] = &MagicParam::refCategory5;
        utMagicParam["consumeSA"] = &MagicParam::consumeSA;
        utMagicParam["ReplacementMagic1"] = &MagicParam::ReplacementMagic1;
        utMagicParam["ReplacementMagic2"] = &MagicParam::ReplacementMagic2;
        utMagicParam["ReplacementMagic3"] = &MagicParam::ReplacementMagic3;
        utMagicParam["ReplacementMagic4"] = &MagicParam::ReplacementMagic4;
        utMagicParam["mp_charge"] = &MagicParam::mp_charge;
        utMagicParam["stamina_charge"] = &MagicParam::stamina_charge;
        utMagicParam["createLimitGroupId"] = &MagicParam::createLimitGroupId;
        utMagicParam["refCategory6"] = &MagicParam::refCategory6;
        utMagicParam["subCategory1"] = &MagicParam::subCategory1;
        utMagicParam["subCategory2"] = &MagicParam::subCategory2;
        utMagicParam["refCategory7"] = &MagicParam::refCategory7;
        utMagicParam["refCategory8"] = &MagicParam::refCategory8;
        utMagicParam["refCategory9"] = &MagicParam::refCategory9;
        utMagicParam["refCategory10"] = &MagicParam::refCategory10;
        utMagicParam["refId1"] = &MagicParam::refId1;
        utMagicParam["refId2"] = &MagicParam::refId2;
        utMagicParam["refId3"] = &MagicParam::refId3;
        utMagicParam["aiUseJudgeId"] = &MagicParam::aiUseJudgeId;
        utMagicParam["refId4"] = &MagicParam::refId4;
        utMagicParam["refId5"] = &MagicParam::refId5;
        utMagicParam["refId6"] = &MagicParam::refId6;
        utMagicParam["refId7"] = &MagicParam::refId7;
        utMagicParam["refId8"] = &MagicParam::refId8;
        utMagicParam["refId9"] = &MagicParam::refId9;
        utMagicParam["refId10"] = &MagicParam::refId10;
        utMagicParam["consumeType1"] = &MagicParam::consumeType1;
        utMagicParam["consumeType2"] = &MagicParam::consumeType2;
        utMagicParam["consumeType3"] = &MagicParam::consumeType3;
        utMagicParam["consumeType4"] = &MagicParam::consumeType4;
        utMagicParam["consumeType5"] = &MagicParam::consumeType5;
        utMagicParam["consumeType6"] = &MagicParam::consumeType6;
        utMagicParam["consumeType7"] = &MagicParam::consumeType7;
        utMagicParam["consumeType8"] = &MagicParam::consumeType8;
        utMagicParam["consumeType9"] = &MagicParam::consumeType9;
        utMagicParam["consumeType10"] = &MagicParam::consumeType10;
        utMagicParam["consumeLoopMP_forMenu"] = &MagicParam::consumeLoopMP_forMenu;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<MagicParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<MagicParam>>(nullptr);
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"yesNoDialogMessageId", false},
            {"limitCancelSpEffectId", false},
            {"sortId", false},
            {"requirementLuck", false},
            {"aiNotifyType", false},
            {"mp", false},
            {"stamina", false},
            {"iconId", false},
            {"behaviorId", false},
            {"mtrlItemId", false},
            {"replaceMagicId", false},
            {"maxQuantity", false},
            {"refCategory1", false},
            {"overDexterity", false},
            {"refCategory2", false},
            {"slotLength", false},
            {"requirementIntellect", false},
            {"requirementFaith", false},
            {"analogDexterityMin", false},
            {"analogDexterityMax", false},
            {"ezStateBehaviorType", false},
            {"refCategory3", false},
            {"spEffectCategory", false},
            {"refType", false},
            {"opmeMenuType", false},
            {"refCategory4", false},
            {"hasSpEffectType", false},
            {"replaceCategory", false},
            {"useLimitCategory", false},
            {"vowType0", false},
            {"vowType1", false},
            {"vowType2", false},
            {"vowType3", false},
            {"vowType4", false},
            {"vowType5", false},
            {"vowType6", false},
            {"vowType7", false},
            {"enable_multi", false},
            {"enable_multi_only", false},
            {"isEnchant", false},
            {"isShieldEnchant", false},
            {"enable_live", false},
            {"enable_gray", false},
            {"enable_white", false},
            {"enable_black", false},
            {"disableOffline", false},
            {"castResonanceMagic", false},
            {"isValidTough_ProtSADmg", false},
            {"isWarpMagic", false},
            {"enableRiding", false},
            {"disableRiding", false},
            {"isUseNoAttackRegion", false},
            {"vowType8", false},
            {"vowType9", false},
            {"vowType10", false},
            {"vowType11", false},
            {"vowType12", false},
            {"vowType13", false},
            {"vowType14", false},
            {"vowType15", false},
            {"castSfxId", false},
            {"fireSfxId", false},
            {"effectSfxId", false},
            {"toughnessCorrectRate", false},
            {"ReplacementStatusType", false},
            {"ReplacementStatus1", false},
            {"ReplacementStatus2", false},
            {"ReplacementStatus3", false},
            {"ReplacementStatus4", false},
            {"refCategory5", false},
            {"consumeSA", false},
            {"ReplacementMagic1", false},
            {"ReplacementMagic2", false},
            {"ReplacementMagic3", false},
            {"ReplacementMagic4", false},
            {"mp_charge", false},
            {"stamina_charge", false},
            {"createLimitGroupId", false},
            {"refCategory6", false},
            {"subCategory1", false},
            {"subCategory2", false},
            {"refCategory7", false},
            {"refCategory8", false},
            {"refCategory9", false},
            {"refCategory10", false},
            {"refId1", false},
            {"refId2", false},
            {"refId3", false},
            {"aiUseJudgeId", false},
            {"refId4", false},
            {"refId5", false},
            {"refId6", false},
            {"refId7", false},
            {"refId8", false},
            {"refId9", false},
            {"refId10", false},
            {"consumeType1", false},
            {"consumeType2", false},
            {"consumeType3", false},
            {"consumeType4", false},
            {"consumeType5", false},
            {"consumeType6", false},
            {"consumeType7", false},
            {"consumeType8", false},
            {"consumeType9", false},
            {"consumeType10", false},
            {"consumeLoopMP_forMenu", false},
        });
        return indexer;
    };
    paramsTable["Magic"] = [tableLoader]() -> auto { return tableLoader(L"Magic"); };
}

template<> void ParamTableIndexer<MagicParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,yesNoDialogMessageId,limitCancelSpEffectId,sortId,requirementLuck,aiNotifyType,mp,stamina,iconId,behaviorId,mtrlItemId,replaceMagicId,maxQuantity,refCategory1,overDexterity,refCategory2,slotLength,requirementIntellect,requirementFaith,analogDexterityMin,analogDexterityMax,ezStateBehaviorType,refCategory3,spEffectCategory,refType,opmeMenuType,refCategory4,hasSpEffectType,replaceCategory,useLimitCategory,vowType0,vowType1,vowType2,vowType3,vowType4,vowType5,vowType6,vowType7,enable_multi,enable_multi_only,isEnchant,isShieldEnchant,enable_live,enable_gray,enable_white,enable_black,disableOffline,castResonanceMagic,isValidTough_ProtSADmg,isWarpMagic,enableRiding,disableRiding,isUseNoAttackRegion,vowType8,vowType9,vowType10,vowType11,vowType12,vowType13,vowType14,vowType15,castSfxId,fireSfxId,effectSfxId,toughnessCorrectRate,ReplacementStatusType,ReplacementStatus1,ReplacementStatus2,ReplacementStatus3,ReplacementStatus4,refCategory5,consumeSA,ReplacementMagic1,ReplacementMagic2,ReplacementMagic3,ReplacementMagic4,mp_charge,stamina_charge,createLimitGroupId,refCategory6,subCategory1,subCategory2,refCategory7,refCategory8,refCategory9,refCategory10,refId1,refId2,refId3,aiUseJudgeId,refId4,refId5,refId6,refId7,refId8,refId9,refId10,consumeType1,consumeType2,consumeType3,consumeType4,consumeType5,consumeType6,consumeType7,consumeType8,consumeType9,consumeType10,consumeLoopMP_forMenu\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%d,%d,%d,%u,%u,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%d,%g,%u,%d,%d,%d,%d,%u,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d\n",
            this->paramId(i),
            param->disableParam_NT,
            param->yesNoDialogMessageId,
            param->limitCancelSpEffectId,
            param->sortId,
            param->requirementLuck,
            param->aiNotifyType,
            param->mp,
            param->stamina,
            param->iconId,
            param->behaviorId,
            param->mtrlItemId,
            param->replaceMagicId,
            param->maxQuantity,
            param->refCategory1,
            param->overDexterity,
            param->refCategory2,
            param->slotLength,
            param->requirementIntellect,
            param->requirementFaith,
            param->analogDexterityMin,
            param->analogDexterityMax,
            param->ezStateBehaviorType,
            param->refCategory3,
            param->spEffectCategory,
            param->refType,
            param->opmeMenuType,
            param->refCategory4,
            param->hasSpEffectType,
            param->replaceCategory,
            param->useLimitCategory,
            param->vowType0,
            param->vowType1,
            param->vowType2,
            param->vowType3,
            param->vowType4,
            param->vowType5,
            param->vowType6,
            param->vowType7,
            param->enable_multi,
            param->enable_multi_only,
            param->isEnchant,
            param->isShieldEnchant,
            param->enable_live,
            param->enable_gray,
            param->enable_white,
            param->enable_black,
            param->disableOffline,
            param->castResonanceMagic,
            param->isValidTough_ProtSADmg,
            param->isWarpMagic,
            param->enableRiding,
            param->disableRiding,
            param->isUseNoAttackRegion,
            param->vowType8,
            param->vowType9,
            param->vowType10,
            param->vowType11,
            param->vowType12,
            param->vowType13,
            param->vowType14,
            param->vowType15,
            param->castSfxId,
            param->fireSfxId,
            param->effectSfxId,
            param->toughnessCorrectRate,
            param->ReplacementStatusType,
            param->ReplacementStatus1,
            param->ReplacementStatus2,
            param->ReplacementStatus3,
            param->ReplacementStatus4,
            param->refCategory5,
            param->consumeSA,
            param->ReplacementMagic1,
            param->ReplacementMagic2,
            param->ReplacementMagic3,
            param->ReplacementMagic4,
            param->mp_charge,
            param->stamina_charge,
            param->createLimitGroupId,
            param->refCategory6,
            param->subCategory1,
            param->subCategory2,
            param->refCategory7,
            param->refCategory8,
            param->refCategory9,
            param->refCategory10,
            param->refId1,
            param->refId2,
            param->refId3,
            param->aiUseJudgeId,
            param->refId4,
            param->refId5,
            param->refId6,
            param->refId7,
            param->refId8,
            param->refId9,
            param->refId10,
            param->consumeType1,
            param->consumeType2,
            param->consumeType3,
            param->consumeType4,
            param->consumeType5,
            param->consumeType6,
            param->consumeType7,
            param->consumeType8,
            param->consumeType9,
            param->consumeType10,
            param->consumeLoopMP_forMenu
        );
    }
    fclose(f);
}

}
