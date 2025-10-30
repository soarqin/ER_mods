#include "../luabindings.h"
#include "../defs/PlayerCommonParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<PlayerCommonParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerPlayerCommonParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["PlayerCommonParam"]; usertype) return;
        auto indexerPlayerCommonParam = state->new_usertype<ParamTableIndexer<PlayerCommonParam>>("PlayerCommonParamTableIndexer");
        indexerPlayerCommonParam["count"] = sol::property(&ParamTableIndexer<PlayerCommonParam>::count);
        indexerPlayerCommonParam["__index"] = &ParamTableIndexer<PlayerCommonParam>::at;
        indexerPlayerCommonParam["id"] = &ParamTableIndexer<PlayerCommonParam>::paramId;
        indexerPlayerCommonParam["get"] = &ParamTableIndexer<PlayerCommonParam>::get;
        indexerPlayerCommonParam["exportToCsv"] = &ParamTableIndexer<PlayerCommonParam>::exportToCsv;
        indexerPlayerCommonParam["importFromCsv"] = &ParamTableIndexer<PlayerCommonParam>::importFromCsv;
        auto utPlayerCommonParam = state->new_usertype<PlayerCommonParam>("PlayerCommonParam");
        utPlayerCommonParam["playerFootEffect_bySFX"] = &PlayerCommonParam::playerFootEffect_bySFX;
        utPlayerCommonParam["snipeModeDrawAlpha_FadeTime"] = &PlayerCommonParam::snipeModeDrawAlpha_FadeTime;
        utPlayerCommonParam["toughnessRecoverCorrection"] = &PlayerCommonParam::toughnessRecoverCorrection;
        utPlayerCommonParam["baseMagicSlotSize"] = &PlayerCommonParam::baseMagicSlotSize;
        utPlayerCommonParam["baseAccSlotNum"] = &PlayerCommonParam::baseAccSlotNum;
        utPlayerCommonParam["animeID_DropItemPick"] = &PlayerCommonParam::animeID_DropItemPick;
        utPlayerCommonParam["resistRecoverPoint_Sleep_Player"] = &PlayerCommonParam::resistRecoverPoint_Sleep_Player;
        utPlayerCommonParam["flareOverrideHomingAngle"] = &PlayerCommonParam::flareOverrideHomingAngle;
        utPlayerCommonParam["flareOverrideHomingStopRange"] = &PlayerCommonParam::flareOverrideHomingStopRange;
        utPlayerCommonParam["animeID_SleepCollectorItemPick"] = &PlayerCommonParam::animeID_SleepCollectorItemPick;
        utPlayerCommonParam["unlockEventFlagBaseId_forWepAttr"] = &PlayerCommonParam::unlockEventFlagBaseId_forWepAttr;
        utPlayerCommonParam["systemEnchant_BigRune"] = &PlayerCommonParam::systemEnchant_BigRune;
        utPlayerCommonParam["lowStatus_AtkPowDown"] = &PlayerCommonParam::lowStatus_AtkPowDown;
        utPlayerCommonParam["lowStatus_ConsumeStaminaRate"] = &PlayerCommonParam::lowStatus_ConsumeStaminaRate;
        utPlayerCommonParam["lowStatus_AtkGuardBreak"] = &PlayerCommonParam::lowStatus_AtkGuardBreak;
        utPlayerCommonParam["guardStatusCorrect_MaxStatusVal"] = &PlayerCommonParam::guardStatusCorrect_MaxStatusVal;
        utPlayerCommonParam["unlockEventFlagStepNum_forWepAttr"] = &PlayerCommonParam::unlockEventFlagStepNum_forWepAttr;
        utPlayerCommonParam["retributionMagic_damageCountNum"] = &PlayerCommonParam::retributionMagic_damageCountNum;
        utPlayerCommonParam["retributionMagic_damageCountRemainTime"] = &PlayerCommonParam::retributionMagic_damageCountRemainTime;
        utPlayerCommonParam["retributionMagic_burstDmypolyId"] = &PlayerCommonParam::retributionMagic_burstDmypolyId;
        utPlayerCommonParam["retributionMagic_burstMagicParamId"] = &PlayerCommonParam::retributionMagic_burstMagicParamId;
        utPlayerCommonParam["chrAimCam_rideOffsetHeight"] = &PlayerCommonParam::chrAimCam_rideOffsetHeight;
        utPlayerCommonParam["arrowCaseWepBindDmypolyId"] = &PlayerCommonParam::arrowCaseWepBindDmypolyId;
        utPlayerCommonParam["boltPouchWepBindDmypolyId"] = &PlayerCommonParam::boltPouchWepBindDmypolyId;
        utPlayerCommonParam["estusFlaskAllocateRate"] = &PlayerCommonParam::estusFlaskAllocateRate;
        utPlayerCommonParam["kickAcceptanceDeg"] = &PlayerCommonParam::kickAcceptanceDeg;
        utPlayerCommonParam["npcPlayerAnalogWeightRate_Light"] = &PlayerCommonParam::npcPlayerAnalogWeightRate_Light;
        utPlayerCommonParam["npcPlayerAnalogWeightRate_Normal"] = &PlayerCommonParam::npcPlayerAnalogWeightRate_Normal;
        utPlayerCommonParam["npcPlayerAnalogWeightRate_Heavy"] = &PlayerCommonParam::npcPlayerAnalogWeightRate_Heavy;
        utPlayerCommonParam["npcPlayerAnalogWeightRate_WeightOver"] = &PlayerCommonParam::npcPlayerAnalogWeightRate_WeightOver;
        utPlayerCommonParam["npcPlayerAnalogWeightRate_SuperLight"] = &PlayerCommonParam::npcPlayerAnalogWeightRate_SuperLight;
        utPlayerCommonParam["clearCountCorrectBaseSpEffectId"] = &PlayerCommonParam::clearCountCorrectBaseSpEffectId;
        utPlayerCommonParam["arrowBoltModelIdOffset"] = &PlayerCommonParam::arrowBoltModelIdOffset;
        utPlayerCommonParam["arrowBoltRemainingNumModelMaskThreshold1"] = &PlayerCommonParam::arrowBoltRemainingNumModelMaskThreshold1;
        utPlayerCommonParam["arrowBoltRemainingNumModelMaskThreshold2"] = &PlayerCommonParam::arrowBoltRemainingNumModelMaskThreshold2;
        utPlayerCommonParam["resistRecoverPoint_Poision_Player"] = &PlayerCommonParam::resistRecoverPoint_Poision_Player;
        utPlayerCommonParam["resistRecoverPoint_Desease_Player"] = &PlayerCommonParam::resistRecoverPoint_Desease_Player;
        utPlayerCommonParam["resistRecoverPoint_Blood_Player"] = &PlayerCommonParam::resistRecoverPoint_Blood_Player;
        utPlayerCommonParam["resistRecoverPoint_Curse_Player"] = &PlayerCommonParam::resistRecoverPoint_Curse_Player;
        utPlayerCommonParam["resistRecoverPoint_Freeze_Player"] = &PlayerCommonParam::resistRecoverPoint_Freeze_Player;
        utPlayerCommonParam["resistRecoverPoint_Poision_Enemy"] = &PlayerCommonParam::resistRecoverPoint_Poision_Enemy;
        utPlayerCommonParam["resistRecoverPoint_Desease_Enemy"] = &PlayerCommonParam::resistRecoverPoint_Desease_Enemy;
        utPlayerCommonParam["resistRecoverPoint_Blood_Enemy"] = &PlayerCommonParam::resistRecoverPoint_Blood_Enemy;
        utPlayerCommonParam["resistRecoverPoint_Curse_Enemy"] = &PlayerCommonParam::resistRecoverPoint_Curse_Enemy;
        utPlayerCommonParam["resistRecoverPoint_Freeze_Enemy"] = &PlayerCommonParam::resistRecoverPoint_Freeze_Enemy;
        utPlayerCommonParam["requestTimeLeftBothHand"] = &PlayerCommonParam::requestTimeLeftBothHand;
        utPlayerCommonParam["resistRecoverPoint_Madness_Player"] = &PlayerCommonParam::resistRecoverPoint_Madness_Player;
        utPlayerCommonParam["animeID_MaterialItemPick"] = &PlayerCommonParam::animeID_MaterialItemPick;
        utPlayerCommonParam["hpEstusFlaskAllocateRateForYellowMonk"] = &PlayerCommonParam::hpEstusFlaskAllocateRateForYellowMonk;
        utPlayerCommonParam["hpEstusFlaskAllocateOffsetForYellowMonk"] = &PlayerCommonParam::hpEstusFlaskAllocateOffsetForYellowMonk;
        utPlayerCommonParam["mpEstusFlaskAllocateRateForYellowMonk"] = &PlayerCommonParam::mpEstusFlaskAllocateRateForYellowMonk;
        utPlayerCommonParam["mpEstusFlaskAllocateOffsetForYellowMonk"] = &PlayerCommonParam::mpEstusFlaskAllocateOffsetForYellowMonk;
        utPlayerCommonParam["resistRecoverPoint_Sleep_Enemy"] = &PlayerCommonParam::resistRecoverPoint_Sleep_Enemy;
        utPlayerCommonParam["resistRecoverPoint_Madness_Enemy"] = &PlayerCommonParam::resistRecoverPoint_Madness_Enemy;
        utPlayerCommonParam["resistCurseItemId"] = &PlayerCommonParam::resistCurseItemId;
        utPlayerCommonParam["resistCurseItemMaxNum"] = &PlayerCommonParam::resistCurseItemMaxNum;
        utPlayerCommonParam["resistCurseItemSpEffectBaseId"] = &PlayerCommonParam::resistCurseItemSpEffectBaseId;
        utPlayerCommonParam["resistCurseItemLotParamId_map"] = &PlayerCommonParam::resistCurseItemLotParamId_map;
        utPlayerCommonParam["unknown_0xcc"] = &PlayerCommonParam::unknown_0xcc;
        utPlayerCommonParam["unknown_0xd0"] = &PlayerCommonParam::unknown_0xd0;
        utPlayerCommonParam["unknown_0xd4"] = &PlayerCommonParam::unknown_0xd4;
        utPlayerCommonParam["unknown_0xd8"] = &PlayerCommonParam::unknown_0xd8;
        utPlayerCommonParam["unknown_0xdc"] = &PlayerCommonParam::unknown_0xdc;
        utPlayerCommonParam["unknown_0xe0"] = &PlayerCommonParam::unknown_0xe0;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<PlayerCommonParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<PlayerCommonParam>>(nullptr);
        indexer->setFieldNames({
            {"playerFootEffect_bySFX", false},
            {"snipeModeDrawAlpha_FadeTime", false},
            {"toughnessRecoverCorrection", false},
            {"baseMagicSlotSize", false},
            {"baseAccSlotNum", false},
            {"animeID_DropItemPick", false},
            {"resistRecoverPoint_Sleep_Player", false},
            {"flareOverrideHomingAngle", false},
            {"flareOverrideHomingStopRange", false},
            {"animeID_SleepCollectorItemPick", false},
            {"unlockEventFlagBaseId_forWepAttr", false},
            {"systemEnchant_BigRune", false},
            {"lowStatus_AtkPowDown", false},
            {"lowStatus_ConsumeStaminaRate", false},
            {"lowStatus_AtkGuardBreak", false},
            {"guardStatusCorrect_MaxStatusVal", false},
            {"unlockEventFlagStepNum_forWepAttr", false},
            {"retributionMagic_damageCountNum", false},
            {"retributionMagic_damageCountRemainTime", false},
            {"retributionMagic_burstDmypolyId", false},
            {"retributionMagic_burstMagicParamId", false},
            {"chrAimCam_rideOffsetHeight", false},
            {"arrowCaseWepBindDmypolyId", false},
            {"boltPouchWepBindDmypolyId", false},
            {"estusFlaskAllocateRate", false},
            {"kickAcceptanceDeg", false},
            {"npcPlayerAnalogWeightRate_Light", false},
            {"npcPlayerAnalogWeightRate_Normal", false},
            {"npcPlayerAnalogWeightRate_Heavy", false},
            {"npcPlayerAnalogWeightRate_WeightOver", false},
            {"npcPlayerAnalogWeightRate_SuperLight", false},
            {"clearCountCorrectBaseSpEffectId", false},
            {"arrowBoltModelIdOffset", false},
            {"arrowBoltRemainingNumModelMaskThreshold1", false},
            {"arrowBoltRemainingNumModelMaskThreshold2", false},
            {"resistRecoverPoint_Poision_Player", false},
            {"resistRecoverPoint_Desease_Player", false},
            {"resistRecoverPoint_Blood_Player", false},
            {"resistRecoverPoint_Curse_Player", false},
            {"resistRecoverPoint_Freeze_Player", false},
            {"resistRecoverPoint_Poision_Enemy", false},
            {"resistRecoverPoint_Desease_Enemy", false},
            {"resistRecoverPoint_Blood_Enemy", false},
            {"resistRecoverPoint_Curse_Enemy", false},
            {"resistRecoverPoint_Freeze_Enemy", false},
            {"requestTimeLeftBothHand", false},
            {"resistRecoverPoint_Madness_Player", false},
            {"animeID_MaterialItemPick", false},
            {"hpEstusFlaskAllocateRateForYellowMonk", false},
            {"hpEstusFlaskAllocateOffsetForYellowMonk", false},
            {"mpEstusFlaskAllocateRateForYellowMonk", false},
            {"mpEstusFlaskAllocateOffsetForYellowMonk", false},
            {"resistRecoverPoint_Sleep_Enemy", false},
            {"resistRecoverPoint_Madness_Enemy", false},
            {"resistCurseItemId", false},
            {"resistCurseItemMaxNum", false},
            {"resistCurseItemSpEffectBaseId", false},
            {"resistCurseItemLotParamId_map", false},
            {"unknown_0xcc", false},
            {"unknown_0xd0", false},
            {"unknown_0xd4", false},
            {"unknown_0xd8", false},
            {"unknown_0xdc", false},
            {"unknown_0xe0", false},
        });
        return indexer;
    };
    paramsTable["PlayerCommonParam"] = [tableLoader]() -> auto { return tableLoader(L"PlayerCommonParam"); };
}

template<> void ParamTableIndexer<PlayerCommonParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,playerFootEffect_bySFX,snipeModeDrawAlpha_FadeTime,toughnessRecoverCorrection,baseMagicSlotSize,baseAccSlotNum,animeID_DropItemPick,resistRecoverPoint_Sleep_Player,flareOverrideHomingAngle,flareOverrideHomingStopRange,animeID_SleepCollectorItemPick,unlockEventFlagBaseId_forWepAttr,systemEnchant_BigRune,lowStatus_AtkPowDown,lowStatus_ConsumeStaminaRate,lowStatus_AtkGuardBreak");
    fwprintf(f, L",guardStatusCorrect_MaxStatusVal,unlockEventFlagStepNum_forWepAttr,retributionMagic_damageCountNum,retributionMagic_damageCountRemainTime,retributionMagic_burstDmypolyId,retributionMagic_burstMagicParamId,chrAimCam_rideOffsetHeight,arrowCaseWepBindDmypolyId,boltPouchWepBindDmypolyId,estusFlaskAllocateRate,kickAcceptanceDeg,npcPlayerAnalogWeightRate_Light,npcPlayerAnalogWeightRate_Normal,npcPlayerAnalogWeightRate_Heavy,npcPlayerAnalogWeightRate_WeightOver,npcPlayerAnalogWeightRate_SuperLight");
    fwprintf(f, L",clearCountCorrectBaseSpEffectId,arrowBoltModelIdOffset,arrowBoltRemainingNumModelMaskThreshold1,arrowBoltRemainingNumModelMaskThreshold2,resistRecoverPoint_Poision_Player,resistRecoverPoint_Desease_Player,resistRecoverPoint_Blood_Player,resistRecoverPoint_Curse_Player,resistRecoverPoint_Freeze_Player,resistRecoverPoint_Poision_Enemy,resistRecoverPoint_Desease_Enemy,resistRecoverPoint_Blood_Enemy,resistRecoverPoint_Curse_Enemy,resistRecoverPoint_Freeze_Enemy,requestTimeLeftBothHand,resistRecoverPoint_Madness_Player");
    fwprintf(f, L",animeID_MaterialItemPick,hpEstusFlaskAllocateRateForYellowMonk,hpEstusFlaskAllocateOffsetForYellowMonk,mpEstusFlaskAllocateRateForYellowMonk,mpEstusFlaskAllocateOffsetForYellowMonk,resistRecoverPoint_Sleep_Enemy,resistRecoverPoint_Madness_Enemy,resistCurseItemId,resistCurseItemMaxNum,resistCurseItemSpEffectBaseId,resistCurseItemLotParamId_map,unknown_0xcc,unknown_0xd0,unknown_0xd4,unknown_0xd8,unknown_0xdc");
    fwprintf(f, L",unknown_0xe0\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%g,%g,%u,%u,%d,%g,%d,%g,%d,%u,%d,%g,%g,%d,%d,%u,%u,%u,%u,%d,%g,%d,%d,%g,%u,%u,%u,%u,%u,%u,%d,%d,%d,%d,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%d,%g,%d,%g,%d,%g,%g,%d,%u,%d,%d,%d,%d,%d,%d,%d,%d\n",
            this->paramId(i),
            param->playerFootEffect_bySFX,
            param->snipeModeDrawAlpha_FadeTime,
            param->toughnessRecoverCorrection,
            param->baseMagicSlotSize,
            param->baseAccSlotNum,
            param->animeID_DropItemPick,
            param->resistRecoverPoint_Sleep_Player,
            param->flareOverrideHomingAngle,
            param->flareOverrideHomingStopRange,
            param->animeID_SleepCollectorItemPick,
            param->unlockEventFlagBaseId_forWepAttr,
            param->systemEnchant_BigRune,
            param->lowStatus_AtkPowDown,
            param->lowStatus_ConsumeStaminaRate,
            param->lowStatus_AtkGuardBreak,
            param->guardStatusCorrect_MaxStatusVal,
            param->unlockEventFlagStepNum_forWepAttr,
            param->retributionMagic_damageCountNum,
            param->retributionMagic_damageCountRemainTime,
            param->retributionMagic_burstDmypolyId,
            param->retributionMagic_burstMagicParamId,
            param->chrAimCam_rideOffsetHeight,
            param->arrowCaseWepBindDmypolyId,
            param->boltPouchWepBindDmypolyId,
            param->estusFlaskAllocateRate,
            param->kickAcceptanceDeg,
            param->npcPlayerAnalogWeightRate_Light,
            param->npcPlayerAnalogWeightRate_Normal,
            param->npcPlayerAnalogWeightRate_Heavy,
            param->npcPlayerAnalogWeightRate_WeightOver,
            param->npcPlayerAnalogWeightRate_SuperLight,
            param->clearCountCorrectBaseSpEffectId,
            param->arrowBoltModelIdOffset,
            param->arrowBoltRemainingNumModelMaskThreshold1,
            param->arrowBoltRemainingNumModelMaskThreshold2,
            param->resistRecoverPoint_Poision_Player,
            param->resistRecoverPoint_Desease_Player,
            param->resistRecoverPoint_Blood_Player,
            param->resistRecoverPoint_Curse_Player,
            param->resistRecoverPoint_Freeze_Player,
            param->resistRecoverPoint_Poision_Enemy,
            param->resistRecoverPoint_Desease_Enemy,
            param->resistRecoverPoint_Blood_Enemy,
            param->resistRecoverPoint_Curse_Enemy,
            param->resistRecoverPoint_Freeze_Enemy,
            param->requestTimeLeftBothHand,
            param->resistRecoverPoint_Madness_Player,
            param->animeID_MaterialItemPick,
            param->hpEstusFlaskAllocateRateForYellowMonk,
            param->hpEstusFlaskAllocateOffsetForYellowMonk,
            param->mpEstusFlaskAllocateRateForYellowMonk,
            param->mpEstusFlaskAllocateOffsetForYellowMonk,
            param->resistRecoverPoint_Sleep_Enemy,
            param->resistRecoverPoint_Madness_Enemy,
            param->resistCurseItemId,
            param->resistCurseItemMaxNum,
            param->resistCurseItemSpEffectBaseId,
            param->resistCurseItemLotParamId_map,
            param->unknown_0xcc,
            param->unknown_0xd0,
            param->unknown_0xd4,
            param->unknown_0xd8,
            param->unknown_0xdc,
            param->unknown_0xe0
        );
    }
    fclose(f);
}

}
