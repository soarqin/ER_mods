#include "../luabindings.h"
#include "../defs/TalkParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<TalkParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerTalkParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["TalkParam"]; usertype) return;
        auto indexerTalkParam = state->new_usertype<ParamTableIndexer<TalkParam>>("TalkParamTableIndexer");
        indexerTalkParam["count"] = sol::property(&ParamTableIndexer<TalkParam>::count);
        indexerTalkParam["__index"] = &ParamTableIndexer<TalkParam>::at;
        indexerTalkParam["id"] = &ParamTableIndexer<TalkParam>::paramId;
        indexerTalkParam["get"] = &ParamTableIndexer<TalkParam>::get;
        indexerTalkParam["exportToCsv"] = &ParamTableIndexer<TalkParam>::exportToCsv;
        indexerTalkParam["importFromCsv"] = &ParamTableIndexer<TalkParam>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<TalkParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<TalkParam>>(nullptr);
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"msgId", false},
            {"voiceId", false},
            {"spEffectId0", false},
            {"motionId0", false},
            {"spEffectId1", false},
            {"motionId1", false},
            {"returnPos", false},
            {"reactionId", false},
            {"eventId", false},
            {"msgId_female", false},
            {"voiceId_female", false},
            {"lipSyncStart", false},
            {"lipSyncTime", false},
            {"timeout", false},
            {"talkAnimationId", false},
            {"isForceDisp", false},
        });
        return indexer;
    };
    paramsTable["TalkParam"] = [tableLoader]() -> auto { return tableLoader(L"TalkParam"); };
}

template<> void ParamTableIndexer<TalkParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,msgId,voiceId,spEffectId0,motionId0,spEffectId1,motionId1,returnPos,reactionId,eventId,msgId_female,voiceId_female,lipSyncStart,lipSyncTime,timeout,talkAnimationId,isForceDisp\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%g,%d,%u\n",
            this->paramId(i),
            param->disableParam_NT,
            param->msgId,
            param->voiceId,
            param->spEffectId0,
            param->motionId0,
            param->spEffectId1,
            param->motionId1,
            param->returnPos,
            param->reactionId,
            param->eventId,
            param->msgId_female,
            param->voiceId_female,
            param->lipSyncStart,
            param->lipSyncTime,
            param->timeout,
            param->talkAnimationId,
            param->isForceDisp
        );
    }
    fclose(f);
}

}
