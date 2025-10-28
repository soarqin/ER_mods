#include "../luabindings.h"
#include "../defs/MapNameTexParam_m61.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<MapNameTexParam_m61>::exportToCsvImpl(const std::wstring &csvPath);

void registerMapNameTexParam_m61(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MapNameTexParam_m61"]; usertype) return;
        auto indexerMapNameTexParam_m61 = state->new_usertype<ParamTableIndexer<MapNameTexParam_m61>>("MapNameTexParam_m61TableIndexer");
        indexerMapNameTexParam_m61["count"] = sol::property(&ParamTableIndexer<MapNameTexParam_m61>::count);
        indexerMapNameTexParam_m61["__index"] = &ParamTableIndexer<MapNameTexParam_m61>::at;
        indexerMapNameTexParam_m61["id"] = &ParamTableIndexer<MapNameTexParam_m61>::paramId;
        indexerMapNameTexParam_m61["get"] = &ParamTableIndexer<MapNameTexParam_m61>::get;
        indexerMapNameTexParam_m61["exportToCsv"] = &ParamTableIndexer<MapNameTexParam_m61>::exportToCsv;
        indexerMapNameTexParam_m61["importFromCsv"] = &ParamTableIndexer<MapNameTexParam_m61>::importFromCsv;
        auto utMapNameTexParam_m61 = state->new_usertype<MapNameTexParam_m61>("MapNameTexParam_m61");
        utMapNameTexParam_m61["disableParam_NT"] = sol::property([](MapNameTexParam_m61 &param) -> uint8_t { return param.disableParam_NT; }, [](MapNameTexParam_m61 &param, uint8_t value) { param.disableParam_NT = value; });
        utMapNameTexParam_m61["srcR"] = &MapNameTexParam_m61::srcR;
        utMapNameTexParam_m61["srcG"] = &MapNameTexParam_m61::srcG;
        utMapNameTexParam_m61["srcB"] = &MapNameTexParam_m61::srcB;
        utMapNameTexParam_m61["mapNameId"] = &MapNameTexParam_m61::mapNameId;
        utMapNameTexParam_m61["unknown_0xc"] = &MapNameTexParam_m61::unknown_0xc;
        utMapNameTexParam_m61["unknown_0x10"] = &MapNameTexParam_m61::unknown_0x10;
        utMapNameTexParam_m61["unknown_0x11"] = &MapNameTexParam_m61::unknown_0x11;
        utMapNameTexParam_m61["unknown_0x12"] = &MapNameTexParam_m61::unknown_0x12;
        utMapNameTexParam_m61["unknown_0x13"] = &MapNameTexParam_m61::unknown_0x13;
        utMapNameTexParam_m61["unknown_0x14"] = &MapNameTexParam_m61::unknown_0x14;
        utMapNameTexParam_m61["unknownTextID_1"] = &MapNameTexParam_m61::unknownTextID_1;
        utMapNameTexParam_m61["unknownTextID_2"] = &MapNameTexParam_m61::unknownTextID_2;
        utMapNameTexParam_m61["unknown_0x20"] = &MapNameTexParam_m61::unknown_0x20;
        utMapNameTexParam_m61["unknown_0x24"] = &MapNameTexParam_m61::unknown_0x24;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<MapNameTexParam_m61>>(state, L"MapNameTexParam_m61");
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"srcR", false},
            {"srcG", false},
            {"srcB", false},
            {"mapNameId", false},
            {"unknown_0xc", false},
            {"unknown_0x10", false},
            {"unknown_0x11", false},
            {"unknown_0x12", false},
            {"unknown_0x13", false},
            {"unknown_0x14", false},
            {"unknownTextID_1", false},
            {"unknownTextID_2", false},
            {"unknown_0x20", false},
            {"unknown_0x24", false},
        });
        return indexer;
    };
    paramsTable["MapNameTexParam_m61"] = tableLoader;
}

template<> void ParamTableIndexer<MapNameTexParam_m61>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,srcR,srcG,srcB,mapNameId,unknown_0xc,unknown_0x10,unknown_0x11,unknown_0x12,unknown_0x13,unknown_0x14,unknownTextID_1,unknownTextID_2,unknown_0x20,unknown_0x24\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%u,%d,%d,%u,%u,%u,%u,%d,%d,%d,%d,%d\n",
            this->paramId(i),
            param->disableParam_NT,
            param->srcR,
            param->srcG,
            param->srcB,
            param->mapNameId,
            param->unknown_0xc,
            param->unknown_0x10,
            param->unknown_0x11,
            param->unknown_0x12,
            param->unknown_0x13,
            param->unknown_0x14,
            param->unknownTextID_1,
            param->unknownTextID_2,
            param->unknown_0x20,
            param->unknown_0x24
        );
    }
    fclose(f);
}

}
