#include "../luabindings.h"
#include "../defs/ThrowParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<ThrowParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerThrowParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ThrowParam"]; usertype) return;
        auto indexerThrowParam = state->new_usertype<ParamTableIndexer<ThrowParam>>("ThrowParamTableIndexer");
        indexerThrowParam["count"] = sol::property(&ParamTableIndexer<ThrowParam>::count);
        indexerThrowParam["__index"] = &ParamTableIndexer<ThrowParam>::at;
        indexerThrowParam["id"] = &ParamTableIndexer<ThrowParam>::paramId;
        indexerThrowParam["get"] = &ParamTableIndexer<ThrowParam>::get;
        indexerThrowParam["exportToCsv"] = &ParamTableIndexer<ThrowParam>::exportToCsv;
        indexerThrowParam["importFromCsv"] = &ParamTableIndexer<ThrowParam>::importFromCsv;
        auto utThrowParam = state->new_usertype<ThrowParam>("ThrowParam");
        utThrowParam["AtkChrId"] = &ThrowParam::AtkChrId;
        utThrowParam["DefChrId"] = &ThrowParam::DefChrId;
        utThrowParam["Dist"] = &ThrowParam::Dist;
        utThrowParam["DiffAngMin"] = &ThrowParam::DiffAngMin;
        utThrowParam["DiffAngMax"] = &ThrowParam::DiffAngMax;
        utThrowParam["upperYRange"] = &ThrowParam::upperYRange;
        utThrowParam["lowerYRange"] = &ThrowParam::lowerYRange;
        utThrowParam["diffAngMyToDef"] = &ThrowParam::diffAngMyToDef;
        utThrowParam["throwTypeId"] = &ThrowParam::throwTypeId;
        utThrowParam["atkAnimId"] = &ThrowParam::atkAnimId;
        utThrowParam["defAnimId"] = &ThrowParam::defAnimId;
        utThrowParam["escHp"] = &ThrowParam::escHp;
        utThrowParam["selfEscCycleTime"] = &ThrowParam::selfEscCycleTime;
        utThrowParam["sphereCastRadiusRateTop"] = &ThrowParam::sphereCastRadiusRateTop;
        utThrowParam["sphereCastRadiusRateLow"] = &ThrowParam::sphereCastRadiusRateLow;
        utThrowParam["PadType"] = &ThrowParam::PadType;
        utThrowParam["AtkEnableState"] = &ThrowParam::AtkEnableState;
        utThrowParam["throwFollowingType"] = &ThrowParam::throwFollowingType;
        utThrowParam["throwType"] = &ThrowParam::throwType;
        utThrowParam["selfEscCycleCnt"] = &ThrowParam::selfEscCycleCnt;
        utThrowParam["dmyHasChrDirType"] = &ThrowParam::dmyHasChrDirType;
        utThrowParam["isTurnAtker"] = sol::property([](ThrowParam &param) -> uint8_t { return param.isTurnAtker; }, [](ThrowParam &param, uint8_t value) { param.isTurnAtker = value; });
        utThrowParam["isSkipWepCate"] = sol::property([](ThrowParam &param) -> uint8_t { return param.isSkipWepCate; }, [](ThrowParam &param, uint8_t value) { param.isSkipWepCate = value; });
        utThrowParam["isSkipSphereCast"] = sol::property([](ThrowParam &param) -> uint8_t { return param.isSkipSphereCast; }, [](ThrowParam &param, uint8_t value) { param.isSkipSphereCast = value; });
        utThrowParam["isEnableCorrectPos_forThrowAdjust"] = sol::property([](ThrowParam &param) -> uint8_t { return param.isEnableCorrectPos_forThrowAdjust; }, [](ThrowParam &param, uint8_t value) { param.isEnableCorrectPos_forThrowAdjust = value; });
        utThrowParam["isEnableThrowFollowingFallAssist"] = sol::property([](ThrowParam &param) -> uint8_t { return param.isEnableThrowFollowingFallAssist; }, [](ThrowParam &param, uint8_t value) { param.isEnableThrowFollowingFallAssist = value; });
        utThrowParam["isEnableThrowFollowingFeedback"] = sol::property([](ThrowParam &param) -> uint8_t { return param.isEnableThrowFollowingFeedback; }, [](ThrowParam &param, uint8_t value) { param.isEnableThrowFollowingFeedback = value; });
        utThrowParam["atkSorbDmyId"] = &ThrowParam::atkSorbDmyId;
        utThrowParam["defSorbDmyId"] = &ThrowParam::defSorbDmyId;
        utThrowParam["Dist_start"] = &ThrowParam::Dist_start;
        utThrowParam["DiffAngMin_start"] = &ThrowParam::DiffAngMin_start;
        utThrowParam["DiffAngMax_start"] = &ThrowParam::DiffAngMax_start;
        utThrowParam["upperYRange_start"] = &ThrowParam::upperYRange_start;
        utThrowParam["lowerYRange_start"] = &ThrowParam::lowerYRange_start;
        utThrowParam["diffAngMyToDef_start"] = &ThrowParam::diffAngMyToDef_start;
        utThrowParam["judgeRangeBasePosDmyId1"] = &ThrowParam::judgeRangeBasePosDmyId1;
        utThrowParam["judgeRangeBasePosDmyId2"] = &ThrowParam::judgeRangeBasePosDmyId2;
        utThrowParam["adsrobModelPosInterpolationTime"] = &ThrowParam::adsrobModelPosInterpolationTime;
        utThrowParam["throwFollowingEndEasingTime"] = &ThrowParam::throwFollowingEndEasingTime;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<ThrowParam>>(state, L"ThrowParam");
        indexer->setFieldNames({
            {"AtkChrId", false},
            {"DefChrId", false},
            {"Dist", false},
            {"DiffAngMin", false},
            {"DiffAngMax", false},
            {"upperYRange", false},
            {"lowerYRange", false},
            {"diffAngMyToDef", false},
            {"throwTypeId", false},
            {"atkAnimId", false},
            {"defAnimId", false},
            {"escHp", false},
            {"selfEscCycleTime", false},
            {"sphereCastRadiusRateTop", false},
            {"sphereCastRadiusRateLow", false},
            {"PadType", false},
            {"AtkEnableState", false},
            {"throwFollowingType", false},
            {"throwType", false},
            {"selfEscCycleCnt", false},
            {"dmyHasChrDirType", false},
            {"isTurnAtker", false},
            {"isSkipWepCate", false},
            {"isSkipSphereCast", false},
            {"isEnableCorrectPos_forThrowAdjust", false},
            {"isEnableThrowFollowingFallAssist", false},
            {"isEnableThrowFollowingFeedback", false},
            {"atkSorbDmyId", false},
            {"defSorbDmyId", false},
            {"Dist_start", false},
            {"DiffAngMin_start", false},
            {"DiffAngMax_start", false},
            {"upperYRange_start", false},
            {"lowerYRange_start", false},
            {"diffAngMyToDef_start", false},
            {"judgeRangeBasePosDmyId1", false},
            {"judgeRangeBasePosDmyId2", false},
            {"adsrobModelPosInterpolationTime", false},
            {"throwFollowingEndEasingTime", false},
        });
        return indexer;
    };
    paramsTable["ThrowParam"] = tableLoader;
}

template<> void ParamTableIndexer<ThrowParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,AtkChrId,DefChrId,Dist,DiffAngMin,DiffAngMax,upperYRange,lowerYRange,diffAngMyToDef,throwTypeId,atkAnimId,defAnimId,escHp,selfEscCycleTime,sphereCastRadiusRateTop,sphereCastRadiusRateLow,PadType,AtkEnableState,throwFollowingType,throwType,selfEscCycleCnt,dmyHasChrDirType,isTurnAtker,isSkipWepCate,isSkipSphereCast,isEnableCorrectPos_forThrowAdjust,isEnableThrowFollowingFallAssist,isEnableThrowFollowingFeedback,atkSorbDmyId,defSorbDmyId,Dist_start,DiffAngMin_start,DiffAngMax_start,upperYRange_start,lowerYRange_start,diffAngMyToDef_start,judgeRangeBasePosDmyId1,judgeRangeBasePosDmyId2,adsrobModelPosInterpolationTime,throwFollowingEndEasingTime\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%g,%g,%g,%g,%g,%g,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%g,%g,%g,%g,%g,%g,%d,%d,%g,%g\n",
            this->paramId(i),
            param->AtkChrId,
            param->DefChrId,
            param->Dist,
            param->DiffAngMin,
            param->DiffAngMax,
            param->upperYRange,
            param->lowerYRange,
            param->diffAngMyToDef,
            param->throwTypeId,
            param->atkAnimId,
            param->defAnimId,
            param->escHp,
            param->selfEscCycleTime,
            param->sphereCastRadiusRateTop,
            param->sphereCastRadiusRateLow,
            param->PadType,
            param->AtkEnableState,
            param->throwFollowingType,
            param->throwType,
            param->selfEscCycleCnt,
            param->dmyHasChrDirType,
            param->isTurnAtker,
            param->isSkipWepCate,
            param->isSkipSphereCast,
            param->isEnableCorrectPos_forThrowAdjust,
            param->isEnableThrowFollowingFallAssist,
            param->isEnableThrowFollowingFeedback,
            param->atkSorbDmyId,
            param->defSorbDmyId,
            param->Dist_start,
            param->DiffAngMin_start,
            param->DiffAngMax_start,
            param->upperYRange_start,
            param->lowerYRange_start,
            param->diffAngMyToDef_start,
            param->judgeRangeBasePosDmyId1,
            param->judgeRangeBasePosDmyId2,
            param->adsrobModelPosInterpolationTime,
            param->throwFollowingEndEasingTime
        );
    }
    fclose(f);
}

}
