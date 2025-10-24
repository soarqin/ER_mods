#include "../luabindings.h"
#include "../defs/SeMaterialConvertParam.h"

namespace paramadjuster::params {

void registerSeMaterialConvertParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["SeMaterialConvertParam"]; usertype) return;
        auto indexerSeMaterialConvertParam = state->new_usertype<ParamTableIndexer<SeMaterialConvertParam>>("SeMaterialConvertParamTableIndexer");
        indexerSeMaterialConvertParam["count"] = sol::property(&ParamTableIndexer<SeMaterialConvertParam>::count);
        indexerSeMaterialConvertParam["__index"] = &ParamTableIndexer<SeMaterialConvertParam>::at;
        indexerSeMaterialConvertParam["id"] = &ParamTableIndexer<SeMaterialConvertParam>::paramId;
        indexerSeMaterialConvertParam["get"] = &ParamTableIndexer<SeMaterialConvertParam>::get;
        auto utSeMaterialConvertParam = state->new_usertype<SeMaterialConvertParam>("SeMaterialConvertParam");
        utSeMaterialConvertParam["seMaterialId"] = &SeMaterialConvertParam::seMaterialId;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<SeMaterialConvertParam>>(gParamMgr.findTable(L"SeMaterialConvertParam")); };
    paramsTable["SeMaterialConvertParam"] = tableLoader;
}

}
