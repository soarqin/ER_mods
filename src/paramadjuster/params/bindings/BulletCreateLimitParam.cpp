#include "../luabindings.h"
#include "../defs/BulletCreateLimitParam.h"

namespace paramadjuster::params {

void registerBulletCreateLimitParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["BulletCreateLimitParam"]; usertype) return;
        auto indexerBulletCreateLimitParam = state->new_usertype<ParamTableIndexer<BulletCreateLimitParam>>("BulletCreateLimitParamTableIndexer");
        indexerBulletCreateLimitParam["count"] = sol::property(&ParamTableIndexer<BulletCreateLimitParam>::count);
        indexerBulletCreateLimitParam["__index"] = &ParamTableIndexer<BulletCreateLimitParam>::at;
        indexerBulletCreateLimitParam["id"] = &ParamTableIndexer<BulletCreateLimitParam>::paramId;
        indexerBulletCreateLimitParam["get"] = &ParamTableIndexer<BulletCreateLimitParam>::get;
        auto utBulletCreateLimitParam = state->new_usertype<BulletCreateLimitParam>("BulletCreateLimitParam");
        utBulletCreateLimitParam["limitNum_byGroup"] = &BulletCreateLimitParam::limitNum_byGroup;
        utBulletCreateLimitParam["isLimitEachOwner"] = sol::property([](BulletCreateLimitParam &param) -> uint8_t { return param.isLimitEachOwner; }, [](BulletCreateLimitParam &param, uint8_t value) { param.isLimitEachOwner = value; });
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<BulletCreateLimitParam>>(gParamMgr.findTable(L"BulletCreateLimitParam")); };
    paramsTable["BulletCreateLimitParam"] = tableLoader;
}

}
