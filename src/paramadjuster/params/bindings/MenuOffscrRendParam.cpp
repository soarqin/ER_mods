#include "../luabindings.h"
#include "../defs/MenuOffscrRendParam.h"

namespace paramadjuster::params {

void registerMenuOffscrRendParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MenuOffscrRendParam"]; usertype) return;
        auto indexerMenuOffscrRendParam = state->new_usertype<ParamTableIndexer<MenuOffscrRendParam>>("MenuOffscrRendParamTableIndexer");
        indexerMenuOffscrRendParam["count"] = sol::property(&ParamTableIndexer<MenuOffscrRendParam>::count);
        indexerMenuOffscrRendParam["__index"] = &ParamTableIndexer<MenuOffscrRendParam>::at;
        indexerMenuOffscrRendParam["id"] = &ParamTableIndexer<MenuOffscrRendParam>::paramId;
        indexerMenuOffscrRendParam["get"] = &ParamTableIndexer<MenuOffscrRendParam>::get;
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
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<MenuOffscrRendParam>>(gParamMgr.findTable(L"MenuOffscrRendParam")); };
    paramsTable["MenuOffscrRendParam"] = tableLoader;
}

}
