#include "../luabindings.h"
#include "../defs/LockCamParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<LockCamParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerLockCamParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["LockCamParam"]; usertype) return;
        auto indexerLockCamParam = state->new_usertype<ParamTableIndexer<LockCamParam>>("LockCamParamTableIndexer");
        indexerLockCamParam["count"] = sol::property(&ParamTableIndexer<LockCamParam>::count);
        indexerLockCamParam["__index"] = &ParamTableIndexer<LockCamParam>::at;
        indexerLockCamParam["id"] = &ParamTableIndexer<LockCamParam>::paramId;
        indexerLockCamParam["get"] = &ParamTableIndexer<LockCamParam>::get;
        indexerLockCamParam["exportToCsv"] = &ParamTableIndexer<LockCamParam>::exportToCsv;
        indexerLockCamParam["importFromCsv"] = &ParamTableIndexer<LockCamParam>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<LockCamParam>>(state, L"LockCamParam");
        indexer->setFieldNames({
            {"camDistTarget", false},
            {"rotRangeMinX", false},
            {"lockRotXShiftRatio", false},
            {"chrOrgOffset_Y", false},
            {"chrLockRangeMaxRadius", false},
            {"camFovY", false},
            {"chrLockRangeMaxRadius_forD", false},
            {"chrLockRangeMaxRadius_forPD", false},
            {"closeMaxHeight", false},
            {"closeMinHeight", false},
            {"closeAngRange", false},
            {"closeMaxRadius", false},
            {"closeMaxRadius_forD", false},
            {"closeMaxRadius_forPD", false},
            {"bulletMaxRadius", false},
            {"bulletMaxRadius_forD", false},
            {"bulletMaxRadius_forPD", false},
            {"bulletAngRange", false},
            {"lockTgtKeepTime", false},
            {"chrTransChaseRateForNormal", false},
        });
        return indexer;
    };
    paramsTable["LockCamParam"] = tableLoader;
}

template<> void ParamTableIndexer<LockCamParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,camDistTarget,rotRangeMinX,lockRotXShiftRatio,chrOrgOffset_Y,chrLockRangeMaxRadius,camFovY,chrLockRangeMaxRadius_forD,chrLockRangeMaxRadius_forPD,closeMaxHeight,closeMinHeight,closeAngRange,closeMaxRadius,closeMaxRadius_forD,closeMaxRadius_forPD,bulletMaxRadius,bulletMaxRadius_forD,bulletMaxRadius_forPD,bulletAngRange,lockTgtKeepTime,chrTransChaseRateForNormal\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g\n",
            this->paramId(i),
            param->camDistTarget,
            param->rotRangeMinX,
            param->lockRotXShiftRatio,
            param->chrOrgOffset_Y,
            param->chrLockRangeMaxRadius,
            param->camFovY,
            param->chrLockRangeMaxRadius_forD,
            param->chrLockRangeMaxRadius_forPD,
            param->closeMaxHeight,
            param->closeMinHeight,
            param->closeAngRange,
            param->closeMaxRadius,
            param->closeMaxRadius_forD,
            param->closeMaxRadius_forPD,
            param->bulletMaxRadius,
            param->bulletMaxRadius_forD,
            param->bulletMaxRadius_forPD,
            param->bulletAngRange,
            param->lockTgtKeepTime,
            param->chrTransChaseRateForNormal
        );
    }
    fclose(f);
}

}
