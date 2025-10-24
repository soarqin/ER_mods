#include "../luabindings.h"
#include "../defs/LockCamParam.h"

namespace paramadjuster::params {

void registerLockCamParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["LockCamParam"]; usertype) return;
        auto indexerLockCamParam = state->new_usertype<ParamTableIndexer<LockCamParam>>("LockCamParamTableIndexer");
        indexerLockCamParam["count"] = sol::property(&ParamTableIndexer<LockCamParam>::count);
        indexerLockCamParam["__index"] = &ParamTableIndexer<LockCamParam>::at;
        indexerLockCamParam["id"] = &ParamTableIndexer<LockCamParam>::paramId;
        indexerLockCamParam["get"] = &ParamTableIndexer<LockCamParam>::get;
        auto utLockCamParam = state->new_usertype<LockCamParam>("LockCamParam");
        utLockCamParam["camDistTarget"] = &LockCamParam::camDistTarget;
        utLockCamParam["rotRangeMinX"] = &LockCamParam::rotRangeMinX;
        utLockCamParam["lockRotXShiftRatio"] = &LockCamParam::lockRotXShiftRatio;
        utLockCamParam["chrOrgOffset_Y"] = &LockCamParam::chrOrgOffset_Y;
        utLockCamParam["chrLockRangeMaxRadius"] = &LockCamParam::chrLockRangeMaxRadius;
        utLockCamParam["camFovY"] = &LockCamParam::camFovY;
        utLockCamParam["chrLockRangeMaxRadius_forD"] = &LockCamParam::chrLockRangeMaxRadius_forD;
        utLockCamParam["chrLockRangeMaxRadius_forPD"] = &LockCamParam::chrLockRangeMaxRadius_forPD;
        utLockCamParam["closeMaxHeight"] = &LockCamParam::closeMaxHeight;
        utLockCamParam["closeMinHeight"] = &LockCamParam::closeMinHeight;
        utLockCamParam["closeAngRange"] = &LockCamParam::closeAngRange;
        utLockCamParam["closeMaxRadius"] = &LockCamParam::closeMaxRadius;
        utLockCamParam["closeMaxRadius_forD"] = &LockCamParam::closeMaxRadius_forD;
        utLockCamParam["closeMaxRadius_forPD"] = &LockCamParam::closeMaxRadius_forPD;
        utLockCamParam["bulletMaxRadius"] = &LockCamParam::bulletMaxRadius;
        utLockCamParam["bulletMaxRadius_forD"] = &LockCamParam::bulletMaxRadius_forD;
        utLockCamParam["bulletMaxRadius_forPD"] = &LockCamParam::bulletMaxRadius_forPD;
        utLockCamParam["bulletAngRange"] = &LockCamParam::bulletAngRange;
        utLockCamParam["lockTgtKeepTime"] = &LockCamParam::lockTgtKeepTime;
        utLockCamParam["chrTransChaseRateForNormal"] = &LockCamParam::chrTransChaseRateForNormal;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<LockCamParam>>(gParamMgr.findTable(L"LockCamParam")); };
    paramsTable["LockCamParam"] = tableLoader;
}

}
