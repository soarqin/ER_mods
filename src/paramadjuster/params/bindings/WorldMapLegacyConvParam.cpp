#include "../luabindings.h"
#include "../defs/WorldMapLegacyConvParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<WorldMapLegacyConvParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerWorldMapLegacyConvParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WorldMapLegacyConvParam"]; usertype) return;
        auto indexerWorldMapLegacyConvParam = state->new_usertype<ParamTableIndexer<WorldMapLegacyConvParam>>("WorldMapLegacyConvParamTableIndexer");
        indexerWorldMapLegacyConvParam["count"] = sol::property(&ParamTableIndexer<WorldMapLegacyConvParam>::count);
        indexerWorldMapLegacyConvParam["__index"] = &ParamTableIndexer<WorldMapLegacyConvParam>::at;
        indexerWorldMapLegacyConvParam["id"] = &ParamTableIndexer<WorldMapLegacyConvParam>::paramId;
        indexerWorldMapLegacyConvParam["get"] = &ParamTableIndexer<WorldMapLegacyConvParam>::get;
        indexerWorldMapLegacyConvParam["exportToCsv"] = &ParamTableIndexer<WorldMapLegacyConvParam>::exportToCsv;
        indexerWorldMapLegacyConvParam["importFromCsv"] = &ParamTableIndexer<WorldMapLegacyConvParam>::importFromCsv;
        auto utWorldMapLegacyConvParam = state->new_usertype<WorldMapLegacyConvParam>("WorldMapLegacyConvParam");
        utWorldMapLegacyConvParam["disableParam_NT"] = sol::property([](WorldMapLegacyConvParam &param) -> uint8_t { return param.disableParam_NT; }, [](WorldMapLegacyConvParam &param, uint8_t value) { param.disableParam_NT = value; });
        utWorldMapLegacyConvParam["srcAreaNo"] = &WorldMapLegacyConvParam::srcAreaNo;
        utWorldMapLegacyConvParam["srcGridXNo"] = &WorldMapLegacyConvParam::srcGridXNo;
        utWorldMapLegacyConvParam["srcGridZNo"] = &WorldMapLegacyConvParam::srcGridZNo;
        utWorldMapLegacyConvParam["srcPosX"] = &WorldMapLegacyConvParam::srcPosX;
        utWorldMapLegacyConvParam["srcPosY"] = &WorldMapLegacyConvParam::srcPosY;
        utWorldMapLegacyConvParam["srcPosZ"] = &WorldMapLegacyConvParam::srcPosZ;
        utWorldMapLegacyConvParam["dstAreaNo"] = &WorldMapLegacyConvParam::dstAreaNo;
        utWorldMapLegacyConvParam["dstGridXNo"] = &WorldMapLegacyConvParam::dstGridXNo;
        utWorldMapLegacyConvParam["dstGridZNo"] = &WorldMapLegacyConvParam::dstGridZNo;
        utWorldMapLegacyConvParam["dstPosX"] = &WorldMapLegacyConvParam::dstPosX;
        utWorldMapLegacyConvParam["dstPosY"] = &WorldMapLegacyConvParam::dstPosY;
        utWorldMapLegacyConvParam["dstPosZ"] = &WorldMapLegacyConvParam::dstPosZ;
        utWorldMapLegacyConvParam["isBasePoint"] = sol::property([](WorldMapLegacyConvParam &param) -> uint8_t { return param.isBasePoint; }, [](WorldMapLegacyConvParam &param, uint8_t value) { param.isBasePoint = value; });
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<WorldMapLegacyConvParam>>(state, L"WorldMapLegacyConvParam");
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"srcAreaNo", false},
            {"srcGridXNo", false},
            {"srcGridZNo", false},
            {"srcPosX", false},
            {"srcPosY", false},
            {"srcPosZ", false},
            {"dstAreaNo", false},
            {"dstGridXNo", false},
            {"dstGridZNo", false},
            {"dstPosX", false},
            {"dstPosY", false},
            {"dstPosZ", false},
            {"isBasePoint", false},
        });
        return indexer;
    };
    paramsTable["WorldMapLegacyConvParam"] = tableLoader;
}

template<> void ParamTableIndexer<WorldMapLegacyConvParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,srcAreaNo,srcGridXNo,srcGridZNo,srcPosX,srcPosY,srcPosZ,dstAreaNo,dstGridXNo,dstGridZNo,dstPosX,dstPosY,dstPosZ,isBasePoint\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%u,%g,%g,%g,%u,%u,%u,%g,%g,%g,%u\n",
            this->paramId(i),
            param->disableParam_NT,
            param->srcAreaNo,
            param->srcGridXNo,
            param->srcGridZNo,
            param->srcPosX,
            param->srcPosY,
            param->srcPosZ,
            param->dstAreaNo,
            param->dstGridXNo,
            param->dstGridZNo,
            param->dstPosX,
            param->dstPosY,
            param->dstPosZ,
            param->isBasePoint
        );
    }
    fclose(f);
}

}
