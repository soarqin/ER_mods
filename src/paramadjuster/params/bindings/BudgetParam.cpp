#include "../luabindings.h"
#include "../defs/BudgetParam.h"

namespace paramadjuster::params {

void registerBudgetParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["BudgetParam"]; usertype) return;
        auto indexerBudgetParam = state->new_usertype<ParamTableIndexer<BudgetParam>>("BudgetParamTableIndexer");
        indexerBudgetParam["count"] = sol::property(&ParamTableIndexer<BudgetParam>::count);
        indexerBudgetParam["__index"] = &ParamTableIndexer<BudgetParam>::at;
        indexerBudgetParam["id"] = &ParamTableIndexer<BudgetParam>::paramId;
        indexerBudgetParam["get"] = &ParamTableIndexer<BudgetParam>::get;
        auto utBudgetParam = state->new_usertype<BudgetParam>("BudgetParam");
        utBudgetParam["vram_all"] = &BudgetParam::vram_all;
        utBudgetParam["vram_mapobj_tex"] = &BudgetParam::vram_mapobj_tex;
        utBudgetParam["vram_mapobj_mdl"] = &BudgetParam::vram_mapobj_mdl;
        utBudgetParam["vram_map"] = &BudgetParam::vram_map;
        utBudgetParam["vram_chr"] = &BudgetParam::vram_chr;
        utBudgetParam["vram_parts"] = &BudgetParam::vram_parts;
        utBudgetParam["vram_sfx"] = &BudgetParam::vram_sfx;
        utBudgetParam["vram_chr_tex"] = &BudgetParam::vram_chr_tex;
        utBudgetParam["vram_chr_mdl"] = &BudgetParam::vram_chr_mdl;
        utBudgetParam["vram_parts_tex"] = &BudgetParam::vram_parts_tex;
        utBudgetParam["vram_parts_mdl"] = &BudgetParam::vram_parts_mdl;
        utBudgetParam["vram_sfx_tex"] = &BudgetParam::vram_sfx_tex;
        utBudgetParam["vram_sfx_mdl"] = &BudgetParam::vram_sfx_mdl;
        utBudgetParam["vram_gi"] = &BudgetParam::vram_gi;
        utBudgetParam["vram_menu_tex"] = &BudgetParam::vram_menu_tex;
        utBudgetParam["vram_decal_rt"] = &BudgetParam::vram_decal_rt;
        utBudgetParam["vram_decal"] = &BudgetParam::vram_decal;
        utBudgetParam["vram_other_tex"] = &BudgetParam::vram_other_tex;
        utBudgetParam["vram_other_mdl"] = &BudgetParam::vram_other_mdl;
        utBudgetParam["havok_anim"] = &BudgetParam::havok_anim;
        utBudgetParam["havok_ins"] = &BudgetParam::havok_ins;
        utBudgetParam["havok_hit"] = &BudgetParam::havok_hit;
        utBudgetParam["vram_other"] = &BudgetParam::vram_other;
        utBudgetParam["vram_detail_all"] = &BudgetParam::vram_detail_all;
        utBudgetParam["vram_chr_and_parts"] = &BudgetParam::vram_chr_and_parts;
        utBudgetParam["havok_navimesh"] = &BudgetParam::havok_navimesh;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<BudgetParam>>(gParamMgr.findTable(L"BudgetParam")); };
    paramsTable["BudgetParam"] = tableLoader;
}

}
