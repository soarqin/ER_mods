#include "../luabindings.h"
#include "../defs/ReverbAuxSendBusParam.h"

namespace paramadjuster::params {

void registerReverbAuxSendBusParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ReverbAuxSendBusParam"]; usertype) return;
        auto indexerReverbAuxSendBusParam = state->new_usertype<ParamTableIndexer<ReverbAuxSendBusParam>>("ReverbAuxSendBusParamTableIndexer");
        indexerReverbAuxSendBusParam["count"] = sol::property(&ParamTableIndexer<ReverbAuxSendBusParam>::count);
        indexerReverbAuxSendBusParam["__index"] = &ParamTableIndexer<ReverbAuxSendBusParam>::at;
        indexerReverbAuxSendBusParam["id"] = &ParamTableIndexer<ReverbAuxSendBusParam>::paramId;
        indexerReverbAuxSendBusParam["get"] = &ParamTableIndexer<ReverbAuxSendBusParam>::get;
        auto utReverbAuxSendBusParam = state->new_usertype<ReverbAuxSendBusParam>("ReverbAuxSendBusParam");
        utReverbAuxSendBusParam["ReverbAuxSendBusName"] = sol::property([](ReverbAuxSendBusParam &param) -> std::string { return param.ReverbAuxSendBusName; }, [](ReverbAuxSendBusParam &param, const std::string& value) { cStrToFixedStr(param.ReverbAuxSendBusName, value); });
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<ReverbAuxSendBusParam>>(gParamMgr.findTable(L"ReverbAuxSendBusParam")); };
    paramsTable["ReverbAuxSendBusParam"] = tableLoader;
}

}
