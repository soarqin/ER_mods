#include "../luabindings.h"
#include "../defs/TalkParam.h"

namespace paramadjuster::params {

void registerTalkParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["TalkParam"]; usertype) return;
        auto indexerTalkParam = state->new_usertype<ParamTableIndexer<TalkParam>>("TalkParamTableIndexer");
        indexerTalkParam["count"] = sol::property(&ParamTableIndexer<TalkParam>::count);
        indexerTalkParam["__index"] = &ParamTableIndexer<TalkParam>::at;
        indexerTalkParam["id"] = &ParamTableIndexer<TalkParam>::paramId;
        indexerTalkParam["get"] = &ParamTableIndexer<TalkParam>::get;
        auto utTalkParam = state->new_usertype<TalkParam>("TalkParam");
        utTalkParam["disableParam_NT"] = sol::property([](TalkParam &param) -> uint8_t { return param.disableParam_NT; }, [](TalkParam &param, uint8_t value) { param.disableParam_NT = value; });
        utTalkParam["msgId"] = &TalkParam::msgId;
        utTalkParam["voiceId"] = &TalkParam::voiceId;
        utTalkParam["spEffectId0"] = &TalkParam::spEffectId0;
        utTalkParam["motionId0"] = &TalkParam::motionId0;
        utTalkParam["spEffectId1"] = &TalkParam::spEffectId1;
        utTalkParam["motionId1"] = &TalkParam::motionId1;
        utTalkParam["returnPos"] = &TalkParam::returnPos;
        utTalkParam["reactionId"] = &TalkParam::reactionId;
        utTalkParam["eventId"] = &TalkParam::eventId;
        utTalkParam["msgId_female"] = &TalkParam::msgId_female;
        utTalkParam["voiceId_female"] = &TalkParam::voiceId_female;
        utTalkParam["lipSyncStart"] = &TalkParam::lipSyncStart;
        utTalkParam["lipSyncTime"] = &TalkParam::lipSyncTime;
        utTalkParam["timeout"] = &TalkParam::timeout;
        utTalkParam["talkAnimationId"] = &TalkParam::talkAnimationId;
        utTalkParam["isForceDisp"] = sol::property([](TalkParam &param) -> uint8_t { return param.isForceDisp; }, [](TalkParam &param, uint8_t value) { param.isForceDisp = value; });
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<TalkParam>>(gParamMgr.findTable(L"TalkParam")); };
    paramsTable["TalkParam"] = tableLoader;
}

}
