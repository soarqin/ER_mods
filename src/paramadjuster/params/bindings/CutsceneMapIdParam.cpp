#include "../luabindings.h"
#include "../defs/CutsceneMapIdParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<CutsceneMapIdParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerCutsceneMapIdParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["CutsceneMapIdParam"]; usertype) return;
        auto indexerCutsceneMapIdParam = state->new_usertype<ParamTableIndexer<CutsceneMapIdParam>>("CutsceneMapIdParamTableIndexer");
        indexerCutsceneMapIdParam["count"] = sol::property(&ParamTableIndexer<CutsceneMapIdParam>::count);
        indexerCutsceneMapIdParam["__index"] = &ParamTableIndexer<CutsceneMapIdParam>::at;
        indexerCutsceneMapIdParam["id"] = &ParamTableIndexer<CutsceneMapIdParam>::paramId;
        indexerCutsceneMapIdParam["get"] = &ParamTableIndexer<CutsceneMapIdParam>::get;
        indexerCutsceneMapIdParam["exportToCsv"] = &ParamTableIndexer<CutsceneMapIdParam>::exportToCsv;
        indexerCutsceneMapIdParam["importFromCsv"] = &ParamTableIndexer<CutsceneMapIdParam>::importFromCsv;
        auto utCutsceneMapIdParam = state->new_usertype<CutsceneMapIdParam>("CutsceneMapIdParam");
        utCutsceneMapIdParam["disableParam_NT"] = sol::property([](CutsceneMapIdParam &param) -> uint8_t { return param.disableParam_NT; }, [](CutsceneMapIdParam &param, uint8_t value) { param.disableParam_NT = value; });
        utCutsceneMapIdParam["disableParam_Debug"] = sol::property([](CutsceneMapIdParam &param) -> uint8_t { return param.disableParam_Debug; }, [](CutsceneMapIdParam &param, uint8_t value) { param.disableParam_Debug = value; });
        utCutsceneMapIdParam["PlayMapId"] = &CutsceneMapIdParam::PlayMapId;
        utCutsceneMapIdParam["RequireMapId0"] = &CutsceneMapIdParam::RequireMapId0;
        utCutsceneMapIdParam["RequireMapId1"] = &CutsceneMapIdParam::RequireMapId1;
        utCutsceneMapIdParam["RequireMapId2"] = &CutsceneMapIdParam::RequireMapId2;
        utCutsceneMapIdParam["RefCamPosHitPartsID"] = &CutsceneMapIdParam::RefCamPosHitPartsID;
        utCutsceneMapIdParam["unknown_0x18"] = &CutsceneMapIdParam::unknown_0x18;
        utCutsceneMapIdParam["ClientDisableViewTimeForProgress"] = &CutsceneMapIdParam::ClientDisableViewTimeForProgress;
        utCutsceneMapIdParam["HitParts_0"] = &CutsceneMapIdParam::HitParts_0;
        utCutsceneMapIdParam["HitParts_1"] = &CutsceneMapIdParam::HitParts_1;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<CutsceneMapIdParam>>(state, L"CutsceneMapIdParam");
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"disableParam_Debug", false},
            {"PlayMapId", false},
            {"RequireMapId0", false},
            {"RequireMapId1", false},
            {"RequireMapId2", false},
            {"RefCamPosHitPartsID", false},
            {"unknown_0x18", false},
            {"ClientDisableViewTimeForProgress", false},
            {"HitParts_0", false},
            {"HitParts_1", false},
        });
        return indexer;
    };
    paramsTable["CutsceneMapIdParam"] = tableLoader;
}

template<> void ParamTableIndexer<CutsceneMapIdParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,disableParam_Debug,PlayMapId,RequireMapId0,RequireMapId1,RequireMapId2,RefCamPosHitPartsID,unknown_0x18,ClientDisableViewTimeForProgress,HitParts_0,HitParts_1\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%u,%u,%u,%d,%d,%u,%d,%d\n",
            this->paramId(i),
            param->disableParam_NT,
            param->disableParam_Debug,
            param->PlayMapId,
            param->RequireMapId0,
            param->RequireMapId1,
            param->RequireMapId2,
            param->RefCamPosHitPartsID,
            param->unknown_0x18,
            param->ClientDisableViewTimeForProgress,
            param->HitParts_0,
            param->HitParts_1
        );
    }
    fclose(f);
}

}
