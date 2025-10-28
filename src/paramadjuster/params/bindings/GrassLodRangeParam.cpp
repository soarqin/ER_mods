#include "../luabindings.h"
#include "../defs/GrassLodRangeParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<GrassLodRangeParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerGrassLodRangeParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["GrassLodRangeParam"]; usertype) return;
        auto indexerGrassLodRangeParam = state->new_usertype<ParamTableIndexer<GrassLodRangeParam>>("GrassLodRangeParamTableIndexer");
        indexerGrassLodRangeParam["count"] = sol::property(&ParamTableIndexer<GrassLodRangeParam>::count);
        indexerGrassLodRangeParam["__index"] = &ParamTableIndexer<GrassLodRangeParam>::at;
        indexerGrassLodRangeParam["id"] = &ParamTableIndexer<GrassLodRangeParam>::paramId;
        indexerGrassLodRangeParam["get"] = &ParamTableIndexer<GrassLodRangeParam>::get;
        indexerGrassLodRangeParam["exportToCsv"] = &ParamTableIndexer<GrassLodRangeParam>::exportToCsv;
        indexerGrassLodRangeParam["importFromCsv"] = &ParamTableIndexer<GrassLodRangeParam>::importFromCsv;
        auto utGrassLodRangeParam = state->new_usertype<GrassLodRangeParam>("GrassLodRangeParam");
        utGrassLodRangeParam["LOD0_range"] = &GrassLodRangeParam::LOD0_range;
        utGrassLodRangeParam["LOD0_play"] = &GrassLodRangeParam::LOD0_play;
        utGrassLodRangeParam["LOD1_range"] = &GrassLodRangeParam::LOD1_range;
        utGrassLodRangeParam["LOD1_play"] = &GrassLodRangeParam::LOD1_play;
        utGrassLodRangeParam["LOD2_range"] = &GrassLodRangeParam::LOD2_range;
        utGrassLodRangeParam["LOD2_play"] = &GrassLodRangeParam::LOD2_play;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<GrassLodRangeParam>>(state, L"GrassLodRangeParam");
        indexer->setFieldNames({
            {"LOD0_range", false},
            {"LOD0_play", false},
            {"LOD1_range", false},
            {"LOD1_play", false},
            {"LOD2_range", false},
            {"LOD2_play", false},
        });
        return indexer;
    };
    paramsTable["GrassLodRangeParam"] = tableLoader;
}

template<> void ParamTableIndexer<GrassLodRangeParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,LOD0_range,LOD0_play,LOD1_range,LOD1_play,LOD2_range,LOD2_play\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g,%g,%g,%g,%g,%g\n",
            this->paramId(i),
            param->LOD0_range,
            param->LOD0_play,
            param->LOD1_range,
            param->LOD1_play,
            param->LOD2_range,
            param->LOD2_play
        );
    }
    fclose(f);
}

}
