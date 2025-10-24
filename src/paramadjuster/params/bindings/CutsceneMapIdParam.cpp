#include "../luabindings.h"
#include "../defs/CutsceneMapIdParam.h"

namespace paramadjuster::params {

void registerCutsceneMapIdParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["CutsceneMapIdParam"]; usertype) return;
        auto indexerCutsceneMapIdParam = state->new_usertype<ParamTableIndexer<CutsceneMapIdParam>>("CutsceneMapIdParamTableIndexer");
        indexerCutsceneMapIdParam["count"] = sol::property(&ParamTableIndexer<CutsceneMapIdParam>::count);
        indexerCutsceneMapIdParam["__index"] = &ParamTableIndexer<CutsceneMapIdParam>::at;
        indexerCutsceneMapIdParam["id"] = &ParamTableIndexer<CutsceneMapIdParam>::paramId;
        indexerCutsceneMapIdParam["get"] = &ParamTableIndexer<CutsceneMapIdParam>::get;
        auto utCutsceneMapIdParam = state->new_usertype<CutsceneMapIdParam>("CutsceneMapIdParam");
        utCutsceneMapIdParam["disableParam_NT"] = sol::property([](CutsceneMapIdParam &param) -> uint8_t { return param.disableParam_NT; }, [](CutsceneMapIdParam &param, uint8_t value) { param.disableParam_NT = value; });
        utCutsceneMapIdParam["disableParam_Debug"] = sol::property([](CutsceneMapIdParam &param) -> uint8_t { return param.disableParam_Debug; }, [](CutsceneMapIdParam &param, uint8_t value) { param.disableParam_Debug = value; });
        utCutsceneMapIdParam["PlayMapId"] = &CutsceneMapIdParam::PlayMapId;
        utCutsceneMapIdParam["RequireMapId0"] = &CutsceneMapIdParam::RequireMapId0;
        utCutsceneMapIdParam["RequireMapId1"] = &CutsceneMapIdParam::RequireMapId1;
        utCutsceneMapIdParam["RequireMapId2"] = &CutsceneMapIdParam::RequireMapId2;
        utCutsceneMapIdParam["RefCamPosHitPartsID"] = &CutsceneMapIdParam::RefCamPosHitPartsID;
        utCutsceneMapIdParam["unknown_0x18"] = &CutsceneMapIdParam::unknown_0x18;
        utCutsceneMapIdParam["ClientDisableViewTimeForProgress"] = &CutsceneMapIdParam::ClientDisableViewTimeForProgress;
        utCutsceneMapIdParam["HitParts_0"] = &CutsceneMapIdParam::HitParts_0;
        utCutsceneMapIdParam["HitParts_1"] = &CutsceneMapIdParam::HitParts_1;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<CutsceneMapIdParam>>(gParamMgr.findTable(L"CutsceneMapIdParam")); };
    paramsTable["CutsceneMapIdParam"] = tableLoader;
}

}
