#include "../luabindings.h"
#include "../defs/MapMimicryEstablishmentParam.h"

namespace paramadjuster::params {

void registerMapMimicryEstablishmentParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MapMimicryEstablishmentParam"]; usertype) return;
        auto indexerMapMimicryEstablishmentParam = state->new_usertype<ParamTableIndexer<MapMimicryEstablishmentParam>>("MapMimicryEstablishmentParamTableIndexer");
        indexerMapMimicryEstablishmentParam["count"] = sol::property(&ParamTableIndexer<MapMimicryEstablishmentParam>::count);
        indexerMapMimicryEstablishmentParam["__index"] = &ParamTableIndexer<MapMimicryEstablishmentParam>::at;
        indexerMapMimicryEstablishmentParam["id"] = &ParamTableIndexer<MapMimicryEstablishmentParam>::paramId;
        indexerMapMimicryEstablishmentParam["get"] = &ParamTableIndexer<MapMimicryEstablishmentParam>::get;
        auto utMapMimicryEstablishmentParam = state->new_usertype<MapMimicryEstablishmentParam>("MapMimicryEstablishmentParam");
        utMapMimicryEstablishmentParam["mimicryEstablishment0"] = &MapMimicryEstablishmentParam::mimicryEstablishment0;
        utMapMimicryEstablishmentParam["mimicryEstablishment1"] = &MapMimicryEstablishmentParam::mimicryEstablishment1;
        utMapMimicryEstablishmentParam["mimicryEstablishment2"] = &MapMimicryEstablishmentParam::mimicryEstablishment2;
        utMapMimicryEstablishmentParam["mimicryBeginSfxId0"] = &MapMimicryEstablishmentParam::mimicryBeginSfxId0;
        utMapMimicryEstablishmentParam["mimicrySfxId0"] = &MapMimicryEstablishmentParam::mimicrySfxId0;
        utMapMimicryEstablishmentParam["mimicryEndSfxId0"] = &MapMimicryEstablishmentParam::mimicryEndSfxId0;
        utMapMimicryEstablishmentParam["mimicryBeginSfxId1"] = &MapMimicryEstablishmentParam::mimicryBeginSfxId1;
        utMapMimicryEstablishmentParam["mimicrySfxId1"] = &MapMimicryEstablishmentParam::mimicrySfxId1;
        utMapMimicryEstablishmentParam["mimicryEndSfxId1"] = &MapMimicryEstablishmentParam::mimicryEndSfxId1;
        utMapMimicryEstablishmentParam["mimicryBeginSfxId2"] = &MapMimicryEstablishmentParam::mimicryBeginSfxId2;
        utMapMimicryEstablishmentParam["mimicrySfxId2"] = &MapMimicryEstablishmentParam::mimicrySfxId2;
        utMapMimicryEstablishmentParam["mimicryEndSfxId2"] = &MapMimicryEstablishmentParam::mimicryEndSfxId2;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<MapMimicryEstablishmentParam>>(gParamMgr.findTable(L"MapMimicryEstablishmentParam")); };
    paramsTable["MapMimicryEstablishmentParam"] = tableLoader;
}

}
