#include "../luabindings.h"
#include "../defs/MimicryEstablishmentTexParam.h"

namespace paramadjuster::params {

void registerMimicryEstablishmentTexParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MimicryEstablishmentTexParam"]; usertype) return;
        auto indexerMimicryEstablishmentTexParam = state->new_usertype<ParamTableIndexer<MimicryEstablishmentTexParam>>("MimicryEstablishmentTexParamTableIndexer");
        indexerMimicryEstablishmentTexParam["count"] = sol::property(&ParamTableIndexer<MimicryEstablishmentTexParam>::count);
        indexerMimicryEstablishmentTexParam["__index"] = &ParamTableIndexer<MimicryEstablishmentTexParam>::at;
        indexerMimicryEstablishmentTexParam["id"] = &ParamTableIndexer<MimicryEstablishmentTexParam>::paramId;
        indexerMimicryEstablishmentTexParam["get"] = &ParamTableIndexer<MimicryEstablishmentTexParam>::get;
        auto utMimicryEstablishmentTexParam = state->new_usertype<MimicryEstablishmentTexParam>("MimicryEstablishmentTexParam");
        utMimicryEstablishmentTexParam["disableParam_NT"] = sol::property([](MimicryEstablishmentTexParam &param) -> uint8_t { return param.disableParam_NT; }, [](MimicryEstablishmentTexParam &param, uint8_t value) { param.disableParam_NT = value; });
        utMimicryEstablishmentTexParam["srcR"] = &MimicryEstablishmentTexParam::srcR;
        utMimicryEstablishmentTexParam["srcG"] = &MimicryEstablishmentTexParam::srcG;
        utMimicryEstablishmentTexParam["srcB"] = &MimicryEstablishmentTexParam::srcB;
        utMimicryEstablishmentTexParam["mimicryEstablishmentParamId"] = &MimicryEstablishmentTexParam::mimicryEstablishmentParamId;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<MimicryEstablishmentTexParam>>(gParamMgr.findTable(L"MimicryEstablishmentTexParam")); };
    paramsTable["MimicryEstablishmentTexParam"] = tableLoader;
}

}
