#include "../luabindings.h"
#include "../defs/MapMimicryEstablishmentParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<MapMimicryEstablishmentParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerMapMimicryEstablishmentParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MapMimicryEstablishmentParam"]; usertype) return;
        auto indexerMapMimicryEstablishmentParam = state->new_usertype<ParamTableIndexer<MapMimicryEstablishmentParam>>("MapMimicryEstablishmentParamTableIndexer");
        indexerMapMimicryEstablishmentParam["count"] = sol::property(&ParamTableIndexer<MapMimicryEstablishmentParam>::count);
        indexerMapMimicryEstablishmentParam["__index"] = &ParamTableIndexer<MapMimicryEstablishmentParam>::at;
        indexerMapMimicryEstablishmentParam["id"] = &ParamTableIndexer<MapMimicryEstablishmentParam>::paramId;
        indexerMapMimicryEstablishmentParam["get"] = &ParamTableIndexer<MapMimicryEstablishmentParam>::get;
        indexerMapMimicryEstablishmentParam["exportToCsv"] = &ParamTableIndexer<MapMimicryEstablishmentParam>::exportToCsv;
        indexerMapMimicryEstablishmentParam["importFromCsv"] = &ParamTableIndexer<MapMimicryEstablishmentParam>::importFromCsv;
        auto utMapMimicryEstablishmentParam = state->new_usertype<MapMimicryEstablishmentParam>("MapMimicryEstablishmentParam");
        utMapMimicryEstablishmentParam["mimicryEstablishment0"] = &MapMimicryEstablishmentParam::mimicryEstablishment0;
        utMapMimicryEstablishmentParam["mimicryEstablishment1"] = &MapMimicryEstablishmentParam::mimicryEstablishment1;
        utMapMimicryEstablishmentParam["mimicryEstablishment2"] = &MapMimicryEstablishmentParam::mimicryEstablishment2;
        utMapMimicryEstablishmentParam["mimicryBeginSfxId0"] = &MapMimicryEstablishmentParam::mimicryBeginSfxId0;
        utMapMimicryEstablishmentParam["mimicrySfxId0"] = &MapMimicryEstablishmentParam::mimicrySfxId0;
        utMapMimicryEstablishmentParam["mimicryEndSfxId0"] = &MapMimicryEstablishmentParam::mimicryEndSfxId0;
        utMapMimicryEstablishmentParam["mimicryBeginSfxId1"] = &MapMimicryEstablishmentParam::mimicryBeginSfxId1;
        utMapMimicryEstablishmentParam["mimicrySfxId1"] = &MapMimicryEstablishmentParam::mimicrySfxId1;
        utMapMimicryEstablishmentParam["mimicryEndSfxId1"] = &MapMimicryEstablishmentParam::mimicryEndSfxId1;
        utMapMimicryEstablishmentParam["mimicryBeginSfxId2"] = &MapMimicryEstablishmentParam::mimicryBeginSfxId2;
        utMapMimicryEstablishmentParam["mimicrySfxId2"] = &MapMimicryEstablishmentParam::mimicrySfxId2;
        utMapMimicryEstablishmentParam["mimicryEndSfxId2"] = &MapMimicryEstablishmentParam::mimicryEndSfxId2;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<MapMimicryEstablishmentParam>>(state, L"MapMimicryEstablishmentParam");
        indexer->setFieldNames({
            {"mimicryEstablishment0", false},
            {"mimicryEstablishment1", false},
            {"mimicryEstablishment2", false},
            {"mimicryBeginSfxId0", false},
            {"mimicrySfxId0", false},
            {"mimicryEndSfxId0", false},
            {"mimicryBeginSfxId1", false},
            {"mimicrySfxId1", false},
            {"mimicryEndSfxId1", false},
            {"mimicryBeginSfxId2", false},
            {"mimicrySfxId2", false},
            {"mimicryEndSfxId2", false},
        });
        return indexer;
    };
    paramsTable["MapMimicryEstablishmentParam"] = tableLoader;
}

template<> void ParamTableIndexer<MapMimicryEstablishmentParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,mimicryEstablishment0,mimicryEstablishment1,mimicryEstablishment2,mimicryBeginSfxId0,mimicrySfxId0,mimicryEndSfxId0,mimicryBeginSfxId1,mimicrySfxId1,mimicryEndSfxId1,mimicryBeginSfxId2,mimicrySfxId2,mimicryEndSfxId2\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g,%g,%g,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",
            this->paramId(i),
            param->mimicryEstablishment0,
            param->mimicryEstablishment1,
            param->mimicryEstablishment2,
            param->mimicryBeginSfxId0,
            param->mimicrySfxId0,
            param->mimicryEndSfxId0,
            param->mimicryBeginSfxId1,
            param->mimicrySfxId1,
            param->mimicryEndSfxId1,
            param->mimicryBeginSfxId2,
            param->mimicrySfxId2,
            param->mimicryEndSfxId2
        );
    }
    fclose(f);
}

}
