#include "../luabindings.h"
#include "../defs/PlayerCommonParam.h"

namespace paramadjuster::params {

void registerPlayerCommonParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["PlayerCommonParam"]; usertype) return;
        auto indexerPlayerCommonParam = state->new_usertype<ParamTableIndexer<PlayerCommonParam>>("PlayerCommonParamTableIndexer");
        indexerPlayerCommonParam["count"] = sol::property(&ParamTableIndexer<PlayerCommonParam>::count);
        indexerPlayerCommonParam["__index"] = &ParamTableIndexer<PlayerCommonParam>::at;
        indexerPlayerCommonParam["id"] = &ParamTableIndexer<PlayerCommonParam>::paramId;
        indexerPlayerCommonParam["get"] = &ParamTableIndexer<PlayerCommonParam>::get;
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
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<PlayerCommonParam>>(gParamMgr.findTable(L"PlayerCommonParam")); };
    paramsTable["PlayerCommonParam"] = tableLoader;
}

}
