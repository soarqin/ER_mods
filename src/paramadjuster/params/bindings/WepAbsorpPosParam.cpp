#include "../luabindings.h"
#include "../defs/WepAbsorpPosParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<WepAbsorpPosParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerWepAbsorpPosParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WepAbsorpPosParam"]; usertype) return;
        auto indexerWepAbsorpPosParam = state->new_usertype<ParamTableIndexer<WepAbsorpPosParam>>("WepAbsorpPosParamTableIndexer");
        indexerWepAbsorpPosParam["count"] = sol::property(&ParamTableIndexer<WepAbsorpPosParam>::count);
        indexerWepAbsorpPosParam["__index"] = &ParamTableIndexer<WepAbsorpPosParam>::at;
        indexerWepAbsorpPosParam["id"] = &ParamTableIndexer<WepAbsorpPosParam>::paramId;
        indexerWepAbsorpPosParam["get"] = &ParamTableIndexer<WepAbsorpPosParam>::get;
        indexerWepAbsorpPosParam["exportToCsv"] = &ParamTableIndexer<WepAbsorpPosParam>::exportToCsv;
        indexerWepAbsorpPosParam["importFromCsv"] = &ParamTableIndexer<WepAbsorpPosParam>::importFromCsv;
        auto utWepAbsorpPosParam = state->new_usertype<WepAbsorpPosParam>("WepAbsorpPosParam");
        utWepAbsorpPosParam["disableParam_NT"] = sol::property([](WepAbsorpPosParam &param) -> uint8_t { return param.disableParam_NT; }, [](WepAbsorpPosParam &param, uint8_t value) { param.disableParam_NT = value; });
        utWepAbsorpPosParam["hangPosType"] = &WepAbsorpPosParam::hangPosType;
        utWepAbsorpPosParam["isSkeletonBind"] = &WepAbsorpPosParam::isSkeletonBind;
        utWepAbsorpPosParam["right_0"] = &WepAbsorpPosParam::right_0;
        utWepAbsorpPosParam["left_0"] = &WepAbsorpPosParam::left_0;
        utWepAbsorpPosParam["both_0"] = &WepAbsorpPosParam::both_0;
        utWepAbsorpPosParam["leftHang_0"] = &WepAbsorpPosParam::leftHang_0;
        utWepAbsorpPosParam["rightHang_0"] = &WepAbsorpPosParam::rightHang_0;
        utWepAbsorpPosParam["right_1"] = &WepAbsorpPosParam::right_1;
        utWepAbsorpPosParam["left_1"] = &WepAbsorpPosParam::left_1;
        utWepAbsorpPosParam["both_1"] = &WepAbsorpPosParam::both_1;
        utWepAbsorpPosParam["leftHang_1"] = &WepAbsorpPosParam::leftHang_1;
        utWepAbsorpPosParam["rightHang_1"] = &WepAbsorpPosParam::rightHang_1;
        utWepAbsorpPosParam["right_2"] = &WepAbsorpPosParam::right_2;
        utWepAbsorpPosParam["left_2"] = &WepAbsorpPosParam::left_2;
        utWepAbsorpPosParam["both_2"] = &WepAbsorpPosParam::both_2;
        utWepAbsorpPosParam["leftHang_2"] = &WepAbsorpPosParam::leftHang_2;
        utWepAbsorpPosParam["rightHang_2"] = &WepAbsorpPosParam::rightHang_2;
        utWepAbsorpPosParam["right_3"] = &WepAbsorpPosParam::right_3;
        utWepAbsorpPosParam["left_3"] = &WepAbsorpPosParam::left_3;
        utWepAbsorpPosParam["both_3"] = &WepAbsorpPosParam::both_3;
        utWepAbsorpPosParam["leftHang_3"] = &WepAbsorpPosParam::leftHang_3;
        utWepAbsorpPosParam["rightHang_3"] = &WepAbsorpPosParam::rightHang_3;
        utWepAbsorpPosParam["wepInvisibleType_0"] = &WepAbsorpPosParam::wepInvisibleType_0;
        utWepAbsorpPosParam["wepInvisibleType_1"] = &WepAbsorpPosParam::wepInvisibleType_1;
        utWepAbsorpPosParam["wepInvisibleType_2"] = &WepAbsorpPosParam::wepInvisibleType_2;
        utWepAbsorpPosParam["wepInvisibleType_3"] = &WepAbsorpPosParam::wepInvisibleType_3;
        utWepAbsorpPosParam["leftBoth_0"] = &WepAbsorpPosParam::leftBoth_0;
        utWepAbsorpPosParam["leftBoth_1"] = &WepAbsorpPosParam::leftBoth_1;
        utWepAbsorpPosParam["leftBoth_2"] = &WepAbsorpPosParam::leftBoth_2;
        utWepAbsorpPosParam["leftBoth_3"] = &WepAbsorpPosParam::leftBoth_3;
        utWepAbsorpPosParam["dispPosType_right_0"] = &WepAbsorpPosParam::dispPosType_right_0;
        utWepAbsorpPosParam["dispPosType_left_0"] = &WepAbsorpPosParam::dispPosType_left_0;
        utWepAbsorpPosParam["dispPosType_rightBoth_0"] = &WepAbsorpPosParam::dispPosType_rightBoth_0;
        utWepAbsorpPosParam["dispPosType_leftBoth_0"] = &WepAbsorpPosParam::dispPosType_leftBoth_0;
        utWepAbsorpPosParam["dispPosType_rightHang_0"] = &WepAbsorpPosParam::dispPosType_rightHang_0;
        utWepAbsorpPosParam["dispPosType_leftHang_0"] = &WepAbsorpPosParam::dispPosType_leftHang_0;
        utWepAbsorpPosParam["dispPosType_right_1"] = &WepAbsorpPosParam::dispPosType_right_1;
        utWepAbsorpPosParam["dispPosType_left_1"] = &WepAbsorpPosParam::dispPosType_left_1;
        utWepAbsorpPosParam["dispPosType_rightBoth_1"] = &WepAbsorpPosParam::dispPosType_rightBoth_1;
        utWepAbsorpPosParam["dispPosType_leftBoth_1"] = &WepAbsorpPosParam::dispPosType_leftBoth_1;
        utWepAbsorpPosParam["dispPosType_rightHang_1"] = &WepAbsorpPosParam::dispPosType_rightHang_1;
        utWepAbsorpPosParam["dispPosType_leftHang_1"] = &WepAbsorpPosParam::dispPosType_leftHang_1;
        utWepAbsorpPosParam["dispPosType_right_2"] = &WepAbsorpPosParam::dispPosType_right_2;
        utWepAbsorpPosParam["dispPosType_left_2"] = &WepAbsorpPosParam::dispPosType_left_2;
        utWepAbsorpPosParam["dispPosType_rightBoth_2"] = &WepAbsorpPosParam::dispPosType_rightBoth_2;
        utWepAbsorpPosParam["dispPosType_leftBoth_2"] = &WepAbsorpPosParam::dispPosType_leftBoth_2;
        utWepAbsorpPosParam["dispPosType_rightHang_2"] = &WepAbsorpPosParam::dispPosType_rightHang_2;
        utWepAbsorpPosParam["dispPosType_leftHang_2"] = &WepAbsorpPosParam::dispPosType_leftHang_2;
        utWepAbsorpPosParam["dispPosType_right_3"] = &WepAbsorpPosParam::dispPosType_right_3;
        utWepAbsorpPosParam["dispPosType_left_3"] = &WepAbsorpPosParam::dispPosType_left_3;
        utWepAbsorpPosParam["dispPosType_rightBoth_3"] = &WepAbsorpPosParam::dispPosType_rightBoth_3;
        utWepAbsorpPosParam["dispPosType_leftBoth_3"] = &WepAbsorpPosParam::dispPosType_leftBoth_3;
        utWepAbsorpPosParam["dispPosType_rightHang_3"] = &WepAbsorpPosParam::dispPosType_rightHang_3;
        utWepAbsorpPosParam["dispPosType_leftHang_3"] = &WepAbsorpPosParam::dispPosType_leftHang_3;
        utWepAbsorpPosParam["unknown_0x54"] = &WepAbsorpPosParam::unknown_0x54;
        utWepAbsorpPosParam["unknown_0x55"] = &WepAbsorpPosParam::unknown_0x55;
        utWepAbsorpPosParam["unknown_0x56"] = &WepAbsorpPosParam::unknown_0x56;
        utWepAbsorpPosParam["unknown_0x57"] = &WepAbsorpPosParam::unknown_0x57;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<WepAbsorpPosParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<WepAbsorpPosParam>>(nullptr);
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"hangPosType", false},
            {"isSkeletonBind", false},
            {"right_0", false},
            {"left_0", false},
            {"both_0", false},
            {"leftHang_0", false},
            {"rightHang_0", false},
            {"right_1", false},
            {"left_1", false},
            {"both_1", false},
            {"leftHang_1", false},
            {"rightHang_1", false},
            {"right_2", false},
            {"left_2", false},
            {"both_2", false},
            {"leftHang_2", false},
            {"rightHang_2", false},
            {"right_3", false},
            {"left_3", false},
            {"both_3", false},
            {"leftHang_3", false},
            {"rightHang_3", false},
            {"wepInvisibleType_0", false},
            {"wepInvisibleType_1", false},
            {"wepInvisibleType_2", false},
            {"wepInvisibleType_3", false},
            {"leftBoth_0", false},
            {"leftBoth_1", false},
            {"leftBoth_2", false},
            {"leftBoth_3", false},
            {"dispPosType_right_0", false},
            {"dispPosType_left_0", false},
            {"dispPosType_rightBoth_0", false},
            {"dispPosType_leftBoth_0", false},
            {"dispPosType_rightHang_0", false},
            {"dispPosType_leftHang_0", false},
            {"dispPosType_right_1", false},
            {"dispPosType_left_1", false},
            {"dispPosType_rightBoth_1", false},
            {"dispPosType_leftBoth_1", false},
            {"dispPosType_rightHang_1", false},
            {"dispPosType_leftHang_1", false},
            {"dispPosType_right_2", false},
            {"dispPosType_left_2", false},
            {"dispPosType_rightBoth_2", false},
            {"dispPosType_leftBoth_2", false},
            {"dispPosType_rightHang_2", false},
            {"dispPosType_leftHang_2", false},
            {"dispPosType_right_3", false},
            {"dispPosType_left_3", false},
            {"dispPosType_rightBoth_3", false},
            {"dispPosType_leftBoth_3", false},
            {"dispPosType_rightHang_3", false},
            {"dispPosType_leftHang_3", false},
            {"unknown_0x54", false},
            {"unknown_0x55", false},
            {"unknown_0x56", false},
            {"unknown_0x57", false},
        });
        return indexer;
    };
    paramsTable["WepAbsorpPosParam"] = [tableLoader]() -> auto { return tableLoader(L"WepAbsorpPosParam"); };
}

template<> void ParamTableIndexer<WepAbsorpPosParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,hangPosType,isSkeletonBind,right_0,left_0,both_0,leftHang_0,rightHang_0,right_1,left_1,both_1,leftHang_1,rightHang_1,right_2,left_2,both_2,leftHang_2,rightHang_2,right_3,left_3,both_3,leftHang_3,rightHang_3,wepInvisibleType_0,wepInvisibleType_1,wepInvisibleType_2,wepInvisibleType_3,leftBoth_0,leftBoth_1,leftBoth_2,leftBoth_3,dispPosType_right_0,dispPosType_left_0,dispPosType_rightBoth_0,dispPosType_leftBoth_0,dispPosType_rightHang_0,dispPosType_leftHang_0,dispPosType_right_1,dispPosType_left_1,dispPosType_rightBoth_1,dispPosType_leftBoth_1,dispPosType_rightHang_1,dispPosType_leftHang_1,dispPosType_right_2,dispPosType_left_2,dispPosType_rightBoth_2,dispPosType_leftBoth_2,dispPosType_rightHang_2,dispPosType_leftHang_2,dispPosType_right_3,dispPosType_left_3,dispPosType_rightBoth_3,dispPosType_leftBoth_3,dispPosType_rightHang_3,dispPosType_leftHang_3,unknown_0x54,unknown_0x55,unknown_0x56,unknown_0x57\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%d,%d\n",
            this->paramId(i),
            param->disableParam_NT,
            param->hangPosType,
            param->isSkeletonBind,
            param->right_0,
            param->left_0,
            param->both_0,
            param->leftHang_0,
            param->rightHang_0,
            param->right_1,
            param->left_1,
            param->both_1,
            param->leftHang_1,
            param->rightHang_1,
            param->right_2,
            param->left_2,
            param->both_2,
            param->leftHang_2,
            param->rightHang_2,
            param->right_3,
            param->left_3,
            param->both_3,
            param->leftHang_3,
            param->rightHang_3,
            param->wepInvisibleType_0,
            param->wepInvisibleType_1,
            param->wepInvisibleType_2,
            param->wepInvisibleType_3,
            param->leftBoth_0,
            param->leftBoth_1,
            param->leftBoth_2,
            param->leftBoth_3,
            param->dispPosType_right_0,
            param->dispPosType_left_0,
            param->dispPosType_rightBoth_0,
            param->dispPosType_leftBoth_0,
            param->dispPosType_rightHang_0,
            param->dispPosType_leftHang_0,
            param->dispPosType_right_1,
            param->dispPosType_left_1,
            param->dispPosType_rightBoth_1,
            param->dispPosType_leftBoth_1,
            param->dispPosType_rightHang_1,
            param->dispPosType_leftHang_1,
            param->dispPosType_right_2,
            param->dispPosType_left_2,
            param->dispPosType_rightBoth_2,
            param->dispPosType_leftBoth_2,
            param->dispPosType_rightHang_2,
            param->dispPosType_leftHang_2,
            param->dispPosType_right_3,
            param->dispPosType_left_3,
            param->dispPosType_rightBoth_3,
            param->dispPosType_leftBoth_3,
            param->dispPosType_rightHang_3,
            param->dispPosType_leftHang_3,
            param->unknown_0x54,
            param->unknown_0x55,
            param->unknown_0x56,
            param->unknown_0x57
        );
    }
    fclose(f);
}

}
