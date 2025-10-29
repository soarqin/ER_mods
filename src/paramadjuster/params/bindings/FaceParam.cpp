#include "../luabindings.h"
#include "../defs/FaceParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<FaceParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerFaceParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["FaceParam"]; usertype) return;
        auto indexerFaceParam = state->new_usertype<ParamTableIndexer<FaceParam>>("FaceParamTableIndexer");
        indexerFaceParam["count"] = sol::property(&ParamTableIndexer<FaceParam>::count);
        indexerFaceParam["__index"] = &ParamTableIndexer<FaceParam>::at;
        indexerFaceParam["id"] = &ParamTableIndexer<FaceParam>::paramId;
        indexerFaceParam["get"] = &ParamTableIndexer<FaceParam>::get;
        indexerFaceParam["exportToCsv"] = &ParamTableIndexer<FaceParam>::exportToCsv;
        indexerFaceParam["importFromCsv"] = &ParamTableIndexer<FaceParam>::importFromCsv;
        auto utFaceParam = state->new_usertype<FaceParam>("FaceParam");
        utFaceParam["face_partsId"] = &FaceParam::face_partsId;
        utFaceParam["skin_color_R"] = &FaceParam::skin_color_R;
        utFaceParam["skin_color_G"] = &FaceParam::skin_color_G;
        utFaceParam["skin_color_B"] = &FaceParam::skin_color_B;
        utFaceParam["skin_gloss"] = &FaceParam::skin_gloss;
        utFaceParam["skin_pores"] = &FaceParam::skin_pores;
        utFaceParam["face_beard"] = &FaceParam::face_beard;
        utFaceParam["face_aroundEye"] = &FaceParam::face_aroundEye;
        utFaceParam["face_aroundEyeColor_R"] = &FaceParam::face_aroundEyeColor_R;
        utFaceParam["face_aroundEyeColor_G"] = &FaceParam::face_aroundEyeColor_G;
        utFaceParam["face_aroundEyeColor_B"] = &FaceParam::face_aroundEyeColor_B;
        utFaceParam["face_cheek"] = &FaceParam::face_cheek;
        utFaceParam["face_cheekColor_R"] = &FaceParam::face_cheekColor_R;
        utFaceParam["face_cheekColor_G"] = &FaceParam::face_cheekColor_G;
        utFaceParam["face_cheekColor_B"] = &FaceParam::face_cheekColor_B;
        utFaceParam["face_eyeLine"] = &FaceParam::face_eyeLine;
        utFaceParam["face_eyeLineColor_R"] = &FaceParam::face_eyeLineColor_R;
        utFaceParam["face_eyeLineColor_G"] = &FaceParam::face_eyeLineColor_G;
        utFaceParam["face_eyeLineColor_B"] = &FaceParam::face_eyeLineColor_B;
        utFaceParam["face_eyeShadowDown"] = &FaceParam::face_eyeShadowDown;
        utFaceParam["face_eyeShadowDownColor_R"] = &FaceParam::face_eyeShadowDownColor_R;
        utFaceParam["face_eyeShadowDownColor_G"] = &FaceParam::face_eyeShadowDownColor_G;
        utFaceParam["face_eyeShadowDownColor_B"] = &FaceParam::face_eyeShadowDownColor_B;
        utFaceParam["face_eyeShadowUp"] = &FaceParam::face_eyeShadowUp;
        utFaceParam["face_eyeShadowUpColor_R"] = &FaceParam::face_eyeShadowUpColor_R;
        utFaceParam["face_eyeShadowUpColor_G"] = &FaceParam::face_eyeShadowUpColor_G;
        utFaceParam["face_eyeShadowUpColor_B"] = &FaceParam::face_eyeShadowUpColor_B;
        utFaceParam["face_lip"] = &FaceParam::face_lip;
        utFaceParam["face_lipColor_R"] = &FaceParam::face_lipColor_R;
        utFaceParam["face_lipColor_G"] = &FaceParam::face_lipColor_G;
        utFaceParam["face_lipColor_B"] = &FaceParam::face_lipColor_B;
        utFaceParam["body_hair"] = &FaceParam::body_hair;
        utFaceParam["body_hairColor_R"] = &FaceParam::body_hairColor_R;
        utFaceParam["body_hairColor_G"] = &FaceParam::body_hairColor_G;
        utFaceParam["body_hairColor_B"] = &FaceParam::body_hairColor_B;
        utFaceParam["eye_partsId"] = &FaceParam::eye_partsId;
        utFaceParam["eyeR_irisColor_R"] = &FaceParam::eyeR_irisColor_R;
        utFaceParam["eyeR_irisColor_G"] = &FaceParam::eyeR_irisColor_G;
        utFaceParam["eyeR_irisColor_B"] = &FaceParam::eyeR_irisColor_B;
        utFaceParam["eyeR_irisScale"] = &FaceParam::eyeR_irisScale;
        utFaceParam["eyeR_cataract"] = &FaceParam::eyeR_cataract;
        utFaceParam["eyeR_cataractColor_R"] = &FaceParam::eyeR_cataractColor_R;
        utFaceParam["eyeR_cataractColor_G"] = &FaceParam::eyeR_cataractColor_G;
        utFaceParam["eyeR_cataractColor_B"] = &FaceParam::eyeR_cataractColor_B;
        utFaceParam["eyeR_scleraColor_R"] = &FaceParam::eyeR_scleraColor_R;
        utFaceParam["eyeR_scleraColor_G"] = &FaceParam::eyeR_scleraColor_G;
        utFaceParam["eyeR_scleraColor_B"] = &FaceParam::eyeR_scleraColor_B;
        utFaceParam["eyeR_irisDistance"] = &FaceParam::eyeR_irisDistance;
        utFaceParam["eyeL_irisColor_R"] = &FaceParam::eyeL_irisColor_R;
        utFaceParam["eyeL_irisColor_G"] = &FaceParam::eyeL_irisColor_G;
        utFaceParam["eyeL_irisColor_B"] = &FaceParam::eyeL_irisColor_B;
        utFaceParam["eyeL_irisScale"] = &FaceParam::eyeL_irisScale;
        utFaceParam["eyeL_cataract"] = &FaceParam::eyeL_cataract;
        utFaceParam["eyeL_cataractColor_R"] = &FaceParam::eyeL_cataractColor_R;
        utFaceParam["eyeL_cataractColor_G"] = &FaceParam::eyeL_cataractColor_G;
        utFaceParam["eyeL_cataractColor_B"] = &FaceParam::eyeL_cataractColor_B;
        utFaceParam["eyeL_scleraColor_R"] = &FaceParam::eyeL_scleraColor_R;
        utFaceParam["eyeL_scleraColor_G"] = &FaceParam::eyeL_scleraColor_G;
        utFaceParam["eyeL_scleraColor_B"] = &FaceParam::eyeL_scleraColor_B;
        utFaceParam["eyeL_irisDistance"] = &FaceParam::eyeL_irisDistance;
        utFaceParam["hair_partsId"] = &FaceParam::hair_partsId;
        utFaceParam["hair_color_R"] = &FaceParam::hair_color_R;
        utFaceParam["hair_color_G"] = &FaceParam::hair_color_G;
        utFaceParam["hair_color_B"] = &FaceParam::hair_color_B;
        utFaceParam["hair_shininess"] = &FaceParam::hair_shininess;
        utFaceParam["hair_rootBlack"] = &FaceParam::hair_rootBlack;
        utFaceParam["hair_whiteDensity"] = &FaceParam::hair_whiteDensity;
        utFaceParam["beard_partsId"] = &FaceParam::beard_partsId;
        utFaceParam["beard_color_R"] = &FaceParam::beard_color_R;
        utFaceParam["beard_color_G"] = &FaceParam::beard_color_G;
        utFaceParam["beard_color_B"] = &FaceParam::beard_color_B;
        utFaceParam["beard_shininess"] = &FaceParam::beard_shininess;
        utFaceParam["beard_rootBlack"] = &FaceParam::beard_rootBlack;
        utFaceParam["beard_whiteDensity"] = &FaceParam::beard_whiteDensity;
        utFaceParam["eyebrow_partsId"] = &FaceParam::eyebrow_partsId;
        utFaceParam["eyebrow_color_R"] = &FaceParam::eyebrow_color_R;
        utFaceParam["eyebrow_color_G"] = &FaceParam::eyebrow_color_G;
        utFaceParam["eyebrow_color_B"] = &FaceParam::eyebrow_color_B;
        utFaceParam["eyebrow_shininess"] = &FaceParam::eyebrow_shininess;
        utFaceParam["eyebrow_rootBlack"] = &FaceParam::eyebrow_rootBlack;
        utFaceParam["eyebrow_whiteDensity"] = &FaceParam::eyebrow_whiteDensity;
        utFaceParam["eyelash_partsId"] = &FaceParam::eyelash_partsId;
        utFaceParam["eyelash_color_R"] = &FaceParam::eyelash_color_R;
        utFaceParam["eyelash_color_G"] = &FaceParam::eyelash_color_G;
        utFaceParam["eyelash_color_B"] = &FaceParam::eyelash_color_B;
        utFaceParam["accessories_partsId"] = &FaceParam::accessories_partsId;
        utFaceParam["accessories_color_R"] = &FaceParam::accessories_color_R;
        utFaceParam["accessories_color_G"] = &FaceParam::accessories_color_G;
        utFaceParam["accessories_color_B"] = &FaceParam::accessories_color_B;
        utFaceParam["decal_partsId"] = &FaceParam::decal_partsId;
        utFaceParam["decal_posX"] = &FaceParam::decal_posX;
        utFaceParam["decal_posY"] = &FaceParam::decal_posY;
        utFaceParam["decal_angle"] = &FaceParam::decal_angle;
        utFaceParam["decal_scale"] = &FaceParam::decal_scale;
        utFaceParam["decal_color_R"] = &FaceParam::decal_color_R;
        utFaceParam["decal_color_G"] = &FaceParam::decal_color_G;
        utFaceParam["decal_color_B"] = &FaceParam::decal_color_B;
        utFaceParam["decal_gloss"] = &FaceParam::decal_gloss;
        utFaceParam["decal_mirror"] = &FaceParam::decal_mirror;
        utFaceParam["chrBodyScaleHead"] = &FaceParam::chrBodyScaleHead;
        utFaceParam["chrBodyScaleBreast"] = &FaceParam::chrBodyScaleBreast;
        utFaceParam["chrBodyScaleAbdomen"] = &FaceParam::chrBodyScaleAbdomen;
        utFaceParam["chrBodyScaleRArm"] = &FaceParam::chrBodyScaleRArm;
        utFaceParam["chrBodyScaleRLeg"] = &FaceParam::chrBodyScaleRLeg;
        utFaceParam["chrBodyScaleLArm"] = &FaceParam::chrBodyScaleLArm;
        utFaceParam["chrBodyScaleLLeg"] = &FaceParam::chrBodyScaleLLeg;
        utFaceParam["burn_scar"] = &FaceParam::burn_scar;
        utFaceParam["override_eye_partsId"] = sol::property([](FaceParam &param) -> uint8_t { return param.override_eye_partsId; }, [](FaceParam &param, uint8_t value) { param.override_eye_partsId = value; });
        utFaceParam["override_eye_irisColor"] = sol::property([](FaceParam &param) -> uint8_t { return param.override_eye_irisColor; }, [](FaceParam &param, uint8_t value) { param.override_eye_irisColor = value; });
        utFaceParam["override_eye_cataract"] = sol::property([](FaceParam &param) -> uint8_t { return param.override_eye_cataract; }, [](FaceParam &param, uint8_t value) { param.override_eye_cataract = value; });
        utFaceParam["override_eye_cataractColor"] = sol::property([](FaceParam &param) -> uint8_t { return param.override_eye_cataractColor; }, [](FaceParam &param, uint8_t value) { param.override_eye_cataractColor = value; });
        utFaceParam["override_eye_scleraColor"] = sol::property([](FaceParam &param) -> uint8_t { return param.override_eye_scleraColor; }, [](FaceParam &param, uint8_t value) { param.override_eye_scleraColor = value; });
        utFaceParam["override_burn_scar"] = sol::property([](FaceParam &param) -> uint8_t { return param.override_burn_scar; }, [](FaceParam &param, uint8_t value) { param.override_burn_scar = value; });
        utFaceParam["age"] = &FaceParam::age;
        utFaceParam["gender"] = &FaceParam::gender;
        utFaceParam["caricatureGeometry"] = &FaceParam::caricatureGeometry;
        utFaceParam["caricatureTexture"] = &FaceParam::caricatureTexture;
        utFaceParam["faceGeoData00"] = &FaceParam::faceGeoData00;
        utFaceParam["faceGeoData01"] = &FaceParam::faceGeoData01;
        utFaceParam["faceGeoData02"] = &FaceParam::faceGeoData02;
        utFaceParam["faceGeoData03"] = &FaceParam::faceGeoData03;
        utFaceParam["faceGeoData04"] = &FaceParam::faceGeoData04;
        utFaceParam["faceGeoData05"] = &FaceParam::faceGeoData05;
        utFaceParam["faceGeoData06"] = &FaceParam::faceGeoData06;
        utFaceParam["faceGeoData07"] = &FaceParam::faceGeoData07;
        utFaceParam["faceGeoData08"] = &FaceParam::faceGeoData08;
        utFaceParam["faceGeoData09"] = &FaceParam::faceGeoData09;
        utFaceParam["faceGeoData10"] = &FaceParam::faceGeoData10;
        utFaceParam["faceGeoData11"] = &FaceParam::faceGeoData11;
        utFaceParam["faceGeoData12"] = &FaceParam::faceGeoData12;
        utFaceParam["faceGeoData13"] = &FaceParam::faceGeoData13;
        utFaceParam["faceGeoData14"] = &FaceParam::faceGeoData14;
        utFaceParam["faceGeoData15"] = &FaceParam::faceGeoData15;
        utFaceParam["faceGeoData16"] = &FaceParam::faceGeoData16;
        utFaceParam["faceGeoData17"] = &FaceParam::faceGeoData17;
        utFaceParam["faceGeoData18"] = &FaceParam::faceGeoData18;
        utFaceParam["faceGeoData19"] = &FaceParam::faceGeoData19;
        utFaceParam["faceGeoData20"] = &FaceParam::faceGeoData20;
        utFaceParam["faceGeoData21"] = &FaceParam::faceGeoData21;
        utFaceParam["faceGeoData22"] = &FaceParam::faceGeoData22;
        utFaceParam["faceGeoData23"] = &FaceParam::faceGeoData23;
        utFaceParam["faceGeoData24"] = &FaceParam::faceGeoData24;
        utFaceParam["faceGeoData25"] = &FaceParam::faceGeoData25;
        utFaceParam["faceGeoData26"] = &FaceParam::faceGeoData26;
        utFaceParam["faceGeoData27"] = &FaceParam::faceGeoData27;
        utFaceParam["faceGeoData28"] = &FaceParam::faceGeoData28;
        utFaceParam["faceGeoData29"] = &FaceParam::faceGeoData29;
        utFaceParam["faceGeoData30"] = &FaceParam::faceGeoData30;
        utFaceParam["faceGeoData31"] = &FaceParam::faceGeoData31;
        utFaceParam["faceGeoData32"] = &FaceParam::faceGeoData32;
        utFaceParam["faceGeoData33"] = &FaceParam::faceGeoData33;
        utFaceParam["faceGeoData34"] = &FaceParam::faceGeoData34;
        utFaceParam["faceGeoData35"] = &FaceParam::faceGeoData35;
        utFaceParam["faceGeoData36"] = &FaceParam::faceGeoData36;
        utFaceParam["faceGeoData37"] = &FaceParam::faceGeoData37;
        utFaceParam["faceGeoData38"] = &FaceParam::faceGeoData38;
        utFaceParam["faceGeoData39"] = &FaceParam::faceGeoData39;
        utFaceParam["faceGeoData40"] = &FaceParam::faceGeoData40;
        utFaceParam["faceGeoData41"] = &FaceParam::faceGeoData41;
        utFaceParam["faceGeoData42"] = &FaceParam::faceGeoData42;
        utFaceParam["faceGeoData43"] = &FaceParam::faceGeoData43;
        utFaceParam["faceGeoData44"] = &FaceParam::faceGeoData44;
        utFaceParam["faceGeoData45"] = &FaceParam::faceGeoData45;
        utFaceParam["faceGeoData46"] = &FaceParam::faceGeoData46;
        utFaceParam["faceGeoData47"] = &FaceParam::faceGeoData47;
        utFaceParam["faceGeoData48"] = &FaceParam::faceGeoData48;
        utFaceParam["faceGeoData49"] = &FaceParam::faceGeoData49;
        utFaceParam["faceGeoData50"] = &FaceParam::faceGeoData50;
        utFaceParam["faceGeoData51"] = &FaceParam::faceGeoData51;
        utFaceParam["faceGeoData52"] = &FaceParam::faceGeoData52;
        utFaceParam["faceGeoData53"] = &FaceParam::faceGeoData53;
        utFaceParam["faceGeoData54"] = &FaceParam::faceGeoData54;
        utFaceParam["faceGeoData55"] = &FaceParam::faceGeoData55;
        utFaceParam["faceGeoData56"] = &FaceParam::faceGeoData56;
        utFaceParam["faceGeoData57"] = &FaceParam::faceGeoData57;
        utFaceParam["faceGeoData58"] = &FaceParam::faceGeoData58;
        utFaceParam["faceGeoData59"] = &FaceParam::faceGeoData59;
        utFaceParam["faceGeoData60"] = &FaceParam::faceGeoData60;
        utFaceParam["faceTexData00"] = &FaceParam::faceTexData00;
        utFaceParam["faceTexData01"] = &FaceParam::faceTexData01;
        utFaceParam["faceTexData02"] = &FaceParam::faceTexData02;
        utFaceParam["faceTexData03"] = &FaceParam::faceTexData03;
        utFaceParam["faceTexData04"] = &FaceParam::faceTexData04;
        utFaceParam["faceTexData05"] = &FaceParam::faceTexData05;
        utFaceParam["faceTexData06"] = &FaceParam::faceTexData06;
        utFaceParam["faceTexData07"] = &FaceParam::faceTexData07;
        utFaceParam["faceTexData08"] = &FaceParam::faceTexData08;
        utFaceParam["faceTexData09"] = &FaceParam::faceTexData09;
        utFaceParam["faceTexData10"] = &FaceParam::faceTexData10;
        utFaceParam["faceTexData11"] = &FaceParam::faceTexData11;
        utFaceParam["faceTexData12"] = &FaceParam::faceTexData12;
        utFaceParam["faceTexData13"] = &FaceParam::faceTexData13;
        utFaceParam["faceTexData14"] = &FaceParam::faceTexData14;
        utFaceParam["faceTexData15"] = &FaceParam::faceTexData15;
        utFaceParam["faceTexData16"] = &FaceParam::faceTexData16;
        utFaceParam["faceTexData17"] = &FaceParam::faceTexData17;
        utFaceParam["faceTexData18"] = &FaceParam::faceTexData18;
        utFaceParam["faceTexData19"] = &FaceParam::faceTexData19;
        utFaceParam["faceTexData20"] = &FaceParam::faceTexData20;
        utFaceParam["faceTexData21"] = &FaceParam::faceTexData21;
        utFaceParam["faceTexData22"] = &FaceParam::faceTexData22;
        utFaceParam["faceTexData23"] = &FaceParam::faceTexData23;
        utFaceParam["faceTexData24"] = &FaceParam::faceTexData24;
        utFaceParam["faceTexData25"] = &FaceParam::faceTexData25;
        utFaceParam["faceTexData26"] = &FaceParam::faceTexData26;
        utFaceParam["faceTexData27"] = &FaceParam::faceTexData27;
        utFaceParam["faceTexData28"] = &FaceParam::faceTexData28;
        utFaceParam["faceTexData29"] = &FaceParam::faceTexData29;
        utFaceParam["faceTexData30"] = &FaceParam::faceTexData30;
        utFaceParam["faceTexData31"] = &FaceParam::faceTexData31;
        utFaceParam["faceTexData32"] = &FaceParam::faceTexData32;
        utFaceParam["faceTexData33"] = &FaceParam::faceTexData33;
        utFaceParam["faceTexData34"] = &FaceParam::faceTexData34;
        utFaceParam["faceTexData35"] = &FaceParam::faceTexData35;
        utFaceParam["faceGeoAsymData00"] = &FaceParam::faceGeoAsymData00;
        utFaceParam["faceGeoAsymData01"] = &FaceParam::faceGeoAsymData01;
        utFaceParam["faceGeoAsymData02"] = &FaceParam::faceGeoAsymData02;
        utFaceParam["faceGeoAsymData03"] = &FaceParam::faceGeoAsymData03;
        utFaceParam["faceGeoAsymData04"] = &FaceParam::faceGeoAsymData04;
        utFaceParam["faceGeoAsymData05"] = &FaceParam::faceGeoAsymData05;
        utFaceParam["faceGeoAsymData06"] = &FaceParam::faceGeoAsymData06;
        utFaceParam["faceGeoAsymData07"] = &FaceParam::faceGeoAsymData07;
        utFaceParam["faceGeoAsymData08"] = &FaceParam::faceGeoAsymData08;
        utFaceParam["faceGeoAsymData09"] = &FaceParam::faceGeoAsymData09;
        utFaceParam["faceGeoAsymData10"] = &FaceParam::faceGeoAsymData10;
        utFaceParam["faceGeoAsymData11"] = &FaceParam::faceGeoAsymData11;
        utFaceParam["faceGeoAsymData12"] = &FaceParam::faceGeoAsymData12;
        utFaceParam["faceGeoAsymData13"] = &FaceParam::faceGeoAsymData13;
        utFaceParam["faceGeoAsymData14"] = &FaceParam::faceGeoAsymData14;
        utFaceParam["faceGeoAsymData15"] = &FaceParam::faceGeoAsymData15;
        utFaceParam["faceGeoAsymData16"] = &FaceParam::faceGeoAsymData16;
        utFaceParam["faceGeoAsymData17"] = &FaceParam::faceGeoAsymData17;
        utFaceParam["faceGeoAsymData18"] = &FaceParam::faceGeoAsymData18;
        utFaceParam["faceGeoAsymData19"] = &FaceParam::faceGeoAsymData19;
        utFaceParam["faceGeoAsymData20"] = &FaceParam::faceGeoAsymData20;
        utFaceParam["faceGeoAsymData21"] = &FaceParam::faceGeoAsymData21;
        utFaceParam["faceGeoAsymData22"] = &FaceParam::faceGeoAsymData22;
        utFaceParam["faceGeoAsymData23"] = &FaceParam::faceGeoAsymData23;
        utFaceParam["faceGeoAsymData24"] = &FaceParam::faceGeoAsymData24;
        utFaceParam["faceGeoAsymData25"] = &FaceParam::faceGeoAsymData25;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<FaceParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<FaceParam>>(nullptr);
        indexer->setFieldNames({
            {"face_partsId", false},
            {"skin_color_R", false},
            {"skin_color_G", false},
            {"skin_color_B", false},
            {"skin_gloss", false},
            {"skin_pores", false},
            {"face_beard", false},
            {"face_aroundEye", false},
            {"face_aroundEyeColor_R", false},
            {"face_aroundEyeColor_G", false},
            {"face_aroundEyeColor_B", false},
            {"face_cheek", false},
            {"face_cheekColor_R", false},
            {"face_cheekColor_G", false},
            {"face_cheekColor_B", false},
            {"face_eyeLine", false},
            {"face_eyeLineColor_R", false},
            {"face_eyeLineColor_G", false},
            {"face_eyeLineColor_B", false},
            {"face_eyeShadowDown", false},
            {"face_eyeShadowDownColor_R", false},
            {"face_eyeShadowDownColor_G", false},
            {"face_eyeShadowDownColor_B", false},
            {"face_eyeShadowUp", false},
            {"face_eyeShadowUpColor_R", false},
            {"face_eyeShadowUpColor_G", false},
            {"face_eyeShadowUpColor_B", false},
            {"face_lip", false},
            {"face_lipColor_R", false},
            {"face_lipColor_G", false},
            {"face_lipColor_B", false},
            {"body_hair", false},
            {"body_hairColor_R", false},
            {"body_hairColor_G", false},
            {"body_hairColor_B", false},
            {"eye_partsId", false},
            {"eyeR_irisColor_R", false},
            {"eyeR_irisColor_G", false},
            {"eyeR_irisColor_B", false},
            {"eyeR_irisScale", false},
            {"eyeR_cataract", false},
            {"eyeR_cataractColor_R", false},
            {"eyeR_cataractColor_G", false},
            {"eyeR_cataractColor_B", false},
            {"eyeR_scleraColor_R", false},
            {"eyeR_scleraColor_G", false},
            {"eyeR_scleraColor_B", false},
            {"eyeR_irisDistance", false},
            {"eyeL_irisColor_R", false},
            {"eyeL_irisColor_G", false},
            {"eyeL_irisColor_B", false},
            {"eyeL_irisScale", false},
            {"eyeL_cataract", false},
            {"eyeL_cataractColor_R", false},
            {"eyeL_cataractColor_G", false},
            {"eyeL_cataractColor_B", false},
            {"eyeL_scleraColor_R", false},
            {"eyeL_scleraColor_G", false},
            {"eyeL_scleraColor_B", false},
            {"eyeL_irisDistance", false},
            {"hair_partsId", false},
            {"hair_color_R", false},
            {"hair_color_G", false},
            {"hair_color_B", false},
            {"hair_shininess", false},
            {"hair_rootBlack", false},
            {"hair_whiteDensity", false},
            {"beard_partsId", false},
            {"beard_color_R", false},
            {"beard_color_G", false},
            {"beard_color_B", false},
            {"beard_shininess", false},
            {"beard_rootBlack", false},
            {"beard_whiteDensity", false},
            {"eyebrow_partsId", false},
            {"eyebrow_color_R", false},
            {"eyebrow_color_G", false},
            {"eyebrow_color_B", false},
            {"eyebrow_shininess", false},
            {"eyebrow_rootBlack", false},
            {"eyebrow_whiteDensity", false},
            {"eyelash_partsId", false},
            {"eyelash_color_R", false},
            {"eyelash_color_G", false},
            {"eyelash_color_B", false},
            {"accessories_partsId", false},
            {"accessories_color_R", false},
            {"accessories_color_G", false},
            {"accessories_color_B", false},
            {"decal_partsId", false},
            {"decal_posX", false},
            {"decal_posY", false},
            {"decal_angle", false},
            {"decal_scale", false},
            {"decal_color_R", false},
            {"decal_color_G", false},
            {"decal_color_B", false},
            {"decal_gloss", false},
            {"decal_mirror", false},
            {"chrBodyScaleHead", false},
            {"chrBodyScaleBreast", false},
            {"chrBodyScaleAbdomen", false},
            {"chrBodyScaleRArm", false},
            {"chrBodyScaleRLeg", false},
            {"chrBodyScaleLArm", false},
            {"chrBodyScaleLLeg", false},
            {"burn_scar", false},
            {"override_eye_partsId", false},
            {"override_eye_irisColor", false},
            {"override_eye_cataract", false},
            {"override_eye_cataractColor", false},
            {"override_eye_scleraColor", false},
            {"override_burn_scar", false},
            {"age", false},
            {"gender", false},
            {"caricatureGeometry", false},
            {"caricatureTexture", false},
            {"faceGeoData00", false},
            {"faceGeoData01", false},
            {"faceGeoData02", false},
            {"faceGeoData03", false},
            {"faceGeoData04", false},
            {"faceGeoData05", false},
            {"faceGeoData06", false},
            {"faceGeoData07", false},
            {"faceGeoData08", false},
            {"faceGeoData09", false},
            {"faceGeoData10", false},
            {"faceGeoData11", false},
            {"faceGeoData12", false},
            {"faceGeoData13", false},
            {"faceGeoData14", false},
            {"faceGeoData15", false},
            {"faceGeoData16", false},
            {"faceGeoData17", false},
            {"faceGeoData18", false},
            {"faceGeoData19", false},
            {"faceGeoData20", false},
            {"faceGeoData21", false},
            {"faceGeoData22", false},
            {"faceGeoData23", false},
            {"faceGeoData24", false},
            {"faceGeoData25", false},
            {"faceGeoData26", false},
            {"faceGeoData27", false},
            {"faceGeoData28", false},
            {"faceGeoData29", false},
            {"faceGeoData30", false},
            {"faceGeoData31", false},
            {"faceGeoData32", false},
            {"faceGeoData33", false},
            {"faceGeoData34", false},
            {"faceGeoData35", false},
            {"faceGeoData36", false},
            {"faceGeoData37", false},
            {"faceGeoData38", false},
            {"faceGeoData39", false},
            {"faceGeoData40", false},
            {"faceGeoData41", false},
            {"faceGeoData42", false},
            {"faceGeoData43", false},
            {"faceGeoData44", false},
            {"faceGeoData45", false},
            {"faceGeoData46", false},
            {"faceGeoData47", false},
            {"faceGeoData48", false},
            {"faceGeoData49", false},
            {"faceGeoData50", false},
            {"faceGeoData51", false},
            {"faceGeoData52", false},
            {"faceGeoData53", false},
            {"faceGeoData54", false},
            {"faceGeoData55", false},
            {"faceGeoData56", false},
            {"faceGeoData57", false},
            {"faceGeoData58", false},
            {"faceGeoData59", false},
            {"faceGeoData60", false},
            {"faceTexData00", false},
            {"faceTexData01", false},
            {"faceTexData02", false},
            {"faceTexData03", false},
            {"faceTexData04", false},
            {"faceTexData05", false},
            {"faceTexData06", false},
            {"faceTexData07", false},
            {"faceTexData08", false},
            {"faceTexData09", false},
            {"faceTexData10", false},
            {"faceTexData11", false},
            {"faceTexData12", false},
            {"faceTexData13", false},
            {"faceTexData14", false},
            {"faceTexData15", false},
            {"faceTexData16", false},
            {"faceTexData17", false},
            {"faceTexData18", false},
            {"faceTexData19", false},
            {"faceTexData20", false},
            {"faceTexData21", false},
            {"faceTexData22", false},
            {"faceTexData23", false},
            {"faceTexData24", false},
            {"faceTexData25", false},
            {"faceTexData26", false},
            {"faceTexData27", false},
            {"faceTexData28", false},
            {"faceTexData29", false},
            {"faceTexData30", false},
            {"faceTexData31", false},
            {"faceTexData32", false},
            {"faceTexData33", false},
            {"faceTexData34", false},
            {"faceTexData35", false},
            {"faceGeoAsymData00", false},
            {"faceGeoAsymData01", false},
            {"faceGeoAsymData02", false},
            {"faceGeoAsymData03", false},
            {"faceGeoAsymData04", false},
            {"faceGeoAsymData05", false},
            {"faceGeoAsymData06", false},
            {"faceGeoAsymData07", false},
            {"faceGeoAsymData08", false},
            {"faceGeoAsymData09", false},
            {"faceGeoAsymData10", false},
            {"faceGeoAsymData11", false},
            {"faceGeoAsymData12", false},
            {"faceGeoAsymData13", false},
            {"faceGeoAsymData14", false},
            {"faceGeoAsymData15", false},
            {"faceGeoAsymData16", false},
            {"faceGeoAsymData17", false},
            {"faceGeoAsymData18", false},
            {"faceGeoAsymData19", false},
            {"faceGeoAsymData20", false},
            {"faceGeoAsymData21", false},
            {"faceGeoAsymData22", false},
            {"faceGeoAsymData23", false},
            {"faceGeoAsymData24", false},
            {"faceGeoAsymData25", false},
        });
        return indexer;
    };
    paramsTable["FaceParam"] = [tableLoader]() -> auto { return tableLoader(L"FaceParam"); };
}

template<> void ParamTableIndexer<FaceParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,face_partsId,skin_color_R,skin_color_G,skin_color_B,skin_gloss,skin_pores,face_beard,face_aroundEye,face_aroundEyeColor_R,face_aroundEyeColor_G,face_aroundEyeColor_B,face_cheek,face_cheekColor_R,face_cheekColor_G,face_cheekColor_B,face_eyeLine,face_eyeLineColor_R,face_eyeLineColor_G,face_eyeLineColor_B,face_eyeShadowDown,face_eyeShadowDownColor_R,face_eyeShadowDownColor_G,face_eyeShadowDownColor_B,face_eyeShadowUp,face_eyeShadowUpColor_R,face_eyeShadowUpColor_G,face_eyeShadowUpColor_B,face_lip,face_lipColor_R,face_lipColor_G,face_lipColor_B,body_hair,body_hairColor_R,body_hairColor_G,body_hairColor_B,eye_partsId,eyeR_irisColor_R,eyeR_irisColor_G,eyeR_irisColor_B,eyeR_irisScale,eyeR_cataract,eyeR_cataractColor_R,eyeR_cataractColor_G,eyeR_cataractColor_B,eyeR_scleraColor_R,eyeR_scleraColor_G,eyeR_scleraColor_B,eyeR_irisDistance,eyeL_irisColor_R,eyeL_irisColor_G,eyeL_irisColor_B,eyeL_irisScale,eyeL_cataract,eyeL_cataractColor_R,eyeL_cataractColor_G,eyeL_cataractColor_B,eyeL_scleraColor_R,eyeL_scleraColor_G,eyeL_scleraColor_B,eyeL_irisDistance,hair_partsId,hair_color_R,hair_color_G,hair_color_B,hair_shininess,hair_rootBlack,hair_whiteDensity,beard_partsId,beard_color_R,beard_color_G,beard_color_B,beard_shininess,beard_rootBlack,beard_whiteDensity,eyebrow_partsId,eyebrow_color_R,eyebrow_color_G,eyebrow_color_B,eyebrow_shininess,eyebrow_rootBlack,eyebrow_whiteDensity,eyelash_partsId,eyelash_color_R,eyelash_color_G,eyelash_color_B,accessories_partsId,accessories_color_R,accessories_color_G,accessories_color_B,decal_partsId,decal_posX,decal_posY,decal_angle,decal_scale,decal_color_R,decal_color_G,decal_color_B,decal_gloss,decal_mirror,chrBodyScaleHead,chrBodyScaleBreast,chrBodyScaleAbdomen,chrBodyScaleRArm,chrBodyScaleRLeg,chrBodyScaleLArm,chrBodyScaleLLeg,burn_scar,override_eye_partsId,override_eye_irisColor,override_eye_cataract,override_eye_cataractColor,override_eye_scleraColor,override_burn_scar,age,gender,caricatureGeometry,caricatureTexture,faceGeoData00,faceGeoData01,faceGeoData02,faceGeoData03,faceGeoData04,faceGeoData05,faceGeoData06,faceGeoData07,faceGeoData08,faceGeoData09,faceGeoData10,faceGeoData11,faceGeoData12,faceGeoData13,faceGeoData14,faceGeoData15,faceGeoData16,faceGeoData17,faceGeoData18,faceGeoData19,faceGeoData20,faceGeoData21,faceGeoData22,faceGeoData23,faceGeoData24,faceGeoData25,faceGeoData26,faceGeoData27,faceGeoData28,faceGeoData29,faceGeoData30,faceGeoData31,faceGeoData32,faceGeoData33,faceGeoData34,faceGeoData35,faceGeoData36,faceGeoData37,faceGeoData38,faceGeoData39,faceGeoData40,faceGeoData41,faceGeoData42,faceGeoData43,faceGeoData44,faceGeoData45,faceGeoData46,faceGeoData47,faceGeoData48,faceGeoData49,faceGeoData50,faceGeoData51,faceGeoData52,faceGeoData53,faceGeoData54,faceGeoData55,faceGeoData56,faceGeoData57,faceGeoData58,faceGeoData59,faceGeoData60,faceTexData00,faceTexData01,faceTexData02,faceTexData03,faceTexData04,faceTexData05,faceTexData06,faceTexData07,faceTexData08,faceTexData09,faceTexData10,faceTexData11,faceTexData12,faceTexData13,faceTexData14,faceTexData15,faceTexData16,faceTexData17,faceTexData18,faceTexData19,faceTexData20,faceTexData21,faceTexData22,faceTexData23,faceTexData24,faceTexData25,faceTexData26,faceTexData27,faceTexData28,faceTexData29,faceTexData30,faceTexData31,faceTexData32,faceTexData33,faceTexData34,faceTexData35,faceGeoAsymData00,faceGeoAsymData01,faceGeoAsymData02,faceGeoAsymData03,faceGeoAsymData04,faceGeoAsymData05,faceGeoAsymData06,faceGeoAsymData07,faceGeoAsymData08,faceGeoAsymData09,faceGeoAsymData10,faceGeoAsymData11,faceGeoAsymData12,faceGeoAsymData13,faceGeoAsymData14,faceGeoAsymData15,faceGeoAsymData16,faceGeoAsymData17,faceGeoAsymData18,faceGeoAsymData19,faceGeoAsymData20,faceGeoAsymData21,faceGeoAsymData22,faceGeoAsymData23,faceGeoAsymData24,faceGeoAsymData25\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u\n",
            this->paramId(i),
            param->face_partsId,
            param->skin_color_R,
            param->skin_color_G,
            param->skin_color_B,
            param->skin_gloss,
            param->skin_pores,
            param->face_beard,
            param->face_aroundEye,
            param->face_aroundEyeColor_R,
            param->face_aroundEyeColor_G,
            param->face_aroundEyeColor_B,
            param->face_cheek,
            param->face_cheekColor_R,
            param->face_cheekColor_G,
            param->face_cheekColor_B,
            param->face_eyeLine,
            param->face_eyeLineColor_R,
            param->face_eyeLineColor_G,
            param->face_eyeLineColor_B,
            param->face_eyeShadowDown,
            param->face_eyeShadowDownColor_R,
            param->face_eyeShadowDownColor_G,
            param->face_eyeShadowDownColor_B,
            param->face_eyeShadowUp,
            param->face_eyeShadowUpColor_R,
            param->face_eyeShadowUpColor_G,
            param->face_eyeShadowUpColor_B,
            param->face_lip,
            param->face_lipColor_R,
            param->face_lipColor_G,
            param->face_lipColor_B,
            param->body_hair,
            param->body_hairColor_R,
            param->body_hairColor_G,
            param->body_hairColor_B,
            param->eye_partsId,
            param->eyeR_irisColor_R,
            param->eyeR_irisColor_G,
            param->eyeR_irisColor_B,
            param->eyeR_irisScale,
            param->eyeR_cataract,
            param->eyeR_cataractColor_R,
            param->eyeR_cataractColor_G,
            param->eyeR_cataractColor_B,
            param->eyeR_scleraColor_R,
            param->eyeR_scleraColor_G,
            param->eyeR_scleraColor_B,
            param->eyeR_irisDistance,
            param->eyeL_irisColor_R,
            param->eyeL_irisColor_G,
            param->eyeL_irisColor_B,
            param->eyeL_irisScale,
            param->eyeL_cataract,
            param->eyeL_cataractColor_R,
            param->eyeL_cataractColor_G,
            param->eyeL_cataractColor_B,
            param->eyeL_scleraColor_R,
            param->eyeL_scleraColor_G,
            param->eyeL_scleraColor_B,
            param->eyeL_irisDistance,
            param->hair_partsId,
            param->hair_color_R,
            param->hair_color_G,
            param->hair_color_B,
            param->hair_shininess,
            param->hair_rootBlack,
            param->hair_whiteDensity,
            param->beard_partsId,
            param->beard_color_R,
            param->beard_color_G,
            param->beard_color_B,
            param->beard_shininess,
            param->beard_rootBlack,
            param->beard_whiteDensity,
            param->eyebrow_partsId,
            param->eyebrow_color_R,
            param->eyebrow_color_G,
            param->eyebrow_color_B,
            param->eyebrow_shininess,
            param->eyebrow_rootBlack,
            param->eyebrow_whiteDensity,
            param->eyelash_partsId,
            param->eyelash_color_R,
            param->eyelash_color_G,
            param->eyelash_color_B,
            param->accessories_partsId,
            param->accessories_color_R,
            param->accessories_color_G,
            param->accessories_color_B,
            param->decal_partsId,
            param->decal_posX,
            param->decal_posY,
            param->decal_angle,
            param->decal_scale,
            param->decal_color_R,
            param->decal_color_G,
            param->decal_color_B,
            param->decal_gloss,
            param->decal_mirror,
            param->chrBodyScaleHead,
            param->chrBodyScaleBreast,
            param->chrBodyScaleAbdomen,
            param->chrBodyScaleRArm,
            param->chrBodyScaleRLeg,
            param->chrBodyScaleLArm,
            param->chrBodyScaleLLeg,
            param->burn_scar,
            param->override_eye_partsId,
            param->override_eye_irisColor,
            param->override_eye_cataract,
            param->override_eye_cataractColor,
            param->override_eye_scleraColor,
            param->override_burn_scar,
            param->age,
            param->gender,
            param->caricatureGeometry,
            param->caricatureTexture,
            param->faceGeoData00,
            param->faceGeoData01,
            param->faceGeoData02,
            param->faceGeoData03,
            param->faceGeoData04,
            param->faceGeoData05,
            param->faceGeoData06,
            param->faceGeoData07,
            param->faceGeoData08,
            param->faceGeoData09,
            param->faceGeoData10,
            param->faceGeoData11,
            param->faceGeoData12,
            param->faceGeoData13,
            param->faceGeoData14,
            param->faceGeoData15,
            param->faceGeoData16,
            param->faceGeoData17,
            param->faceGeoData18,
            param->faceGeoData19,
            param->faceGeoData20,
            param->faceGeoData21,
            param->faceGeoData22,
            param->faceGeoData23,
            param->faceGeoData24,
            param->faceGeoData25,
            param->faceGeoData26,
            param->faceGeoData27,
            param->faceGeoData28,
            param->faceGeoData29,
            param->faceGeoData30,
            param->faceGeoData31,
            param->faceGeoData32,
            param->faceGeoData33,
            param->faceGeoData34,
            param->faceGeoData35,
            param->faceGeoData36,
            param->faceGeoData37,
            param->faceGeoData38,
            param->faceGeoData39,
            param->faceGeoData40,
            param->faceGeoData41,
            param->faceGeoData42,
            param->faceGeoData43,
            param->faceGeoData44,
            param->faceGeoData45,
            param->faceGeoData46,
            param->faceGeoData47,
            param->faceGeoData48,
            param->faceGeoData49,
            param->faceGeoData50,
            param->faceGeoData51,
            param->faceGeoData52,
            param->faceGeoData53,
            param->faceGeoData54,
            param->faceGeoData55,
            param->faceGeoData56,
            param->faceGeoData57,
            param->faceGeoData58,
            param->faceGeoData59,
            param->faceGeoData60,
            param->faceTexData00,
            param->faceTexData01,
            param->faceTexData02,
            param->faceTexData03,
            param->faceTexData04,
            param->faceTexData05,
            param->faceTexData06,
            param->faceTexData07,
            param->faceTexData08,
            param->faceTexData09,
            param->faceTexData10,
            param->faceTexData11,
            param->faceTexData12,
            param->faceTexData13,
            param->faceTexData14,
            param->faceTexData15,
            param->faceTexData16,
            param->faceTexData17,
            param->faceTexData18,
            param->faceTexData19,
            param->faceTexData20,
            param->faceTexData21,
            param->faceTexData22,
            param->faceTexData23,
            param->faceTexData24,
            param->faceTexData25,
            param->faceTexData26,
            param->faceTexData27,
            param->faceTexData28,
            param->faceTexData29,
            param->faceTexData30,
            param->faceTexData31,
            param->faceTexData32,
            param->faceTexData33,
            param->faceTexData34,
            param->faceTexData35,
            param->faceGeoAsymData00,
            param->faceGeoAsymData01,
            param->faceGeoAsymData02,
            param->faceGeoAsymData03,
            param->faceGeoAsymData04,
            param->faceGeoAsymData05,
            param->faceGeoAsymData06,
            param->faceGeoAsymData07,
            param->faceGeoAsymData08,
            param->faceGeoAsymData09,
            param->faceGeoAsymData10,
            param->faceGeoAsymData11,
            param->faceGeoAsymData12,
            param->faceGeoAsymData13,
            param->faceGeoAsymData14,
            param->faceGeoAsymData15,
            param->faceGeoAsymData16,
            param->faceGeoAsymData17,
            param->faceGeoAsymData18,
            param->faceGeoAsymData19,
            param->faceGeoAsymData20,
            param->faceGeoAsymData21,
            param->faceGeoAsymData22,
            param->faceGeoAsymData23,
            param->faceGeoAsymData24,
            param->faceGeoAsymData25
        );
    }
    fclose(f);
}

}
