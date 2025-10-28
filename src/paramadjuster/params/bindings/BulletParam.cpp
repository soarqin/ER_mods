#include "../luabindings.h"
#include "../defs/BulletParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<BulletParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerBulletParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["BulletParam"]; usertype) return;
        auto indexerBulletParam = state->new_usertype<ParamTableIndexer<BulletParam>>("BulletParamTableIndexer");
        indexerBulletParam["count"] = sol::property(&ParamTableIndexer<BulletParam>::count);
        indexerBulletParam["__index"] = &ParamTableIndexer<BulletParam>::at;
        indexerBulletParam["id"] = &ParamTableIndexer<BulletParam>::paramId;
        indexerBulletParam["get"] = &ParamTableIndexer<BulletParam>::get;
        indexerBulletParam["exportToCsv"] = &ParamTableIndexer<BulletParam>::exportToCsv;
        indexerBulletParam["importFromCsv"] = &ParamTableIndexer<BulletParam>::importFromCsv;
        auto utBulletParam = state->new_usertype<BulletParam>("BulletParam");
        utBulletParam["atkId_Bullet"] = &BulletParam::atkId_Bullet;
        utBulletParam["sfxId_Bullet"] = &BulletParam::sfxId_Bullet;
        utBulletParam["sfxId_Hit"] = &BulletParam::sfxId_Hit;
        utBulletParam["sfxId_Flick"] = &BulletParam::sfxId_Flick;
        utBulletParam["life"] = &BulletParam::life;
        utBulletParam["dist"] = &BulletParam::dist;
        utBulletParam["shootInterval"] = &BulletParam::shootInterval;
        utBulletParam["gravityInRange"] = &BulletParam::gravityInRange;
        utBulletParam["gravityOutRange"] = &BulletParam::gravityOutRange;
        utBulletParam["hormingStopRange"] = &BulletParam::hormingStopRange;
        utBulletParam["initVellocity"] = &BulletParam::initVellocity;
        utBulletParam["accelInRange"] = &BulletParam::accelInRange;
        utBulletParam["accelOutRange"] = &BulletParam::accelOutRange;
        utBulletParam["maxVellocity"] = &BulletParam::maxVellocity;
        utBulletParam["minVellocity"] = &BulletParam::minVellocity;
        utBulletParam["accelTime"] = &BulletParam::accelTime;
        utBulletParam["homingBeginDist"] = &BulletParam::homingBeginDist;
        utBulletParam["hitRadius"] = &BulletParam::hitRadius;
        utBulletParam["hitRadiusMax"] = &BulletParam::hitRadiusMax;
        utBulletParam["spreadTime"] = &BulletParam::spreadTime;
        utBulletParam["expDelay"] = &BulletParam::expDelay;
        utBulletParam["hormingOffsetRange"] = &BulletParam::hormingOffsetRange;
        utBulletParam["dmgHitRecordLifeTime"] = &BulletParam::dmgHitRecordLifeTime;
        utBulletParam["externalForce"] = &BulletParam::externalForce;
        utBulletParam["spEffectIDForShooter"] = &BulletParam::spEffectIDForShooter;
        utBulletParam["autoSearchNPCThinkID"] = &BulletParam::autoSearchNPCThinkID;
        utBulletParam["HitBulletID"] = &BulletParam::HitBulletID;
        utBulletParam["spEffectId0"] = &BulletParam::spEffectId0;
        utBulletParam["spEffectId1"] = &BulletParam::spEffectId1;
        utBulletParam["spEffectId2"] = &BulletParam::spEffectId2;
        utBulletParam["spEffectId3"] = &BulletParam::spEffectId3;
        utBulletParam["spEffectId4"] = &BulletParam::spEffectId4;
        utBulletParam["numShoot"] = &BulletParam::numShoot;
        utBulletParam["homingAngle"] = &BulletParam::homingAngle;
        utBulletParam["shootAngle"] = &BulletParam::shootAngle;
        utBulletParam["shootAngleInterval"] = &BulletParam::shootAngleInterval;
        utBulletParam["shootAngleXInterval"] = &BulletParam::shootAngleXInterval;
        utBulletParam["damageDamp"] = &BulletParam::damageDamp;
        utBulletParam["spelDamageDamp"] = &BulletParam::spelDamageDamp;
        utBulletParam["fireDamageDamp"] = &BulletParam::fireDamageDamp;
        utBulletParam["thunderDamageDamp"] = &BulletParam::thunderDamageDamp;
        utBulletParam["staminaDamp"] = &BulletParam::staminaDamp;
        utBulletParam["knockbackDamp"] = &BulletParam::knockbackDamp;
        utBulletParam["shootAngleXZ"] = &BulletParam::shootAngleXZ;
        utBulletParam["lockShootLimitAng"] = &BulletParam::lockShootLimitAng;
        utBulletParam["prevVelocityDirRate"] = &BulletParam::prevVelocityDirRate;
        utBulletParam["atkAttribute"] = &BulletParam::atkAttribute;
        utBulletParam["spAttribute"] = &BulletParam::spAttribute;
        utBulletParam["Material_AttackType"] = &BulletParam::Material_AttackType;
        utBulletParam["Material_AttackMaterial"] = &BulletParam::Material_AttackMaterial;
        utBulletParam["isPenetrateChr"] = sol::property([](BulletParam &param) -> uint8_t { return param.isPenetrateChr; }, [](BulletParam &param, uint8_t value) { param.isPenetrateChr = value; });
        utBulletParam["isPenetrateObj"] = sol::property([](BulletParam &param) -> uint8_t { return param.isPenetrateObj; }, [](BulletParam &param, uint8_t value) { param.isPenetrateObj = value; });
        utBulletParam["mayRemoteDetonate"] = sol::property([](BulletParam &param) -> uint8_t { return param.mayRemoteDetonate; }, [](BulletParam &param, uint8_t value) { param.mayRemoteDetonate = value; });
        utBulletParam["launchConditionType"] = &BulletParam::launchConditionType;
        utBulletParam["FollowType"] = sol::property([](BulletParam &param) -> uint8_t { return param.FollowType; }, [](BulletParam &param, uint8_t value) { param.FollowType = value; });
        utBulletParam["EmittePosType"] = sol::property([](BulletParam &param) -> uint8_t { return param.EmittePosType; }, [](BulletParam &param, uint8_t value) { param.EmittePosType = value; });
        utBulletParam["isAttackSFX"] = sol::property([](BulletParam &param) -> uint8_t { return param.isAttackSFX; }, [](BulletParam &param, uint8_t value) { param.isAttackSFX = value; });
        utBulletParam["isEndlessHit"] = sol::property([](BulletParam &param) -> uint8_t { return param.isEndlessHit; }, [](BulletParam &param, uint8_t value) { param.isEndlessHit = value; });
        utBulletParam["isPenetrateMap"] = sol::property([](BulletParam &param) -> uint8_t { return param.isPenetrateMap; }, [](BulletParam &param, uint8_t value) { param.isPenetrateMap = value; });
        utBulletParam["isHitBothTeam"] = sol::property([](BulletParam &param) -> uint8_t { return param.isHitBothTeam; }, [](BulletParam &param, uint8_t value) { param.isHitBothTeam = value; });
        utBulletParam["isUseSharedHitList"] = sol::property([](BulletParam &param) -> uint8_t { return param.isUseSharedHitList; }, [](BulletParam &param, uint8_t value) { param.isUseSharedHitList = value; });
        utBulletParam["isUseMultiDmyPolyIfPlace"] = sol::property([](BulletParam &param) -> uint8_t { return param.isUseMultiDmyPolyIfPlace; }, [](BulletParam &param, uint8_t value) { param.isUseMultiDmyPolyIfPlace = value; });
        utBulletParam["isHitOtherBulletForceEraseA"] = sol::property([](BulletParam &param) -> uint8_t { return param.isHitOtherBulletForceEraseA; }, [](BulletParam &param, uint8_t value) { param.isHitOtherBulletForceEraseA = value; });
        utBulletParam["isHitOtherBulletForceEraseB"] = sol::property([](BulletParam &param) -> uint8_t { return param.isHitOtherBulletForceEraseB; }, [](BulletParam &param, uint8_t value) { param.isHitOtherBulletForceEraseB = value; });
        utBulletParam["isHitForceMagic"] = sol::property([](BulletParam &param) -> uint8_t { return param.isHitForceMagic; }, [](BulletParam &param, uint8_t value) { param.isHitForceMagic = value; });
        utBulletParam["isIgnoreSfxIfHitWater"] = sol::property([](BulletParam &param) -> uint8_t { return param.isIgnoreSfxIfHitWater; }, [](BulletParam &param, uint8_t value) { param.isIgnoreSfxIfHitWater = value; });
        utBulletParam["isIgnoreMoveStateIfHitWater"] = sol::property([](BulletParam &param) -> uint8_t { return param.isIgnoreMoveStateIfHitWater; }, [](BulletParam &param, uint8_t value) { param.isIgnoreMoveStateIfHitWater = value; });
        utBulletParam["isHitDarkForceMagic"] = sol::property([](BulletParam &param) -> uint8_t { return param.isHitDarkForceMagic; }, [](BulletParam &param, uint8_t value) { param.isHitDarkForceMagic = value; });
        utBulletParam["dmgCalcSide"] = sol::property([](BulletParam &param) -> uint8_t { return param.dmgCalcSide; }, [](BulletParam &param, uint8_t value) { param.dmgCalcSide = value; });
        utBulletParam["isEnableAutoHoming"] = sol::property([](BulletParam &param) -> uint8_t { return param.isEnableAutoHoming; }, [](BulletParam &param, uint8_t value) { param.isEnableAutoHoming = value; });
        utBulletParam["isSyncBulletCulcDumypolyPos"] = sol::property([](BulletParam &param) -> uint8_t { return param.isSyncBulletCulcDumypolyPos; }, [](BulletParam &param, uint8_t value) { param.isSyncBulletCulcDumypolyPos = value; });
        utBulletParam["isOwnerOverrideInitAngle"] = sol::property([](BulletParam &param) -> uint8_t { return param.isOwnerOverrideInitAngle; }, [](BulletParam &param, uint8_t value) { param.isOwnerOverrideInitAngle = value; });
        utBulletParam["isInheritSfxToChild"] = sol::property([](BulletParam &param) -> uint8_t { return param.isInheritSfxToChild; }, [](BulletParam &param, uint8_t value) { param.isInheritSfxToChild = value; });
        utBulletParam["darkDamageDamp"] = &BulletParam::darkDamageDamp;
        utBulletParam["bulletSfxDeleteType_byHit"] = &BulletParam::bulletSfxDeleteType_byHit;
        utBulletParam["bulletSfxDeleteType_byLifeDead"] = &BulletParam::bulletSfxDeleteType_byLifeDead;
        utBulletParam["targetYOffsetRange"] = &BulletParam::targetYOffsetRange;
        utBulletParam["shootAngleYMaxRandom"] = &BulletParam::shootAngleYMaxRandom;
        utBulletParam["shootAngleXMaxRandom"] = &BulletParam::shootAngleXMaxRandom;
        utBulletParam["intervalCreateBulletId"] = &BulletParam::intervalCreateBulletId;
        utBulletParam["intervalCreateTimeMin"] = &BulletParam::intervalCreateTimeMin;
        utBulletParam["intervalCreateTimeMax"] = &BulletParam::intervalCreateTimeMax;
        utBulletParam["predictionShootObserveTime"] = &BulletParam::predictionShootObserveTime;
        utBulletParam["intervalCreateWaitTime"] = &BulletParam::intervalCreateWaitTime;
        utBulletParam["sfxPostureType"] = &BulletParam::sfxPostureType;
        utBulletParam["createLimitGroupId"] = &BulletParam::createLimitGroupId;
        utBulletParam["isInheritSpeedToChild"] = sol::property([](BulletParam &param) -> uint8_t { return param.isInheritSpeedToChild; }, [](BulletParam &param, uint8_t value) { param.isInheritSpeedToChild = value; });
        utBulletParam["isDisableHitSfx_byChrAndObj"] = sol::property([](BulletParam &param) -> uint8_t { return param.isDisableHitSfx_byChrAndObj; }, [](BulletParam &param, uint8_t value) { param.isDisableHitSfx_byChrAndObj = value; });
        utBulletParam["isCheckWall_byCenterRay"] = sol::property([](BulletParam &param) -> uint8_t { return param.isCheckWall_byCenterRay; }, [](BulletParam &param, uint8_t value) { param.isCheckWall_byCenterRay = value; });
        utBulletParam["isHitFlare"] = sol::property([](BulletParam &param) -> uint8_t { return param.isHitFlare; }, [](BulletParam &param, uint8_t value) { param.isHitFlare = value; });
        utBulletParam["isUseBulletWallFilter"] = sol::property([](BulletParam &param) -> uint8_t { return param.isUseBulletWallFilter; }, [](BulletParam &param, uint8_t value) { param.isUseBulletWallFilter = value; });
        utBulletParam["isDisableAiProjectileDodge"] = sol::property([](BulletParam &param) -> uint8_t { return param.isDisableAiProjectileDodge; }, [](BulletParam &param, uint8_t value) { param.isDisableAiProjectileDodge = value; });
        utBulletParam["isNonDependenceMagicForFunnleNum"] = sol::property([](BulletParam &param) -> uint8_t { return param.isNonDependenceMagicForFunnleNum; }, [](BulletParam &param, uint8_t value) { param.isNonDependenceMagicForFunnleNum = value; });
        utBulletParam["isAiInterruptShootNoDamageBullet"] = sol::property([](BulletParam &param) -> uint8_t { return param.isAiInterruptShootNoDamageBullet; }, [](BulletParam &param, uint8_t value) { param.isAiInterruptShootNoDamageBullet = value; });
        utBulletParam["randomCreateRadius"] = &BulletParam::randomCreateRadius;
        utBulletParam["followOffset_BaseHeight"] = &BulletParam::followOffset_BaseHeight;
        utBulletParam["assetNo_Hit"] = &BulletParam::assetNo_Hit;
        utBulletParam["lifeRandomRange"] = &BulletParam::lifeRandomRange;
        utBulletParam["homingAngleX"] = &BulletParam::homingAngleX;
        utBulletParam["ballisticCalcType"] = &BulletParam::ballisticCalcType;
        utBulletParam["attachEffectType"] = &BulletParam::attachEffectType;
        utBulletParam["seId_Bullet1"] = &BulletParam::seId_Bullet1;
        utBulletParam["seId_Bullet2"] = &BulletParam::seId_Bullet2;
        utBulletParam["seId_Hit"] = &BulletParam::seId_Hit;
        utBulletParam["seId_Flick"] = &BulletParam::seId_Flick;
        utBulletParam["howitzerShootAngleXMin"] = &BulletParam::howitzerShootAngleXMin;
        utBulletParam["howitzerShootAngleXMax"] = &BulletParam::howitzerShootAngleXMax;
        utBulletParam["howitzerInitMinVelocity"] = &BulletParam::howitzerInitMinVelocity;
        utBulletParam["howitzerInitMaxVelocity"] = &BulletParam::howitzerInitMaxVelocity;
        utBulletParam["sfxId_ForceErase"] = &BulletParam::sfxId_ForceErase;
        utBulletParam["bulletSfxDeleteType_byForceErase"] = &BulletParam::bulletSfxDeleteType_byForceErase;
        utBulletParam["followDmypoly_forSfxPose"] = &BulletParam::followDmypoly_forSfxPose;
        utBulletParam["followOffset_Radius"] = &BulletParam::followOffset_Radius;
        utBulletParam["spBulletDistUpRate"] = &BulletParam::spBulletDistUpRate;
        utBulletParam["nolockTargetDist"] = &BulletParam::nolockTargetDist;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<BulletParam>>(state, L"BulletParam");
        indexer->setFieldNames({
            {"atkId_Bullet", false},
            {"sfxId_Bullet", false},
            {"sfxId_Hit", false},
            {"sfxId_Flick", false},
            {"life", false},
            {"dist", false},
            {"shootInterval", false},
            {"gravityInRange", false},
            {"gravityOutRange", false},
            {"hormingStopRange", false},
            {"initVellocity", false},
            {"accelInRange", false},
            {"accelOutRange", false},
            {"maxVellocity", false},
            {"minVellocity", false},
            {"accelTime", false},
            {"homingBeginDist", false},
            {"hitRadius", false},
            {"hitRadiusMax", false},
            {"spreadTime", false},
            {"expDelay", false},
            {"hormingOffsetRange", false},
            {"dmgHitRecordLifeTime", false},
            {"externalForce", false},
            {"spEffectIDForShooter", false},
            {"autoSearchNPCThinkID", false},
            {"HitBulletID", false},
            {"spEffectId0", false},
            {"spEffectId1", false},
            {"spEffectId2", false},
            {"spEffectId3", false},
            {"spEffectId4", false},
            {"numShoot", false},
            {"homingAngle", false},
            {"shootAngle", false},
            {"shootAngleInterval", false},
            {"shootAngleXInterval", false},
            {"damageDamp", false},
            {"spelDamageDamp", false},
            {"fireDamageDamp", false},
            {"thunderDamageDamp", false},
            {"staminaDamp", false},
            {"knockbackDamp", false},
            {"shootAngleXZ", false},
            {"lockShootLimitAng", false},
            {"prevVelocityDirRate", false},
            {"atkAttribute", false},
            {"spAttribute", false},
            {"Material_AttackType", false},
            {"Material_AttackMaterial", false},
            {"isPenetrateChr", false},
            {"isPenetrateObj", false},
            {"mayRemoteDetonate", false},
            {"launchConditionType", false},
            {"FollowType", false},
            {"EmittePosType", false},
            {"isAttackSFX", false},
            {"isEndlessHit", false},
            {"isPenetrateMap", false},
            {"isHitBothTeam", false},
            {"isUseSharedHitList", false},
            {"isUseMultiDmyPolyIfPlace", false},
            {"isHitOtherBulletForceEraseA", false},
            {"isHitOtherBulletForceEraseB", false},
            {"isHitForceMagic", false},
            {"isIgnoreSfxIfHitWater", false},
            {"isIgnoreMoveStateIfHitWater", false},
            {"isHitDarkForceMagic", false},
            {"dmgCalcSide", false},
            {"isEnableAutoHoming", false},
            {"isSyncBulletCulcDumypolyPos", false},
            {"isOwnerOverrideInitAngle", false},
            {"isInheritSfxToChild", false},
            {"darkDamageDamp", false},
            {"bulletSfxDeleteType_byHit", false},
            {"bulletSfxDeleteType_byLifeDead", false},
            {"targetYOffsetRange", false},
            {"shootAngleYMaxRandom", false},
            {"shootAngleXMaxRandom", false},
            {"intervalCreateBulletId", false},
            {"intervalCreateTimeMin", false},
            {"intervalCreateTimeMax", false},
            {"predictionShootObserveTime", false},
            {"intervalCreateWaitTime", false},
            {"sfxPostureType", false},
            {"createLimitGroupId", false},
            {"isInheritSpeedToChild", false},
            {"isDisableHitSfx_byChrAndObj", false},
            {"isCheckWall_byCenterRay", false},
            {"isHitFlare", false},
            {"isUseBulletWallFilter", false},
            {"isDisableAiProjectileDodge", false},
            {"isNonDependenceMagicForFunnleNum", false},
            {"isAiInterruptShootNoDamageBullet", false},
            {"randomCreateRadius", false},
            {"followOffset_BaseHeight", false},
            {"assetNo_Hit", false},
            {"lifeRandomRange", false},
            {"homingAngleX", false},
            {"ballisticCalcType", false},
            {"attachEffectType", false},
            {"seId_Bullet1", false},
            {"seId_Bullet2", false},
            {"seId_Hit", false},
            {"seId_Flick", false},
            {"howitzerShootAngleXMin", false},
            {"howitzerShootAngleXMax", false},
            {"howitzerInitMinVelocity", false},
            {"howitzerInitMaxVelocity", false},
            {"sfxId_ForceErase", false},
            {"bulletSfxDeleteType_byForceErase", false},
            {"followDmypoly_forSfxPose", false},
            {"followOffset_Radius", false},
            {"spBulletDistUpRate", false},
            {"nolockTargetDist", false},
        });
        return indexer;
    };
    paramsTable["Bullet"] = tableLoader;
}

template<> void ParamTableIndexer<BulletParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,atkId_Bullet,sfxId_Bullet,sfxId_Hit,sfxId_Flick,life,dist,shootInterval,gravityInRange,gravityOutRange,hormingStopRange,initVellocity,accelInRange,accelOutRange,maxVellocity,minVellocity,accelTime,homingBeginDist,hitRadius,hitRadiusMax,spreadTime,expDelay,hormingOffsetRange,dmgHitRecordLifeTime,externalForce,spEffectIDForShooter,autoSearchNPCThinkID,HitBulletID,spEffectId0,spEffectId1,spEffectId2,spEffectId3,spEffectId4,numShoot,homingAngle,shootAngle,shootAngleInterval,shootAngleXInterval,damageDamp,spelDamageDamp,fireDamageDamp,thunderDamageDamp,staminaDamp,knockbackDamp,shootAngleXZ,lockShootLimitAng,prevVelocityDirRate,atkAttribute,spAttribute,Material_AttackType,Material_AttackMaterial,isPenetrateChr,isPenetrateObj,mayRemoteDetonate,launchConditionType,FollowType,EmittePosType,isAttackSFX,isEndlessHit,isPenetrateMap,isHitBothTeam,isUseSharedHitList,isUseMultiDmyPolyIfPlace,isHitOtherBulletForceEraseA,isHitOtherBulletForceEraseB,isHitForceMagic,isIgnoreSfxIfHitWater,isIgnoreMoveStateIfHitWater,isHitDarkForceMagic,dmgCalcSide,isEnableAutoHoming,isSyncBulletCulcDumypolyPos,isOwnerOverrideInitAngle,isInheritSfxToChild,darkDamageDamp,bulletSfxDeleteType_byHit,bulletSfxDeleteType_byLifeDead,targetYOffsetRange,shootAngleYMaxRandom,shootAngleXMaxRandom,intervalCreateBulletId,intervalCreateTimeMin,intervalCreateTimeMax,predictionShootObserveTime,intervalCreateWaitTime,sfxPostureType,createLimitGroupId,isInheritSpeedToChild,isDisableHitSfx_byChrAndObj,isCheckWall_byCenterRay,isHitFlare,isUseBulletWallFilter,isDisableAiProjectileDodge,isNonDependenceMagicForFunnleNum,isAiInterruptShootNoDamageBullet,randomCreateRadius,followOffset_BaseHeight,assetNo_Hit,lifeRandomRange,homingAngleX,ballisticCalcType,attachEffectType,seId_Bullet1,seId_Bullet2,seId_Hit,seId_Flick,howitzerShootAngleXMin,howitzerShootAngleXMax,howitzerInitMinVelocity,howitzerInitMaxVelocity,sfxId_ForceErase,bulletSfxDeleteType_byForceErase,followDmypoly_forSfxPose,followOffset_Radius,spBulletDistUpRate,nolockTargetDist\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%d,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%d,%d,%d,%d,%d,%d,%d,%d,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%d,%g,%g,%g,%d,%g,%g,%g,%g,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%g,%g,%d,%g,%d,%u,%u,%d,%d,%d,%d,%d,%d,%g,%g,%d,%d,%d,%g,%g,%g\n",
            this->paramId(i),
            param->atkId_Bullet,
            param->sfxId_Bullet,
            param->sfxId_Hit,
            param->sfxId_Flick,
            param->life,
            param->dist,
            param->shootInterval,
            param->gravityInRange,
            param->gravityOutRange,
            param->hormingStopRange,
            param->initVellocity,
            param->accelInRange,
            param->accelOutRange,
            param->maxVellocity,
            param->minVellocity,
            param->accelTime,
            param->homingBeginDist,
            param->hitRadius,
            param->hitRadiusMax,
            param->spreadTime,
            param->expDelay,
            param->hormingOffsetRange,
            param->dmgHitRecordLifeTime,
            param->externalForce,
            param->spEffectIDForShooter,
            param->autoSearchNPCThinkID,
            param->HitBulletID,
            param->spEffectId0,
            param->spEffectId1,
            param->spEffectId2,
            param->spEffectId3,
            param->spEffectId4,
            param->numShoot,
            param->homingAngle,
            param->shootAngle,
            param->shootAngleInterval,
            param->shootAngleXInterval,
            param->damageDamp,
            param->spelDamageDamp,
            param->fireDamageDamp,
            param->thunderDamageDamp,
            param->staminaDamp,
            param->knockbackDamp,
            param->shootAngleXZ,
            param->lockShootLimitAng,
            param->prevVelocityDirRate,
            param->atkAttribute,
            param->spAttribute,
            param->Material_AttackType,
            param->Material_AttackMaterial,
            param->isPenetrateChr,
            param->isPenetrateObj,
            param->mayRemoteDetonate,
            param->launchConditionType,
            param->FollowType,
            param->EmittePosType,
            param->isAttackSFX,
            param->isEndlessHit,
            param->isPenetrateMap,
            param->isHitBothTeam,
            param->isUseSharedHitList,
            param->isUseMultiDmyPolyIfPlace,
            param->isHitOtherBulletForceEraseA,
            param->isHitOtherBulletForceEraseB,
            param->isHitForceMagic,
            param->isIgnoreSfxIfHitWater,
            param->isIgnoreMoveStateIfHitWater,
            param->isHitDarkForceMagic,
            param->dmgCalcSide,
            param->isEnableAutoHoming,
            param->isSyncBulletCulcDumypolyPos,
            param->isOwnerOverrideInitAngle,
            param->isInheritSfxToChild,
            param->darkDamageDamp,
            param->bulletSfxDeleteType_byHit,
            param->bulletSfxDeleteType_byLifeDead,
            param->targetYOffsetRange,
            param->shootAngleYMaxRandom,
            param->shootAngleXMaxRandom,
            param->intervalCreateBulletId,
            param->intervalCreateTimeMin,
            param->intervalCreateTimeMax,
            param->predictionShootObserveTime,
            param->intervalCreateWaitTime,
            param->sfxPostureType,
            param->createLimitGroupId,
            param->isInheritSpeedToChild,
            param->isDisableHitSfx_byChrAndObj,
            param->isCheckWall_byCenterRay,
            param->isHitFlare,
            param->isUseBulletWallFilter,
            param->isDisableAiProjectileDodge,
            param->isNonDependenceMagicForFunnleNum,
            param->isAiInterruptShootNoDamageBullet,
            param->randomCreateRadius,
            param->followOffset_BaseHeight,
            param->assetNo_Hit,
            param->lifeRandomRange,
            param->homingAngleX,
            param->ballisticCalcType,
            param->attachEffectType,
            param->seId_Bullet1,
            param->seId_Bullet2,
            param->seId_Hit,
            param->seId_Flick,
            param->howitzerShootAngleXMin,
            param->howitzerShootAngleXMax,
            param->howitzerInitMinVelocity,
            param->howitzerInitMaxVelocity,
            param->sfxId_ForceErase,
            param->bulletSfxDeleteType_byForceErase,
            param->followDmypoly_forSfxPose,
            param->followOffset_Radius,
            param->spBulletDistUpRate,
            param->nolockTargetDist
        );
    }
    fclose(f);
}

}
