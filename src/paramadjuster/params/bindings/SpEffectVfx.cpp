#include "../luabindings.h"
#include "../defs/SpEffectVfx.h"

namespace paramadjuster::params {

void registerSpEffectVfx(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["SpEffectVfx"]; usertype) return;
        auto indexerSpEffectVfx = state->new_usertype<ParamTableIndexer<SpEffectVfx>>("SpEffectVfxTableIndexer");
        indexerSpEffectVfx["count"] = sol::property(&ParamTableIndexer<SpEffectVfx>::count);
        indexerSpEffectVfx["__index"] = &ParamTableIndexer<SpEffectVfx>::at;
        indexerSpEffectVfx["id"] = &ParamTableIndexer<SpEffectVfx>::paramId;
        indexerSpEffectVfx["get"] = &ParamTableIndexer<SpEffectVfx>::get;
        auto utSpEffectVfx = state->new_usertype<SpEffectVfx>("SpEffectVfx");
        utSpEffectVfx["midstSfxId"] = &SpEffectVfx::midstSfxId;
        utSpEffectVfx["midstSeId"] = &SpEffectVfx::midstSeId;
        utSpEffectVfx["initSfxId"] = &SpEffectVfx::initSfxId;
        utSpEffectVfx["initSeId"] = &SpEffectVfx::initSeId;
        utSpEffectVfx["finishSfxId"] = &SpEffectVfx::finishSfxId;
        utSpEffectVfx["finishSeId"] = &SpEffectVfx::finishSeId;
        utSpEffectVfx["camouflageBeginDist"] = &SpEffectVfx::camouflageBeginDist;
        utSpEffectVfx["camouflageEndDist"] = &SpEffectVfx::camouflageEndDist;
        utSpEffectVfx["transformProtectorId"] = &SpEffectVfx::transformProtectorId;
        utSpEffectVfx["midstDmyId"] = &SpEffectVfx::midstDmyId;
        utSpEffectVfx["initDmyId"] = &SpEffectVfx::initDmyId;
        utSpEffectVfx["finishDmyId"] = &SpEffectVfx::finishDmyId;
        utSpEffectVfx["effectType"] = &SpEffectVfx::effectType;
        utSpEffectVfx["soulParamIdForWepEnchant"] = &SpEffectVfx::soulParamIdForWepEnchant;
        utSpEffectVfx["playCategory"] = &SpEffectVfx::playCategory;
        utSpEffectVfx["playPriority"] = &SpEffectVfx::playPriority;
        utSpEffectVfx["existEffectForLarge"] = sol::property([](SpEffectVfx &param) -> uint8_t { return param.existEffectForLarge; }, [](SpEffectVfx &param, uint8_t value) { param.existEffectForLarge = value; });
        utSpEffectVfx["existEffectForSoul"] = sol::property([](SpEffectVfx &param) -> uint8_t { return param.existEffectForSoul; }, [](SpEffectVfx &param, uint8_t value) { param.existEffectForSoul = value; });
        utSpEffectVfx["effectInvisibleAtCamouflage"] = sol::property([](SpEffectVfx &param) -> uint8_t { return param.effectInvisibleAtCamouflage; }, [](SpEffectVfx &param, uint8_t value) { param.effectInvisibleAtCamouflage = value; });
        utSpEffectVfx["useCamouflage"] = sol::property([](SpEffectVfx &param) -> uint8_t { return param.useCamouflage; }, [](SpEffectVfx &param, uint8_t value) { param.useCamouflage = value; });
        utSpEffectVfx["invisibleAtFriendCamouflage"] = sol::property([](SpEffectVfx &param) -> uint8_t { return param.invisibleAtFriendCamouflage; }, [](SpEffectVfx &param, uint8_t value) { param.invisibleAtFriendCamouflage = value; });
        utSpEffectVfx["isHideFootEffect_forCamouflage"] = sol::property([](SpEffectVfx &param) -> uint8_t { return param.isHideFootEffect_forCamouflage; }, [](SpEffectVfx &param, uint8_t value) { param.isHideFootEffect_forCamouflage = value; });
        utSpEffectVfx["halfCamouflage"] = sol::property([](SpEffectVfx &param) -> uint8_t { return param.halfCamouflage; }, [](SpEffectVfx &param, uint8_t value) { param.halfCamouflage = value; });
        utSpEffectVfx["isFullBodyTransformProtectorId"] = sol::property([](SpEffectVfx &param) -> uint8_t { return param.isFullBodyTransformProtectorId; }, [](SpEffectVfx &param, uint8_t value) { param.isFullBodyTransformProtectorId = value; });
        utSpEffectVfx["isInvisibleWeapon"] = sol::property([](SpEffectVfx &param) -> uint8_t { return param.isInvisibleWeapon; }, [](SpEffectVfx &param, uint8_t value) { param.isInvisibleWeapon = value; });
        utSpEffectVfx["isSilence"] = sol::property([](SpEffectVfx &param) -> uint8_t { return param.isSilence; }, [](SpEffectVfx &param, uint8_t value) { param.isSilence = value; });
        utSpEffectVfx["isMidstFullbody"] = sol::property([](SpEffectVfx &param) -> uint8_t { return param.isMidstFullbody; }, [](SpEffectVfx &param, uint8_t value) { param.isMidstFullbody = value; });
        utSpEffectVfx["isInitFullbody"] = sol::property([](SpEffectVfx &param) -> uint8_t { return param.isInitFullbody; }, [](SpEffectVfx &param, uint8_t value) { param.isInitFullbody = value; });
        utSpEffectVfx["isFinishFullbody"] = sol::property([](SpEffectVfx &param) -> uint8_t { return param.isFinishFullbody; }, [](SpEffectVfx &param, uint8_t value) { param.isFinishFullbody = value; });
        utSpEffectVfx["isVisibleDeadChr"] = sol::property([](SpEffectVfx &param) -> uint8_t { return param.isVisibleDeadChr; }, [](SpEffectVfx &param, uint8_t value) { param.isVisibleDeadChr = value; });
        utSpEffectVfx["isUseOffsetEnchantSfxSize"] = sol::property([](SpEffectVfx &param) -> uint8_t { return param.isUseOffsetEnchantSfxSize; }, [](SpEffectVfx &param, uint8_t value) { param.isUseOffsetEnchantSfxSize = value; });
        utSpEffectVfx["unknown_0x2f_7"] = sol::property([](SpEffectVfx &param) -> uint8_t { return param.unknown_0x2f_7; }, [](SpEffectVfx &param, uint8_t value) { param.unknown_0x2f_7 = value; });
        utSpEffectVfx["decalId1"] = &SpEffectVfx::decalId1;
        utSpEffectVfx["decalId2"] = &SpEffectVfx::decalId2;
        utSpEffectVfx["footEffectPriority"] = &SpEffectVfx::footEffectPriority;
        utSpEffectVfx["footEffectOffset"] = &SpEffectVfx::footEffectOffset;
        utSpEffectVfx["traceSfxIdOffsetType"] = &SpEffectVfx::traceSfxIdOffsetType;
        utSpEffectVfx["forceDeceasedType"] = &SpEffectVfx::forceDeceasedType;
        utSpEffectVfx["enchantStartDmyId_0"] = &SpEffectVfx::enchantStartDmyId_0;
        utSpEffectVfx["enchantEndDmyId_0"] = &SpEffectVfx::enchantEndDmyId_0;
        utSpEffectVfx["enchantStartDmyId_1"] = &SpEffectVfx::enchantStartDmyId_1;
        utSpEffectVfx["enchantEndDmyId_1"] = &SpEffectVfx::enchantEndDmyId_1;
        utSpEffectVfx["enchantStartDmyId_2"] = &SpEffectVfx::enchantStartDmyId_2;
        utSpEffectVfx["enchantEndDmyId_2"] = &SpEffectVfx::enchantEndDmyId_2;
        utSpEffectVfx["enchantStartDmyId_3"] = &SpEffectVfx::enchantStartDmyId_3;
        utSpEffectVfx["enchantEndDmyId_3"] = &SpEffectVfx::enchantEndDmyId_3;
        utSpEffectVfx["enchantStartDmyId_4"] = &SpEffectVfx::enchantStartDmyId_4;
        utSpEffectVfx["enchantEndDmyId_4"] = &SpEffectVfx::enchantEndDmyId_4;
        utSpEffectVfx["enchantStartDmyId_5"] = &SpEffectVfx::enchantStartDmyId_5;
        utSpEffectVfx["enchantEndDmyId_5"] = &SpEffectVfx::enchantEndDmyId_5;
        utSpEffectVfx["enchantStartDmyId_6"] = &SpEffectVfx::enchantStartDmyId_6;
        utSpEffectVfx["enchantEndDmyId_6"] = &SpEffectVfx::enchantEndDmyId_6;
        utSpEffectVfx["enchantStartDmyId_7"] = &SpEffectVfx::enchantStartDmyId_7;
        utSpEffectVfx["enchantEndDmyId_7"] = &SpEffectVfx::enchantEndDmyId_7;
        utSpEffectVfx["SfxIdOffsetType"] = &SpEffectVfx::SfxIdOffsetType;
        utSpEffectVfx["phantomParamOverwriteType"] = &SpEffectVfx::phantomParamOverwriteType;
        utSpEffectVfx["camouflageMinAlpha"] = &SpEffectVfx::camouflageMinAlpha;
        utSpEffectVfx["wetAspectType"] = &SpEffectVfx::wetAspectType;
        utSpEffectVfx["phantomParamOverwriteId"] = &SpEffectVfx::phantomParamOverwriteId;
        utSpEffectVfx["materialParamId"] = &SpEffectVfx::materialParamId;
        utSpEffectVfx["materialParamInitValue"] = &SpEffectVfx::materialParamInitValue;
        utSpEffectVfx["materialParamTargetValue"] = &SpEffectVfx::materialParamTargetValue;
        utSpEffectVfx["materialParamFadeTime"] = &SpEffectVfx::materialParamFadeTime;
        utSpEffectVfx["footDecalMaterialOffsetOverwriteId"] = &SpEffectVfx::footDecalMaterialOffsetOverwriteId;
        utSpEffectVfx["unknown_0x96"] = &SpEffectVfx::unknown_0x96;
        utSpEffectVfx["unknown_0x97"] = &SpEffectVfx::unknown_0x97;
        utSpEffectVfx["unknown_0x98"] = &SpEffectVfx::unknown_0x98;
        utSpEffectVfx["unknown_0x99"] = &SpEffectVfx::unknown_0x99;
        utSpEffectVfx["unknown_0x9a"] = &SpEffectVfx::unknown_0x9a;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<SpEffectVfx>>(gParamMgr.findTable(L"SpEffectVfx")); };
    paramsTable["SpEffectVfxParam"] = tableLoader;
}

}
