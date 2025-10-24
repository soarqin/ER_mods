#include "../luabindings.h"
#include "../defs/AttackElementCorrectParam.h"

namespace paramadjuster::params {

void registerAttackElementCorrectParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["AttackElementCorrectParam"]; usertype) return;
        auto indexerAttackElementCorrectParam = state->new_usertype<ParamTableIndexer<AttackElementCorrectParam>>("AttackElementCorrectParamTableIndexer");
        indexerAttackElementCorrectParam["count"] = sol::property(&ParamTableIndexer<AttackElementCorrectParam>::count);
        indexerAttackElementCorrectParam["__index"] = &ParamTableIndexer<AttackElementCorrectParam>::at;
        indexerAttackElementCorrectParam["id"] = &ParamTableIndexer<AttackElementCorrectParam>::paramId;
        indexerAttackElementCorrectParam["get"] = &ParamTableIndexer<AttackElementCorrectParam>::get;
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
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<AttackElementCorrectParam>>(gParamMgr.findTable(L"AttackElementCorrectParam")); };
    paramsTable["AttackElementCorrectParam"] = tableLoader;
}

}
