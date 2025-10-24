#include "../luabindings.h"
#include "../defs/CeremonyParam.h"

namespace paramadjuster::params {

void registerCeremonyParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["CeremonyParam"]; usertype) return;
        auto indexerCeremonyParam = state->new_usertype<ParamTableIndexer<CeremonyParam>>("CeremonyParamTableIndexer");
        indexerCeremonyParam["count"] = sol::property(&ParamTableIndexer<CeremonyParam>::count);
        indexerCeremonyParam["__index"] = &ParamTableIndexer<CeremonyParam>::at;
        indexerCeremonyParam["id"] = &ParamTableIndexer<CeremonyParam>::paramId;
        indexerCeremonyParam["get"] = &ParamTableIndexer<CeremonyParam>::get;
        auto utCeremonyParam = state->new_usertype<CeremonyParam>("CeremonyParam");
        utCeremonyParam["eventLayerId"] = &CeremonyParam::eventLayerId;
        utCeremonyParam["mapStudioLayerId"] = &CeremonyParam::mapStudioLayerId;
        utCeremonyParam["multiPlayAreaOffset"] = &CeremonyParam::multiPlayAreaOffset;
        utCeremonyParam["overrideMapPlaceNameId"] = &CeremonyParam::overrideMapPlaceNameId;
        utCeremonyParam["overrideSaveMapNameId"] = &CeremonyParam::overrideSaveMapNameId;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<CeremonyParam>>(gParamMgr.findTable(L"CeremonyParam")); };
    paramsTable["Ceremony"] = tableLoader;
}

}
