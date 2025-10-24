#include "../luabindings.h"
#include "../defs/ObjActParam.h"

namespace paramadjuster::params {

void registerObjActParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ObjActParam"]; usertype) return;
        auto indexerObjActParam = state->new_usertype<ParamTableIndexer<ObjActParam>>("ObjActParamTableIndexer");
        indexerObjActParam["count"] = sol::property(&ParamTableIndexer<ObjActParam>::count);
        indexerObjActParam["__index"] = &ParamTableIndexer<ObjActParam>::at;
        indexerObjActParam["id"] = &ParamTableIndexer<ObjActParam>::paramId;
        indexerObjActParam["get"] = &ParamTableIndexer<ObjActParam>::get;
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
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<ObjActParam>>(gParamMgr.findTable(L"ObjActParam")); };
    paramsTable["ObjActParam"] = tableLoader;
}

}
