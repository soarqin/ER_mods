#include "../luabindings.h"
#include "../defs/LegacyDistantViewPartsReplaceParam.h"

namespace paramadjuster::params {

void registerLegacyDistantViewPartsReplaceParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["LegacyDistantViewPartsReplaceParam"]; usertype) return;
        auto indexerLegacyDistantViewPartsReplaceParam = state->new_usertype<ParamTableIndexer<LegacyDistantViewPartsReplaceParam>>("LegacyDistantViewPartsReplaceParamTableIndexer");
        indexerLegacyDistantViewPartsReplaceParam["count"] = sol::property(&ParamTableIndexer<LegacyDistantViewPartsReplaceParam>::count);
        indexerLegacyDistantViewPartsReplaceParam["__index"] = &ParamTableIndexer<LegacyDistantViewPartsReplaceParam>::at;
        indexerLegacyDistantViewPartsReplaceParam["id"] = &ParamTableIndexer<LegacyDistantViewPartsReplaceParam>::paramId;
        indexerLegacyDistantViewPartsReplaceParam["get"] = &ParamTableIndexer<LegacyDistantViewPartsReplaceParam>::get;
        auto utLegacyDistantViewPartsReplaceParam = state->new_usertype<LegacyDistantViewPartsReplaceParam>("LegacyDistantViewPartsReplaceParam");
        utLegacyDistantViewPartsReplaceParam["TargetMapId"] = &LegacyDistantViewPartsReplaceParam::TargetMapId;
        utLegacyDistantViewPartsReplaceParam["TargetEventId"] = &LegacyDistantViewPartsReplaceParam::TargetEventId;
        utLegacyDistantViewPartsReplaceParam["SrcAssetId"] = &LegacyDistantViewPartsReplaceParam::SrcAssetId;
        utLegacyDistantViewPartsReplaceParam["SrcAssetPartsNo"] = &LegacyDistantViewPartsReplaceParam::SrcAssetPartsNo;
        utLegacyDistantViewPartsReplaceParam["DstAssetId"] = &LegacyDistantViewPartsReplaceParam::DstAssetId;
        utLegacyDistantViewPartsReplaceParam["DstAssetPartsNo"] = &LegacyDistantViewPartsReplaceParam::DstAssetPartsNo;
        utLegacyDistantViewPartsReplaceParam["SrcAssetIdRangeMin"] = &LegacyDistantViewPartsReplaceParam::SrcAssetIdRangeMin;
        utLegacyDistantViewPartsReplaceParam["SrcAssetIdRangeMax"] = &LegacyDistantViewPartsReplaceParam::SrcAssetIdRangeMax;
        utLegacyDistantViewPartsReplaceParam["DstAssetIdRangeMin"] = &LegacyDistantViewPartsReplaceParam::DstAssetIdRangeMin;
        utLegacyDistantViewPartsReplaceParam["DstAssetIdRangeMax"] = &LegacyDistantViewPartsReplaceParam::DstAssetIdRangeMax;
        utLegacyDistantViewPartsReplaceParam["LimitedMapRegionId0"] = &LegacyDistantViewPartsReplaceParam::LimitedMapRegionId0;
        utLegacyDistantViewPartsReplaceParam["LimitedMapRegionId1"] = &LegacyDistantViewPartsReplaceParam::LimitedMapRegionId1;
        utLegacyDistantViewPartsReplaceParam["LimitedMapRegionId2"] = &LegacyDistantViewPartsReplaceParam::LimitedMapRegionId2;
        utLegacyDistantViewPartsReplaceParam["LimitedMapRegionId3"] = &LegacyDistantViewPartsReplaceParam::LimitedMapRegionId3;
        utLegacyDistantViewPartsReplaceParam["LimitedMapRegionAssetId"] = &LegacyDistantViewPartsReplaceParam::LimitedMapRegionAssetId;
        utLegacyDistantViewPartsReplaceParam["LimitedMapRegioAssetPartsNo"] = &LegacyDistantViewPartsReplaceParam::LimitedMapRegioAssetPartsNo;
        utLegacyDistantViewPartsReplaceParam["LimitedMapRegioAssetIdRangeMin"] = &LegacyDistantViewPartsReplaceParam::LimitedMapRegioAssetIdRangeMin;
        utLegacyDistantViewPartsReplaceParam["LimitedMapRegioAssetIdRangeMax"] = &LegacyDistantViewPartsReplaceParam::LimitedMapRegioAssetIdRangeMax;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<LegacyDistantViewPartsReplaceParam>>(gParamMgr.findTable(L"LegacyDistantViewPartsReplaceParam")); };
    paramsTable["LegacyDistantViewPartsReplaceParam"] = tableLoader;
}

}
