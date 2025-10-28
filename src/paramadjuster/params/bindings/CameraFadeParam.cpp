#include "../luabindings.h"
#include "../defs/CameraFadeParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<CameraFadeParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerCameraFadeParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["CameraFadeParam"]; usertype) return;
        auto indexerCameraFadeParam = state->new_usertype<ParamTableIndexer<CameraFadeParam>>("CameraFadeParamTableIndexer");
        indexerCameraFadeParam["count"] = sol::property(&ParamTableIndexer<CameraFadeParam>::count);
        indexerCameraFadeParam["__index"] = &ParamTableIndexer<CameraFadeParam>::at;
        indexerCameraFadeParam["id"] = &ParamTableIndexer<CameraFadeParam>::paramId;
        indexerCameraFadeParam["get"] = &ParamTableIndexer<CameraFadeParam>::get;
        indexerCameraFadeParam["exportToCsv"] = &ParamTableIndexer<CameraFadeParam>::exportToCsv;
        indexerCameraFadeParam["importFromCsv"] = &ParamTableIndexer<CameraFadeParam>::importFromCsv;
        auto utCameraFadeParam = state->new_usertype<CameraFadeParam>("CameraFadeParam");
        utCameraFadeParam["NearMinDist"] = &CameraFadeParam::NearMinDist;
        utCameraFadeParam["NearMaxDist"] = &CameraFadeParam::NearMaxDist;
        utCameraFadeParam["FarMinDist"] = &CameraFadeParam::FarMinDist;
        utCameraFadeParam["FarMaxDist"] = &CameraFadeParam::FarMaxDist;
        utCameraFadeParam["MiddleAlpha"] = &CameraFadeParam::MiddleAlpha;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<CameraFadeParam>>(state, L"CameraFadeParam");
        indexer->setFieldNames({
            {"NearMinDist", false},
            {"NearMaxDist", false},
            {"FarMinDist", false},
            {"FarMaxDist", false},
            {"MiddleAlpha", false},
        });
        return indexer;
    };
    paramsTable["CameraFadeParam"] = tableLoader;
}

template<> void ParamTableIndexer<CameraFadeParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,NearMinDist,NearMaxDist,FarMinDist,FarMaxDist,MiddleAlpha\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g,%g,%g,%g,%g\n",
            this->paramId(i),
            param->NearMinDist,
            param->NearMaxDist,
            param->FarMinDist,
            param->FarMaxDist,
            param->MiddleAlpha
        );
    }
    fclose(f);
}

}
