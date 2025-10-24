#include "../luabindings.h"
#include "../defs/NpcAiActionParam.h"

namespace paramadjuster::params {

void registerNpcAiActionParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["NpcAiActionParam"]; usertype) return;
        auto indexerNpcAiActionParam = state->new_usertype<ParamTableIndexer<NpcAiActionParam>>("NpcAiActionParamTableIndexer");
        indexerNpcAiActionParam["count"] = sol::property(&ParamTableIndexer<NpcAiActionParam>::count);
        indexerNpcAiActionParam["__index"] = &ParamTableIndexer<NpcAiActionParam>::at;
        indexerNpcAiActionParam["id"] = &ParamTableIndexer<NpcAiActionParam>::paramId;
        indexerNpcAiActionParam["get"] = &ParamTableIndexer<NpcAiActionParam>::get;
        auto utNpcAiActionParam = state->new_usertype<NpcAiActionParam>("NpcAiActionParam");
        utNpcAiActionParam["moveDir"] = &NpcAiActionParam::moveDir;
        utNpcAiActionParam["key1"] = &NpcAiActionParam::key1;
        utNpcAiActionParam["key2"] = &NpcAiActionParam::key2;
        utNpcAiActionParam["key3"] = &NpcAiActionParam::key3;
        utNpcAiActionParam["bMoveDirHold"] = &NpcAiActionParam::bMoveDirHold;
        utNpcAiActionParam["bKeyHold1"] = &NpcAiActionParam::bKeyHold1;
        utNpcAiActionParam["bKeyHold2"] = &NpcAiActionParam::bKeyHold2;
        utNpcAiActionParam["bKeyHold3"] = &NpcAiActionParam::bKeyHold3;
        utNpcAiActionParam["gestureId"] = &NpcAiActionParam::gestureId;
        utNpcAiActionParam["bLifeEndSuccess"] = &NpcAiActionParam::bLifeEndSuccess;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<NpcAiActionParam>>(gParamMgr.findTable(L"NpcAiActionParam")); };
    paramsTable["NpcAiActionParam"] = tableLoader;
}

}
