#include "../luabindings.h"
#include "../defs/DecalParam.h"

namespace paramadjuster::params {

void registerDecalParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["DecalParam"]; usertype) return;
        auto indexerDecalParam = state->new_usertype<ParamTableIndexer<DecalParam>>("DecalParamTableIndexer");
        indexerDecalParam["count"] = sol::property(&ParamTableIndexer<DecalParam>::count);
        indexerDecalParam["__index"] = &ParamTableIndexer<DecalParam>::at;
        indexerDecalParam["id"] = &ParamTableIndexer<DecalParam>::paramId;
        indexerDecalParam["get"] = &ParamTableIndexer<DecalParam>::get;
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
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<DecalParam>>(gParamMgr.findTable(L"DecalParam")); };
    paramsTable["DecalParam"] = tableLoader;
}

}
