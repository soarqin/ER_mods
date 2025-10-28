#include "../luabindings.h"
#include "../defs/EquipMtrlSetParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<EquipMtrlSetParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerEquipMtrlSetParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["EquipMtrlSetParam"]; usertype) return;
        auto indexerEquipMtrlSetParam = state->new_usertype<ParamTableIndexer<EquipMtrlSetParam>>("EquipMtrlSetParamTableIndexer");
        indexerEquipMtrlSetParam["count"] = sol::property(&ParamTableIndexer<EquipMtrlSetParam>::count);
        indexerEquipMtrlSetParam["__index"] = &ParamTableIndexer<EquipMtrlSetParam>::at;
        indexerEquipMtrlSetParam["id"] = &ParamTableIndexer<EquipMtrlSetParam>::paramId;
        indexerEquipMtrlSetParam["get"] = &ParamTableIndexer<EquipMtrlSetParam>::get;
        indexerEquipMtrlSetParam["exportToCsv"] = &ParamTableIndexer<EquipMtrlSetParam>::exportToCsv;
        indexerEquipMtrlSetParam["importFromCsv"] = &ParamTableIndexer<EquipMtrlSetParam>::importFromCsv;
        auto utEquipMtrlSetParam = state->new_usertype<EquipMtrlSetParam>("EquipMtrlSetParam");
        utEquipMtrlSetParam["materialId01"] = &EquipMtrlSetParam::materialId01;
        utEquipMtrlSetParam["materialId02"] = &EquipMtrlSetParam::materialId02;
        utEquipMtrlSetParam["materialId03"] = &EquipMtrlSetParam::materialId03;
        utEquipMtrlSetParam["materialId04"] = &EquipMtrlSetParam::materialId04;
        utEquipMtrlSetParam["materialId05"] = &EquipMtrlSetParam::materialId05;
        utEquipMtrlSetParam["materialId06"] = &EquipMtrlSetParam::materialId06;
        utEquipMtrlSetParam["itemNum01"] = &EquipMtrlSetParam::itemNum01;
        utEquipMtrlSetParam["itemNum02"] = &EquipMtrlSetParam::itemNum02;
        utEquipMtrlSetParam["itemNum03"] = &EquipMtrlSetParam::itemNum03;
        utEquipMtrlSetParam["itemNum04"] = &EquipMtrlSetParam::itemNum04;
        utEquipMtrlSetParam["itemNum05"] = &EquipMtrlSetParam::itemNum05;
        utEquipMtrlSetParam["itemNum06"] = &EquipMtrlSetParam::itemNum06;
        utEquipMtrlSetParam["materialCate01"] = &EquipMtrlSetParam::materialCate01;
        utEquipMtrlSetParam["materialCate02"] = &EquipMtrlSetParam::materialCate02;
        utEquipMtrlSetParam["materialCate03"] = &EquipMtrlSetParam::materialCate03;
        utEquipMtrlSetParam["materialCate04"] = &EquipMtrlSetParam::materialCate04;
        utEquipMtrlSetParam["materialCate05"] = &EquipMtrlSetParam::materialCate05;
        utEquipMtrlSetParam["materialCate06"] = &EquipMtrlSetParam::materialCate06;
        utEquipMtrlSetParam["isDisableDispNum01"] = sol::property([](EquipMtrlSetParam &param) -> uint8_t { return param.isDisableDispNum01; }, [](EquipMtrlSetParam &param, uint8_t value) { param.isDisableDispNum01 = value; });
        utEquipMtrlSetParam["isDisableDispNum02"] = sol::property([](EquipMtrlSetParam &param) -> uint8_t { return param.isDisableDispNum02; }, [](EquipMtrlSetParam &param, uint8_t value) { param.isDisableDispNum02 = value; });
        utEquipMtrlSetParam["isDisableDispNum03"] = sol::property([](EquipMtrlSetParam &param) -> uint8_t { return param.isDisableDispNum03; }, [](EquipMtrlSetParam &param, uint8_t value) { param.isDisableDispNum03 = value; });
        utEquipMtrlSetParam["isDisableDispNum04"] = sol::property([](EquipMtrlSetParam &param) -> uint8_t { return param.isDisableDispNum04; }, [](EquipMtrlSetParam &param, uint8_t value) { param.isDisableDispNum04 = value; });
        utEquipMtrlSetParam["isDisableDispNum05"] = sol::property([](EquipMtrlSetParam &param) -> uint8_t { return param.isDisableDispNum05; }, [](EquipMtrlSetParam &param, uint8_t value) { param.isDisableDispNum05 = value; });
        utEquipMtrlSetParam["isDisableDispNum06"] = sol::property([](EquipMtrlSetParam &param) -> uint8_t { return param.isDisableDispNum06; }, [](EquipMtrlSetParam &param, uint8_t value) { param.isDisableDispNum06 = value; });
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<EquipMtrlSetParam>>(state, L"EquipMtrlSetParam");
        indexer->setFieldNames({
            {"materialId01", false},
            {"materialId02", false},
            {"materialId03", false},
            {"materialId04", false},
            {"materialId05", false},
            {"materialId06", false},
            {"itemNum01", false},
            {"itemNum02", false},
            {"itemNum03", false},
            {"itemNum04", false},
            {"itemNum05", false},
            {"itemNum06", false},
            {"materialCate01", false},
            {"materialCate02", false},
            {"materialCate03", false},
            {"materialCate04", false},
            {"materialCate05", false},
            {"materialCate06", false},
            {"isDisableDispNum01", false},
            {"isDisableDispNum02", false},
            {"isDisableDispNum03", false},
            {"isDisableDispNum04", false},
            {"isDisableDispNum05", false},
            {"isDisableDispNum06", false},
        });
        return indexer;
    };
    paramsTable["EquipMtrlSetParam"] = tableLoader;
}

template<> void ParamTableIndexer<EquipMtrlSetParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,materialId01,materialId02,materialId03,materialId04,materialId05,materialId06,itemNum01,itemNum02,itemNum03,itemNum04,itemNum05,itemNum06,materialCate01,materialCate02,materialCate03,materialCate04,materialCate05,materialCate06,isDisableDispNum01,isDisableDispNum02,isDisableDispNum03,isDisableDispNum04,isDisableDispNum05,isDisableDispNum06\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u\n",
            this->paramId(i),
            param->materialId01,
            param->materialId02,
            param->materialId03,
            param->materialId04,
            param->materialId05,
            param->materialId06,
            param->itemNum01,
            param->itemNum02,
            param->itemNum03,
            param->itemNum04,
            param->itemNum05,
            param->itemNum06,
            param->materialCate01,
            param->materialCate02,
            param->materialCate03,
            param->materialCate04,
            param->materialCate05,
            param->materialCate06,
            param->isDisableDispNum01,
            param->isDisableDispNum02,
            param->isDisableDispNum03,
            param->isDisableDispNum04,
            param->isDisableDispNum05,
            param->isDisableDispNum06
        );
    }
    fclose(f);
}

}
