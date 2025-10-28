#include "../luabindings.h"
#include "../defs/MimicryEstablishmentTexParam_m61.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<MimicryEstablishmentTexParam_m61>::exportToCsvImpl(const std::wstring &csvPath);

void registerMimicryEstablishmentTexParam_m61(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MimicryEstablishmentTexParam_m61"]; usertype) return;
        auto indexerMimicryEstablishmentTexParam_m61 = state->new_usertype<ParamTableIndexer<MimicryEstablishmentTexParam_m61>>("MimicryEstablishmentTexParam_m61TableIndexer");
        indexerMimicryEstablishmentTexParam_m61["count"] = sol::property(&ParamTableIndexer<MimicryEstablishmentTexParam_m61>::count);
        indexerMimicryEstablishmentTexParam_m61["__index"] = &ParamTableIndexer<MimicryEstablishmentTexParam_m61>::at;
        indexerMimicryEstablishmentTexParam_m61["id"] = &ParamTableIndexer<MimicryEstablishmentTexParam_m61>::paramId;
        indexerMimicryEstablishmentTexParam_m61["get"] = &ParamTableIndexer<MimicryEstablishmentTexParam_m61>::get;
        indexerMimicryEstablishmentTexParam_m61["exportToCsv"] = &ParamTableIndexer<MimicryEstablishmentTexParam_m61>::exportToCsv;
        indexerMimicryEstablishmentTexParam_m61["importFromCsv"] = &ParamTableIndexer<MimicryEstablishmentTexParam_m61>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<MimicryEstablishmentTexParam_m61>>(state, L"MimicryEstablishmentTexParam_m61");
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"srcR", false},
            {"srcG", false},
            {"srcB", false},
            {"mimicryEstablishmentParamId", false},
            {"unknown_0xc", false},
            {"unknown_0x10", false},
            {"unknown_0x14", false},
            {"unknown_0x18", false},
            {"unknown_0x1c", false},
        });
        return indexer;
    };
    paramsTable["MimicryEstablishmentTexParam_m61"] = tableLoader;
}

template<> void ParamTableIndexer<MimicryEstablishmentTexParam_m61>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,srcR,srcG,srcB,mimicryEstablishmentParamId,unknown_0xc,unknown_0x10,unknown_0x14,unknown_0x18,unknown_0x1c\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%u,%d,%d,%d,%d,%d,%d\n",
            this->paramId(i),
            param->disableParam_NT,
            param->srcR,
            param->srcG,
            param->srcB,
            param->mimicryEstablishmentParamId,
            param->unknown_0xc,
            param->unknown_0x10,
            param->unknown_0x14,
            param->unknown_0x18,
            param->unknown_0x1c
        );
    }
    fclose(f);
}

}
