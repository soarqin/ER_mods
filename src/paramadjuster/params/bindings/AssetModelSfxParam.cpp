#include "../luabindings.h"
#include "../defs/AssetModelSfxParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<AssetModelSfxParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerAssetModelSfxParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["AssetModelSfxParam"]; usertype) return;
        auto indexerAssetModelSfxParam = state->new_usertype<ParamTableIndexer<AssetModelSfxParam>>("AssetModelSfxParamTableIndexer");
        indexerAssetModelSfxParam["count"] = sol::property(&ParamTableIndexer<AssetModelSfxParam>::count);
        indexerAssetModelSfxParam["__index"] = &ParamTableIndexer<AssetModelSfxParam>::at;
        indexerAssetModelSfxParam["id"] = &ParamTableIndexer<AssetModelSfxParam>::paramId;
        indexerAssetModelSfxParam["get"] = &ParamTableIndexer<AssetModelSfxParam>::get;
        indexerAssetModelSfxParam["exportToCsv"] = &ParamTableIndexer<AssetModelSfxParam>::exportToCsv;
        indexerAssetModelSfxParam["importFromCsv"] = &ParamTableIndexer<AssetModelSfxParam>::importFromCsv;
        auto utAssetModelSfxParam = state->new_usertype<AssetModelSfxParam>("AssetModelSfxParam");
        utAssetModelSfxParam["sfxId_0"] = &AssetModelSfxParam::sfxId_0;
        utAssetModelSfxParam["dmypolyId_0"] = &AssetModelSfxParam::dmypolyId_0;
        utAssetModelSfxParam["sfxId_1"] = &AssetModelSfxParam::sfxId_1;
        utAssetModelSfxParam["dmypolyId_1"] = &AssetModelSfxParam::dmypolyId_1;
        utAssetModelSfxParam["sfxId_2"] = &AssetModelSfxParam::sfxId_2;
        utAssetModelSfxParam["dmypolyId_2"] = &AssetModelSfxParam::dmypolyId_2;
        utAssetModelSfxParam["sfxId_3"] = &AssetModelSfxParam::sfxId_3;
        utAssetModelSfxParam["dmypolyId_3"] = &AssetModelSfxParam::dmypolyId_3;
        utAssetModelSfxParam["sfxId_4"] = &AssetModelSfxParam::sfxId_4;
        utAssetModelSfxParam["dmypolyId_4"] = &AssetModelSfxParam::dmypolyId_4;
        utAssetModelSfxParam["sfxId_5"] = &AssetModelSfxParam::sfxId_5;
        utAssetModelSfxParam["dmypolyId_5"] = &AssetModelSfxParam::dmypolyId_5;
        utAssetModelSfxParam["sfxId_6"] = &AssetModelSfxParam::sfxId_6;
        utAssetModelSfxParam["dmypolyId_6"] = &AssetModelSfxParam::dmypolyId_6;
        utAssetModelSfxParam["sfxId_7"] = &AssetModelSfxParam::sfxId_7;
        utAssetModelSfxParam["dmypolyId_7"] = &AssetModelSfxParam::dmypolyId_7;
        utAssetModelSfxParam["isDisableIV"] = &AssetModelSfxParam::isDisableIV;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<AssetModelSfxParam>>(state, L"AssetModelSfxParam");
        indexer->setFieldNames({
            {"sfxId_0", false},
            {"dmypolyId_0", false},
            {"sfxId_1", false},
            {"dmypolyId_1", false},
            {"sfxId_2", false},
            {"dmypolyId_2", false},
            {"sfxId_3", false},
            {"dmypolyId_3", false},
            {"sfxId_4", false},
            {"dmypolyId_4", false},
            {"sfxId_5", false},
            {"dmypolyId_5", false},
            {"sfxId_6", false},
            {"dmypolyId_6", false},
            {"sfxId_7", false},
            {"dmypolyId_7", false},
            {"isDisableIV", false},
        });
        return indexer;
    };
    paramsTable["AssetModelSfxParam"] = tableLoader;
}

template<> void ParamTableIndexer<AssetModelSfxParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,sfxId_0,dmypolyId_0,sfxId_1,dmypolyId_1,sfxId_2,dmypolyId_2,sfxId_3,dmypolyId_3,sfxId_4,dmypolyId_4,sfxId_5,dmypolyId_5,sfxId_6,dmypolyId_6,sfxId_7,dmypolyId_7,isDisableIV\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u\n",
            this->paramId(i),
            param->sfxId_0,
            param->dmypolyId_0,
            param->sfxId_1,
            param->dmypolyId_1,
            param->sfxId_2,
            param->dmypolyId_2,
            param->sfxId_3,
            param->dmypolyId_3,
            param->sfxId_4,
            param->dmypolyId_4,
            param->sfxId_5,
            param->dmypolyId_5,
            param->sfxId_6,
            param->dmypolyId_6,
            param->sfxId_7,
            param->dmypolyId_7,
            param->isDisableIV
        );
    }
    fclose(f);
}

}
