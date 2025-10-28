#include "../luabindings.h"
#include "../defs/ThrowDirectionSfxParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<ThrowDirectionSfxParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerThrowDirectionSfxParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ThrowDirectionSfxParam"]; usertype) return;
        auto indexerThrowDirectionSfxParam = state->new_usertype<ParamTableIndexer<ThrowDirectionSfxParam>>("ThrowDirectionSfxParamTableIndexer");
        indexerThrowDirectionSfxParam["count"] = sol::property(&ParamTableIndexer<ThrowDirectionSfxParam>::count);
        indexerThrowDirectionSfxParam["__index"] = &ParamTableIndexer<ThrowDirectionSfxParam>::at;
        indexerThrowDirectionSfxParam["id"] = &ParamTableIndexer<ThrowDirectionSfxParam>::paramId;
        indexerThrowDirectionSfxParam["get"] = &ParamTableIndexer<ThrowDirectionSfxParam>::get;
        indexerThrowDirectionSfxParam["exportToCsv"] = &ParamTableIndexer<ThrowDirectionSfxParam>::exportToCsv;
        indexerThrowDirectionSfxParam["importFromCsv"] = &ParamTableIndexer<ThrowDirectionSfxParam>::importFromCsv;
        auto utThrowDirectionSfxParam = state->new_usertype<ThrowDirectionSfxParam>("ThrowDirectionSfxParam");
        utThrowDirectionSfxParam["sfxId_00"] = &ThrowDirectionSfxParam::sfxId_00;
        utThrowDirectionSfxParam["sfxId_01"] = &ThrowDirectionSfxParam::sfxId_01;
        utThrowDirectionSfxParam["sfxId_02"] = &ThrowDirectionSfxParam::sfxId_02;
        utThrowDirectionSfxParam["sfxId_03"] = &ThrowDirectionSfxParam::sfxId_03;
        utThrowDirectionSfxParam["sfxId_04"] = &ThrowDirectionSfxParam::sfxId_04;
        utThrowDirectionSfxParam["sfxId_05"] = &ThrowDirectionSfxParam::sfxId_05;
        utThrowDirectionSfxParam["sfxId_06"] = &ThrowDirectionSfxParam::sfxId_06;
        utThrowDirectionSfxParam["sfxId_07"] = &ThrowDirectionSfxParam::sfxId_07;
        utThrowDirectionSfxParam["sfxId_08"] = &ThrowDirectionSfxParam::sfxId_08;
        utThrowDirectionSfxParam["sfxId_09"] = &ThrowDirectionSfxParam::sfxId_09;
        utThrowDirectionSfxParam["sfxId_10"] = &ThrowDirectionSfxParam::sfxId_10;
        utThrowDirectionSfxParam["sfxId_11"] = &ThrowDirectionSfxParam::sfxId_11;
        utThrowDirectionSfxParam["sfxId_12"] = &ThrowDirectionSfxParam::sfxId_12;
        utThrowDirectionSfxParam["sfxId_13"] = &ThrowDirectionSfxParam::sfxId_13;
        utThrowDirectionSfxParam["sfxId_14"] = &ThrowDirectionSfxParam::sfxId_14;
        utThrowDirectionSfxParam["sfxId_15"] = &ThrowDirectionSfxParam::sfxId_15;
        utThrowDirectionSfxParam["sfxId_16"] = &ThrowDirectionSfxParam::sfxId_16;
        utThrowDirectionSfxParam["sfxId_17"] = &ThrowDirectionSfxParam::sfxId_17;
        utThrowDirectionSfxParam["sfxId_18"] = &ThrowDirectionSfxParam::sfxId_18;
        utThrowDirectionSfxParam["sfxId_19"] = &ThrowDirectionSfxParam::sfxId_19;
        utThrowDirectionSfxParam["sfxId_20"] = &ThrowDirectionSfxParam::sfxId_20;
        utThrowDirectionSfxParam["sfxId_21"] = &ThrowDirectionSfxParam::sfxId_21;
        utThrowDirectionSfxParam["sfxId_22"] = &ThrowDirectionSfxParam::sfxId_22;
        utThrowDirectionSfxParam["sfxId_23"] = &ThrowDirectionSfxParam::sfxId_23;
        utThrowDirectionSfxParam["sfxId_24"] = &ThrowDirectionSfxParam::sfxId_24;
        utThrowDirectionSfxParam["sfxId_25"] = &ThrowDirectionSfxParam::sfxId_25;
        utThrowDirectionSfxParam["sfxId_26"] = &ThrowDirectionSfxParam::sfxId_26;
        utThrowDirectionSfxParam["sfxId_27"] = &ThrowDirectionSfxParam::sfxId_27;
        utThrowDirectionSfxParam["sfxId_28"] = &ThrowDirectionSfxParam::sfxId_28;
        utThrowDirectionSfxParam["sfxId_29"] = &ThrowDirectionSfxParam::sfxId_29;
        utThrowDirectionSfxParam["sfxId_30"] = &ThrowDirectionSfxParam::sfxId_30;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<ThrowDirectionSfxParam>>(state, L"ThrowDirectionSfxParam");
        indexer->setFieldNames({
            {"sfxId_00", false},
            {"sfxId_01", false},
            {"sfxId_02", false},
            {"sfxId_03", false},
            {"sfxId_04", false},
            {"sfxId_05", false},
            {"sfxId_06", false},
            {"sfxId_07", false},
            {"sfxId_08", false},
            {"sfxId_09", false},
            {"sfxId_10", false},
            {"sfxId_11", false},
            {"sfxId_12", false},
            {"sfxId_13", false},
            {"sfxId_14", false},
            {"sfxId_15", false},
            {"sfxId_16", false},
            {"sfxId_17", false},
            {"sfxId_18", false},
            {"sfxId_19", false},
            {"sfxId_20", false},
            {"sfxId_21", false},
            {"sfxId_22", false},
            {"sfxId_23", false},
            {"sfxId_24", false},
            {"sfxId_25", false},
            {"sfxId_26", false},
            {"sfxId_27", false},
            {"sfxId_28", false},
            {"sfxId_29", false},
            {"sfxId_30", false},
        });
        return indexer;
    };
    paramsTable["ThrowDirectionSfxParam"] = tableLoader;
}

template<> void ParamTableIndexer<ThrowDirectionSfxParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,sfxId_00,sfxId_01,sfxId_02,sfxId_03,sfxId_04,sfxId_05,sfxId_06,sfxId_07,sfxId_08,sfxId_09,sfxId_10,sfxId_11,sfxId_12,sfxId_13,sfxId_14,sfxId_15,sfxId_16,sfxId_17,sfxId_18,sfxId_19,sfxId_20,sfxId_21,sfxId_22,sfxId_23,sfxId_24,sfxId_25,sfxId_26,sfxId_27,sfxId_28,sfxId_29,sfxId_30\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",
            this->paramId(i),
            param->sfxId_00,
            param->sfxId_01,
            param->sfxId_02,
            param->sfxId_03,
            param->sfxId_04,
            param->sfxId_05,
            param->sfxId_06,
            param->sfxId_07,
            param->sfxId_08,
            param->sfxId_09,
            param->sfxId_10,
            param->sfxId_11,
            param->sfxId_12,
            param->sfxId_13,
            param->sfxId_14,
            param->sfxId_15,
            param->sfxId_16,
            param->sfxId_17,
            param->sfxId_18,
            param->sfxId_19,
            param->sfxId_20,
            param->sfxId_21,
            param->sfxId_22,
            param->sfxId_23,
            param->sfxId_24,
            param->sfxId_25,
            param->sfxId_26,
            param->sfxId_27,
            param->sfxId_28,
            param->sfxId_29,
            param->sfxId_30
        );
    }
    fclose(f);
}

}
