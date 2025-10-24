#include "../luabindings.h"
#include "../defs/GrassLodRangeParam.h"

namespace paramadjuster::params {

void registerGrassLodRangeParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["GrassLodRangeParam"]; usertype) return;
        auto indexerGrassLodRangeParam = state->new_usertype<ParamTableIndexer<GrassLodRangeParam>>("GrassLodRangeParamTableIndexer");
        indexerGrassLodRangeParam["count"] = sol::property(&ParamTableIndexer<GrassLodRangeParam>::count);
        indexerGrassLodRangeParam["__index"] = &ParamTableIndexer<GrassLodRangeParam>::at;
        indexerGrassLodRangeParam["id"] = &ParamTableIndexer<GrassLodRangeParam>::paramId;
        indexerGrassLodRangeParam["get"] = &ParamTableIndexer<GrassLodRangeParam>::get;
        auto utGrassLodRangeParam = state->new_usertype<GrassLodRangeParam>("GrassLodRangeParam");
        utGrassLodRangeParam["LOD0_range"] = &GrassLodRangeParam::LOD0_range;
        utGrassLodRangeParam["LOD0_play"] = &GrassLodRangeParam::LOD0_play;
        utGrassLodRangeParam["LOD1_range"] = &GrassLodRangeParam::LOD1_range;
        utGrassLodRangeParam["LOD1_play"] = &GrassLodRangeParam::LOD1_play;
        utGrassLodRangeParam["LOD2_range"] = &GrassLodRangeParam::LOD2_range;
        utGrassLodRangeParam["LOD2_play"] = &GrassLodRangeParam::LOD2_play;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<GrassLodRangeParam>>(gParamMgr.findTable(L"GrassLodRangeParam")); };
    paramsTable["GrassLodRangeParam"] = tableLoader;
}

}
