#include "../luabindings.h"
#include "../defs/ObjActParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<ObjActParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerObjActParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ObjActParam"]; usertype) return;
        auto indexerObjActParam = state->new_usertype<ParamTableIndexer<ObjActParam>>("ObjActParamTableIndexer");
        indexerObjActParam["count"] = sol::property(&ParamTableIndexer<ObjActParam>::count);
        indexerObjActParam["__index"] = &ParamTableIndexer<ObjActParam>::at;
        indexerObjActParam["id"] = &ParamTableIndexer<ObjActParam>::paramId;
        indexerObjActParam["get"] = &ParamTableIndexer<ObjActParam>::get;
        indexerObjActParam["exportToCsv"] = &ParamTableIndexer<ObjActParam>::exportToCsv;
        indexerObjActParam["importFromCsv"] = &ParamTableIndexer<ObjActParam>::importFromCsv;
        auto utObjActParam = state->new_usertype<ObjActParam>("ObjActParam");
        utObjActParam["actionEnableMsgId"] = &ObjActParam::actionEnableMsgId;
        utObjActParam["actionFailedMsgId"] = &ObjActParam::actionFailedMsgId;
        utObjActParam["spQualifiedPassEventFlag"] = &ObjActParam::spQualifiedPassEventFlag;
        utObjActParam["playerAnimId"] = &ObjActParam::playerAnimId;
        utObjActParam["chrAnimId"] = &ObjActParam::chrAnimId;
        utObjActParam["validDist"] = &ObjActParam::validDist;
        utObjActParam["spQualifiedId_old"] = &ObjActParam::spQualifiedId_old;
        utObjActParam["spQualifiedId2_old"] = &ObjActParam::spQualifiedId2_old;
        utObjActParam["objDummyId"] = &ObjActParam::objDummyId;
        utObjActParam["isEventKickSync"] = &ObjActParam::isEventKickSync;
        utObjActParam["objAnimId"] = &ObjActParam::objAnimId;
        utObjActParam["validPlayerAngle"] = &ObjActParam::validPlayerAngle;
        utObjActParam["spQualifiedType"] = &ObjActParam::spQualifiedType;
        utObjActParam["spQualifiedType2"] = &ObjActParam::spQualifiedType2;
        utObjActParam["validObjAngle"] = &ObjActParam::validObjAngle;
        utObjActParam["chrSorbType"] = &ObjActParam::chrSorbType;
        utObjActParam["eventKickTiming"] = &ObjActParam::eventKickTiming;
        utObjActParam["actionButtonParamId"] = &ObjActParam::actionButtonParamId;
        utObjActParam["enableTreasureDelaySec"] = &ObjActParam::enableTreasureDelaySec;
        utObjActParam["preActionSfxDmypolyId"] = &ObjActParam::preActionSfxDmypolyId;
        utObjActParam["preActionSfxId"] = &ObjActParam::preActionSfxId;
        utObjActParam["spQualifiedId_new"] = &ObjActParam::spQualifiedId_new;
        utObjActParam["spQualifiedId2_new"] = &ObjActParam::spQualifiedId2_new;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<ObjActParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<ObjActParam>>(nullptr);
        indexer->setFieldNames({
            {"actionEnableMsgId", false},
            {"actionFailedMsgId", false},
            {"spQualifiedPassEventFlag", false},
            {"playerAnimId", false},
            {"chrAnimId", false},
            {"validDist", false},
            {"spQualifiedId_old", false},
            {"spQualifiedId2_old", false},
            {"objDummyId", false},
            {"isEventKickSync", false},
            {"objAnimId", false},
            {"validPlayerAngle", false},
            {"spQualifiedType", false},
            {"spQualifiedType2", false},
            {"validObjAngle", false},
            {"chrSorbType", false},
            {"eventKickTiming", false},
            {"actionButtonParamId", false},
            {"enableTreasureDelaySec", false},
            {"preActionSfxDmypolyId", false},
            {"preActionSfxId", false},
            {"spQualifiedId_new", false},
            {"spQualifiedId2_new", false},
        });
        return indexer;
    };
    paramsTable["ObjActParam"] = [tableLoader]() -> auto { return tableLoader(L"ObjActParam"); };
}

template<> void ParamTableIndexer<ObjActParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,actionEnableMsgId,actionFailedMsgId,spQualifiedPassEventFlag,playerAnimId,chrAnimId,validDist,spQualifiedId_old,spQualifiedId2_old,objDummyId,isEventKickSync,objAnimId,validPlayerAngle,spQualifiedType,spQualifiedType2,validObjAngle");
    fwprintf(f, L",chrSorbType,eventKickTiming,actionButtonParamId,enableTreasureDelaySec,preActionSfxDmypolyId,preActionSfxId,spQualifiedId_new,spQualifiedId2_new\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%g,%d,%d,%d,%d\n",
            this->paramId(i),
            param->actionEnableMsgId,
            param->actionFailedMsgId,
            param->spQualifiedPassEventFlag,
            param->playerAnimId,
            param->chrAnimId,
            param->validDist,
            param->spQualifiedId_old,
            param->spQualifiedId2_old,
            param->objDummyId,
            param->isEventKickSync,
            param->objAnimId,
            param->validPlayerAngle,
            param->spQualifiedType,
            param->spQualifiedType2,
            param->validObjAngle,
            param->chrSorbType,
            param->eventKickTiming,
            param->actionButtonParamId,
            param->enableTreasureDelaySec,
            param->preActionSfxDmypolyId,
            param->preActionSfxId,
            param->spQualifiedId_new,
            param->spQualifiedId2_new
        );
    }
    fclose(f);
}

}
