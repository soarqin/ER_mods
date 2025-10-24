#include "../luabindings.h"
#include "../defs/EquipMtrlSetParam.h"

namespace paramadjuster::params {

void registerEquipMtrlSetParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["EquipMtrlSetParam"]; usertype) return;
        auto indexerEquipMtrlSetParam = state->new_usertype<ParamTableIndexer<EquipMtrlSetParam>>("EquipMtrlSetParamTableIndexer");
        indexerEquipMtrlSetParam["count"] = sol::property(&ParamTableIndexer<EquipMtrlSetParam>::count);
        indexerEquipMtrlSetParam["__index"] = &ParamTableIndexer<EquipMtrlSetParam>::at;
        indexerEquipMtrlSetParam["id"] = &ParamTableIndexer<EquipMtrlSetParam>::paramId;
        indexerEquipMtrlSetParam["get"] = &ParamTableIndexer<EquipMtrlSetParam>::get;
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
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<EquipMtrlSetParam>>(gParamMgr.findTable(L"EquipMtrlSetParam")); };
    paramsTable["EquipMtrlSetParam"] = tableLoader;
}

}
