#include "../luabindings.h"
#include "../defs/MapPieceTexParam_m61.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<MapPieceTexParam_m61>::exportToCsvImpl(const std::wstring &csvPath);

void registerMapPieceTexParam_m61(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MapPieceTexParam_m61"]; usertype) return;
        auto indexerMapPieceTexParam_m61 = state->new_usertype<ParamTableIndexer<MapPieceTexParam_m61>>("MapPieceTexParam_m61TableIndexer");
        indexerMapPieceTexParam_m61["count"] = sol::property(&ParamTableIndexer<MapPieceTexParam_m61>::count);
        indexerMapPieceTexParam_m61["__index"] = &ParamTableIndexer<MapPieceTexParam_m61>::at;
        indexerMapPieceTexParam_m61["id"] = &ParamTableIndexer<MapPieceTexParam_m61>::paramId;
        indexerMapPieceTexParam_m61["get"] = &ParamTableIndexer<MapPieceTexParam_m61>::get;
        indexerMapPieceTexParam_m61["exportToCsv"] = &ParamTableIndexer<MapPieceTexParam_m61>::exportToCsv;
        indexerMapPieceTexParam_m61["importFromCsv"] = &ParamTableIndexer<MapPieceTexParam_m61>::importFromCsv;
        auto utMapPieceTexParam_m61 = state->new_usertype<MapPieceTexParam_m61>("MapPieceTexParam_m61");
        utMapPieceTexParam_m61["disableParam_NT"] = sol::property([](MapPieceTexParam_m61 &param) -> uint8_t { return param.disableParam_NT; }, [](MapPieceTexParam_m61 &param, uint8_t value) { param.disableParam_NT = value; });
        utMapPieceTexParam_m61["srcR"] = &MapPieceTexParam_m61::srcR;
        utMapPieceTexParam_m61["srcG"] = &MapPieceTexParam_m61::srcG;
        utMapPieceTexParam_m61["srcB"] = &MapPieceTexParam_m61::srcB;
        utMapPieceTexParam_m61["saveMapNameId"] = &MapPieceTexParam_m61::saveMapNameId;
        utMapPieceTexParam_m61["multiPlayAreaId"] = &MapPieceTexParam_m61::multiPlayAreaId;
        utMapPieceTexParam_m61["unknown_0x10"] = &MapPieceTexParam_m61::unknown_0x10;
        utMapPieceTexParam_m61["unknown_0x14"] = &MapPieceTexParam_m61::unknown_0x14;
        utMapPieceTexParam_m61["unknown_0x18"] = &MapPieceTexParam_m61::unknown_0x18;
        utMapPieceTexParam_m61["unknown_0x1c"] = &MapPieceTexParam_m61::unknown_0x1c;
        utMapPieceTexParam_m61["unknownPlayRegion_1"] = &MapPieceTexParam_m61::unknownPlayRegion_1;
        utMapPieceTexParam_m61["unknownPlayRegion_2"] = &MapPieceTexParam_m61::unknownPlayRegion_2;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<MapPieceTexParam_m61>>(state, L"MapPieceTexParam_m61");
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"srcR", false},
            {"srcG", false},
            {"srcB", false},
            {"saveMapNameId", false},
            {"multiPlayAreaId", false},
            {"unknown_0x10", false},
            {"unknown_0x14", false},
            {"unknown_0x18", false},
            {"unknown_0x1c", false},
            {"unknownPlayRegion_1", false},
            {"unknownPlayRegion_2", false},
        });
        return indexer;
    };
    paramsTable["MapPieceTexParam_m61"] = tableLoader;
}

template<> void ParamTableIndexer<MapPieceTexParam_m61>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,srcR,srcG,srcB,saveMapNameId,multiPlayAreaId,unknown_0x10,unknown_0x14,unknown_0x18,unknown_0x1c,unknownPlayRegion_1,unknownPlayRegion_2\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d\n",
            this->paramId(i),
            param->disableParam_NT,
            param->srcR,
            param->srcG,
            param->srcB,
            param->saveMapNameId,
            param->multiPlayAreaId,
            param->unknown_0x10,
            param->unknown_0x14,
            param->unknown_0x18,
            param->unknown_0x1c,
            param->unknownPlayRegion_1,
            param->unknownPlayRegion_2
        );
    }
    fclose(f);
}

}
