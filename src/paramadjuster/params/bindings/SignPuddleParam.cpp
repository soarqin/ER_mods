#include "../luabindings.h"
#include "../defs/SignPuddleParam.h"

namespace paramadjuster::params {

void registerSignPuddleParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["SignPuddleParam"]; usertype) return;
        auto indexerSignPuddleParam = state->new_usertype<ParamTableIndexer<SignPuddleParam>>("SignPuddleParamTableIndexer");
        indexerSignPuddleParam["count"] = sol::property(&ParamTableIndexer<SignPuddleParam>::count);
        indexerSignPuddleParam["__index"] = &ParamTableIndexer<SignPuddleParam>::at;
        indexerSignPuddleParam["id"] = &ParamTableIndexer<SignPuddleParam>::paramId;
        indexerSignPuddleParam["get"] = &ParamTableIndexer<SignPuddleParam>::get;
        auto utSignPuddleParam = state->new_usertype<SignPuddleParam>("SignPuddleParam");
        utSignPuddleParam["disableParam_NT"] = sol::property([](SignPuddleParam &param) -> uint8_t { return param.disableParam_NT; }, [](SignPuddleParam &param, uint8_t value) { param.disableParam_NT = value; });
        utSignPuddleParam["matchAreaId"] = &SignPuddleParam::matchAreaId;
        utSignPuddleParam["unknown_0x20"] = &SignPuddleParam::unknown_0x20;
        utSignPuddleParam["unknown_0x24"] = &SignPuddleParam::unknown_0x24;
        utSignPuddleParam["areaNo"] = &SignPuddleParam::areaNo;
        utSignPuddleParam["gridXNo"] = &SignPuddleParam::gridXNo;
        utSignPuddleParam["gridZNo"] = &SignPuddleParam::gridZNo;
        utSignPuddleParam["posX"] = &SignPuddleParam::posX;
        utSignPuddleParam["posY"] = &SignPuddleParam::posY;
        utSignPuddleParam["posZ"] = &SignPuddleParam::posZ;
        utSignPuddleParam["signSubCategoryId"] = &SignPuddleParam::signSubCategoryId;
        utSignPuddleParam["locationTextId"] = &SignPuddleParam::locationTextId;
        utSignPuddleParam["sortId"] = &SignPuddleParam::sortId;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<SignPuddleParam>>(gParamMgr.findTable(L"SignPuddleParam")); };
    paramsTable["SignPuddleParam"] = tableLoader;
}

}
