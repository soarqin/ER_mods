#include "../luabindings.h"
#include "../defs/AssetGeometryParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<AssetGeometryParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerAssetGeometryParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["AssetGeometryParam"]; usertype) return;
        auto indexerAssetGeometryParam = state->new_usertype<ParamTableIndexer<AssetGeometryParam>>("AssetGeometryParamTableIndexer");
        indexerAssetGeometryParam["count"] = sol::property(&ParamTableIndexer<AssetGeometryParam>::count);
        indexerAssetGeometryParam["__index"] = &ParamTableIndexer<AssetGeometryParam>::at;
        indexerAssetGeometryParam["id"] = &ParamTableIndexer<AssetGeometryParam>::paramId;
        indexerAssetGeometryParam["get"] = &ParamTableIndexer<AssetGeometryParam>::get;
        indexerAssetGeometryParam["exportToCsv"] = &ParamTableIndexer<AssetGeometryParam>::exportToCsv;
        indexerAssetGeometryParam["importFromCsv"] = &ParamTableIndexer<AssetGeometryParam>::importFromCsv;
        auto utAssetGeometryParam = state->new_usertype<AssetGeometryParam>("AssetGeometryParam");
        utAssetGeometryParam["soundBankId"] = &AssetGeometryParam::soundBankId;
        utAssetGeometryParam["soundBreakSEId"] = &AssetGeometryParam::soundBreakSEId;
        utAssetGeometryParam["refDrawParamId"] = &AssetGeometryParam::refDrawParamId;
        utAssetGeometryParam["hitCreateType"] = &AssetGeometryParam::hitCreateType;
        utAssetGeometryParam["behaviorType"] = &AssetGeometryParam::behaviorType;
        utAssetGeometryParam["collisionType"] = &AssetGeometryParam::collisionType;
        utAssetGeometryParam["rainBlockingType"] = &AssetGeometryParam::rainBlockingType;
        utAssetGeometryParam["hp"] = &AssetGeometryParam::hp;
        utAssetGeometryParam["defense"] = &AssetGeometryParam::defense;
        utAssetGeometryParam["breakStopTime"] = &AssetGeometryParam::breakStopTime;
        utAssetGeometryParam["breakSfxId"] = &AssetGeometryParam::breakSfxId;
        utAssetGeometryParam["breakSfxCpId"] = &AssetGeometryParam::breakSfxCpId;
        utAssetGeometryParam["breakLandingSfxId"] = &AssetGeometryParam::breakLandingSfxId;
        utAssetGeometryParam["breakBulletBehaviorId"] = &AssetGeometryParam::breakBulletBehaviorId;
        utAssetGeometryParam["breakBulletCpId"] = &AssetGeometryParam::breakBulletCpId;
        utAssetGeometryParam["FragmentInvisibleWaitTime"] = &AssetGeometryParam::FragmentInvisibleWaitTime;
        utAssetGeometryParam["FragmentInvisibleTime"] = &AssetGeometryParam::FragmentInvisibleTime;
        utAssetGeometryParam["BreakAiSoundID"] = &AssetGeometryParam::BreakAiSoundID;
        utAssetGeometryParam["breakItemLotType"] = &AssetGeometryParam::breakItemLotType;
        utAssetGeometryParam["animBreakIdMax"] = &AssetGeometryParam::animBreakIdMax;
        utAssetGeometryParam["breakBulletAttributeDamageType"] = &AssetGeometryParam::breakBulletAttributeDamageType;
        utAssetGeometryParam["isBreakByPlayerCollide"] = sol::property([](AssetGeometryParam &param) -> uint8_t { return param.isBreakByPlayerCollide; }, [](AssetGeometryParam &param, uint8_t value) { param.isBreakByPlayerCollide = value; });
        utAssetGeometryParam["isBreakByEnemyCollide"] = sol::property([](AssetGeometryParam &param) -> uint8_t { return param.isBreakByEnemyCollide; }, [](AssetGeometryParam &param, uint8_t value) { param.isBreakByEnemyCollide = value; });
        utAssetGeometryParam["isBreak_ByChrRide"] = sol::property([](AssetGeometryParam &param) -> uint8_t { return param.isBreak_ByChrRide; }, [](AssetGeometryParam &param, uint8_t value) { param.isBreak_ByChrRide = value; });
        utAssetGeometryParam["isDisableBreakForFirstAppear"] = sol::property([](AssetGeometryParam &param) -> uint8_t { return param.isDisableBreakForFirstAppear; }, [](AssetGeometryParam &param, uint8_t value) { param.isDisableBreakForFirstAppear = value; });
        utAssetGeometryParam["isAnimBreak"] = sol::property([](AssetGeometryParam &param) -> uint8_t { return param.isAnimBreak; }, [](AssetGeometryParam &param, uint8_t value) { param.isAnimBreak = value; });
        utAssetGeometryParam["isDamageCover"] = sol::property([](AssetGeometryParam &param) -> uint8_t { return param.isDamageCover; }, [](AssetGeometryParam &param, uint8_t value) { param.isDamageCover = value; });
        utAssetGeometryParam["isAttackBacklash"] = sol::property([](AssetGeometryParam &param) -> uint8_t { return param.isAttackBacklash; }, [](AssetGeometryParam &param, uint8_t value) { param.isAttackBacklash = value; });
        utAssetGeometryParam["unknown_0x3b_7"] = sol::property([](AssetGeometryParam &param) -> uint8_t { return param.unknown_0x3b_7; }, [](AssetGeometryParam &param, uint8_t value) { param.unknown_0x3b_7 = value; });
        utAssetGeometryParam["isLadder"] = sol::property([](AssetGeometryParam &param) -> uint8_t { return param.isLadder; }, [](AssetGeometryParam &param, uint8_t value) { param.isLadder = value; });
        utAssetGeometryParam["isMoveObj"] = sol::property([](AssetGeometryParam &param) -> uint8_t { return param.isMoveObj; }, [](AssetGeometryParam &param, uint8_t value) { param.isMoveObj = value; });
        utAssetGeometryParam["isSkydomeFlag"] = sol::property([](AssetGeometryParam &param) -> uint8_t { return param.isSkydomeFlag; }, [](AssetGeometryParam &param, uint8_t value) { param.isSkydomeFlag = value; });
        utAssetGeometryParam["isAnimPauseOnRemoPlay"] = sol::property([](AssetGeometryParam &param) -> uint8_t { return param.isAnimPauseOnRemoPlay; }, [](AssetGeometryParam &param, uint8_t value) { param.isAnimPauseOnRemoPlay = value; });
        utAssetGeometryParam["isBurn"] = sol::property([](AssetGeometryParam &param) -> uint8_t { return param.isBurn; }, [](AssetGeometryParam &param, uint8_t value) { param.isBurn = value; });
        utAssetGeometryParam["isEnableRepick"] = sol::property([](AssetGeometryParam &param) -> uint8_t { return param.isEnableRepick; }, [](AssetGeometryParam &param, uint8_t value) { param.isEnableRepick = value; });
        utAssetGeometryParam["isBreakOnPickUp"] = sol::property([](AssetGeometryParam &param) -> uint8_t { return param.isBreakOnPickUp; }, [](AssetGeometryParam &param, uint8_t value) { param.isBreakOnPickUp = value; });
        utAssetGeometryParam["isBreakByHugeenemyCollide"] = sol::property([](AssetGeometryParam &param) -> uint8_t { return param.isBreakByHugeenemyCollide; }, [](AssetGeometryParam &param, uint8_t value) { param.isBreakByHugeenemyCollide = value; });
        utAssetGeometryParam["navimeshFlag"] = &AssetGeometryParam::navimeshFlag;
        utAssetGeometryParam["burnBulletInterval"] = &AssetGeometryParam::burnBulletInterval;
        utAssetGeometryParam["clothUpdateDist"] = &AssetGeometryParam::clothUpdateDist;
        utAssetGeometryParam["lifeTime_forRuntimeCreate"] = &AssetGeometryParam::lifeTime_forRuntimeCreate;
        utAssetGeometryParam["contactSeId"] = &AssetGeometryParam::contactSeId;
        utAssetGeometryParam["repickAnimIdOffset"] = &AssetGeometryParam::repickAnimIdOffset;
        utAssetGeometryParam["windEffectRate_0"] = &AssetGeometryParam::windEffectRate_0;
        utAssetGeometryParam["windEffectRate_1"] = &AssetGeometryParam::windEffectRate_1;
        utAssetGeometryParam["windEffectType_0"] = &AssetGeometryParam::windEffectType_0;
        utAssetGeometryParam["windEffectType_1"] = &AssetGeometryParam::windEffectType_1;
        utAssetGeometryParam["overrideMaterialId"] = &AssetGeometryParam::overrideMaterialId;
        utAssetGeometryParam["autoCreateOffsetHeight"] = &AssetGeometryParam::autoCreateOffsetHeight;
        utAssetGeometryParam["burnTime"] = &AssetGeometryParam::burnTime;
        utAssetGeometryParam["burnBraekRate"] = &AssetGeometryParam::burnBraekRate;
        utAssetGeometryParam["burnSfxId"] = &AssetGeometryParam::burnSfxId;
        utAssetGeometryParam["burnSfxId_1"] = &AssetGeometryParam::burnSfxId_1;
        utAssetGeometryParam["burnSfxId_2"] = &AssetGeometryParam::burnSfxId_2;
        utAssetGeometryParam["burnSfxId_3"] = &AssetGeometryParam::burnSfxId_3;
        utAssetGeometryParam["burnSfxDelayTimeMin"] = &AssetGeometryParam::burnSfxDelayTimeMin;
        utAssetGeometryParam["burnSfxDelayTimeMin_1"] = &AssetGeometryParam::burnSfxDelayTimeMin_1;
        utAssetGeometryParam["burnSfxDelayTimeMin_2"] = &AssetGeometryParam::burnSfxDelayTimeMin_2;
        utAssetGeometryParam["burnSfxDelayTimeMin_3"] = &AssetGeometryParam::burnSfxDelayTimeMin_3;
        utAssetGeometryParam["burnSfxDelayTimeMax"] = &AssetGeometryParam::burnSfxDelayTimeMax;
        utAssetGeometryParam["burnSfxDelayTimeMax_1"] = &AssetGeometryParam::burnSfxDelayTimeMax_1;
        utAssetGeometryParam["burnSfxDelayTimeMax_2"] = &AssetGeometryParam::burnSfxDelayTimeMax_2;
        utAssetGeometryParam["burnSfxDelayTimeMax_3"] = &AssetGeometryParam::burnSfxDelayTimeMax_3;
        utAssetGeometryParam["burnBulletBehaviorId"] = &AssetGeometryParam::burnBulletBehaviorId;
        utAssetGeometryParam["burnBulletBehaviorId_1"] = &AssetGeometryParam::burnBulletBehaviorId_1;
        utAssetGeometryParam["burnBulletBehaviorId_2"] = &AssetGeometryParam::burnBulletBehaviorId_2;
        utAssetGeometryParam["burnBulletBehaviorId_3"] = &AssetGeometryParam::burnBulletBehaviorId_3;
        utAssetGeometryParam["burnBulletDelayTime"] = &AssetGeometryParam::burnBulletDelayTime;
        utAssetGeometryParam["paintDecalTargetTextureSize"] = &AssetGeometryParam::paintDecalTargetTextureSize;
        utAssetGeometryParam["navimeshFlag_after"] = &AssetGeometryParam::navimeshFlag_after;
        utAssetGeometryParam["camNearBehaviorType"] = &AssetGeometryParam::camNearBehaviorType;
        utAssetGeometryParam["breakItemLotParamId"] = &AssetGeometryParam::breakItemLotParamId;
        utAssetGeometryParam["pickUpActionButtonParamId"] = &AssetGeometryParam::pickUpActionButtonParamId;
        utAssetGeometryParam["pickUpItemLotParamId"] = &AssetGeometryParam::pickUpItemLotParamId;
        utAssetGeometryParam["autoDrawGroupBackFaceCheck"] = &AssetGeometryParam::autoDrawGroupBackFaceCheck;
        utAssetGeometryParam["autoDrawGroupDepthWrite"] = &AssetGeometryParam::autoDrawGroupDepthWrite;
        utAssetGeometryParam["autoDrawGroupShadowTest"] = &AssetGeometryParam::autoDrawGroupShadowTest;
        utAssetGeometryParam["debug_isHeightCheckEnable"] = &AssetGeometryParam::debug_isHeightCheckEnable;
        utAssetGeometryParam["hitCarverCancelAreaFlag"] = &AssetGeometryParam::hitCarverCancelAreaFlag;
        utAssetGeometryParam["assetNavimeshNoCombine"] = &AssetGeometryParam::assetNavimeshNoCombine;
        utAssetGeometryParam["navimeshFlagApply"] = &AssetGeometryParam::navimeshFlagApply;
        utAssetGeometryParam["navimeshFlagApply_after"] = &AssetGeometryParam::navimeshFlagApply_after;
        utAssetGeometryParam["autoDrawGroupPassPixelNum"] = &AssetGeometryParam::autoDrawGroupPassPixelNum;
        utAssetGeometryParam["pickUpReplacementEventFlag"] = &AssetGeometryParam::pickUpReplacementEventFlag;
        utAssetGeometryParam["pickUpReplacementAnimIdOffset"] = &AssetGeometryParam::pickUpReplacementAnimIdOffset;
        utAssetGeometryParam["pickUpReplacementActionButtonParamId"] = &AssetGeometryParam::pickUpReplacementActionButtonParamId;
        utAssetGeometryParam["pickUpReplacementItemLotParamId"] = &AssetGeometryParam::pickUpReplacementItemLotParamId;
        utAssetGeometryParam["slidingBulletHitType"] = &AssetGeometryParam::slidingBulletHitType;
        utAssetGeometryParam["isBushesForDamage"] = &AssetGeometryParam::isBushesForDamage;
        utAssetGeometryParam["penetrationBulletType"] = &AssetGeometryParam::penetrationBulletType;
        utAssetGeometryParam["unkR3"] = &AssetGeometryParam::unkR3;
        utAssetGeometryParam["unkR4"] = &AssetGeometryParam::unkR4;
        utAssetGeometryParam["soundBreakSECpId"] = &AssetGeometryParam::soundBreakSECpId;
        utAssetGeometryParam["debug_HeightCheckCapacityMin"] = &AssetGeometryParam::debug_HeightCheckCapacityMin;
        utAssetGeometryParam["debug_HeightCheckCapacityMax"] = &AssetGeometryParam::debug_HeightCheckCapacityMax;
        utAssetGeometryParam["repickActionButtonParamId"] = &AssetGeometryParam::repickActionButtonParamId;
        utAssetGeometryParam["repickItemLotParamId"] = &AssetGeometryParam::repickItemLotParamId;
        utAssetGeometryParam["repickReplacementAnimIdOffset"] = &AssetGeometryParam::repickReplacementAnimIdOffset;
        utAssetGeometryParam["repickReplacementActionButtonParamId"] = &AssetGeometryParam::repickReplacementActionButtonParamId;
        utAssetGeometryParam["repickReplacementItemLotParamId"] = &AssetGeometryParam::repickReplacementItemLotParamId;
        utAssetGeometryParam["noGenerateCarver"] = &AssetGeometryParam::noGenerateCarver;
        utAssetGeometryParam["noHitHugeAfterBreak"] = &AssetGeometryParam::noHitHugeAfterBreak;
        utAssetGeometryParam["isEnabledBreakSync"] = sol::property([](AssetGeometryParam &param) -> uint8_t { return param.isEnabledBreakSync; }, [](AssetGeometryParam &param, uint8_t value) { param.isEnabledBreakSync = value; });
        utAssetGeometryParam["isHiddenOnRepick"] = sol::property([](AssetGeometryParam &param) -> uint8_t { return param.isHiddenOnRepick; }, [](AssetGeometryParam &param, uint8_t value) { param.isHiddenOnRepick = value; });
        utAssetGeometryParam["isCreateMultiPlayOnly"] = sol::property([](AssetGeometryParam &param) -> uint8_t { return param.isCreateMultiPlayOnly; }, [](AssetGeometryParam &param, uint8_t value) { param.isCreateMultiPlayOnly = value; });
        utAssetGeometryParam["isDisableBulletHitSfx"] = sol::property([](AssetGeometryParam &param) -> uint8_t { return param.isDisableBulletHitSfx; }, [](AssetGeometryParam &param, uint8_t value) { param.isDisableBulletHitSfx = value; });
        utAssetGeometryParam["isEnableSignPreBreak"] = sol::property([](AssetGeometryParam &param) -> uint8_t { return param.isEnableSignPreBreak; }, [](AssetGeometryParam &param, uint8_t value) { param.isEnableSignPreBreak = value; });
        utAssetGeometryParam["isEnableSignPostBreak"] = sol::property([](AssetGeometryParam &param) -> uint8_t { return param.isEnableSignPostBreak; }, [](AssetGeometryParam &param, uint8_t value) { param.isEnableSignPostBreak = value; });
        utAssetGeometryParam["unkR1"] = sol::property([](AssetGeometryParam &param) -> uint8_t { return param.unkR1; }, [](AssetGeometryParam &param, uint8_t value) { param.unkR1 = value; });
        utAssetGeometryParam["generateMultiForbiddenRegion"] = &AssetGeometryParam::generateMultiForbiddenRegion;
        utAssetGeometryParam["residentSeId0"] = &AssetGeometryParam::residentSeId0;
        utAssetGeometryParam["residentSeId1"] = &AssetGeometryParam::residentSeId1;
        utAssetGeometryParam["residentSeId2"] = &AssetGeometryParam::residentSeId2;
        utAssetGeometryParam["residentSeId3"] = &AssetGeometryParam::residentSeId3;
        utAssetGeometryParam["residentSeDmypolyId0"] = &AssetGeometryParam::residentSeDmypolyId0;
        utAssetGeometryParam["residentSeDmypolyId1"] = &AssetGeometryParam::residentSeDmypolyId1;
        utAssetGeometryParam["residentSeDmypolyId2"] = &AssetGeometryParam::residentSeDmypolyId2;
        utAssetGeometryParam["residentSeDmypolyId3"] = &AssetGeometryParam::residentSeDmypolyId3;
        utAssetGeometryParam["excludeActivateRatio_Xboxone_Grid"] = &AssetGeometryParam::excludeActivateRatio_Xboxone_Grid;
        utAssetGeometryParam["excludeActivateRatio_Xboxone_Legacy"] = &AssetGeometryParam::excludeActivateRatio_Xboxone_Legacy;
        utAssetGeometryParam["excludeActivateRatio_PS4_Grid"] = &AssetGeometryParam::excludeActivateRatio_PS4_Grid;
        utAssetGeometryParam["excludeActivateRatio_PS4_Legacy"] = &AssetGeometryParam::excludeActivateRatio_PS4_Legacy;
        utAssetGeometryParam["unknown_0x120"] = &AssetGeometryParam::unknown_0x120;
        utAssetGeometryParam["unknown_0x121"] = &AssetGeometryParam::unknown_0x121;
        utAssetGeometryParam["unknown_0x122"] = &AssetGeometryParam::unknown_0x122;
        utAssetGeometryParam["unknown_0x123"] = &AssetGeometryParam::unknown_0x123;
        utAssetGeometryParam["unknown_0x124"] = &AssetGeometryParam::unknown_0x124;
        utAssetGeometryParam["unknown_0x125"] = &AssetGeometryParam::unknown_0x125;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<AssetGeometryParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<AssetGeometryParam>>(nullptr);
        indexer->setFieldNames({
            {"soundBankId", false},
            {"soundBreakSEId", false},
            {"refDrawParamId", false},
            {"hitCreateType", false},
            {"behaviorType", false},
            {"collisionType", false},
            {"rainBlockingType", false},
            {"hp", false},
            {"defense", false},
            {"breakStopTime", false},
            {"breakSfxId", false},
            {"breakSfxCpId", false},
            {"breakLandingSfxId", false},
            {"breakBulletBehaviorId", false},
            {"breakBulletCpId", false},
            {"FragmentInvisibleWaitTime", false},
            {"FragmentInvisibleTime", false},
            {"BreakAiSoundID", false},
            {"breakItemLotType", false},
            {"animBreakIdMax", false},
            {"breakBulletAttributeDamageType", false},
            {"isBreakByPlayerCollide", false},
            {"isBreakByEnemyCollide", false},
            {"isBreak_ByChrRide", false},
            {"isDisableBreakForFirstAppear", false},
            {"isAnimBreak", false},
            {"isDamageCover", false},
            {"isAttackBacklash", false},
            {"unknown_0x3b_7", false},
            {"isLadder", false},
            {"isMoveObj", false},
            {"isSkydomeFlag", false},
            {"isAnimPauseOnRemoPlay", false},
            {"isBurn", false},
            {"isEnableRepick", false},
            {"isBreakOnPickUp", false},
            {"isBreakByHugeenemyCollide", false},
            {"navimeshFlag", false},
            {"burnBulletInterval", false},
            {"clothUpdateDist", false},
            {"lifeTime_forRuntimeCreate", false},
            {"contactSeId", false},
            {"repickAnimIdOffset", false},
            {"windEffectRate_0", false},
            {"windEffectRate_1", false},
            {"windEffectType_0", false},
            {"windEffectType_1", false},
            {"overrideMaterialId", false},
            {"autoCreateOffsetHeight", false},
            {"burnTime", false},
            {"burnBraekRate", false},
            {"burnSfxId", false},
            {"burnSfxId_1", false},
            {"burnSfxId_2", false},
            {"burnSfxId_3", false},
            {"burnSfxDelayTimeMin", false},
            {"burnSfxDelayTimeMin_1", false},
            {"burnSfxDelayTimeMin_2", false},
            {"burnSfxDelayTimeMin_3", false},
            {"burnSfxDelayTimeMax", false},
            {"burnSfxDelayTimeMax_1", false},
            {"burnSfxDelayTimeMax_2", false},
            {"burnSfxDelayTimeMax_3", false},
            {"burnBulletBehaviorId", false},
            {"burnBulletBehaviorId_1", false},
            {"burnBulletBehaviorId_2", false},
            {"burnBulletBehaviorId_3", false},
            {"burnBulletDelayTime", false},
            {"paintDecalTargetTextureSize", false},
            {"navimeshFlag_after", false},
            {"camNearBehaviorType", false},
            {"breakItemLotParamId", false},
            {"pickUpActionButtonParamId", false},
            {"pickUpItemLotParamId", false},
            {"autoDrawGroupBackFaceCheck", false},
            {"autoDrawGroupDepthWrite", false},
            {"autoDrawGroupShadowTest", false},
            {"debug_isHeightCheckEnable", false},
            {"hitCarverCancelAreaFlag", false},
            {"assetNavimeshNoCombine", false},
            {"navimeshFlagApply", false},
            {"navimeshFlagApply_after", false},
            {"autoDrawGroupPassPixelNum", false},
            {"pickUpReplacementEventFlag", false},
            {"pickUpReplacementAnimIdOffset", false},
            {"pickUpReplacementActionButtonParamId", false},
            {"pickUpReplacementItemLotParamId", false},
            {"slidingBulletHitType", false},
            {"isBushesForDamage", false},
            {"penetrationBulletType", false},
            {"unkR3", false},
            {"unkR4", false},
            {"soundBreakSECpId", false},
            {"debug_HeightCheckCapacityMin", false},
            {"debug_HeightCheckCapacityMax", false},
            {"repickActionButtonParamId", false},
            {"repickItemLotParamId", false},
            {"repickReplacementAnimIdOffset", false},
            {"repickReplacementActionButtonParamId", false},
            {"repickReplacementItemLotParamId", false},
            {"noGenerateCarver", false},
            {"noHitHugeAfterBreak", false},
            {"isEnabledBreakSync", false},
            {"isHiddenOnRepick", false},
            {"isCreateMultiPlayOnly", false},
            {"isDisableBulletHitSfx", false},
            {"isEnableSignPreBreak", false},
            {"isEnableSignPostBreak", false},
            {"unkR1", false},
            {"generateMultiForbiddenRegion", false},
            {"residentSeId0", false},
            {"residentSeId1", false},
            {"residentSeId2", false},
            {"residentSeId3", false},
            {"residentSeDmypolyId0", false},
            {"residentSeDmypolyId1", false},
            {"residentSeDmypolyId2", false},
            {"residentSeDmypolyId3", false},
            {"excludeActivateRatio_Xboxone_Grid", false},
            {"excludeActivateRatio_Xboxone_Legacy", false},
            {"excludeActivateRatio_PS4_Grid", false},
            {"excludeActivateRatio_PS4_Legacy", false},
            {"unknown_0x120", false},
            {"unknown_0x121", false},
            {"unknown_0x122", false},
            {"unknown_0x123", false},
            {"unknown_0x124", false},
            {"unknown_0x125", false},
        });
        return indexer;
    };
    paramsTable["AssetEnvironmentGeometryParam"] = [tableLoader]() -> auto { return tableLoader(L"AssetEnvironmentGeometryParam"); };
}

template<> void ParamTableIndexer<AssetGeometryParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,soundBankId,soundBreakSEId,refDrawParamId,hitCreateType,behaviorType,collisionType,rainBlockingType,hp,defense,breakStopTime,breakSfxId,breakSfxCpId,breakLandingSfxId,breakBulletBehaviorId,breakBulletCpId,FragmentInvisibleWaitTime,FragmentInvisibleTime,BreakAiSoundID,breakItemLotType,animBreakIdMax,breakBulletAttributeDamageType,isBreakByPlayerCollide,isBreakByEnemyCollide,isBreak_ByChrRide,isDisableBreakForFirstAppear,isAnimBreak,isDamageCover,isAttackBacklash,unknown_0x3b_7,isLadder,isMoveObj,isSkydomeFlag,isAnimPauseOnRemoPlay,isBurn,isEnableRepick,isBreakOnPickUp,isBreakByHugeenemyCollide,navimeshFlag,burnBulletInterval,clothUpdateDist,lifeTime_forRuntimeCreate,contactSeId,repickAnimIdOffset,windEffectRate_0,windEffectRate_1,windEffectType_0,windEffectType_1,overrideMaterialId,autoCreateOffsetHeight,burnTime,burnBraekRate,burnSfxId,burnSfxId_1,burnSfxId_2,burnSfxId_3,burnSfxDelayTimeMin,burnSfxDelayTimeMin_1,burnSfxDelayTimeMin_2,burnSfxDelayTimeMin_3,burnSfxDelayTimeMax,burnSfxDelayTimeMax_1,burnSfxDelayTimeMax_2,burnSfxDelayTimeMax_3,burnBulletBehaviorId,burnBulletBehaviorId_1,burnBulletBehaviorId_2,burnBulletBehaviorId_3,burnBulletDelayTime,paintDecalTargetTextureSize,navimeshFlag_after,camNearBehaviorType,breakItemLotParamId,pickUpActionButtonParamId,pickUpItemLotParamId,autoDrawGroupBackFaceCheck,autoDrawGroupDepthWrite,autoDrawGroupShadowTest,debug_isHeightCheckEnable,hitCarverCancelAreaFlag,assetNavimeshNoCombine,navimeshFlagApply,navimeshFlagApply_after,autoDrawGroupPassPixelNum,pickUpReplacementEventFlag,pickUpReplacementAnimIdOffset,pickUpReplacementActionButtonParamId,pickUpReplacementItemLotParamId,slidingBulletHitType,isBushesForDamage,penetrationBulletType,unkR3,unkR4,soundBreakSECpId,debug_HeightCheckCapacityMin,debug_HeightCheckCapacityMax,repickActionButtonParamId,repickItemLotParamId,repickReplacementAnimIdOffset,repickReplacementActionButtonParamId,repickReplacementItemLotParamId,noGenerateCarver,noHitHugeAfterBreak,isEnabledBreakSync,isHiddenOnRepick,isCreateMultiPlayOnly,isDisableBulletHitSfx,isEnableSignPreBreak,isEnableSignPostBreak,unkR1,generateMultiForbiddenRegion,residentSeId0,residentSeId1,residentSeId2,residentSeId3,residentSeDmypolyId0,residentSeDmypolyId1,residentSeDmypolyId2,residentSeDmypolyId3,excludeActivateRatio_Xboxone_Grid,excludeActivateRatio_Xboxone_Legacy,excludeActivateRatio_PS4_Grid,excludeActivateRatio_PS4_Legacy,unknown_0x120,unknown_0x121,unknown_0x122,unknown_0x123,unknown_0x124,unknown_0x125\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%d,%u,%u,%u,%d,%u,%g,%d,%d,%d,%d,%d,%g,%g,%d,%d,%u,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%g,%g,%d,%d,%g,%g,%u,%u,%d,%g,%g,%g,%d,%d,%d,%d,%g,%g,%g,%g,%g,%g,%g,%g,%d,%d,%d,%d,%g,%u,%u,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%g,%u,%d,%d,%d,%u,%u,%u,%u,%g,%d,%g,%g,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u\n",
            this->paramId(i),
            param->soundBankId,
            param->soundBreakSEId,
            param->refDrawParamId,
            param->hitCreateType,
            param->behaviorType,
            param->collisionType,
            param->rainBlockingType,
            param->hp,
            param->defense,
            param->breakStopTime,
            param->breakSfxId,
            param->breakSfxCpId,
            param->breakLandingSfxId,
            param->breakBulletBehaviorId,
            param->breakBulletCpId,
            param->FragmentInvisibleWaitTime,
            param->FragmentInvisibleTime,
            param->BreakAiSoundID,
            param->breakItemLotType,
            param->animBreakIdMax,
            param->breakBulletAttributeDamageType,
            param->isBreakByPlayerCollide,
            param->isBreakByEnemyCollide,
            param->isBreak_ByChrRide,
            param->isDisableBreakForFirstAppear,
            param->isAnimBreak,
            param->isDamageCover,
            param->isAttackBacklash,
            param->unknown_0x3b_7,
            param->isLadder,
            param->isMoveObj,
            param->isSkydomeFlag,
            param->isAnimPauseOnRemoPlay,
            param->isBurn,
            param->isEnableRepick,
            param->isBreakOnPickUp,
            param->isBreakByHugeenemyCollide,
            param->navimeshFlag,
            param->burnBulletInterval,
            param->clothUpdateDist,
            param->lifeTime_forRuntimeCreate,
            param->contactSeId,
            param->repickAnimIdOffset,
            param->windEffectRate_0,
            param->windEffectRate_1,
            param->windEffectType_0,
            param->windEffectType_1,
            param->overrideMaterialId,
            param->autoCreateOffsetHeight,
            param->burnTime,
            param->burnBraekRate,
            param->burnSfxId,
            param->burnSfxId_1,
            param->burnSfxId_2,
            param->burnSfxId_3,
            param->burnSfxDelayTimeMin,
            param->burnSfxDelayTimeMin_1,
            param->burnSfxDelayTimeMin_2,
            param->burnSfxDelayTimeMin_3,
            param->burnSfxDelayTimeMax,
            param->burnSfxDelayTimeMax_1,
            param->burnSfxDelayTimeMax_2,
            param->burnSfxDelayTimeMax_3,
            param->burnBulletBehaviorId,
            param->burnBulletBehaviorId_1,
            param->burnBulletBehaviorId_2,
            param->burnBulletBehaviorId_3,
            param->burnBulletDelayTime,
            param->paintDecalTargetTextureSize,
            param->navimeshFlag_after,
            param->camNearBehaviorType,
            param->breakItemLotParamId,
            param->pickUpActionButtonParamId,
            param->pickUpItemLotParamId,
            param->autoDrawGroupBackFaceCheck,
            param->autoDrawGroupDepthWrite,
            param->autoDrawGroupShadowTest,
            param->debug_isHeightCheckEnable,
            param->hitCarverCancelAreaFlag,
            param->assetNavimeshNoCombine,
            param->navimeshFlagApply,
            param->navimeshFlagApply_after,
            param->autoDrawGroupPassPixelNum,
            param->pickUpReplacementEventFlag,
            param->pickUpReplacementAnimIdOffset,
            param->pickUpReplacementActionButtonParamId,
            param->pickUpReplacementItemLotParamId,
            param->slidingBulletHitType,
            param->isBushesForDamage,
            param->penetrationBulletType,
            param->unkR3,
            param->unkR4,
            param->soundBreakSECpId,
            param->debug_HeightCheckCapacityMin,
            param->debug_HeightCheckCapacityMax,
            param->repickActionButtonParamId,
            param->repickItemLotParamId,
            param->repickReplacementAnimIdOffset,
            param->repickReplacementActionButtonParamId,
            param->repickReplacementItemLotParamId,
            param->noGenerateCarver,
            param->noHitHugeAfterBreak,
            param->isEnabledBreakSync,
            param->isHiddenOnRepick,
            param->isCreateMultiPlayOnly,
            param->isDisableBulletHitSfx,
            param->isEnableSignPreBreak,
            param->isEnableSignPostBreak,
            param->unkR1,
            param->generateMultiForbiddenRegion,
            param->residentSeId0,
            param->residentSeId1,
            param->residentSeId2,
            param->residentSeId3,
            param->residentSeDmypolyId0,
            param->residentSeDmypolyId1,
            param->residentSeDmypolyId2,
            param->residentSeDmypolyId3,
            param->excludeActivateRatio_Xboxone_Grid,
            param->excludeActivateRatio_Xboxone_Legacy,
            param->excludeActivateRatio_PS4_Grid,
            param->excludeActivateRatio_PS4_Legacy,
            param->unknown_0x120,
            param->unknown_0x121,
            param->unknown_0x122,
            param->unknown_0x123,
            param->unknown_0x124,
            param->unknown_0x125
        );
    }
    fclose(f);
}

}
