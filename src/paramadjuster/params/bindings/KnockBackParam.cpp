#include "../luabindings.h"
#include "../defs/KnockBackParam.h"

namespace paramadjuster::params {

void registerKnockBackParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["KnockBackParam"]; usertype) return;
        auto indexerKnockBackParam = state->new_usertype<ParamTableIndexer<KnockBackParam>>("KnockBackParamTableIndexer");
        indexerKnockBackParam["count"] = sol::property(&ParamTableIndexer<KnockBackParam>::count);
        indexerKnockBackParam["__index"] = &ParamTableIndexer<KnockBackParam>::at;
        indexerKnockBackParam["id"] = &ParamTableIndexer<KnockBackParam>::paramId;
        indexerKnockBackParam["get"] = &ParamTableIndexer<KnockBackParam>::get;
        auto utKnockBackParam = state->new_usertype<KnockBackParam>("KnockBackParam");
        utKnockBackParam["damage_Min_ContTime"] = &KnockBackParam::damage_Min_ContTime;
        utKnockBackParam["damage_S_ContTime"] = &KnockBackParam::damage_S_ContTime;
        utKnockBackParam["damage_M_ContTime"] = &KnockBackParam::damage_M_ContTime;
        utKnockBackParam["damage_L_ContTime"] = &KnockBackParam::damage_L_ContTime;
        utKnockBackParam["damage_BlowS_ContTime"] = &KnockBackParam::damage_BlowS_ContTime;
        utKnockBackParam["damage_BlowM_ContTime"] = &KnockBackParam::damage_BlowM_ContTime;
        utKnockBackParam["damage_Strike_ContTime"] = &KnockBackParam::damage_Strike_ContTime;
        utKnockBackParam["damage_Uppercut_ContTime"] = &KnockBackParam::damage_Uppercut_ContTime;
        utKnockBackParam["damage_Push_ContTime"] = &KnockBackParam::damage_Push_ContTime;
        utKnockBackParam["damage_Breath_ContTime"] = &KnockBackParam::damage_Breath_ContTime;
        utKnockBackParam["damage_HeadShot_ContTime"] = &KnockBackParam::damage_HeadShot_ContTime;
        utKnockBackParam["guard_S_ContTime"] = &KnockBackParam::guard_S_ContTime;
        utKnockBackParam["guard_L_ContTime"] = &KnockBackParam::guard_L_ContTime;
        utKnockBackParam["guard_LL_ContTime"] = &KnockBackParam::guard_LL_ContTime;
        utKnockBackParam["guardBrake_ContTime"] = &KnockBackParam::guardBrake_ContTime;
        utKnockBackParam["damage_Min_DecTime"] = &KnockBackParam::damage_Min_DecTime;
        utKnockBackParam["damage_S_DecTime"] = &KnockBackParam::damage_S_DecTime;
        utKnockBackParam["damage_M_DecTime"] = &KnockBackParam::damage_M_DecTime;
        utKnockBackParam["damage_L_DecTime"] = &KnockBackParam::damage_L_DecTime;
        utKnockBackParam["damage_BlowS_DecTime"] = &KnockBackParam::damage_BlowS_DecTime;
        utKnockBackParam["damage_BlowM_DecTime"] = &KnockBackParam::damage_BlowM_DecTime;
        utKnockBackParam["damage_Strike_DecTime"] = &KnockBackParam::damage_Strike_DecTime;
        utKnockBackParam["damage_Uppercut_DecTime"] = &KnockBackParam::damage_Uppercut_DecTime;
        utKnockBackParam["damage_Push_DecTime"] = &KnockBackParam::damage_Push_DecTime;
        utKnockBackParam["damage_Breath_DecTime"] = &KnockBackParam::damage_Breath_DecTime;
        utKnockBackParam["damage_HeadShot_DecTime"] = &KnockBackParam::damage_HeadShot_DecTime;
        utKnockBackParam["guard_S_DecTime"] = &KnockBackParam::guard_S_DecTime;
        utKnockBackParam["guard_L_DecTime"] = &KnockBackParam::guard_L_DecTime;
        utKnockBackParam["guard_LL_DecTime"] = &KnockBackParam::guard_LL_DecTime;
        utKnockBackParam["guardBrake_DecTime"] = &KnockBackParam::guardBrake_DecTime;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<KnockBackParam>>(gParamMgr.findTable(L"KnockBackParam")); };
    paramsTable["KnockBackParam"] = tableLoader;
}

}
