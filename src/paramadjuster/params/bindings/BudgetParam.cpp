#include "../luabindings.h"
#include "../defs/BudgetParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<BudgetParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerBudgetParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["BudgetParam"]; usertype) return;
        auto indexerBudgetParam = state->new_usertype<ParamTableIndexer<BudgetParam>>("BudgetParamTableIndexer");
        indexerBudgetParam["count"] = sol::property(&ParamTableIndexer<BudgetParam>::count);
        indexerBudgetParam["__index"] = &ParamTableIndexer<BudgetParam>::at;
        indexerBudgetParam["id"] = &ParamTableIndexer<BudgetParam>::paramId;
        indexerBudgetParam["get"] = &ParamTableIndexer<BudgetParam>::get;
        indexerBudgetParam["exportToCsv"] = &ParamTableIndexer<BudgetParam>::exportToCsv;
        indexerBudgetParam["importFromCsv"] = &ParamTableIndexer<BudgetParam>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<BudgetParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<BudgetParam>>(nullptr);
        indexer->setFieldNames({
            {"vram_all", false},
            {"vram_mapobj_tex", false},
            {"vram_mapobj_mdl", false},
            {"vram_map", false},
            {"vram_chr", false},
            {"vram_parts", false},
            {"vram_sfx", false},
            {"vram_chr_tex", false},
            {"vram_chr_mdl", false},
            {"vram_parts_tex", false},
            {"vram_parts_mdl", false},
            {"vram_sfx_tex", false},
            {"vram_sfx_mdl", false},
            {"vram_gi", false},
            {"vram_menu_tex", false},
            {"vram_decal_rt", false},
            {"vram_decal", false},
            {"vram_other_tex", false},
            {"vram_other_mdl", false},
            {"havok_anim", false},
            {"havok_ins", false},
            {"havok_hit", false},
            {"vram_other", false},
            {"vram_detail_all", false},
            {"vram_chr_and_parts", false},
            {"havok_navimesh", false},
        });
        return indexer;
    };
    paramsTable["BudgetParam"] = [tableLoader]() -> auto { return tableLoader(L"BudgetParam"); };
}

template<> void ParamTableIndexer<BudgetParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,vram_all,vram_mapobj_tex,vram_mapobj_mdl,vram_map,vram_chr,vram_parts,vram_sfx,vram_chr_tex,vram_chr_mdl,vram_parts_tex,vram_parts_mdl,vram_sfx_tex,vram_sfx_mdl,vram_gi,vram_menu_tex");
    fwprintf(f, L",vram_decal_rt,vram_decal,vram_other_tex,vram_other_mdl,havok_anim,havok_ins,havok_hit,vram_other,vram_detail_all,vram_chr_and_parts,havok_navimesh\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g\n",
            this->paramId(i),
            param->vram_all,
            param->vram_mapobj_tex,
            param->vram_mapobj_mdl,
            param->vram_map,
            param->vram_chr,
            param->vram_parts,
            param->vram_sfx,
            param->vram_chr_tex,
            param->vram_chr_mdl,
            param->vram_parts_tex,
            param->vram_parts_mdl,
            param->vram_sfx_tex,
            param->vram_sfx_mdl,
            param->vram_gi,
            param->vram_menu_tex,
            param->vram_decal_rt,
            param->vram_decal,
            param->vram_other_tex,
            param->vram_other_mdl,
            param->havok_anim,
            param->havok_ins,
            param->havok_hit,
            param->vram_other,
            param->vram_detail_all,
            param->vram_chr_and_parts,
            param->havok_navimesh
        );
    }
    fclose(f);
}

}
