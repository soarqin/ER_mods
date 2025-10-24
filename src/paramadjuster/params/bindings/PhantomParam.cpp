#include "../luabindings.h"
#include "../defs/PhantomParam.h"

namespace paramadjuster::params {

void registerPhantomParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["PhantomParam"]; usertype) return;
        auto indexerPhantomParam = state->new_usertype<ParamTableIndexer<PhantomParam>>("PhantomParamTableIndexer");
        indexerPhantomParam["count"] = sol::property(&ParamTableIndexer<PhantomParam>::count);
        indexerPhantomParam["__index"] = &ParamTableIndexer<PhantomParam>::at;
        indexerPhantomParam["id"] = &ParamTableIndexer<PhantomParam>::paramId;
        indexerPhantomParam["get"] = &ParamTableIndexer<PhantomParam>::get;
        auto utPhantomParam = state->new_usertype<PhantomParam>("PhantomParam");
        utPhantomParam["edgeColorA"] = &PhantomParam::edgeColorA;
        utPhantomParam["frontColorA"] = &PhantomParam::frontColorA;
        utPhantomParam["diffMulColorA"] = &PhantomParam::diffMulColorA;
        utPhantomParam["specMulColorA"] = &PhantomParam::specMulColorA;
        utPhantomParam["lightColorA"] = &PhantomParam::lightColorA;
        utPhantomParam["edgeColorR"] = &PhantomParam::edgeColorR;
        utPhantomParam["edgeColorG"] = &PhantomParam::edgeColorG;
        utPhantomParam["edgeColorB"] = &PhantomParam::edgeColorB;
        utPhantomParam["frontColorR"] = &PhantomParam::frontColorR;
        utPhantomParam["frontColorG"] = &PhantomParam::frontColorG;
        utPhantomParam["frontColorB"] = &PhantomParam::frontColorB;
        utPhantomParam["diffMulColorR"] = &PhantomParam::diffMulColorR;
        utPhantomParam["diffMulColorG"] = &PhantomParam::diffMulColorG;
        utPhantomParam["diffMulColorB"] = &PhantomParam::diffMulColorB;
        utPhantomParam["specMulColorR"] = &PhantomParam::specMulColorR;
        utPhantomParam["specMulColorG"] = &PhantomParam::specMulColorG;
        utPhantomParam["specMulColorB"] = &PhantomParam::specMulColorB;
        utPhantomParam["lightColorR"] = &PhantomParam::lightColorR;
        utPhantomParam["lightColorG"] = &PhantomParam::lightColorG;
        utPhantomParam["lightColorB"] = &PhantomParam::lightColorB;
        utPhantomParam["alpha"] = &PhantomParam::alpha;
        utPhantomParam["blendRate"] = &PhantomParam::blendRate;
        utPhantomParam["blendType"] = &PhantomParam::blendType;
        utPhantomParam["isEdgeSubtract"] = &PhantomParam::isEdgeSubtract;
        utPhantomParam["isFrontSubtract"] = &PhantomParam::isFrontSubtract;
        utPhantomParam["isNo2Pass"] = &PhantomParam::isNo2Pass;
        utPhantomParam["edgePower"] = &PhantomParam::edgePower;
        utPhantomParam["glowScale"] = &PhantomParam::glowScale;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<PhantomParam>>(gParamMgr.findTable(L"PhantomParam")); };
    paramsTable["PhantomParam"] = tableLoader;
}

}
