#include "../luabindings.h"
#include "../defs/AttackElementCorrectParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<AttackElementCorrectParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerAttackElementCorrectParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["AttackElementCorrectParam"]; usertype) return;
        auto indexerAttackElementCorrectParam = state->new_usertype<ParamTableIndexer<AttackElementCorrectParam>>("AttackElementCorrectParamTableIndexer");
        indexerAttackElementCorrectParam["count"] = sol::property(&ParamTableIndexer<AttackElementCorrectParam>::count);
        indexerAttackElementCorrectParam["__index"] = &ParamTableIndexer<AttackElementCorrectParam>::at;
        indexerAttackElementCorrectParam["id"] = &ParamTableIndexer<AttackElementCorrectParam>::paramId;
        indexerAttackElementCorrectParam["get"] = &ParamTableIndexer<AttackElementCorrectParam>::get;
        indexerAttackElementCorrectParam["exportToCsv"] = &ParamTableIndexer<AttackElementCorrectParam>::exportToCsv;
        indexerAttackElementCorrectParam["importFromCsv"] = &ParamTableIndexer<AttackElementCorrectParam>::importFromCsv;
        auto utAttackElementCorrectParam = state->new_usertype<AttackElementCorrectParam>("AttackElementCorrectParam");
        utAttackElementCorrectParam["isStrengthCorrect_byPhysics"] = sol::property([](AttackElementCorrectParam &param) -> uint8_t { return param.isStrengthCorrect_byPhysics; }, [](AttackElementCorrectParam &param, uint8_t value) { param.isStrengthCorrect_byPhysics = value; });
        utAttackElementCorrectParam["isDexterityCorrect_byPhysics"] = sol::property([](AttackElementCorrectParam &param) -> uint8_t { return param.isDexterityCorrect_byPhysics; }, [](AttackElementCorrectParam &param, uint8_t value) { param.isDexterityCorrect_byPhysics = value; });
        utAttackElementCorrectParam["isMagicCorrect_byPhysics"] = sol::property([](AttackElementCorrectParam &param) -> uint8_t { return param.isMagicCorrect_byPhysics; }, [](AttackElementCorrectParam &param, uint8_t value) { param.isMagicCorrect_byPhysics = value; });
        utAttackElementCorrectParam["isFaithCorrect_byPhysics"] = sol::property([](AttackElementCorrectParam &param) -> uint8_t { return param.isFaithCorrect_byPhysics; }, [](AttackElementCorrectParam &param, uint8_t value) { param.isFaithCorrect_byPhysics = value; });
        utAttackElementCorrectParam["isLuckCorrect_byPhysics"] = sol::property([](AttackElementCorrectParam &param) -> uint8_t { return param.isLuckCorrect_byPhysics; }, [](AttackElementCorrectParam &param, uint8_t value) { param.isLuckCorrect_byPhysics = value; });
        utAttackElementCorrectParam["isStrengthCorrect_byMagic"] = sol::property([](AttackElementCorrectParam &param) -> uint8_t { return param.isStrengthCorrect_byMagic; }, [](AttackElementCorrectParam &param, uint8_t value) { param.isStrengthCorrect_byMagic = value; });
        utAttackElementCorrectParam["isDexterityCorrect_byMagic"] = sol::property([](AttackElementCorrectParam &param) -> uint8_t { return param.isDexterityCorrect_byMagic; }, [](AttackElementCorrectParam &param, uint8_t value) { param.isDexterityCorrect_byMagic = value; });
        utAttackElementCorrectParam["isMagicCorrect_byMagic"] = sol::property([](AttackElementCorrectParam &param) -> uint8_t { return param.isMagicCorrect_byMagic; }, [](AttackElementCorrectParam &param, uint8_t value) { param.isMagicCorrect_byMagic = value; });
        utAttackElementCorrectParam["isFaithCorrect_byMagic"] = sol::property([](AttackElementCorrectParam &param) -> uint8_t { return param.isFaithCorrect_byMagic; }, [](AttackElementCorrectParam &param, uint8_t value) { param.isFaithCorrect_byMagic = value; });
        utAttackElementCorrectParam["isLuckCorrect_byMagic"] = sol::property([](AttackElementCorrectParam &param) -> uint8_t { return param.isLuckCorrect_byMagic; }, [](AttackElementCorrectParam &param, uint8_t value) { param.isLuckCorrect_byMagic = value; });
        utAttackElementCorrectParam["isStrengthCorrect_byFire"] = sol::property([](AttackElementCorrectParam &param) -> uint8_t { return param.isStrengthCorrect_byFire; }, [](AttackElementCorrectParam &param, uint8_t value) { param.isStrengthCorrect_byFire = value; });
        utAttackElementCorrectParam["isDexterityCorrect_byFire"] = sol::property([](AttackElementCorrectParam &param) -> uint8_t { return param.isDexterityCorrect_byFire; }, [](AttackElementCorrectParam &param, uint8_t value) { param.isDexterityCorrect_byFire = value; });
        utAttackElementCorrectParam["isMagicCorrect_byFire"] = sol::property([](AttackElementCorrectParam &param) -> uint8_t { return param.isMagicCorrect_byFire; }, [](AttackElementCorrectParam &param, uint8_t value) { param.isMagicCorrect_byFire = value; });
        utAttackElementCorrectParam["isFaithCorrect_byFire"] = sol::property([](AttackElementCorrectParam &param) -> uint8_t { return param.isFaithCorrect_byFire; }, [](AttackElementCorrectParam &param, uint8_t value) { param.isFaithCorrect_byFire = value; });
        utAttackElementCorrectParam["isLuckCorrect_byFire"] = sol::property([](AttackElementCorrectParam &param) -> uint8_t { return param.isLuckCorrect_byFire; }, [](AttackElementCorrectParam &param, uint8_t value) { param.isLuckCorrect_byFire = value; });
        utAttackElementCorrectParam["isStrengthCorrect_byThunder"] = sol::property([](AttackElementCorrectParam &param) -> uint8_t { return param.isStrengthCorrect_byThunder; }, [](AttackElementCorrectParam &param, uint8_t value) { param.isStrengthCorrect_byThunder = value; });
        utAttackElementCorrectParam["isDexterityCorrect_byThunder"] = sol::property([](AttackElementCorrectParam &param) -> uint8_t { return param.isDexterityCorrect_byThunder; }, [](AttackElementCorrectParam &param, uint8_t value) { param.isDexterityCorrect_byThunder = value; });
        utAttackElementCorrectParam["isMagicCorrect_byThunder"] = sol::property([](AttackElementCorrectParam &param) -> uint8_t { return param.isMagicCorrect_byThunder; }, [](AttackElementCorrectParam &param, uint8_t value) { param.isMagicCorrect_byThunder = value; });
        utAttackElementCorrectParam["isFaithCorrect_byThunder"] = sol::property([](AttackElementCorrectParam &param) -> uint8_t { return param.isFaithCorrect_byThunder; }, [](AttackElementCorrectParam &param, uint8_t value) { param.isFaithCorrect_byThunder = value; });
        utAttackElementCorrectParam["isLuckCorrect_byThunder"] = sol::property([](AttackElementCorrectParam &param) -> uint8_t { return param.isLuckCorrect_byThunder; }, [](AttackElementCorrectParam &param, uint8_t value) { param.isLuckCorrect_byThunder = value; });
        utAttackElementCorrectParam["isStrengthCorrect_byDark"] = sol::property([](AttackElementCorrectParam &param) -> uint8_t { return param.isStrengthCorrect_byDark; }, [](AttackElementCorrectParam &param, uint8_t value) { param.isStrengthCorrect_byDark = value; });
        utAttackElementCorrectParam["isDexterityCorrect_byDark"] = sol::property([](AttackElementCorrectParam &param) -> uint8_t { return param.isDexterityCorrect_byDark; }, [](AttackElementCorrectParam &param, uint8_t value) { param.isDexterityCorrect_byDark = value; });
        utAttackElementCorrectParam["isMagicCorrect_byDark"] = sol::property([](AttackElementCorrectParam &param) -> uint8_t { return param.isMagicCorrect_byDark; }, [](AttackElementCorrectParam &param, uint8_t value) { param.isMagicCorrect_byDark = value; });
        utAttackElementCorrectParam["isFaithCorrect_byDark"] = sol::property([](AttackElementCorrectParam &param) -> uint8_t { return param.isFaithCorrect_byDark; }, [](AttackElementCorrectParam &param, uint8_t value) { param.isFaithCorrect_byDark = value; });
        utAttackElementCorrectParam["isLuckCorrect_byDark"] = sol::property([](AttackElementCorrectParam &param) -> uint8_t { return param.isLuckCorrect_byDark; }, [](AttackElementCorrectParam &param, uint8_t value) { param.isLuckCorrect_byDark = value; });
        utAttackElementCorrectParam["overwriteStrengthCorrectRate_byPhysics"] = &AttackElementCorrectParam::overwriteStrengthCorrectRate_byPhysics;
        utAttackElementCorrectParam["overwriteDexterityCorrectRate_byPhysics"] = &AttackElementCorrectParam::overwriteDexterityCorrectRate_byPhysics;
        utAttackElementCorrectParam["overwriteMagicCorrectRate_byPhysics"] = &AttackElementCorrectParam::overwriteMagicCorrectRate_byPhysics;
        utAttackElementCorrectParam["overwriteFaithCorrectRate_byPhysics"] = &AttackElementCorrectParam::overwriteFaithCorrectRate_byPhysics;
        utAttackElementCorrectParam["overwriteLuckCorrectRate_byPhysics"] = &AttackElementCorrectParam::overwriteLuckCorrectRate_byPhysics;
        utAttackElementCorrectParam["overwriteStrengthCorrectRate_byMagic"] = &AttackElementCorrectParam::overwriteStrengthCorrectRate_byMagic;
        utAttackElementCorrectParam["overwriteDexterityCorrectRate_byMagic"] = &AttackElementCorrectParam::overwriteDexterityCorrectRate_byMagic;
        utAttackElementCorrectParam["overwriteMagicCorrectRate_byMagic"] = &AttackElementCorrectParam::overwriteMagicCorrectRate_byMagic;
        utAttackElementCorrectParam["overwriteFaithCorrectRate_byMagic"] = &AttackElementCorrectParam::overwriteFaithCorrectRate_byMagic;
        utAttackElementCorrectParam["overwriteLuckCorrectRate_byMagic"] = &AttackElementCorrectParam::overwriteLuckCorrectRate_byMagic;
        utAttackElementCorrectParam["overwriteStrengthCorrectRate_byFire"] = &AttackElementCorrectParam::overwriteStrengthCorrectRate_byFire;
        utAttackElementCorrectParam["overwriteDexterityCorrectRate_byFire"] = &AttackElementCorrectParam::overwriteDexterityCorrectRate_byFire;
        utAttackElementCorrectParam["overwriteMagicCorrectRate_byFire"] = &AttackElementCorrectParam::overwriteMagicCorrectRate_byFire;
        utAttackElementCorrectParam["overwriteFaithCorrectRate_byFire"] = &AttackElementCorrectParam::overwriteFaithCorrectRate_byFire;
        utAttackElementCorrectParam["overwriteLuckCorrectRate_byFire"] = &AttackElementCorrectParam::overwriteLuckCorrectRate_byFire;
        utAttackElementCorrectParam["overwriteStrengthCorrectRate_byThunder"] = &AttackElementCorrectParam::overwriteStrengthCorrectRate_byThunder;
        utAttackElementCorrectParam["overwriteDexterityCorrectRate_byThunder"] = &AttackElementCorrectParam::overwriteDexterityCorrectRate_byThunder;
        utAttackElementCorrectParam["overwriteMagicCorrectRate_byThunder"] = &AttackElementCorrectParam::overwriteMagicCorrectRate_byThunder;
        utAttackElementCorrectParam["overwriteFaithCorrectRate_byThunder"] = &AttackElementCorrectParam::overwriteFaithCorrectRate_byThunder;
        utAttackElementCorrectParam["overwriteLuckCorrectRate_byThunder"] = &AttackElementCorrectParam::overwriteLuckCorrectRate_byThunder;
        utAttackElementCorrectParam["overwriteStrengthCorrectRate_byDark"] = &AttackElementCorrectParam::overwriteStrengthCorrectRate_byDark;
        utAttackElementCorrectParam["overwriteDexterityCorrectRate_byDark"] = &AttackElementCorrectParam::overwriteDexterityCorrectRate_byDark;
        utAttackElementCorrectParam["overwriteMagicCorrectRate_byDark"] = &AttackElementCorrectParam::overwriteMagicCorrectRate_byDark;
        utAttackElementCorrectParam["overwriteFaithCorrectRate_byDark"] = &AttackElementCorrectParam::overwriteFaithCorrectRate_byDark;
        utAttackElementCorrectParam["overwriteLuckCorrectRate_byDark"] = &AttackElementCorrectParam::overwriteLuckCorrectRate_byDark;
        utAttackElementCorrectParam["InfluenceStrengthCorrectRate_byPhysics"] = &AttackElementCorrectParam::InfluenceStrengthCorrectRate_byPhysics;
        utAttackElementCorrectParam["InfluenceDexterityCorrectRate_byPhysics"] = &AttackElementCorrectParam::InfluenceDexterityCorrectRate_byPhysics;
        utAttackElementCorrectParam["InfluenceMagicCorrectRate_byPhysics"] = &AttackElementCorrectParam::InfluenceMagicCorrectRate_byPhysics;
        utAttackElementCorrectParam["InfluenceFaithCorrectRate_byPhysics"] = &AttackElementCorrectParam::InfluenceFaithCorrectRate_byPhysics;
        utAttackElementCorrectParam["InfluenceLuckCorrectRate_byPhysics"] = &AttackElementCorrectParam::InfluenceLuckCorrectRate_byPhysics;
        utAttackElementCorrectParam["InfluenceStrengthCorrectRate_byMagic"] = &AttackElementCorrectParam::InfluenceStrengthCorrectRate_byMagic;
        utAttackElementCorrectParam["InfluenceDexterityCorrectRate_byMagic"] = &AttackElementCorrectParam::InfluenceDexterityCorrectRate_byMagic;
        utAttackElementCorrectParam["InfluenceMagicCorrectRate_byMagic"] = &AttackElementCorrectParam::InfluenceMagicCorrectRate_byMagic;
        utAttackElementCorrectParam["InfluenceFaithCorrectRate_byMagic"] = &AttackElementCorrectParam::InfluenceFaithCorrectRate_byMagic;
        utAttackElementCorrectParam["InfluenceLuckCorrectRate_byMagic"] = &AttackElementCorrectParam::InfluenceLuckCorrectRate_byMagic;
        utAttackElementCorrectParam["InfluenceStrengthCorrectRate_byFire"] = &AttackElementCorrectParam::InfluenceStrengthCorrectRate_byFire;
        utAttackElementCorrectParam["InfluenceDexterityCorrectRate_byFire"] = &AttackElementCorrectParam::InfluenceDexterityCorrectRate_byFire;
        utAttackElementCorrectParam["InfluenceMagicCorrectRate_byFire"] = &AttackElementCorrectParam::InfluenceMagicCorrectRate_byFire;
        utAttackElementCorrectParam["InfluenceFaithCorrectRate_byFire"] = &AttackElementCorrectParam::InfluenceFaithCorrectRate_byFire;
        utAttackElementCorrectParam["InfluenceLuckCorrectRate_byFire"] = &AttackElementCorrectParam::InfluenceLuckCorrectRate_byFire;
        utAttackElementCorrectParam["InfluenceStrengthCorrectRate_byThunder"] = &AttackElementCorrectParam::InfluenceStrengthCorrectRate_byThunder;
        utAttackElementCorrectParam["InfluenceDexterityCorrectRate_byThunder"] = &AttackElementCorrectParam::InfluenceDexterityCorrectRate_byThunder;
        utAttackElementCorrectParam["InfluenceMagicCorrectRate_byThunder"] = &AttackElementCorrectParam::InfluenceMagicCorrectRate_byThunder;
        utAttackElementCorrectParam["InfluenceFaithCorrectRate_byThunder"] = &AttackElementCorrectParam::InfluenceFaithCorrectRate_byThunder;
        utAttackElementCorrectParam["InfluenceLuckCorrectRate_byThunder"] = &AttackElementCorrectParam::InfluenceLuckCorrectRate_byThunder;
        utAttackElementCorrectParam["InfluenceStrengthCorrectRate_byDark"] = &AttackElementCorrectParam::InfluenceStrengthCorrectRate_byDark;
        utAttackElementCorrectParam["InfluenceDexterityCorrectRate_byDark"] = &AttackElementCorrectParam::InfluenceDexterityCorrectRate_byDark;
        utAttackElementCorrectParam["InfluenceMagicCorrectRate_byDark"] = &AttackElementCorrectParam::InfluenceMagicCorrectRate_byDark;
        utAttackElementCorrectParam["InfluenceFaithCorrectRate_byDark"] = &AttackElementCorrectParam::InfluenceFaithCorrectRate_byDark;
        utAttackElementCorrectParam["InfluenceLuckCorrectRate_byDark"] = &AttackElementCorrectParam::InfluenceLuckCorrectRate_byDark;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<AttackElementCorrectParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<AttackElementCorrectParam>>(nullptr);
        indexer->setFieldNames({
            {"isStrengthCorrect_byPhysics", false},
            {"isDexterityCorrect_byPhysics", false},
            {"isMagicCorrect_byPhysics", false},
            {"isFaithCorrect_byPhysics", false},
            {"isLuckCorrect_byPhysics", false},
            {"isStrengthCorrect_byMagic", false},
            {"isDexterityCorrect_byMagic", false},
            {"isMagicCorrect_byMagic", false},
            {"isFaithCorrect_byMagic", false},
            {"isLuckCorrect_byMagic", false},
            {"isStrengthCorrect_byFire", false},
            {"isDexterityCorrect_byFire", false},
            {"isMagicCorrect_byFire", false},
            {"isFaithCorrect_byFire", false},
            {"isLuckCorrect_byFire", false},
            {"isStrengthCorrect_byThunder", false},
            {"isDexterityCorrect_byThunder", false},
            {"isMagicCorrect_byThunder", false},
            {"isFaithCorrect_byThunder", false},
            {"isLuckCorrect_byThunder", false},
            {"isStrengthCorrect_byDark", false},
            {"isDexterityCorrect_byDark", false},
            {"isMagicCorrect_byDark", false},
            {"isFaithCorrect_byDark", false},
            {"isLuckCorrect_byDark", false},
            {"overwriteStrengthCorrectRate_byPhysics", false},
            {"overwriteDexterityCorrectRate_byPhysics", false},
            {"overwriteMagicCorrectRate_byPhysics", false},
            {"overwriteFaithCorrectRate_byPhysics", false},
            {"overwriteLuckCorrectRate_byPhysics", false},
            {"overwriteStrengthCorrectRate_byMagic", false},
            {"overwriteDexterityCorrectRate_byMagic", false},
            {"overwriteMagicCorrectRate_byMagic", false},
            {"overwriteFaithCorrectRate_byMagic", false},
            {"overwriteLuckCorrectRate_byMagic", false},
            {"overwriteStrengthCorrectRate_byFire", false},
            {"overwriteDexterityCorrectRate_byFire", false},
            {"overwriteMagicCorrectRate_byFire", false},
            {"overwriteFaithCorrectRate_byFire", false},
            {"overwriteLuckCorrectRate_byFire", false},
            {"overwriteStrengthCorrectRate_byThunder", false},
            {"overwriteDexterityCorrectRate_byThunder", false},
            {"overwriteMagicCorrectRate_byThunder", false},
            {"overwriteFaithCorrectRate_byThunder", false},
            {"overwriteLuckCorrectRate_byThunder", false},
            {"overwriteStrengthCorrectRate_byDark", false},
            {"overwriteDexterityCorrectRate_byDark", false},
            {"overwriteMagicCorrectRate_byDark", false},
            {"overwriteFaithCorrectRate_byDark", false},
            {"overwriteLuckCorrectRate_byDark", false},
            {"InfluenceStrengthCorrectRate_byPhysics", false},
            {"InfluenceDexterityCorrectRate_byPhysics", false},
            {"InfluenceMagicCorrectRate_byPhysics", false},
            {"InfluenceFaithCorrectRate_byPhysics", false},
            {"InfluenceLuckCorrectRate_byPhysics", false},
            {"InfluenceStrengthCorrectRate_byMagic", false},
            {"InfluenceDexterityCorrectRate_byMagic", false},
            {"InfluenceMagicCorrectRate_byMagic", false},
            {"InfluenceFaithCorrectRate_byMagic", false},
            {"InfluenceLuckCorrectRate_byMagic", false},
            {"InfluenceStrengthCorrectRate_byFire", false},
            {"InfluenceDexterityCorrectRate_byFire", false},
            {"InfluenceMagicCorrectRate_byFire", false},
            {"InfluenceFaithCorrectRate_byFire", false},
            {"InfluenceLuckCorrectRate_byFire", false},
            {"InfluenceStrengthCorrectRate_byThunder", false},
            {"InfluenceDexterityCorrectRate_byThunder", false},
            {"InfluenceMagicCorrectRate_byThunder", false},
            {"InfluenceFaithCorrectRate_byThunder", false},
            {"InfluenceLuckCorrectRate_byThunder", false},
            {"InfluenceStrengthCorrectRate_byDark", false},
            {"InfluenceDexterityCorrectRate_byDark", false},
            {"InfluenceMagicCorrectRate_byDark", false},
            {"InfluenceFaithCorrectRate_byDark", false},
            {"InfluenceLuckCorrectRate_byDark", false},
        });
        return indexer;
    };
    paramsTable["AttackElementCorrectParam"] = [tableLoader]() -> auto { return tableLoader(L"AttackElementCorrectParam"); };
}

template<> void ParamTableIndexer<AttackElementCorrectParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,isStrengthCorrect_byPhysics,isDexterityCorrect_byPhysics,isMagicCorrect_byPhysics,isFaithCorrect_byPhysics,isLuckCorrect_byPhysics,isStrengthCorrect_byMagic,isDexterityCorrect_byMagic,isMagicCorrect_byMagic,isFaithCorrect_byMagic,isLuckCorrect_byMagic,isStrengthCorrect_byFire,isDexterityCorrect_byFire,isMagicCorrect_byFire,isFaithCorrect_byFire,isLuckCorrect_byFire,isStrengthCorrect_byThunder,isDexterityCorrect_byThunder,isMagicCorrect_byThunder,isFaithCorrect_byThunder,isLuckCorrect_byThunder,isStrengthCorrect_byDark,isDexterityCorrect_byDark,isMagicCorrect_byDark,isFaithCorrect_byDark,isLuckCorrect_byDark,overwriteStrengthCorrectRate_byPhysics,overwriteDexterityCorrectRate_byPhysics,overwriteMagicCorrectRate_byPhysics,overwriteFaithCorrectRate_byPhysics,overwriteLuckCorrectRate_byPhysics,overwriteStrengthCorrectRate_byMagic,overwriteDexterityCorrectRate_byMagic,overwriteMagicCorrectRate_byMagic,overwriteFaithCorrectRate_byMagic,overwriteLuckCorrectRate_byMagic,overwriteStrengthCorrectRate_byFire,overwriteDexterityCorrectRate_byFire,overwriteMagicCorrectRate_byFire,overwriteFaithCorrectRate_byFire,overwriteLuckCorrectRate_byFire,overwriteStrengthCorrectRate_byThunder,overwriteDexterityCorrectRate_byThunder,overwriteMagicCorrectRate_byThunder,overwriteFaithCorrectRate_byThunder,overwriteLuckCorrectRate_byThunder,overwriteStrengthCorrectRate_byDark,overwriteDexterityCorrectRate_byDark,overwriteMagicCorrectRate_byDark,overwriteFaithCorrectRate_byDark,overwriteLuckCorrectRate_byDark,InfluenceStrengthCorrectRate_byPhysics,InfluenceDexterityCorrectRate_byPhysics,InfluenceMagicCorrectRate_byPhysics,InfluenceFaithCorrectRate_byPhysics,InfluenceLuckCorrectRate_byPhysics,InfluenceStrengthCorrectRate_byMagic,InfluenceDexterityCorrectRate_byMagic,InfluenceMagicCorrectRate_byMagic,InfluenceFaithCorrectRate_byMagic,InfluenceLuckCorrectRate_byMagic,InfluenceStrengthCorrectRate_byFire,InfluenceDexterityCorrectRate_byFire,InfluenceMagicCorrectRate_byFire,InfluenceFaithCorrectRate_byFire,InfluenceLuckCorrectRate_byFire,InfluenceStrengthCorrectRate_byThunder,InfluenceDexterityCorrectRate_byThunder,InfluenceMagicCorrectRate_byThunder,InfluenceFaithCorrectRate_byThunder,InfluenceLuckCorrectRate_byThunder,InfluenceStrengthCorrectRate_byDark,InfluenceDexterityCorrectRate_byDark,InfluenceMagicCorrectRate_byDark,InfluenceFaithCorrectRate_byDark,InfluenceLuckCorrectRate_byDark\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",
            this->paramId(i),
            param->isStrengthCorrect_byPhysics,
            param->isDexterityCorrect_byPhysics,
            param->isMagicCorrect_byPhysics,
            param->isFaithCorrect_byPhysics,
            param->isLuckCorrect_byPhysics,
            param->isStrengthCorrect_byMagic,
            param->isDexterityCorrect_byMagic,
            param->isMagicCorrect_byMagic,
            param->isFaithCorrect_byMagic,
            param->isLuckCorrect_byMagic,
            param->isStrengthCorrect_byFire,
            param->isDexterityCorrect_byFire,
            param->isMagicCorrect_byFire,
            param->isFaithCorrect_byFire,
            param->isLuckCorrect_byFire,
            param->isStrengthCorrect_byThunder,
            param->isDexterityCorrect_byThunder,
            param->isMagicCorrect_byThunder,
            param->isFaithCorrect_byThunder,
            param->isLuckCorrect_byThunder,
            param->isStrengthCorrect_byDark,
            param->isDexterityCorrect_byDark,
            param->isMagicCorrect_byDark,
            param->isFaithCorrect_byDark,
            param->isLuckCorrect_byDark,
            param->overwriteStrengthCorrectRate_byPhysics,
            param->overwriteDexterityCorrectRate_byPhysics,
            param->overwriteMagicCorrectRate_byPhysics,
            param->overwriteFaithCorrectRate_byPhysics,
            param->overwriteLuckCorrectRate_byPhysics,
            param->overwriteStrengthCorrectRate_byMagic,
            param->overwriteDexterityCorrectRate_byMagic,
            param->overwriteMagicCorrectRate_byMagic,
            param->overwriteFaithCorrectRate_byMagic,
            param->overwriteLuckCorrectRate_byMagic,
            param->overwriteStrengthCorrectRate_byFire,
            param->overwriteDexterityCorrectRate_byFire,
            param->overwriteMagicCorrectRate_byFire,
            param->overwriteFaithCorrectRate_byFire,
            param->overwriteLuckCorrectRate_byFire,
            param->overwriteStrengthCorrectRate_byThunder,
            param->overwriteDexterityCorrectRate_byThunder,
            param->overwriteMagicCorrectRate_byThunder,
            param->overwriteFaithCorrectRate_byThunder,
            param->overwriteLuckCorrectRate_byThunder,
            param->overwriteStrengthCorrectRate_byDark,
            param->overwriteDexterityCorrectRate_byDark,
            param->overwriteMagicCorrectRate_byDark,
            param->overwriteFaithCorrectRate_byDark,
            param->overwriteLuckCorrectRate_byDark,
            param->InfluenceStrengthCorrectRate_byPhysics,
            param->InfluenceDexterityCorrectRate_byPhysics,
            param->InfluenceMagicCorrectRate_byPhysics,
            param->InfluenceFaithCorrectRate_byPhysics,
            param->InfluenceLuckCorrectRate_byPhysics,
            param->InfluenceStrengthCorrectRate_byMagic,
            param->InfluenceDexterityCorrectRate_byMagic,
            param->InfluenceMagicCorrectRate_byMagic,
            param->InfluenceFaithCorrectRate_byMagic,
            param->InfluenceLuckCorrectRate_byMagic,
            param->InfluenceStrengthCorrectRate_byFire,
            param->InfluenceDexterityCorrectRate_byFire,
            param->InfluenceMagicCorrectRate_byFire,
            param->InfluenceFaithCorrectRate_byFire,
            param->InfluenceLuckCorrectRate_byFire,
            param->InfluenceStrengthCorrectRate_byThunder,
            param->InfluenceDexterityCorrectRate_byThunder,
            param->InfluenceMagicCorrectRate_byThunder,
            param->InfluenceFaithCorrectRate_byThunder,
            param->InfluenceLuckCorrectRate_byThunder,
            param->InfluenceStrengthCorrectRate_byDark,
            param->InfluenceDexterityCorrectRate_byDark,
            param->InfluenceMagicCorrectRate_byDark,
            param->InfluenceFaithCorrectRate_byDark,
            param->InfluenceLuckCorrectRate_byDark
        );
    }
    fclose(f);
}

}
