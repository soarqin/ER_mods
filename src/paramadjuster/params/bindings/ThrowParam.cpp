#include "../luabindings.h"
#include "../defs/ThrowParam.h"

namespace paramadjuster::params {

void registerThrowParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ThrowParam"]; usertype) return;
        auto indexerThrowParam = state->new_usertype<ParamTableIndexer<ThrowParam>>("ThrowParamTableIndexer");
        indexerThrowParam["count"] = sol::property(&ParamTableIndexer<ThrowParam>::count);
        indexerThrowParam["__index"] = &ParamTableIndexer<ThrowParam>::at;
        indexerThrowParam["id"] = &ParamTableIndexer<ThrowParam>::paramId;
        indexerThrowParam["get"] = &ParamTableIndexer<ThrowParam>::get;
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
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<ThrowParam>>(gParamMgr.findTable(L"ThrowParam")); };
    paramsTable["ThrowParam"] = tableLoader;
}

}
