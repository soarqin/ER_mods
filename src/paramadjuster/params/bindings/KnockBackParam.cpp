#include "../luabindings.h"
#include "../defs/KnockBackParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<KnockBackParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerKnockBackParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["KnockBackParam"]; usertype) return;
        auto indexerKnockBackParam = state->new_usertype<ParamTableIndexer<KnockBackParam>>("KnockBackParamTableIndexer");
        indexerKnockBackParam["count"] = sol::property(&ParamTableIndexer<KnockBackParam>::count);
        indexerKnockBackParam["__index"] = &ParamTableIndexer<KnockBackParam>::at;
        indexerKnockBackParam["id"] = &ParamTableIndexer<KnockBackParam>::paramId;
        indexerKnockBackParam["get"] = &ParamTableIndexer<KnockBackParam>::get;
        indexerKnockBackParam["exportToCsv"] = &ParamTableIndexer<KnockBackParam>::exportToCsv;
        indexerKnockBackParam["importFromCsv"] = &ParamTableIndexer<KnockBackParam>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<KnockBackParam>>(state, L"KnockBackParam");
        indexer->setFieldNames({
            {"damage_Min_ContTime", false},
            {"damage_S_ContTime", false},
            {"damage_M_ContTime", false},
            {"damage_L_ContTime", false},
            {"damage_BlowS_ContTime", false},
            {"damage_BlowM_ContTime", false},
            {"damage_Strike_ContTime", false},
            {"damage_Uppercut_ContTime", false},
            {"damage_Push_ContTime", false},
            {"damage_Breath_ContTime", false},
            {"damage_HeadShot_ContTime", false},
            {"guard_S_ContTime", false},
            {"guard_L_ContTime", false},
            {"guard_LL_ContTime", false},
            {"guardBrake_ContTime", false},
            {"damage_Min_DecTime", false},
            {"damage_S_DecTime", false},
            {"damage_M_DecTime", false},
            {"damage_L_DecTime", false},
            {"damage_BlowS_DecTime", false},
            {"damage_BlowM_DecTime", false},
            {"damage_Strike_DecTime", false},
            {"damage_Uppercut_DecTime", false},
            {"damage_Push_DecTime", false},
            {"damage_Breath_DecTime", false},
            {"damage_HeadShot_DecTime", false},
            {"guard_S_DecTime", false},
            {"guard_L_DecTime", false},
            {"guard_LL_DecTime", false},
            {"guardBrake_DecTime", false},
        });
        return indexer;
    };
    paramsTable["KnockBackParam"] = tableLoader;
}

template<> void ParamTableIndexer<KnockBackParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,damage_Min_ContTime,damage_S_ContTime,damage_M_ContTime,damage_L_ContTime,damage_BlowS_ContTime,damage_BlowM_ContTime,damage_Strike_ContTime,damage_Uppercut_ContTime,damage_Push_ContTime,damage_Breath_ContTime,damage_HeadShot_ContTime,guard_S_ContTime,guard_L_ContTime,guard_LL_ContTime,guardBrake_ContTime,damage_Min_DecTime,damage_S_DecTime,damage_M_DecTime,damage_L_DecTime,damage_BlowS_DecTime,damage_BlowM_DecTime,damage_Strike_DecTime,damage_Uppercut_DecTime,damage_Push_DecTime,damage_Breath_DecTime,damage_HeadShot_DecTime,guard_S_DecTime,guard_L_DecTime,guard_LL_DecTime,guardBrake_DecTime\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g\n",
            this->paramId(i),
            param->damage_Min_ContTime,
            param->damage_S_ContTime,
            param->damage_M_ContTime,
            param->damage_L_ContTime,
            param->damage_BlowS_ContTime,
            param->damage_BlowM_ContTime,
            param->damage_Strike_ContTime,
            param->damage_Uppercut_ContTime,
            param->damage_Push_ContTime,
            param->damage_Breath_ContTime,
            param->damage_HeadShot_ContTime,
            param->guard_S_ContTime,
            param->guard_L_ContTime,
            param->guard_LL_ContTime,
            param->guardBrake_ContTime,
            param->damage_Min_DecTime,
            param->damage_S_DecTime,
            param->damage_M_DecTime,
            param->damage_L_DecTime,
            param->damage_BlowS_DecTime,
            param->damage_BlowM_DecTime,
            param->damage_Strike_DecTime,
            param->damage_Uppercut_DecTime,
            param->damage_Push_DecTime,
            param->damage_Breath_DecTime,
            param->damage_HeadShot_DecTime,
            param->guard_S_DecTime,
            param->guard_L_DecTime,
            param->guard_LL_DecTime,
            param->guardBrake_DecTime
        );
    }
    fclose(f);
}

}
