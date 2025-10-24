#include "../luabindings.h"
#include "../defs/MimicryEstablishmentTexParam_m61.h"

namespace paramadjuster::params {

void registerMimicryEstablishmentTexParam_m61(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MimicryEstablishmentTexParam_m61"]; usertype) return;
        auto indexerMimicryEstablishmentTexParam_m61 = state->new_usertype<ParamTableIndexer<MimicryEstablishmentTexParam_m61>>("MimicryEstablishmentTexParam_m61TableIndexer");
        indexerMimicryEstablishmentTexParam_m61["count"] = sol::property(&ParamTableIndexer<MimicryEstablishmentTexParam_m61>::count);
        indexerMimicryEstablishmentTexParam_m61["__index"] = &ParamTableIndexer<MimicryEstablishmentTexParam_m61>::at;
        indexerMimicryEstablishmentTexParam_m61["id"] = &ParamTableIndexer<MimicryEstablishmentTexParam_m61>::paramId;
        indexerMimicryEstablishmentTexParam_m61["get"] = &ParamTableIndexer<MimicryEstablishmentTexParam_m61>::get;
        auto utMimicryEstablishmentTexParam_m61 = state->new_usertype<MimicryEstablishmentTexParam_m61>("MimicryEstablishmentTexParam_m61");
        utMimicryEstablishmentTexParam_m61["disableParam_NT"] = sol::property([](MimicryEstablishmentTexParam_m61 &param) -> uint8_t { return param.disableParam_NT; }, [](MimicryEstablishmentTexParam_m61 &param, uint8_t value) { param.disableParam_NT = value; });
        utMimicryEstablishmentTexParam_m61["srcR"] = &MimicryEstablishmentTexParam_m61::srcR;
        utMimicryEstablishmentTexParam_m61["srcG"] = &MimicryEstablishmentTexParam_m61::srcG;
        utMimicryEstablishmentTexParam_m61["srcB"] = &MimicryEstablishmentTexParam_m61::srcB;
        utMimicryEstablishmentTexParam_m61["mimicryEstablishmentParamId"] = &MimicryEstablishmentTexParam_m61::mimicryEstablishmentParamId;
        utMimicryEstablishmentTexParam_m61["unknown_0xc"] = &MimicryEstablishmentTexParam_m61::unknown_0xc;
        utMimicryEstablishmentTexParam_m61["unknown_0x10"] = &MimicryEstablishmentTexParam_m61::unknown_0x10;
        utMimicryEstablishmentTexParam_m61["unknown_0x14"] = &MimicryEstablishmentTexParam_m61::unknown_0x14;
        utMimicryEstablishmentTexParam_m61["unknown_0x18"] = &MimicryEstablishmentTexParam_m61::unknown_0x18;
        utMimicryEstablishmentTexParam_m61["unknown_0x1c"] = &MimicryEstablishmentTexParam_m61::unknown_0x1c;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<MimicryEstablishmentTexParam_m61>>(gParamMgr.findTable(L"MimicryEstablishmentTexParam_m61")); };
    paramsTable["MimicryEstablishmentTexParam_m61"] = tableLoader;
}

}
