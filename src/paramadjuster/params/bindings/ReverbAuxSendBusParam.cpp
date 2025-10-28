#include "../luabindings.h"
#include "../defs/ReverbAuxSendBusParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<ReverbAuxSendBusParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerReverbAuxSendBusParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ReverbAuxSendBusParam"]; usertype) return;
        auto indexerReverbAuxSendBusParam = state->new_usertype<ParamTableIndexer<ReverbAuxSendBusParam>>("ReverbAuxSendBusParamTableIndexer");
        indexerReverbAuxSendBusParam["count"] = sol::property(&ParamTableIndexer<ReverbAuxSendBusParam>::count);
        indexerReverbAuxSendBusParam["__index"] = &ParamTableIndexer<ReverbAuxSendBusParam>::at;
        indexerReverbAuxSendBusParam["id"] = &ParamTableIndexer<ReverbAuxSendBusParam>::paramId;
        indexerReverbAuxSendBusParam["get"] = &ParamTableIndexer<ReverbAuxSendBusParam>::get;
        indexerReverbAuxSendBusParam["exportToCsv"] = &ParamTableIndexer<ReverbAuxSendBusParam>::exportToCsv;
        indexerReverbAuxSendBusParam["importFromCsv"] = &ParamTableIndexer<ReverbAuxSendBusParam>::importFromCsv;
        auto utReverbAuxSendBusParam = state->new_usertype<ReverbAuxSendBusParam>("ReverbAuxSendBusParam");
        utReverbAuxSendBusParam["ReverbAuxSendBusName"] = sol::property([](ReverbAuxSendBusParam &param) -> std::string { return param.ReverbAuxSendBusName; }, [](ReverbAuxSendBusParam &param, const std::string& value) { cStrToFixedStr(param.ReverbAuxSendBusName, value); });
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<ReverbAuxSendBusParam>>(state, L"ReverbAuxSendBusParam");
        indexer->setFieldNames({
            {"ReverbAuxSendBusName", true},
        });
        return indexer;
    };
    paramsTable["ReverbAuxSendBusParam"] = tableLoader;
}

template<> void ParamTableIndexer<ReverbAuxSendBusParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,ReverbAuxSendBusName\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,\"%hs\"\n",
            this->paramId(i),
            param->ReverbAuxSendBusName
        );
    }
    fclose(f);
}

}
