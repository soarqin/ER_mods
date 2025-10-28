#include "../luabindings.h"
#include "../defs/EquipParamGoods.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<EquipParamGoods>::exportToCsvImpl(const std::wstring &csvPath);

void registerEquipParamGoods(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["EquipParamGoods"]; usertype) return;
        auto indexerEquipParamGoods = state->new_usertype<ParamTableIndexer<EquipParamGoods>>("EquipParamGoodsTableIndexer");
        indexerEquipParamGoods["count"] = sol::property(&ParamTableIndexer<EquipParamGoods>::count);
        indexerEquipParamGoods["__index"] = &ParamTableIndexer<EquipParamGoods>::at;
        indexerEquipParamGoods["id"] = &ParamTableIndexer<EquipParamGoods>::paramId;
        indexerEquipParamGoods["get"] = &ParamTableIndexer<EquipParamGoods>::get;
        indexerEquipParamGoods["exportToCsv"] = &ParamTableIndexer<EquipParamGoods>::exportToCsv;
        indexerEquipParamGoods["importFromCsv"] = &ParamTableIndexer<EquipParamGoods>::importFromCsv;
        auto utEquipParamGoods = state->new_usertype<EquipParamGoods>("EquipParamGoods");
        utEquipParamGoods["disableParam_NT"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.disableParam_NT; }, [](EquipParamGoods &param, uint8_t value) { param.disableParam_NT = value; });
        utEquipParamGoods["refId_default"] = &EquipParamGoods::refId_default;
        utEquipParamGoods["sfxVariationId"] = &EquipParamGoods::sfxVariationId;
        utEquipParamGoods["weight"] = &EquipParamGoods::weight;
        utEquipParamGoods["basicPrice"] = &EquipParamGoods::basicPrice;
        utEquipParamGoods["sellValue"] = &EquipParamGoods::sellValue;
        utEquipParamGoods["behaviorId"] = &EquipParamGoods::behaviorId;
        utEquipParamGoods["replaceItemId"] = &EquipParamGoods::replaceItemId;
        utEquipParamGoods["sortId"] = &EquipParamGoods::sortId;
        utEquipParamGoods["appearanceReplaceItemId"] = &EquipParamGoods::appearanceReplaceItemId;
        utEquipParamGoods["yesNoDialogMessageId"] = &EquipParamGoods::yesNoDialogMessageId;
        utEquipParamGoods["useEnableSpEffectType"] = &EquipParamGoods::useEnableSpEffectType;
        utEquipParamGoods["potGroupId"] = &EquipParamGoods::potGroupId;
        utEquipParamGoods["iconId"] = &EquipParamGoods::iconId;
        utEquipParamGoods["modelId"] = &EquipParamGoods::modelId;
        utEquipParamGoods["shopLv"] = &EquipParamGoods::shopLv;
        utEquipParamGoods["compTrophySedId"] = &EquipParamGoods::compTrophySedId;
        utEquipParamGoods["trophySeqId"] = &EquipParamGoods::trophySeqId;
        utEquipParamGoods["maxNum"] = &EquipParamGoods::maxNum;
        utEquipParamGoods["consumeHeroPoint"] = &EquipParamGoods::consumeHeroPoint;
        utEquipParamGoods["overDexterity"] = &EquipParamGoods::overDexterity;
        utEquipParamGoods["goodsType"] = &EquipParamGoods::goodsType;
        utEquipParamGoods["refCategory"] = &EquipParamGoods::refCategory;
        utEquipParamGoods["spEffectCategory"] = &EquipParamGoods::spEffectCategory;
        utEquipParamGoods["unknown_0x40"] = &EquipParamGoods::unknown_0x40;
        utEquipParamGoods["goodsUseAnim"] = &EquipParamGoods::goodsUseAnim;
        utEquipParamGoods["opmeMenuType"] = &EquipParamGoods::opmeMenuType;
        utEquipParamGoods["useLimitCategory"] = &EquipParamGoods::useLimitCategory;
        utEquipParamGoods["replaceCategory"] = &EquipParamGoods::replaceCategory;
        utEquipParamGoods["enable_live"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.enable_live; }, [](EquipParamGoods &param, uint8_t value) { param.enable_live = value; });
        utEquipParamGoods["enable_gray"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.enable_gray; }, [](EquipParamGoods &param, uint8_t value) { param.enable_gray = value; });
        utEquipParamGoods["enable_white"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.enable_white; }, [](EquipParamGoods &param, uint8_t value) { param.enable_white = value; });
        utEquipParamGoods["enable_black"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.enable_black; }, [](EquipParamGoods &param, uint8_t value) { param.enable_black = value; });
        utEquipParamGoods["enable_multi"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.enable_multi; }, [](EquipParamGoods &param, uint8_t value) { param.enable_multi = value; });
        utEquipParamGoods["disable_offline"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.disable_offline; }, [](EquipParamGoods &param, uint8_t value) { param.disable_offline = value; });
        utEquipParamGoods["isEquip"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.isEquip; }, [](EquipParamGoods &param, uint8_t value) { param.isEquip = value; });
        utEquipParamGoods["isConsume"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.isConsume; }, [](EquipParamGoods &param, uint8_t value) { param.isConsume = value; });
        utEquipParamGoods["isAutoEquip"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.isAutoEquip; }, [](EquipParamGoods &param, uint8_t value) { param.isAutoEquip = value; });
        utEquipParamGoods["isEstablishment"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.isEstablishment; }, [](EquipParamGoods &param, uint8_t value) { param.isEstablishment = value; });
        utEquipParamGoods["isOnlyOne"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.isOnlyOne; }, [](EquipParamGoods &param, uint8_t value) { param.isOnlyOne = value; });
        utEquipParamGoods["isDiscard"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.isDiscard; }, [](EquipParamGoods &param, uint8_t value) { param.isDiscard = value; });
        utEquipParamGoods["isDeposit"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.isDeposit; }, [](EquipParamGoods &param, uint8_t value) { param.isDeposit = value; });
        utEquipParamGoods["isDisableHand"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.isDisableHand; }, [](EquipParamGoods &param, uint8_t value) { param.isDisableHand = value; });
        utEquipParamGoods["isRemoveItem_forGameClear"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.isRemoveItem_forGameClear; }, [](EquipParamGoods &param, uint8_t value) { param.isRemoveItem_forGameClear = value; });
        utEquipParamGoods["isSuppleItem"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.isSuppleItem; }, [](EquipParamGoods &param, uint8_t value) { param.isSuppleItem = value; });
        utEquipParamGoods["isFullSuppleItem"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.isFullSuppleItem; }, [](EquipParamGoods &param, uint8_t value) { param.isFullSuppleItem = value; });
        utEquipParamGoods["isEnhance"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.isEnhance; }, [](EquipParamGoods &param, uint8_t value) { param.isEnhance = value; });
        utEquipParamGoods["isFixItem"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.isFixItem; }, [](EquipParamGoods &param, uint8_t value) { param.isFixItem = value; });
        utEquipParamGoods["disableMultiDropShare"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.disableMultiDropShare; }, [](EquipParamGoods &param, uint8_t value) { param.disableMultiDropShare = value; });
        utEquipParamGoods["disableUseAtColiseum"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.disableUseAtColiseum; }, [](EquipParamGoods &param, uint8_t value) { param.disableUseAtColiseum = value; });
        utEquipParamGoods["disableUseAtOutOfColiseum"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.disableUseAtOutOfColiseum; }, [](EquipParamGoods &param, uint8_t value) { param.disableUseAtOutOfColiseum = value; });
        utEquipParamGoods["isEnableFastUseItem"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.isEnableFastUseItem; }, [](EquipParamGoods &param, uint8_t value) { param.isEnableFastUseItem = value; });
        utEquipParamGoods["isApplySpecialEffect"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.isApplySpecialEffect; }, [](EquipParamGoods &param, uint8_t value) { param.isApplySpecialEffect = value; });
        utEquipParamGoods["syncNumVaryId"] = &EquipParamGoods::syncNumVaryId;
        utEquipParamGoods["refId_1"] = &EquipParamGoods::refId_1;
        utEquipParamGoods["refVirtualWepId"] = &EquipParamGoods::refVirtualWepId;
        utEquipParamGoods["vagrantItemLotId"] = &EquipParamGoods::vagrantItemLotId;
        utEquipParamGoods["vagrantBonusEneDropItemLotId"] = &EquipParamGoods::vagrantBonusEneDropItemLotId;
        utEquipParamGoods["vagrantItemEneDropItemLotId"] = &EquipParamGoods::vagrantItemEneDropItemLotId;
        utEquipParamGoods["castSfxId"] = &EquipParamGoods::castSfxId;
        utEquipParamGoods["fireSfxId"] = &EquipParamGoods::fireSfxId;
        utEquipParamGoods["effectSfxId"] = &EquipParamGoods::effectSfxId;
        utEquipParamGoods["enable_ActiveBigRune"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.enable_ActiveBigRune; }, [](EquipParamGoods &param, uint8_t value) { param.enable_ActiveBigRune = value; });
        utEquipParamGoods["isBonfireWarpItem"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.isBonfireWarpItem; }, [](EquipParamGoods &param, uint8_t value) { param.isBonfireWarpItem = value; });
        utEquipParamGoods["enable_Ladder"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.enable_Ladder; }, [](EquipParamGoods &param, uint8_t value) { param.enable_Ladder = value; });
        utEquipParamGoods["isUseMultiPlayPreparation"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.isUseMultiPlayPreparation; }, [](EquipParamGoods &param, uint8_t value) { param.isUseMultiPlayPreparation = value; });
        utEquipParamGoods["canMultiUse"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.canMultiUse; }, [](EquipParamGoods &param, uint8_t value) { param.canMultiUse = value; });
        utEquipParamGoods["isShieldEnchant"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.isShieldEnchant; }, [](EquipParamGoods &param, uint8_t value) { param.isShieldEnchant = value; });
        utEquipParamGoods["isWarpProhibited"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.isWarpProhibited; }, [](EquipParamGoods &param, uint8_t value) { param.isWarpProhibited = value; });
        utEquipParamGoods["isUseMultiPenaltyOnly"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.isUseMultiPenaltyOnly; }, [](EquipParamGoods &param, uint8_t value) { param.isUseMultiPenaltyOnly = value; });
        utEquipParamGoods["suppleType"] = &EquipParamGoods::suppleType;
        utEquipParamGoods["autoReplenishType"] = &EquipParamGoods::autoReplenishType;
        utEquipParamGoods["isDrop"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.isDrop; }, [](EquipParamGoods &param, uint8_t value) { param.isDrop = value; });
        utEquipParamGoods["showLogCondType"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.showLogCondType; }, [](EquipParamGoods &param, uint8_t value) { param.showLogCondType = value; });
        utEquipParamGoods["isSummonHorse"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.isSummonHorse; }, [](EquipParamGoods &param, uint8_t value) { param.isSummonHorse = value; });
        utEquipParamGoods["showDialogCondType"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.showDialogCondType; }, [](EquipParamGoods &param, uint8_t value) { param.showDialogCondType = value; });
        utEquipParamGoods["isSleepCollectionItem"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.isSleepCollectionItem; }, [](EquipParamGoods &param, uint8_t value) { param.isSleepCollectionItem = value; });
        utEquipParamGoods["enableRiding"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.enableRiding; }, [](EquipParamGoods &param, uint8_t value) { param.enableRiding = value; });
        utEquipParamGoods["disableRiding"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.disableRiding; }, [](EquipParamGoods &param, uint8_t value) { param.disableRiding = value; });
        utEquipParamGoods["maxRepositoryNum"] = &EquipParamGoods::maxRepositoryNum;
        utEquipParamGoods["sortGroupId"] = &EquipParamGoods::sortGroupId;
        utEquipParamGoods["isUseNoAttackRegion"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.isUseNoAttackRegion; }, [](EquipParamGoods &param, uint8_t value) { param.isUseNoAttackRegion = value; });
        utEquipParamGoods["unknown_0x73_1"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.unknown_0x73_1; }, [](EquipParamGoods &param, uint8_t value) { param.unknown_0x73_1 = value; });
        utEquipParamGoods["quickMatchReplenish"] = sol::property([](EquipParamGoods &param) -> uint8_t { return param.quickMatchReplenish; }, [](EquipParamGoods &param, uint8_t value) { param.quickMatchReplenish = value; });
        utEquipParamGoods["saleValue"] = &EquipParamGoods::saleValue;
        utEquipParamGoods["rarity"] = &EquipParamGoods::rarity;
        utEquipParamGoods["useLimitSummonBuddy"] = &EquipParamGoods::useLimitSummonBuddy;
        utEquipParamGoods["useLimitSpEffectType"] = &EquipParamGoods::useLimitSpEffectType;
        utEquipParamGoods["aiUseJudgeId"] = &EquipParamGoods::aiUseJudgeId;
        utEquipParamGoods["consumeMP"] = &EquipParamGoods::consumeMP;
        utEquipParamGoods["consumeHP"] = &EquipParamGoods::consumeHP;
        utEquipParamGoods["reinforceGoodsId"] = &EquipParamGoods::reinforceGoodsId;
        utEquipParamGoods["reinforceMaterialId"] = &EquipParamGoods::reinforceMaterialId;
        utEquipParamGoods["reinforcePrice"] = &EquipParamGoods::reinforcePrice;
        utEquipParamGoods["useLevel_vowType0"] = &EquipParamGoods::useLevel_vowType0;
        utEquipParamGoods["useLevel_vowType1"] = &EquipParamGoods::useLevel_vowType1;
        utEquipParamGoods["useLevel_vowType2"] = &EquipParamGoods::useLevel_vowType2;
        utEquipParamGoods["useLevel_vowType3"] = &EquipParamGoods::useLevel_vowType3;
        utEquipParamGoods["useLevel_vowType4"] = &EquipParamGoods::useLevel_vowType4;
        utEquipParamGoods["useLevel_vowType5"] = &EquipParamGoods::useLevel_vowType5;
        utEquipParamGoods["useLevel_vowType6"] = &EquipParamGoods::useLevel_vowType6;
        utEquipParamGoods["useLevel_vowType7"] = &EquipParamGoods::useLevel_vowType7;
        utEquipParamGoods["useLevel_vowType8"] = &EquipParamGoods::useLevel_vowType8;
        utEquipParamGoods["useLevel_vowType9"] = &EquipParamGoods::useLevel_vowType9;
        utEquipParamGoods["useLevel_vowType10"] = &EquipParamGoods::useLevel_vowType10;
        utEquipParamGoods["useLevel_vowType11"] = &EquipParamGoods::useLevel_vowType11;
        utEquipParamGoods["useLevel_vowType12"] = &EquipParamGoods::useLevel_vowType12;
        utEquipParamGoods["useLevel_vowType13"] = &EquipParamGoods::useLevel_vowType13;
        utEquipParamGoods["useLevel_vowType14"] = &EquipParamGoods::useLevel_vowType14;
        utEquipParamGoods["useLevel_vowType15"] = &EquipParamGoods::useLevel_vowType15;
        utEquipParamGoods["useLevel"] = &EquipParamGoods::useLevel;
        utEquipParamGoods["itemGetTutorialFlagId"] = &EquipParamGoods::itemGetTutorialFlagId;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<EquipParamGoods>>(state, L"EquipParamGoods");
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"refId_default", false},
            {"sfxVariationId", false},
            {"weight", false},
            {"basicPrice", false},
            {"sellValue", false},
            {"behaviorId", false},
            {"replaceItemId", false},
            {"sortId", false},
            {"appearanceReplaceItemId", false},
            {"yesNoDialogMessageId", false},
            {"useEnableSpEffectType", false},
            {"potGroupId", false},
            {"iconId", false},
            {"modelId", false},
            {"shopLv", false},
            {"compTrophySedId", false},
            {"trophySeqId", false},
            {"maxNum", false},
            {"consumeHeroPoint", false},
            {"overDexterity", false},
            {"goodsType", false},
            {"refCategory", false},
            {"spEffectCategory", false},
            {"unknown_0x40", false},
            {"goodsUseAnim", false},
            {"opmeMenuType", false},
            {"useLimitCategory", false},
            {"replaceCategory", false},
            {"enable_live", false},
            {"enable_gray", false},
            {"enable_white", false},
            {"enable_black", false},
            {"enable_multi", false},
            {"disable_offline", false},
            {"isEquip", false},
            {"isConsume", false},
            {"isAutoEquip", false},
            {"isEstablishment", false},
            {"isOnlyOne", false},
            {"isDiscard", false},
            {"isDeposit", false},
            {"isDisableHand", false},
            {"isRemoveItem_forGameClear", false},
            {"isSuppleItem", false},
            {"isFullSuppleItem", false},
            {"isEnhance", false},
            {"isFixItem", false},
            {"disableMultiDropShare", false},
            {"disableUseAtColiseum", false},
            {"disableUseAtOutOfColiseum", false},
            {"isEnableFastUseItem", false},
            {"isApplySpecialEffect", false},
            {"syncNumVaryId", false},
            {"refId_1", false},
            {"refVirtualWepId", false},
            {"vagrantItemLotId", false},
            {"vagrantBonusEneDropItemLotId", false},
            {"vagrantItemEneDropItemLotId", false},
            {"castSfxId", false},
            {"fireSfxId", false},
            {"effectSfxId", false},
            {"enable_ActiveBigRune", false},
            {"isBonfireWarpItem", false},
            {"enable_Ladder", false},
            {"isUseMultiPlayPreparation", false},
            {"canMultiUse", false},
            {"isShieldEnchant", false},
            {"isWarpProhibited", false},
            {"isUseMultiPenaltyOnly", false},
            {"suppleType", false},
            {"autoReplenishType", false},
            {"isDrop", false},
            {"showLogCondType", false},
            {"isSummonHorse", false},
            {"showDialogCondType", false},
            {"isSleepCollectionItem", false},
            {"enableRiding", false},
            {"disableRiding", false},
            {"maxRepositoryNum", false},
            {"sortGroupId", false},
            {"isUseNoAttackRegion", false},
            {"unknown_0x73_1", false},
            {"quickMatchReplenish", false},
            {"saleValue", false},
            {"rarity", false},
            {"useLimitSummonBuddy", false},
            {"useLimitSpEffectType", false},
            {"aiUseJudgeId", false},
            {"consumeMP", false},
            {"consumeHP", false},
            {"reinforceGoodsId", false},
            {"reinforceMaterialId", false},
            {"reinforcePrice", false},
            {"useLevel_vowType0", false},
            {"useLevel_vowType1", false},
            {"useLevel_vowType2", false},
            {"useLevel_vowType3", false},
            {"useLevel_vowType4", false},
            {"useLevel_vowType5", false},
            {"useLevel_vowType6", false},
            {"useLevel_vowType7", false},
            {"useLevel_vowType8", false},
            {"useLevel_vowType9", false},
            {"useLevel_vowType10", false},
            {"useLevel_vowType11", false},
            {"useLevel_vowType12", false},
            {"useLevel_vowType13", false},
            {"useLevel_vowType14", false},
            {"useLevel_vowType15", false},
            {"useLevel", false},
            {"itemGetTutorialFlagId", false},
        });
        return indexer;
    };
    paramsTable["EquipParamGoods"] = tableLoader;
}

template<> void ParamTableIndexer<EquipParamGoods>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,refId_default,sfxVariationId,weight,basicPrice,sellValue,behaviorId,replaceItemId,sortId,appearanceReplaceItemId,yesNoDialogMessageId,useEnableSpEffectType,potGroupId,iconId,modelId,shopLv,compTrophySedId,trophySeqId,maxNum,consumeHeroPoint,overDexterity,goodsType,refCategory,spEffectCategory,unknown_0x40,goodsUseAnim,opmeMenuType,useLimitCategory,replaceCategory,enable_live,enable_gray,enable_white,enable_black,enable_multi,disable_offline,isEquip,isConsume,isAutoEquip,isEstablishment,isOnlyOne,isDiscard,isDeposit,isDisableHand,isRemoveItem_forGameClear,isSuppleItem,isFullSuppleItem,isEnhance,isFixItem,disableMultiDropShare,disableUseAtColiseum,disableUseAtOutOfColiseum,isEnableFastUseItem,isApplySpecialEffect,syncNumVaryId,refId_1,refVirtualWepId,vagrantItemLotId,vagrantBonusEneDropItemLotId,vagrantItemEneDropItemLotId,castSfxId,fireSfxId,effectSfxId,enable_ActiveBigRune,isBonfireWarpItem,enable_Ladder,isUseMultiPlayPreparation,canMultiUse,isShieldEnchant,isWarpProhibited,isUseMultiPenaltyOnly,suppleType,autoReplenishType,isDrop,showLogCondType,isSummonHorse,showDialogCondType,isSleepCollectionItem,enableRiding,disableRiding,maxRepositoryNum,sortGroupId,isUseNoAttackRegion,unknown_0x73_1,quickMatchReplenish,saleValue,rarity,useLimitSummonBuddy,useLimitSpEffectType,aiUseJudgeId,consumeMP,consumeHP,reinforceGoodsId,reinforceMaterialId,reinforcePrice,useLevel_vowType0,useLevel_vowType1,useLevel_vowType2,useLevel_vowType3,useLevel_vowType4,useLevel_vowType5,useLevel_vowType6,useLevel_vowType7,useLevel_vowType8,useLevel_vowType9,useLevel_vowType10,useLevel_vowType11,useLevel_vowType12,useLevel_vowType13,useLevel_vowType14,useLevel_vowType15,useLevel,itemGetTutorialFlagId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%d,%d,%g,%d,%d,%d,%d,%d,%d,%d,%u,%d,%u,%u,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%u,%u,%u,%u,%d,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u\n",
            this->paramId(i),
            param->disableParam_NT,
            param->refId_default,
            param->sfxVariationId,
            param->weight,
            param->basicPrice,
            param->sellValue,
            param->behaviorId,
            param->replaceItemId,
            param->sortId,
            param->appearanceReplaceItemId,
            param->yesNoDialogMessageId,
            param->useEnableSpEffectType,
            param->potGroupId,
            param->iconId,
            param->modelId,
            param->shopLv,
            param->compTrophySedId,
            param->trophySeqId,
            param->maxNum,
            param->consumeHeroPoint,
            param->overDexterity,
            param->goodsType,
            param->refCategory,
            param->spEffectCategory,
            param->unknown_0x40,
            param->goodsUseAnim,
            param->opmeMenuType,
            param->useLimitCategory,
            param->replaceCategory,
            param->enable_live,
            param->enable_gray,
            param->enable_white,
            param->enable_black,
            param->enable_multi,
            param->disable_offline,
            param->isEquip,
            param->isConsume,
            param->isAutoEquip,
            param->isEstablishment,
            param->isOnlyOne,
            param->isDiscard,
            param->isDeposit,
            param->isDisableHand,
            param->isRemoveItem_forGameClear,
            param->isSuppleItem,
            param->isFullSuppleItem,
            param->isEnhance,
            param->isFixItem,
            param->disableMultiDropShare,
            param->disableUseAtColiseum,
            param->disableUseAtOutOfColiseum,
            param->isEnableFastUseItem,
            param->isApplySpecialEffect,
            param->syncNumVaryId,
            param->refId_1,
            param->refVirtualWepId,
            param->vagrantItemLotId,
            param->vagrantBonusEneDropItemLotId,
            param->vagrantItemEneDropItemLotId,
            param->castSfxId,
            param->fireSfxId,
            param->effectSfxId,
            param->enable_ActiveBigRune,
            param->isBonfireWarpItem,
            param->enable_Ladder,
            param->isUseMultiPlayPreparation,
            param->canMultiUse,
            param->isShieldEnchant,
            param->isWarpProhibited,
            param->isUseMultiPenaltyOnly,
            param->suppleType,
            param->autoReplenishType,
            param->isDrop,
            param->showLogCondType,
            param->isSummonHorse,
            param->showDialogCondType,
            param->isSleepCollectionItem,
            param->enableRiding,
            param->disableRiding,
            param->maxRepositoryNum,
            param->sortGroupId,
            param->isUseNoAttackRegion,
            param->unknown_0x73_1,
            param->quickMatchReplenish,
            param->saleValue,
            param->rarity,
            param->useLimitSummonBuddy,
            param->useLimitSpEffectType,
            param->aiUseJudgeId,
            param->consumeMP,
            param->consumeHP,
            param->reinforceGoodsId,
            param->reinforceMaterialId,
            param->reinforcePrice,
            param->useLevel_vowType0,
            param->useLevel_vowType1,
            param->useLevel_vowType2,
            param->useLevel_vowType3,
            param->useLevel_vowType4,
            param->useLevel_vowType5,
            param->useLevel_vowType6,
            param->useLevel_vowType7,
            param->useLevel_vowType8,
            param->useLevel_vowType9,
            param->useLevel_vowType10,
            param->useLevel_vowType11,
            param->useLevel_vowType12,
            param->useLevel_vowType13,
            param->useLevel_vowType14,
            param->useLevel_vowType15,
            param->useLevel,
            param->itemGetTutorialFlagId
        );
    }
    fclose(f);
}

}
