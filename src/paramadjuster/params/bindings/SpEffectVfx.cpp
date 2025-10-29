#include "../luabindings.h"
#include "../defs/SpEffectVfx.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<SpEffectVfx>::exportToCsvImpl(const std::wstring &csvPath);

void registerSpEffectVfx(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["SpEffectVfx"]; usertype) return;
        auto indexerSpEffectVfx = state->new_usertype<ParamTableIndexer<SpEffectVfx>>("SpEffectVfxTableIndexer");
        indexerSpEffectVfx["count"] = sol::property(&ParamTableIndexer<SpEffectVfx>::count);
        indexerSpEffectVfx["__index"] = &ParamTableIndexer<SpEffectVfx>::at;
        indexerSpEffectVfx["id"] = &ParamTableIndexer<SpEffectVfx>::paramId;
        indexerSpEffectVfx["get"] = &ParamTableIndexer<SpEffectVfx>::get;
        indexerSpEffectVfx["exportToCsv"] = &ParamTableIndexer<SpEffectVfx>::exportToCsv;
        indexerSpEffectVfx["importFromCsv"] = &ParamTableIndexer<SpEffectVfx>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<SpEffectVfx>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<SpEffectVfx>>(nullptr);
        indexer->setFieldNames({
            {"midstSfxId", false},
            {"midstSeId", false},
            {"initSfxId", false},
            {"initSeId", false},
            {"finishSfxId", false},
            {"finishSeId", false},
            {"camouflageBeginDist", false},
            {"camouflageEndDist", false},
            {"transformProtectorId", false},
            {"midstDmyId", false},
            {"initDmyId", false},
            {"finishDmyId", false},
            {"effectType", false},
            {"soulParamIdForWepEnchant", false},
            {"playCategory", false},
            {"playPriority", false},
            {"existEffectForLarge", false},
            {"existEffectForSoul", false},
            {"effectInvisibleAtCamouflage", false},
            {"useCamouflage", false},
            {"invisibleAtFriendCamouflage", false},
            {"isHideFootEffect_forCamouflage", false},
            {"halfCamouflage", false},
            {"isFullBodyTransformProtectorId", false},
            {"isInvisibleWeapon", false},
            {"isSilence", false},
            {"isMidstFullbody", false},
            {"isInitFullbody", false},
            {"isFinishFullbody", false},
            {"isVisibleDeadChr", false},
            {"isUseOffsetEnchantSfxSize", false},
            {"unknown_0x2f_7", false},
            {"decalId1", false},
            {"decalId2", false},
            {"footEffectPriority", false},
            {"footEffectOffset", false},
            {"traceSfxIdOffsetType", false},
            {"forceDeceasedType", false},
            {"enchantStartDmyId_0", false},
            {"enchantEndDmyId_0", false},
            {"enchantStartDmyId_1", false},
            {"enchantEndDmyId_1", false},
            {"enchantStartDmyId_2", false},
            {"enchantEndDmyId_2", false},
            {"enchantStartDmyId_3", false},
            {"enchantEndDmyId_3", false},
            {"enchantStartDmyId_4", false},
            {"enchantEndDmyId_4", false},
            {"enchantStartDmyId_5", false},
            {"enchantEndDmyId_5", false},
            {"enchantStartDmyId_6", false},
            {"enchantEndDmyId_6", false},
            {"enchantStartDmyId_7", false},
            {"enchantEndDmyId_7", false},
            {"SfxIdOffsetType", false},
            {"phantomParamOverwriteType", false},
            {"camouflageMinAlpha", false},
            {"wetAspectType", false},
            {"phantomParamOverwriteId", false},
            {"materialParamId", false},
            {"materialParamInitValue", false},
            {"materialParamTargetValue", false},
            {"materialParamFadeTime", false},
            {"footDecalMaterialOffsetOverwriteId", false},
            {"unknown_0x96", false},
            {"unknown_0x97", false},
            {"unknown_0x98", false},
            {"unknown_0x99", false},
            {"unknown_0x9a", false},
        });
        return indexer;
    };
    paramsTable["SpEffectVfxParam"] = [tableLoader]() -> auto { return tableLoader(L"SpEffectVfxParam"); };
}

template<> void ParamTableIndexer<SpEffectVfx>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,midstSfxId,midstSeId,initSfxId,initSeId,finishSfxId,finishSeId,camouflageBeginDist,camouflageEndDist,transformProtectorId,midstDmyId,initDmyId,finishDmyId,effectType,soulParamIdForWepEnchant,playCategory,playPriority,existEffectForLarge,existEffectForSoul,effectInvisibleAtCamouflage,useCamouflage,invisibleAtFriendCamouflage,isHideFootEffect_forCamouflage,halfCamouflage,isFullBodyTransformProtectorId,isInvisibleWeapon,isSilence,isMidstFullbody,isInitFullbody,isFinishFullbody,isVisibleDeadChr,isUseOffsetEnchantSfxSize,unknown_0x2f_7,decalId1,decalId2,footEffectPriority,footEffectOffset,traceSfxIdOffsetType,forceDeceasedType,enchantStartDmyId_0,enchantEndDmyId_0,enchantStartDmyId_1,enchantEndDmyId_1,enchantStartDmyId_2,enchantEndDmyId_2,enchantStartDmyId_3,enchantEndDmyId_3,enchantStartDmyId_4,enchantEndDmyId_4,enchantStartDmyId_5,enchantEndDmyId_5,enchantStartDmyId_6,enchantEndDmyId_6,enchantStartDmyId_7,enchantEndDmyId_7,SfxIdOffsetType,phantomParamOverwriteType,camouflageMinAlpha,wetAspectType,phantomParamOverwriteId,materialParamId,materialParamInitValue,materialParamTargetValue,materialParamFadeTime,footDecalMaterialOffsetOverwriteId,unknown_0x96,unknown_0x97,unknown_0x98,unknown_0x99,unknown_0x9a\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%d,%d,%d,%g,%g,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%u,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%d,%d,%g,%g,%g,%d,%u,%u,%u,%u,%u\n",
            this->paramId(i),
            param->midstSfxId,
            param->midstSeId,
            param->initSfxId,
            param->initSeId,
            param->finishSfxId,
            param->finishSeId,
            param->camouflageBeginDist,
            param->camouflageEndDist,
            param->transformProtectorId,
            param->midstDmyId,
            param->initDmyId,
            param->finishDmyId,
            param->effectType,
            param->soulParamIdForWepEnchant,
            param->playCategory,
            param->playPriority,
            param->existEffectForLarge,
            param->existEffectForSoul,
            param->effectInvisibleAtCamouflage,
            param->useCamouflage,
            param->invisibleAtFriendCamouflage,
            param->isHideFootEffect_forCamouflage,
            param->halfCamouflage,
            param->isFullBodyTransformProtectorId,
            param->isInvisibleWeapon,
            param->isSilence,
            param->isMidstFullbody,
            param->isInitFullbody,
            param->isFinishFullbody,
            param->isVisibleDeadChr,
            param->isUseOffsetEnchantSfxSize,
            param->unknown_0x2f_7,
            param->decalId1,
            param->decalId2,
            param->footEffectPriority,
            param->footEffectOffset,
            param->traceSfxIdOffsetType,
            param->forceDeceasedType,
            param->enchantStartDmyId_0,
            param->enchantEndDmyId_0,
            param->enchantStartDmyId_1,
            param->enchantEndDmyId_1,
            param->enchantStartDmyId_2,
            param->enchantEndDmyId_2,
            param->enchantStartDmyId_3,
            param->enchantEndDmyId_3,
            param->enchantStartDmyId_4,
            param->enchantEndDmyId_4,
            param->enchantStartDmyId_5,
            param->enchantEndDmyId_5,
            param->enchantStartDmyId_6,
            param->enchantEndDmyId_6,
            param->enchantStartDmyId_7,
            param->enchantEndDmyId_7,
            param->SfxIdOffsetType,
            param->phantomParamOverwriteType,
            param->camouflageMinAlpha,
            param->wetAspectType,
            param->phantomParamOverwriteId,
            param->materialParamId,
            param->materialParamInitValue,
            param->materialParamTargetValue,
            param->materialParamFadeTime,
            param->footDecalMaterialOffsetOverwriteId,
            param->unknown_0x96,
            param->unknown_0x97,
            param->unknown_0x98,
            param->unknown_0x99,
            param->unknown_0x9a
        );
    }
    fclose(f);
}

}
