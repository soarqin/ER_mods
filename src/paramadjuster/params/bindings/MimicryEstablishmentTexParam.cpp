#include "../luabindings.h"
#include "../defs/MimicryEstablishmentTexParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<MimicryEstablishmentTexParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerMimicryEstablishmentTexParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MimicryEstablishmentTexParam"]; usertype) return;
        auto indexerMimicryEstablishmentTexParam = state->new_usertype<ParamTableIndexer<MimicryEstablishmentTexParam>>("MimicryEstablishmentTexParamTableIndexer");
        indexerMimicryEstablishmentTexParam["count"] = sol::property(&ParamTableIndexer<MimicryEstablishmentTexParam>::count);
        indexerMimicryEstablishmentTexParam["__index"] = &ParamTableIndexer<MimicryEstablishmentTexParam>::at;
        indexerMimicryEstablishmentTexParam["id"] = &ParamTableIndexer<MimicryEstablishmentTexParam>::paramId;
        indexerMimicryEstablishmentTexParam["get"] = &ParamTableIndexer<MimicryEstablishmentTexParam>::get;
        indexerMimicryEstablishmentTexParam["exportToCsv"] = &ParamTableIndexer<MimicryEstablishmentTexParam>::exportToCsv;
        indexerMimicryEstablishmentTexParam["importFromCsv"] = &ParamTableIndexer<MimicryEstablishmentTexParam>::importFromCsv;
        auto utMimicryEstablishmentTexParam = state->new_usertype<MimicryEstablishmentTexParam>("MimicryEstablishmentTexParam");
        utMimicryEstablishmentTexParam["disableParam_NT"] = sol::property([](MimicryEstablishmentTexParam &param) -> uint8_t { return param.disableParam_NT; }, [](MimicryEstablishmentTexParam &param, uint8_t value) { param.disableParam_NT = value; });
        utMimicryEstablishmentTexParam["srcR"] = &MimicryEstablishmentTexParam::srcR;
        utMimicryEstablishmentTexParam["srcG"] = &MimicryEstablishmentTexParam::srcG;
        utMimicryEstablishmentTexParam["srcB"] = &MimicryEstablishmentTexParam::srcB;
        utMimicryEstablishmentTexParam["mimicryEstablishmentParamId"] = &MimicryEstablishmentTexParam::mimicryEstablishmentParamId;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<MimicryEstablishmentTexParam>>(state, L"MimicryEstablishmentTexParam");
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"srcR", false},
            {"srcG", false},
            {"srcB", false},
            {"mimicryEstablishmentParamId", false},
        });
        return indexer;
    };
    paramsTable["MimicryEstablishmentTexParam"] = tableLoader;
}

template<> void ParamTableIndexer<MimicryEstablishmentTexParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,srcR,srcG,srcB,mimicryEstablishmentParamId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%u,%d\n",
            this->paramId(i),
            param->disableParam_NT,
            param->srcR,
            param->srcG,
            param->srcB,
            param->mimicryEstablishmentParamId
        );
    }
    fclose(f);
}

}
