#include "../luabindings.h"
#include "../defs/PhantomParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<PhantomParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerPhantomParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["PhantomParam"]; usertype) return;
        auto indexerPhantomParam = state->new_usertype<ParamTableIndexer<PhantomParam>>("PhantomParamTableIndexer");
        indexerPhantomParam["count"] = sol::property(&ParamTableIndexer<PhantomParam>::count);
        indexerPhantomParam["__index"] = &ParamTableIndexer<PhantomParam>::at;
        indexerPhantomParam["id"] = &ParamTableIndexer<PhantomParam>::paramId;
        indexerPhantomParam["get"] = &ParamTableIndexer<PhantomParam>::get;
        indexerPhantomParam["exportToCsv"] = &ParamTableIndexer<PhantomParam>::exportToCsv;
        indexerPhantomParam["importFromCsv"] = &ParamTableIndexer<PhantomParam>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<PhantomParam>>(state, L"PhantomParam");
        indexer->setFieldNames({
            {"edgeColorA", false},
            {"frontColorA", false},
            {"diffMulColorA", false},
            {"specMulColorA", false},
            {"lightColorA", false},
            {"edgeColorR", false},
            {"edgeColorG", false},
            {"edgeColorB", false},
            {"frontColorR", false},
            {"frontColorG", false},
            {"frontColorB", false},
            {"diffMulColorR", false},
            {"diffMulColorG", false},
            {"diffMulColorB", false},
            {"specMulColorR", false},
            {"specMulColorG", false},
            {"specMulColorB", false},
            {"lightColorR", false},
            {"lightColorG", false},
            {"lightColorB", false},
            {"alpha", false},
            {"blendRate", false},
            {"blendType", false},
            {"isEdgeSubtract", false},
            {"isFrontSubtract", false},
            {"isNo2Pass", false},
            {"edgePower", false},
            {"glowScale", false},
        });
        return indexer;
    };
    paramsTable["PhantomParam"] = tableLoader;
}

template<> void ParamTableIndexer<PhantomParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,edgeColorA,frontColorA,diffMulColorA,specMulColorA,lightColorA,edgeColorR,edgeColorG,edgeColorB,frontColorR,frontColorG,frontColorB,diffMulColorR,diffMulColorG,diffMulColorB,specMulColorR,specMulColorG,specMulColorB,lightColorR,lightColorG,lightColorB,alpha,blendRate,blendType,isEdgeSubtract,isFrontSubtract,isNo2Pass,edgePower,glowScale\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g,%g,%g,%g,%g,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%g,%g,%u,%u,%u,%u,%g,%g\n",
            this->paramId(i),
            param->edgeColorA,
            param->frontColorA,
            param->diffMulColorA,
            param->specMulColorA,
            param->lightColorA,
            param->edgeColorR,
            param->edgeColorG,
            param->edgeColorB,
            param->frontColorR,
            param->frontColorG,
            param->frontColorB,
            param->diffMulColorR,
            param->diffMulColorG,
            param->diffMulColorB,
            param->specMulColorR,
            param->specMulColorG,
            param->specMulColorB,
            param->lightColorR,
            param->lightColorG,
            param->lightColorB,
            param->alpha,
            param->blendRate,
            param->blendType,
            param->isEdgeSubtract,
            param->isFrontSubtract,
            param->isNo2Pass,
            param->edgePower,
            param->glowScale
        );
    }
    fclose(f);
}

}
