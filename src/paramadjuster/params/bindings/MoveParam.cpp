#include "../luabindings.h"
#include "../defs/MoveParam.h"

namespace paramadjuster::params {

void registerMoveParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MoveParam"]; usertype) return;
        auto indexerMoveParam = state->new_usertype<ParamTableIndexer<MoveParam>>("MoveParamTableIndexer");
        indexerMoveParam["count"] = sol::property(&ParamTableIndexer<MoveParam>::count);
        indexerMoveParam["__index"] = &ParamTableIndexer<MoveParam>::at;
        indexerMoveParam["id"] = &ParamTableIndexer<MoveParam>::paramId;
        indexerMoveParam["get"] = &ParamTableIndexer<MoveParam>::get;
        auto utMoveParam = state->new_usertype<MoveParam>("MoveParam");
        utMoveParam["stayId"] = &MoveParam::stayId;
        utMoveParam["walkF"] = &MoveParam::walkF;
        utMoveParam["walkB"] = &MoveParam::walkB;
        utMoveParam["walkL"] = &MoveParam::walkL;
        utMoveParam["walkR"] = &MoveParam::walkR;
        utMoveParam["dashF"] = &MoveParam::dashF;
        utMoveParam["dashB"] = &MoveParam::dashB;
        utMoveParam["dashL"] = &MoveParam::dashL;
        utMoveParam["dashR"] = &MoveParam::dashR;
        utMoveParam["superDash"] = &MoveParam::superDash;
        utMoveParam["escapeF"] = &MoveParam::escapeF;
        utMoveParam["escapeB"] = &MoveParam::escapeB;
        utMoveParam["escapeL"] = &MoveParam::escapeL;
        utMoveParam["escapeR"] = &MoveParam::escapeR;
        utMoveParam["turnL"] = &MoveParam::turnL;
        utMoveParam["trunR"] = &MoveParam::trunR;
        utMoveParam["largeTurnL"] = &MoveParam::largeTurnL;
        utMoveParam["largeTurnR"] = &MoveParam::largeTurnR;
        utMoveParam["stepMove"] = &MoveParam::stepMove;
        utMoveParam["flyStay"] = &MoveParam::flyStay;
        utMoveParam["flyWalkF"] = &MoveParam::flyWalkF;
        utMoveParam["flyWalkFL"] = &MoveParam::flyWalkFL;
        utMoveParam["flyWalkFR"] = &MoveParam::flyWalkFR;
        utMoveParam["flyWalkFL2"] = &MoveParam::flyWalkFL2;
        utMoveParam["flyWalkFR2"] = &MoveParam::flyWalkFR2;
        utMoveParam["flyDashF"] = &MoveParam::flyDashF;
        utMoveParam["flyDashFL"] = &MoveParam::flyDashFL;
        utMoveParam["flyDashFR"] = &MoveParam::flyDashFR;
        utMoveParam["flyDashFL2"] = &MoveParam::flyDashFL2;
        utMoveParam["flyDashFR2"] = &MoveParam::flyDashFR2;
        utMoveParam["dashEscapeF"] = &MoveParam::dashEscapeF;
        utMoveParam["dashEscapeB"] = &MoveParam::dashEscapeB;
        utMoveParam["dashEscapeL"] = &MoveParam::dashEscapeL;
        utMoveParam["dashEscapeR"] = &MoveParam::dashEscapeR;
        utMoveParam["analogMoveParamId"] = &MoveParam::analogMoveParamId;
        utMoveParam["turnNoAnimAngle"] = &MoveParam::turnNoAnimAngle;
        utMoveParam["turn45Angle"] = &MoveParam::turn45Angle;
        utMoveParam["turn90Angle"] = &MoveParam::turn90Angle;
        utMoveParam["turnWaitNoAnimAngle"] = &MoveParam::turnWaitNoAnimAngle;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<MoveParam>>(gParamMgr.findTable(L"MoveParam")); };
    paramsTable["MoveParam"] = tableLoader;
}

}
