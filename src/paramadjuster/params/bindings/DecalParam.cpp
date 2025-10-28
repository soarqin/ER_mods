#include "../luabindings.h"
#include "../defs/DecalParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<DecalParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerDecalParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["DecalParam"]; usertype) return;
        auto indexerDecalParam = state->new_usertype<ParamTableIndexer<DecalParam>>("DecalParamTableIndexer");
        indexerDecalParam["count"] = sol::property(&ParamTableIndexer<DecalParam>::count);
        indexerDecalParam["__index"] = &ParamTableIndexer<DecalParam>::at;
        indexerDecalParam["id"] = &ParamTableIndexer<DecalParam>::paramId;
        indexerDecalParam["get"] = &ParamTableIndexer<DecalParam>::get;
        indexerDecalParam["exportToCsv"] = &ParamTableIndexer<DecalParam>::exportToCsv;
        indexerDecalParam["importFromCsv"] = &ParamTableIndexer<DecalParam>::importFromCsv;
        auto utDecalParam = state->new_usertype<DecalParam>("DecalParam");
        utDecalParam["textureId"] = &DecalParam::textureId;
        utDecalParam["dmypolyId"] = &DecalParam::dmypolyId;
        utDecalParam["pitchAngle"] = &DecalParam::pitchAngle;
        utDecalParam["yawAngle"] = &DecalParam::yawAngle;
        utDecalParam["nearDistance"] = &DecalParam::nearDistance;
        utDecalParam["farDistance"] = &DecalParam::farDistance;
        utDecalParam["nearSize"] = &DecalParam::nearSize;
        utDecalParam["farSize"] = &DecalParam::farSize;
        utDecalParam["maskSpeffectId"] = &DecalParam::maskSpeffectId;
        utDecalParam["pad_10"] = sol::property([](DecalParam &param) -> uint32_t { return param.pad_10; }, [](DecalParam &param, uint32_t value) { param.pad_10 = value; });
        utDecalParam["replaceTextureId_byMaterial"] = sol::property([](DecalParam &param) -> uint32_t { return param.replaceTextureId_byMaterial; }, [](DecalParam &param, uint32_t value) { param.replaceTextureId_byMaterial = value; });
        utDecalParam["dmypolyCategory"] = sol::property([](DecalParam &param) -> uint32_t { return param.dmypolyCategory; }, [](DecalParam &param, uint32_t value) { param.dmypolyCategory = value; });
        utDecalParam["pad_05"] = sol::property([](DecalParam &param) -> uint32_t { return param.pad_05; }, [](DecalParam &param, uint32_t value) { param.pad_05 = value; });
        utDecalParam["useDeferredDecal"] = sol::property([](DecalParam &param) -> uint32_t { return param.useDeferredDecal; }, [](DecalParam &param, uint32_t value) { param.useDeferredDecal = value; });
        utDecalParam["usePaintDecal"] = sol::property([](DecalParam &param) -> uint32_t { return param.usePaintDecal; }, [](DecalParam &param, uint32_t value) { param.usePaintDecal = value; });
        utDecalParam["bloodTypeEnable"] = sol::property([](DecalParam &param) -> uint32_t { return param.bloodTypeEnable; }, [](DecalParam &param, uint32_t value) { param.bloodTypeEnable = value; });
        utDecalParam["bUseNormal"] = sol::property([](DecalParam &param) -> uint32_t { return param.bUseNormal; }, [](DecalParam &param, uint32_t value) { param.bUseNormal = value; });
        utDecalParam["pad_08"] = sol::property([](DecalParam &param) -> uint32_t { return param.pad_08; }, [](DecalParam &param, uint32_t value) { param.pad_08 = value; });
        utDecalParam["pad_09"] = sol::property([](DecalParam &param) -> uint32_t { return param.pad_09; }, [](DecalParam &param, uint32_t value) { param.pad_09 = value; });
        utDecalParam["usePom"] = sol::property([](DecalParam &param) -> uint32_t { return param.usePom; }, [](DecalParam &param, uint32_t value) { param.usePom = value; });
        utDecalParam["useEmissive"] = sol::property([](DecalParam &param) -> uint32_t { return param.useEmissive; }, [](DecalParam &param, uint32_t value) { param.useEmissive = value; });
        utDecalParam["putVertical"] = sol::property([](DecalParam &param) -> uint32_t { return param.putVertical; }, [](DecalParam &param, uint32_t value) { param.putVertical = value; });
        utDecalParam["randomSizeMin"] = &DecalParam::randomSizeMin;
        utDecalParam["randomSizeMax"] = &DecalParam::randomSizeMax;
        utDecalParam["randomRollMin"] = &DecalParam::randomRollMin;
        utDecalParam["randomRollMax"] = &DecalParam::randomRollMax;
        utDecalParam["randomPitchMin"] = &DecalParam::randomPitchMin;
        utDecalParam["randomPitchMax"] = &DecalParam::randomPitchMax;
        utDecalParam["randomYawMin"] = &DecalParam::randomYawMin;
        utDecalParam["randomYawMax"] = &DecalParam::randomYawMax;
        utDecalParam["pomHightScale"] = &DecalParam::pomHightScale;
        utDecalParam["pomSampleMin"] = &DecalParam::pomSampleMin;
        utDecalParam["pomSampleMax"] = &DecalParam::pomSampleMax;
        utDecalParam["blendMode"] = &DecalParam::blendMode;
        utDecalParam["appearDirType"] = &DecalParam::appearDirType;
        utDecalParam["emissiveValueBegin"] = &DecalParam::emissiveValueBegin;
        utDecalParam["emissiveValueEnd"] = &DecalParam::emissiveValueEnd;
        utDecalParam["emissiveTime"] = &DecalParam::emissiveTime;
        utDecalParam["bIntpEnable"] = &DecalParam::bIntpEnable;
        utDecalParam["intpIntervalDist"] = &DecalParam::intpIntervalDist;
        utDecalParam["beginIntpTextureId"] = &DecalParam::beginIntpTextureId;
        utDecalParam["endIntpTextureId"] = &DecalParam::endIntpTextureId;
        utDecalParam["appearSfxId"] = &DecalParam::appearSfxId;
        utDecalParam["appearSfxOffsetPos"] = &DecalParam::appearSfxOffsetPos;
        utDecalParam["maskTextureId"] = &DecalParam::maskTextureId;
        utDecalParam["diffuseTextureId"] = &DecalParam::diffuseTextureId;
        utDecalParam["reflecTextureId"] = &DecalParam::reflecTextureId;
        utDecalParam["maskScale"] = &DecalParam::maskScale;
        utDecalParam["normalTextureId"] = &DecalParam::normalTextureId;
        utDecalParam["heightTextureId"] = &DecalParam::heightTextureId;
        utDecalParam["emissiveTextureId"] = &DecalParam::emissiveTextureId;
        utDecalParam["diffuseColorR"] = &DecalParam::diffuseColorR;
        utDecalParam["diffuseColorG"] = &DecalParam::diffuseColorG;
        utDecalParam["diffuseColorB"] = &DecalParam::diffuseColorB;
        utDecalParam["reflecColorR"] = &DecalParam::reflecColorR;
        utDecalParam["reflecColorG"] = &DecalParam::reflecColorG;
        utDecalParam["reflecColorB"] = &DecalParam::reflecColorB;
        utDecalParam["bLifeEnable"] = &DecalParam::bLifeEnable;
        utDecalParam["siniScale"] = &DecalParam::siniScale;
        utDecalParam["lifeTimeSec"] = &DecalParam::lifeTimeSec;
        utDecalParam["fadeOutTimeSec"] = &DecalParam::fadeOutTimeSec;
        utDecalParam["priority"] = &DecalParam::priority;
        utDecalParam["bDistThinOutEnable"] = &DecalParam::bDistThinOutEnable;
        utDecalParam["bAlignedTexRandomVariationEnable"] = &DecalParam::bAlignedTexRandomVariationEnable;
        utDecalParam["distThinOutCheckDist"] = &DecalParam::distThinOutCheckDist;
        utDecalParam["distThinOutCheckAngleDeg"] = &DecalParam::distThinOutCheckAngleDeg;
        utDecalParam["distThinOutMaxNum"] = &DecalParam::distThinOutMaxNum;
        utDecalParam["distThinOutCheckNum"] = &DecalParam::distThinOutCheckNum;
        utDecalParam["delayAppearFrame"] = &DecalParam::delayAppearFrame;
        utDecalParam["randVaria_Diffuse"] = sol::property([](DecalParam &param) -> uint32_t { return param.randVaria_Diffuse; }, [](DecalParam &param, uint32_t value) { param.randVaria_Diffuse = value; });
        utDecalParam["randVaria_Mask"] = sol::property([](DecalParam &param) -> uint32_t { return param.randVaria_Mask; }, [](DecalParam &param, uint32_t value) { param.randVaria_Mask = value; });
        utDecalParam["randVaria_Reflec"] = sol::property([](DecalParam &param) -> uint32_t { return param.randVaria_Reflec; }, [](DecalParam &param, uint32_t value) { param.randVaria_Reflec = value; });
        utDecalParam["pad_12"] = sol::property([](DecalParam &param) -> uint32_t { return param.pad_12; }, [](DecalParam &param, uint32_t value) { param.pad_12 = value; });
        utDecalParam["randVaria_Normal"] = sol::property([](DecalParam &param) -> uint32_t { return param.randVaria_Normal; }, [](DecalParam &param, uint32_t value) { param.randVaria_Normal = value; });
        utDecalParam["randVaria_Height"] = sol::property([](DecalParam &param) -> uint32_t { return param.randVaria_Height; }, [](DecalParam &param, uint32_t value) { param.randVaria_Height = value; });
        utDecalParam["randVaria_Emissive"] = sol::property([](DecalParam &param) -> uint32_t { return param.randVaria_Emissive; }, [](DecalParam &param, uint32_t value) { param.randVaria_Emissive = value; });
        utDecalParam["pad_11"] = sol::property([](DecalParam &param) -> uint32_t { return param.pad_11; }, [](DecalParam &param, uint32_t value) { param.pad_11 = value; });
        utDecalParam["fadeInTimeSec"] = &DecalParam::fadeInTimeSec;
        utDecalParam["thinOutOverlapMultiRadius"] = &DecalParam::thinOutOverlapMultiRadius;
        utDecalParam["thinOutNeighborAddRadius"] = &DecalParam::thinOutNeighborAddRadius;
        utDecalParam["thinOutOverlapLimitNum"] = &DecalParam::thinOutOverlapLimitNum;
        utDecalParam["thinOutNeighborLimitNum"] = &DecalParam::thinOutNeighborLimitNum;
        utDecalParam["thinOutMode"] = &DecalParam::thinOutMode;
        utDecalParam["emissiveColorR"] = &DecalParam::emissiveColorR;
        utDecalParam["emissiveColorG"] = &DecalParam::emissiveColorG;
        utDecalParam["emissiveColorB"] = &DecalParam::emissiveColorB;
        utDecalParam["maxDecalSfxCreatableSlopeAngleDeg"] = &DecalParam::maxDecalSfxCreatableSlopeAngleDeg;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<DecalParam>>(state, L"DecalParam");
        indexer->setFieldNames({
            {"textureId", false},
            {"dmypolyId", false},
            {"pitchAngle", false},
            {"yawAngle", false},
            {"nearDistance", false},
            {"farDistance", false},
            {"nearSize", false},
            {"farSize", false},
            {"maskSpeffectId", false},
            {"pad_10", false},
            {"replaceTextureId_byMaterial", false},
            {"dmypolyCategory", false},
            {"pad_05", false},
            {"useDeferredDecal", false},
            {"usePaintDecal", false},
            {"bloodTypeEnable", false},
            {"bUseNormal", false},
            {"pad_08", false},
            {"pad_09", false},
            {"usePom", false},
            {"useEmissive", false},
            {"putVertical", false},
            {"randomSizeMin", false},
            {"randomSizeMax", false},
            {"randomRollMin", false},
            {"randomRollMax", false},
            {"randomPitchMin", false},
            {"randomPitchMax", false},
            {"randomYawMin", false},
            {"randomYawMax", false},
            {"pomHightScale", false},
            {"pomSampleMin", false},
            {"pomSampleMax", false},
            {"blendMode", false},
            {"appearDirType", false},
            {"emissiveValueBegin", false},
            {"emissiveValueEnd", false},
            {"emissiveTime", false},
            {"bIntpEnable", false},
            {"intpIntervalDist", false},
            {"beginIntpTextureId", false},
            {"endIntpTextureId", false},
            {"appearSfxId", false},
            {"appearSfxOffsetPos", false},
            {"maskTextureId", false},
            {"diffuseTextureId", false},
            {"reflecTextureId", false},
            {"maskScale", false},
            {"normalTextureId", false},
            {"heightTextureId", false},
            {"emissiveTextureId", false},
            {"diffuseColorR", false},
            {"diffuseColorG", false},
            {"diffuseColorB", false},
            {"reflecColorR", false},
            {"reflecColorG", false},
            {"reflecColorB", false},
            {"bLifeEnable", false},
            {"siniScale", false},
            {"lifeTimeSec", false},
            {"fadeOutTimeSec", false},
            {"priority", false},
            {"bDistThinOutEnable", false},
            {"bAlignedTexRandomVariationEnable", false},
            {"distThinOutCheckDist", false},
            {"distThinOutCheckAngleDeg", false},
            {"distThinOutMaxNum", false},
            {"distThinOutCheckNum", false},
            {"delayAppearFrame", false},
            {"randVaria_Diffuse", false},
            {"randVaria_Mask", false},
            {"randVaria_Reflec", false},
            {"pad_12", false},
            {"randVaria_Normal", false},
            {"randVaria_Height", false},
            {"randVaria_Emissive", false},
            {"pad_11", false},
            {"fadeInTimeSec", false},
            {"thinOutOverlapMultiRadius", false},
            {"thinOutNeighborAddRadius", false},
            {"thinOutOverlapLimitNum", false},
            {"thinOutNeighborLimitNum", false},
            {"thinOutMode", false},
            {"emissiveColorR", false},
            {"emissiveColorG", false},
            {"emissiveColorB", false},
            {"maxDecalSfxCreatableSlopeAngleDeg", false},
        });
        return indexer;
    };
    paramsTable["DecalParam"] = tableLoader;
}

template<> void ParamTableIndexer<DecalParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,textureId,dmypolyId,pitchAngle,yawAngle,nearDistance,farDistance,nearSize,farSize,maskSpeffectId,pad_10,replaceTextureId_byMaterial,dmypolyCategory,pad_05,useDeferredDecal,usePaintDecal,bloodTypeEnable,bUseNormal,pad_08,pad_09,usePom,useEmissive,putVertical,randomSizeMin,randomSizeMax,randomRollMin,randomRollMax,randomPitchMin,randomPitchMax,randomYawMin,randomYawMax,pomHightScale,pomSampleMin,pomSampleMax,blendMode,appearDirType,emissiveValueBegin,emissiveValueEnd,emissiveTime,bIntpEnable,intpIntervalDist,beginIntpTextureId,endIntpTextureId,appearSfxId,appearSfxOffsetPos,maskTextureId,diffuseTextureId,reflecTextureId,maskScale,normalTextureId,heightTextureId,emissiveTextureId,diffuseColorR,diffuseColorG,diffuseColorB,reflecColorR,reflecColorG,reflecColorB,bLifeEnable,siniScale,lifeTimeSec,fadeOutTimeSec,priority,bDistThinOutEnable,bAlignedTexRandomVariationEnable,distThinOutCheckDist,distThinOutCheckAngleDeg,distThinOutMaxNum,distThinOutCheckNum,delayAppearFrame,randVaria_Diffuse,randVaria_Mask,randVaria_Reflec,pad_12,randVaria_Normal,randVaria_Height,randVaria_Emissive,pad_11,fadeInTimeSec,thinOutOverlapMultiRadius,thinOutNeighborAddRadius,thinOutOverlapLimitNum,thinOutNeighborLimitNum,thinOutMode,emissiveColorR,emissiveColorG,emissiveColorB,maxDecalSfxCreatableSlopeAngleDeg\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%g,%g,%g,%g,%g,%g,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%g,%g,%g,%g,%g,%g,%g,%u,%u,%d,%d,%g,%g,%g,%u,%g,%d,%d,%d,%g,%d,%d,%d,%g,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%g,%g,%g,%d,%u,%u,%g,%g,%u,%u,%d,%u,%u,%u,%u,%u,%u,%u,%u,%g,%g,%g,%u,%u,%d,%u,%u,%u,%g\n",
            this->paramId(i),
            param->textureId,
            param->dmypolyId,
            param->pitchAngle,
            param->yawAngle,
            param->nearDistance,
            param->farDistance,
            param->nearSize,
            param->farSize,
            param->maskSpeffectId,
            param->pad_10,
            param->replaceTextureId_byMaterial,
            param->dmypolyCategory,
            param->pad_05,
            param->useDeferredDecal,
            param->usePaintDecal,
            param->bloodTypeEnable,
            param->bUseNormal,
            param->pad_08,
            param->pad_09,
            param->usePom,
            param->useEmissive,
            param->putVertical,
            param->randomSizeMin,
            param->randomSizeMax,
            param->randomRollMin,
            param->randomRollMax,
            param->randomPitchMin,
            param->randomPitchMax,
            param->randomYawMin,
            param->randomYawMax,
            param->pomHightScale,
            param->pomSampleMin,
            param->pomSampleMax,
            param->blendMode,
            param->appearDirType,
            param->emissiveValueBegin,
            param->emissiveValueEnd,
            param->emissiveTime,
            param->bIntpEnable,
            param->intpIntervalDist,
            param->beginIntpTextureId,
            param->endIntpTextureId,
            param->appearSfxId,
            param->appearSfxOffsetPos,
            param->maskTextureId,
            param->diffuseTextureId,
            param->reflecTextureId,
            param->maskScale,
            param->normalTextureId,
            param->heightTextureId,
            param->emissiveTextureId,
            param->diffuseColorR,
            param->diffuseColorG,
            param->diffuseColorB,
            param->reflecColorR,
            param->reflecColorG,
            param->reflecColorB,
            param->bLifeEnable,
            param->siniScale,
            param->lifeTimeSec,
            param->fadeOutTimeSec,
            param->priority,
            param->bDistThinOutEnable,
            param->bAlignedTexRandomVariationEnable,
            param->distThinOutCheckDist,
            param->distThinOutCheckAngleDeg,
            param->distThinOutMaxNum,
            param->distThinOutCheckNum,
            param->delayAppearFrame,
            param->randVaria_Diffuse,
            param->randVaria_Mask,
            param->randVaria_Reflec,
            param->pad_12,
            param->randVaria_Normal,
            param->randVaria_Height,
            param->randVaria_Emissive,
            param->pad_11,
            param->fadeInTimeSec,
            param->thinOutOverlapMultiRadius,
            param->thinOutNeighborAddRadius,
            param->thinOutOverlapLimitNum,
            param->thinOutNeighborLimitNum,
            param->thinOutMode,
            param->emissiveColorR,
            param->emissiveColorG,
            param->emissiveColorB,
            param->maxDecalSfxCreatableSlopeAngleDeg
        );
    }
    fclose(f);
}

}
