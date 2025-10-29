#include "../luabindings.h"
#include "../defs/LegacyDistantViewPartsReplaceParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<LegacyDistantViewPartsReplaceParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerLegacyDistantViewPartsReplaceParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["LegacyDistantViewPartsReplaceParam"]; usertype) return;
        auto indexerLegacyDistantViewPartsReplaceParam = state->new_usertype<ParamTableIndexer<LegacyDistantViewPartsReplaceParam>>("LegacyDistantViewPartsReplaceParamTableIndexer");
        indexerLegacyDistantViewPartsReplaceParam["count"] = sol::property(&ParamTableIndexer<LegacyDistantViewPartsReplaceParam>::count);
        indexerLegacyDistantViewPartsReplaceParam["__index"] = &ParamTableIndexer<LegacyDistantViewPartsReplaceParam>::at;
        indexerLegacyDistantViewPartsReplaceParam["id"] = &ParamTableIndexer<LegacyDistantViewPartsReplaceParam>::paramId;
        indexerLegacyDistantViewPartsReplaceParam["get"] = &ParamTableIndexer<LegacyDistantViewPartsReplaceParam>::get;
        indexerLegacyDistantViewPartsReplaceParam["exportToCsv"] = &ParamTableIndexer<LegacyDistantViewPartsReplaceParam>::exportToCsv;
        indexerLegacyDistantViewPartsReplaceParam["importFromCsv"] = &ParamTableIndexer<LegacyDistantViewPartsReplaceParam>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<LegacyDistantViewPartsReplaceParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<LegacyDistantViewPartsReplaceParam>>(nullptr);
        indexer->setFieldNames({
            {"TargetMapId", false},
            {"TargetEventId", false},
            {"SrcAssetId", false},
            {"SrcAssetPartsNo", false},
            {"DstAssetId", false},
            {"DstAssetPartsNo", false},
            {"SrcAssetIdRangeMin", false},
            {"SrcAssetIdRangeMax", false},
            {"DstAssetIdRangeMin", false},
            {"DstAssetIdRangeMax", false},
            {"LimitedMapRegionId0", false},
            {"LimitedMapRegionId1", false},
            {"LimitedMapRegionId2", false},
            {"LimitedMapRegionId3", false},
            {"LimitedMapRegionAssetId", false},
            {"LimitedMapRegioAssetPartsNo", false},
            {"LimitedMapRegioAssetIdRangeMin", false},
            {"LimitedMapRegioAssetIdRangeMax", false},
        });
        return indexer;
    };
    paramsTable["LegacyDistantViewPartsReplaceParam"] = [tableLoader]() -> auto { return tableLoader(L"LegacyDistantViewPartsReplaceParam"); };
}

template<> void ParamTableIndexer<LegacyDistantViewPartsReplaceParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,TargetMapId,TargetEventId,SrcAssetId,SrcAssetPartsNo,DstAssetId,DstAssetPartsNo,SrcAssetIdRangeMin,SrcAssetIdRangeMax,DstAssetIdRangeMin,DstAssetIdRangeMax,LimitedMapRegionId0,LimitedMapRegionId1,LimitedMapRegionId2,LimitedMapRegionId3,LimitedMapRegionAssetId,LimitedMapRegioAssetPartsNo,LimitedMapRegioAssetIdRangeMin,LimitedMapRegioAssetIdRangeMax\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",
            this->paramId(i),
            param->TargetMapId,
            param->TargetEventId,
            param->SrcAssetId,
            param->SrcAssetPartsNo,
            param->DstAssetId,
            param->DstAssetPartsNo,
            param->SrcAssetIdRangeMin,
            param->SrcAssetIdRangeMax,
            param->DstAssetIdRangeMin,
            param->DstAssetIdRangeMax,
            param->LimitedMapRegionId0,
            param->LimitedMapRegionId1,
            param->LimitedMapRegionId2,
            param->LimitedMapRegionId3,
            param->LimitedMapRegionAssetId,
            param->LimitedMapRegioAssetPartsNo,
            param->LimitedMapRegioAssetIdRangeMin,
            param->LimitedMapRegioAssetIdRangeMax
        );
    }
    fclose(f);
}

}
