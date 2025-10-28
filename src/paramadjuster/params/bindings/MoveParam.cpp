#include "../luabindings.h"
#include "../defs/MoveParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<MoveParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerMoveParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MoveParam"]; usertype) return;
        auto indexerMoveParam = state->new_usertype<ParamTableIndexer<MoveParam>>("MoveParamTableIndexer");
        indexerMoveParam["count"] = sol::property(&ParamTableIndexer<MoveParam>::count);
        indexerMoveParam["__index"] = &ParamTableIndexer<MoveParam>::at;
        indexerMoveParam["id"] = &ParamTableIndexer<MoveParam>::paramId;
        indexerMoveParam["get"] = &ParamTableIndexer<MoveParam>::get;
        indexerMoveParam["exportToCsv"] = &ParamTableIndexer<MoveParam>::exportToCsv;
        indexerMoveParam["importFromCsv"] = &ParamTableIndexer<MoveParam>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<MoveParam>>(state, L"MoveParam");
        indexer->setFieldNames({
            {"stayId", false},
            {"walkF", false},
            {"walkB", false},
            {"walkL", false},
            {"walkR", false},
            {"dashF", false},
            {"dashB", false},
            {"dashL", false},
            {"dashR", false},
            {"superDash", false},
            {"escapeF", false},
            {"escapeB", false},
            {"escapeL", false},
            {"escapeR", false},
            {"turnL", false},
            {"trunR", false},
            {"largeTurnL", false},
            {"largeTurnR", false},
            {"stepMove", false},
            {"flyStay", false},
            {"flyWalkF", false},
            {"flyWalkFL", false},
            {"flyWalkFR", false},
            {"flyWalkFL2", false},
            {"flyWalkFR2", false},
            {"flyDashF", false},
            {"flyDashFL", false},
            {"flyDashFR", false},
            {"flyDashFL2", false},
            {"flyDashFR2", false},
            {"dashEscapeF", false},
            {"dashEscapeB", false},
            {"dashEscapeL", false},
            {"dashEscapeR", false},
            {"analogMoveParamId", false},
            {"turnNoAnimAngle", false},
            {"turn45Angle", false},
            {"turn90Angle", false},
            {"turnWaitNoAnimAngle", false},
        });
        return indexer;
    };
    paramsTable["MoveParam"] = tableLoader;
}

template<> void ParamTableIndexer<MoveParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,stayId,walkF,walkB,walkL,walkR,dashF,dashB,dashL,dashR,superDash,escapeF,escapeB,escapeL,escapeR,turnL,trunR,largeTurnL,largeTurnR,stepMove,flyStay,flyWalkF,flyWalkFL,flyWalkFR,flyWalkFL2,flyWalkFR2,flyDashF,flyDashFL,flyDashFR,flyDashFL2,flyDashFR2,dashEscapeF,dashEscapeB,dashEscapeL,dashEscapeR,analogMoveParamId,turnNoAnimAngle,turn45Angle,turn90Angle,turnWaitNoAnimAngle\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u\n",
            this->paramId(i),
            param->stayId,
            param->walkF,
            param->walkB,
            param->walkL,
            param->walkR,
            param->dashF,
            param->dashB,
            param->dashL,
            param->dashR,
            param->superDash,
            param->escapeF,
            param->escapeB,
            param->escapeL,
            param->escapeR,
            param->turnL,
            param->trunR,
            param->largeTurnL,
            param->largeTurnR,
            param->stepMove,
            param->flyStay,
            param->flyWalkF,
            param->flyWalkFL,
            param->flyWalkFR,
            param->flyWalkFL2,
            param->flyWalkFR2,
            param->flyDashF,
            param->flyDashFL,
            param->flyDashFR,
            param->flyDashFL2,
            param->flyDashFR2,
            param->dashEscapeF,
            param->dashEscapeB,
            param->dashEscapeL,
            param->dashEscapeR,
            param->analogMoveParamId,
            param->turnNoAnimAngle,
            param->turn45Angle,
            param->turn90Angle,
            param->turnWaitNoAnimAngle
        );
    }
    fclose(f);
}

}
