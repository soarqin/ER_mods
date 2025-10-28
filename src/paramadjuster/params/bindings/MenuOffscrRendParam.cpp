#include "../luabindings.h"
#include "../defs/MenuOffscrRendParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<MenuOffscrRendParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerMenuOffscrRendParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MenuOffscrRendParam"]; usertype) return;
        auto indexerMenuOffscrRendParam = state->new_usertype<ParamTableIndexer<MenuOffscrRendParam>>("MenuOffscrRendParamTableIndexer");
        indexerMenuOffscrRendParam["count"] = sol::property(&ParamTableIndexer<MenuOffscrRendParam>::count);
        indexerMenuOffscrRendParam["__index"] = &ParamTableIndexer<MenuOffscrRendParam>::at;
        indexerMenuOffscrRendParam["id"] = &ParamTableIndexer<MenuOffscrRendParam>::paramId;
        indexerMenuOffscrRendParam["get"] = &ParamTableIndexer<MenuOffscrRendParam>::get;
        indexerMenuOffscrRendParam["exportToCsv"] = &ParamTableIndexer<MenuOffscrRendParam>::exportToCsv;
        indexerMenuOffscrRendParam["importFromCsv"] = &ParamTableIndexer<MenuOffscrRendParam>::importFromCsv;
        auto utMenuOffscrRendParam = state->new_usertype<MenuOffscrRendParam>("MenuOffscrRendParam");
        utMenuOffscrRendParam["camAtPosX"] = &MenuOffscrRendParam::camAtPosX;
        utMenuOffscrRendParam["camAtPosY"] = &MenuOffscrRendParam::camAtPosY;
        utMenuOffscrRendParam["camAtPosZ"] = &MenuOffscrRendParam::camAtPosZ;
        utMenuOffscrRendParam["camDist"] = &MenuOffscrRendParam::camDist;
        utMenuOffscrRendParam["camRotX"] = &MenuOffscrRendParam::camRotX;
        utMenuOffscrRendParam["camRotY"] = &MenuOffscrRendParam::camRotY;
        utMenuOffscrRendParam["camFov"] = &MenuOffscrRendParam::camFov;
        utMenuOffscrRendParam["camDistMin"] = &MenuOffscrRendParam::camDistMin;
        utMenuOffscrRendParam["camDistMax"] = &MenuOffscrRendParam::camDistMax;
        utMenuOffscrRendParam["camRotXMin"] = &MenuOffscrRendParam::camRotXMin;
        utMenuOffscrRendParam["camRotXMax"] = &MenuOffscrRendParam::camRotXMax;
        utMenuOffscrRendParam["GparamID"] = &MenuOffscrRendParam::GparamID;
        utMenuOffscrRendParam["envTexId"] = &MenuOffscrRendParam::envTexId;
        utMenuOffscrRendParam["Grapm_ID_forPS4"] = &MenuOffscrRendParam::Grapm_ID_forPS4;
        utMenuOffscrRendParam["Grapm_ID_forXB1"] = &MenuOffscrRendParam::Grapm_ID_forXB1;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<MenuOffscrRendParam>>(state, L"MenuOffscrRendParam");
        indexer->setFieldNames({
            {"camAtPosX", false},
            {"camAtPosY", false},
            {"camAtPosZ", false},
            {"camDist", false},
            {"camRotX", false},
            {"camRotY", false},
            {"camFov", false},
            {"camDistMin", false},
            {"camDistMax", false},
            {"camRotXMin", false},
            {"camRotXMax", false},
            {"GparamID", false},
            {"envTexId", false},
            {"Grapm_ID_forPS4", false},
            {"Grapm_ID_forXB1", false},
        });
        return indexer;
    };
    paramsTable["MenuOffscrRendParam"] = tableLoader;
}

template<> void ParamTableIndexer<MenuOffscrRendParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,camAtPosX,camAtPosY,camAtPosZ,camDist,camRotX,camRotY,camFov,camDistMin,camDistMax,camRotXMin,camRotXMax,GparamID,envTexId,Grapm_ID_forPS4,Grapm_ID_forXB1\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%u,%u,%u,%u\n",
            this->paramId(i),
            param->camAtPosX,
            param->camAtPosY,
            param->camAtPosZ,
            param->camDist,
            param->camRotX,
            param->camRotY,
            param->camFov,
            param->camDistMin,
            param->camDistMax,
            param->camRotXMin,
            param->camRotXMax,
            param->GparamID,
            param->envTexId,
            param->Grapm_ID_forPS4,
            param->Grapm_ID_forXB1
        );
    }
    fclose(f);
}

}
