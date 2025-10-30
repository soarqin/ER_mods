#include "../luabindings.h"
#include "../defs/FaceRangeParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<FaceRangeParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerFaceRangeParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["FaceRangeParam"]; usertype) return;
        auto indexerFaceRangeParam = state->new_usertype<ParamTableIndexer<FaceRangeParam>>("FaceRangeParamTableIndexer");
        indexerFaceRangeParam["count"] = sol::property(&ParamTableIndexer<FaceRangeParam>::count);
        indexerFaceRangeParam["__index"] = &ParamTableIndexer<FaceRangeParam>::at;
        indexerFaceRangeParam["id"] = &ParamTableIndexer<FaceRangeParam>::paramId;
        indexerFaceRangeParam["get"] = &ParamTableIndexer<FaceRangeParam>::get;
        indexerFaceRangeParam["exportToCsv"] = &ParamTableIndexer<FaceRangeParam>::exportToCsv;
        indexerFaceRangeParam["importFromCsv"] = &ParamTableIndexer<FaceRangeParam>::importFromCsv;
        auto utFaceRangeParam = state->new_usertype<FaceRangeParam>("FaceRangeParam");
        utFaceRangeParam["face_partsId"] = &FaceRangeParam::face_partsId;
        utFaceRangeParam["skin_color_R"] = &FaceRangeParam::skin_color_R;
        utFaceRangeParam["skin_color_G"] = &FaceRangeParam::skin_color_G;
        utFaceRangeParam["skin_color_B"] = &FaceRangeParam::skin_color_B;
        utFaceRangeParam["skin_gloss"] = &FaceRangeParam::skin_gloss;
        utFaceRangeParam["skin_pores"] = &FaceRangeParam::skin_pores;
        utFaceRangeParam["face_beard"] = &FaceRangeParam::face_beard;
        utFaceRangeParam["face_aroundEye"] = &FaceRangeParam::face_aroundEye;
        utFaceRangeParam["face_aroundEyeColor_R"] = &FaceRangeParam::face_aroundEyeColor_R;
        utFaceRangeParam["face_aroundEyeColor_G"] = &FaceRangeParam::face_aroundEyeColor_G;
        utFaceRangeParam["face_aroundEyeColor_B"] = &FaceRangeParam::face_aroundEyeColor_B;
        utFaceRangeParam["face_cheek"] = &FaceRangeParam::face_cheek;
        utFaceRangeParam["face_cheekColor_R"] = &FaceRangeParam::face_cheekColor_R;
        utFaceRangeParam["face_cheekColor_G"] = &FaceRangeParam::face_cheekColor_G;
        utFaceRangeParam["face_cheekColor_B"] = &FaceRangeParam::face_cheekColor_B;
        utFaceRangeParam["face_eyeLine"] = &FaceRangeParam::face_eyeLine;
        utFaceRangeParam["face_eyeLineColor_R"] = &FaceRangeParam::face_eyeLineColor_R;
        utFaceRangeParam["face_eyeLineColor_G"] = &FaceRangeParam::face_eyeLineColor_G;
        utFaceRangeParam["face_eyeLineColor_B"] = &FaceRangeParam::face_eyeLineColor_B;
        utFaceRangeParam["face_eyeShadowDown"] = &FaceRangeParam::face_eyeShadowDown;
        utFaceRangeParam["face_eyeShadowDownColor_R"] = &FaceRangeParam::face_eyeShadowDownColor_R;
        utFaceRangeParam["face_eyeShadowDownColor_G"] = &FaceRangeParam::face_eyeShadowDownColor_G;
        utFaceRangeParam["face_eyeShadowDownColor_B"] = &FaceRangeParam::face_eyeShadowDownColor_B;
        utFaceRangeParam["face_eyeShadowUp"] = &FaceRangeParam::face_eyeShadowUp;
        utFaceRangeParam["face_eyeShadowUpColor_R"] = &FaceRangeParam::face_eyeShadowUpColor_R;
        utFaceRangeParam["face_eyeShadowUpColor_G"] = &FaceRangeParam::face_eyeShadowUpColor_G;
        utFaceRangeParam["face_eyeShadowUpColor_B"] = &FaceRangeParam::face_eyeShadowUpColor_B;
        utFaceRangeParam["face_lip"] = &FaceRangeParam::face_lip;
        utFaceRangeParam["face_lipColor_R"] = &FaceRangeParam::face_lipColor_R;
        utFaceRangeParam["face_lipColor_G"] = &FaceRangeParam::face_lipColor_G;
        utFaceRangeParam["face_lipColor_B"] = &FaceRangeParam::face_lipColor_B;
        utFaceRangeParam["body_hair"] = &FaceRangeParam::body_hair;
        utFaceRangeParam["body_hairColor_R"] = &FaceRangeParam::body_hairColor_R;
        utFaceRangeParam["body_hairColor_G"] = &FaceRangeParam::body_hairColor_G;
        utFaceRangeParam["body_hairColor_B"] = &FaceRangeParam::body_hairColor_B;
        utFaceRangeParam["eye_partsId"] = &FaceRangeParam::eye_partsId;
        utFaceRangeParam["eyeR_irisColor_R"] = &FaceRangeParam::eyeR_irisColor_R;
        utFaceRangeParam["eyeR_irisColor_G"] = &FaceRangeParam::eyeR_irisColor_G;
        utFaceRangeParam["eyeR_irisColor_B"] = &FaceRangeParam::eyeR_irisColor_B;
        utFaceRangeParam["eyeR_irisScale"] = &FaceRangeParam::eyeR_irisScale;
        utFaceRangeParam["eyeR_cataract"] = &FaceRangeParam::eyeR_cataract;
        utFaceRangeParam["eyeR_cataractColor_R"] = &FaceRangeParam::eyeR_cataractColor_R;
        utFaceRangeParam["eyeR_cataractColor_G"] = &FaceRangeParam::eyeR_cataractColor_G;
        utFaceRangeParam["eyeR_cataractColor_B"] = &FaceRangeParam::eyeR_cataractColor_B;
        utFaceRangeParam["eyeR_scleraColor_R"] = &FaceRangeParam::eyeR_scleraColor_R;
        utFaceRangeParam["eyeR_scleraColor_G"] = &FaceRangeParam::eyeR_scleraColor_G;
        utFaceRangeParam["eyeR_scleraColor_B"] = &FaceRangeParam::eyeR_scleraColor_B;
        utFaceRangeParam["eyeR_irisDistance"] = &FaceRangeParam::eyeR_irisDistance;
        utFaceRangeParam["eyeL_irisColor_R"] = &FaceRangeParam::eyeL_irisColor_R;
        utFaceRangeParam["eyeL_irisColor_G"] = &FaceRangeParam::eyeL_irisColor_G;
        utFaceRangeParam["eyeL_irisColor_B"] = &FaceRangeParam::eyeL_irisColor_B;
        utFaceRangeParam["eyeL_irisScale"] = &FaceRangeParam::eyeL_irisScale;
        utFaceRangeParam["eyeL_cataract"] = &FaceRangeParam::eyeL_cataract;
        utFaceRangeParam["eyeL_cataractColor_R"] = &FaceRangeParam::eyeL_cataractColor_R;
        utFaceRangeParam["eyeL_cataractColor_G"] = &FaceRangeParam::eyeL_cataractColor_G;
        utFaceRangeParam["eyeL_cataractColor_B"] = &FaceRangeParam::eyeL_cataractColor_B;
        utFaceRangeParam["eyeL_scleraColor_R"] = &FaceRangeParam::eyeL_scleraColor_R;
        utFaceRangeParam["eyeL_scleraColor_G"] = &FaceRangeParam::eyeL_scleraColor_G;
        utFaceRangeParam["eyeL_scleraColor_B"] = &FaceRangeParam::eyeL_scleraColor_B;
        utFaceRangeParam["eyeL_irisDistance"] = &FaceRangeParam::eyeL_irisDistance;
        utFaceRangeParam["hair_partsId"] = &FaceRangeParam::hair_partsId;
        utFaceRangeParam["hair_color_R"] = &FaceRangeParam::hair_color_R;
        utFaceRangeParam["hair_color_G"] = &FaceRangeParam::hair_color_G;
        utFaceRangeParam["hair_color_B"] = &FaceRangeParam::hair_color_B;
        utFaceRangeParam["hair_shininess"] = &FaceRangeParam::hair_shininess;
        utFaceRangeParam["hair_rootBlack"] = &FaceRangeParam::hair_rootBlack;
        utFaceRangeParam["hair_whiteDensity"] = &FaceRangeParam::hair_whiteDensity;
        utFaceRangeParam["beard_partsId"] = &FaceRangeParam::beard_partsId;
        utFaceRangeParam["beard_color_R"] = &FaceRangeParam::beard_color_R;
        utFaceRangeParam["beard_color_G"] = &FaceRangeParam::beard_color_G;
        utFaceRangeParam["beard_color_B"] = &FaceRangeParam::beard_color_B;
        utFaceRangeParam["beard_shininess"] = &FaceRangeParam::beard_shininess;
        utFaceRangeParam["beard_rootBlack"] = &FaceRangeParam::beard_rootBlack;
        utFaceRangeParam["beard_whiteDensity"] = &FaceRangeParam::beard_whiteDensity;
        utFaceRangeParam["eyebrow_partsId"] = &FaceRangeParam::eyebrow_partsId;
        utFaceRangeParam["eyebrow_color_R"] = &FaceRangeParam::eyebrow_color_R;
        utFaceRangeParam["eyebrow_color_G"] = &FaceRangeParam::eyebrow_color_G;
        utFaceRangeParam["eyebrow_color_B"] = &FaceRangeParam::eyebrow_color_B;
        utFaceRangeParam["eyebrow_shininess"] = &FaceRangeParam::eyebrow_shininess;
        utFaceRangeParam["eyebrow_rootBlack"] = &FaceRangeParam::eyebrow_rootBlack;
        utFaceRangeParam["eyebrow_whiteDensity"] = &FaceRangeParam::eyebrow_whiteDensity;
        utFaceRangeParam["eyelash_partsId"] = &FaceRangeParam::eyelash_partsId;
        utFaceRangeParam["eyelash_color_R"] = &FaceRangeParam::eyelash_color_R;
        utFaceRangeParam["eyelash_color_G"] = &FaceRangeParam::eyelash_color_G;
        utFaceRangeParam["eyelash_color_B"] = &FaceRangeParam::eyelash_color_B;
        utFaceRangeParam["accessories_partsId"] = &FaceRangeParam::accessories_partsId;
        utFaceRangeParam["accessories_color_R"] = &FaceRangeParam::accessories_color_R;
        utFaceRangeParam["accessories_color_G"] = &FaceRangeParam::accessories_color_G;
        utFaceRangeParam["accessories_color_B"] = &FaceRangeParam::accessories_color_B;
        utFaceRangeParam["decal_partsId"] = &FaceRangeParam::decal_partsId;
        utFaceRangeParam["decal_posX"] = &FaceRangeParam::decal_posX;
        utFaceRangeParam["decal_posY"] = &FaceRangeParam::decal_posY;
        utFaceRangeParam["decal_angle"] = &FaceRangeParam::decal_angle;
        utFaceRangeParam["decal_scale"] = &FaceRangeParam::decal_scale;
        utFaceRangeParam["decal_color_R"] = &FaceRangeParam::decal_color_R;
        utFaceRangeParam["decal_color_G"] = &FaceRangeParam::decal_color_G;
        utFaceRangeParam["decal_color_B"] = &FaceRangeParam::decal_color_B;
        utFaceRangeParam["decal_gloss"] = &FaceRangeParam::decal_gloss;
        utFaceRangeParam["decal_mirror"] = &FaceRangeParam::decal_mirror;
        utFaceRangeParam["chrBodyScaleHead"] = &FaceRangeParam::chrBodyScaleHead;
        utFaceRangeParam["chrBodyScaleBreast"] = &FaceRangeParam::chrBodyScaleBreast;
        utFaceRangeParam["chrBodyScaleAbdomen"] = &FaceRangeParam::chrBodyScaleAbdomen;
        utFaceRangeParam["chrBodyScaleArm"] = &FaceRangeParam::chrBodyScaleArm;
        utFaceRangeParam["chrBodyScaleLeg"] = &FaceRangeParam::chrBodyScaleLeg;
        utFaceRangeParam["age"] = &FaceRangeParam::age;
        utFaceRangeParam["gender"] = &FaceRangeParam::gender;
        utFaceRangeParam["caricatureGeometry"] = &FaceRangeParam::caricatureGeometry;
        utFaceRangeParam["caricatureTexture"] = &FaceRangeParam::caricatureTexture;
        utFaceRangeParam["faceGeoData00"] = &FaceRangeParam::faceGeoData00;
        utFaceRangeParam["faceGeoData01"] = &FaceRangeParam::faceGeoData01;
        utFaceRangeParam["faceGeoData02"] = &FaceRangeParam::faceGeoData02;
        utFaceRangeParam["faceGeoData03"] = &FaceRangeParam::faceGeoData03;
        utFaceRangeParam["faceGeoData04"] = &FaceRangeParam::faceGeoData04;
        utFaceRangeParam["faceGeoData05"] = &FaceRangeParam::faceGeoData05;
        utFaceRangeParam["faceGeoData06"] = &FaceRangeParam::faceGeoData06;
        utFaceRangeParam["faceGeoData07"] = &FaceRangeParam::faceGeoData07;
        utFaceRangeParam["faceGeoData08"] = &FaceRangeParam::faceGeoData08;
        utFaceRangeParam["faceGeoData09"] = &FaceRangeParam::faceGeoData09;
        utFaceRangeParam["faceGeoData10"] = &FaceRangeParam::faceGeoData10;
        utFaceRangeParam["faceGeoData11"] = &FaceRangeParam::faceGeoData11;
        utFaceRangeParam["faceGeoData12"] = &FaceRangeParam::faceGeoData12;
        utFaceRangeParam["faceGeoData13"] = &FaceRangeParam::faceGeoData13;
        utFaceRangeParam["faceGeoData14"] = &FaceRangeParam::faceGeoData14;
        utFaceRangeParam["faceGeoData15"] = &FaceRangeParam::faceGeoData15;
        utFaceRangeParam["faceGeoData16"] = &FaceRangeParam::faceGeoData16;
        utFaceRangeParam["faceGeoData17"] = &FaceRangeParam::faceGeoData17;
        utFaceRangeParam["faceGeoData18"] = &FaceRangeParam::faceGeoData18;
        utFaceRangeParam["faceGeoData19"] = &FaceRangeParam::faceGeoData19;
        utFaceRangeParam["faceGeoData20"] = &FaceRangeParam::faceGeoData20;
        utFaceRangeParam["faceGeoData21"] = &FaceRangeParam::faceGeoData21;
        utFaceRangeParam["faceGeoData22"] = &FaceRangeParam::faceGeoData22;
        utFaceRangeParam["faceGeoData23"] = &FaceRangeParam::faceGeoData23;
        utFaceRangeParam["faceGeoData24"] = &FaceRangeParam::faceGeoData24;
        utFaceRangeParam["faceGeoData25"] = &FaceRangeParam::faceGeoData25;
        utFaceRangeParam["faceGeoData26"] = &FaceRangeParam::faceGeoData26;
        utFaceRangeParam["faceGeoData27"] = &FaceRangeParam::faceGeoData27;
        utFaceRangeParam["faceGeoData28"] = &FaceRangeParam::faceGeoData28;
        utFaceRangeParam["faceGeoData29"] = &FaceRangeParam::faceGeoData29;
        utFaceRangeParam["faceGeoData30"] = &FaceRangeParam::faceGeoData30;
        utFaceRangeParam["faceGeoData31"] = &FaceRangeParam::faceGeoData31;
        utFaceRangeParam["faceGeoData32"] = &FaceRangeParam::faceGeoData32;
        utFaceRangeParam["faceGeoData33"] = &FaceRangeParam::faceGeoData33;
        utFaceRangeParam["faceGeoData34"] = &FaceRangeParam::faceGeoData34;
        utFaceRangeParam["faceGeoData35"] = &FaceRangeParam::faceGeoData35;
        utFaceRangeParam["faceGeoData36"] = &FaceRangeParam::faceGeoData36;
        utFaceRangeParam["faceGeoData37"] = &FaceRangeParam::faceGeoData37;
        utFaceRangeParam["faceGeoData38"] = &FaceRangeParam::faceGeoData38;
        utFaceRangeParam["faceGeoData39"] = &FaceRangeParam::faceGeoData39;
        utFaceRangeParam["faceGeoData40"] = &FaceRangeParam::faceGeoData40;
        utFaceRangeParam["faceGeoData41"] = &FaceRangeParam::faceGeoData41;
        utFaceRangeParam["faceGeoData42"] = &FaceRangeParam::faceGeoData42;
        utFaceRangeParam["faceGeoData43"] = &FaceRangeParam::faceGeoData43;
        utFaceRangeParam["faceGeoData44"] = &FaceRangeParam::faceGeoData44;
        utFaceRangeParam["faceGeoData45"] = &FaceRangeParam::faceGeoData45;
        utFaceRangeParam["faceGeoData46"] = &FaceRangeParam::faceGeoData46;
        utFaceRangeParam["faceGeoData47"] = &FaceRangeParam::faceGeoData47;
        utFaceRangeParam["faceGeoData48"] = &FaceRangeParam::faceGeoData48;
        utFaceRangeParam["faceGeoData49"] = &FaceRangeParam::faceGeoData49;
        utFaceRangeParam["faceGeoData50"] = &FaceRangeParam::faceGeoData50;
        utFaceRangeParam["faceGeoData51"] = &FaceRangeParam::faceGeoData51;
        utFaceRangeParam["faceGeoData52"] = &FaceRangeParam::faceGeoData52;
        utFaceRangeParam["faceGeoData53"] = &FaceRangeParam::faceGeoData53;
        utFaceRangeParam["faceGeoData54"] = &FaceRangeParam::faceGeoData54;
        utFaceRangeParam["faceGeoData55"] = &FaceRangeParam::faceGeoData55;
        utFaceRangeParam["faceGeoData56"] = &FaceRangeParam::faceGeoData56;
        utFaceRangeParam["faceGeoData57"] = &FaceRangeParam::faceGeoData57;
        utFaceRangeParam["faceGeoData58"] = &FaceRangeParam::faceGeoData58;
        utFaceRangeParam["faceGeoData59"] = &FaceRangeParam::faceGeoData59;
        utFaceRangeParam["faceGeoData60"] = &FaceRangeParam::faceGeoData60;
        utFaceRangeParam["faceTexData00"] = &FaceRangeParam::faceTexData00;
        utFaceRangeParam["faceTexData01"] = &FaceRangeParam::faceTexData01;
        utFaceRangeParam["faceTexData02"] = &FaceRangeParam::faceTexData02;
        utFaceRangeParam["faceTexData03"] = &FaceRangeParam::faceTexData03;
        utFaceRangeParam["faceTexData04"] = &FaceRangeParam::faceTexData04;
        utFaceRangeParam["faceTexData05"] = &FaceRangeParam::faceTexData05;
        utFaceRangeParam["faceTexData06"] = &FaceRangeParam::faceTexData06;
        utFaceRangeParam["faceTexData07"] = &FaceRangeParam::faceTexData07;
        utFaceRangeParam["faceTexData08"] = &FaceRangeParam::faceTexData08;
        utFaceRangeParam["faceTexData09"] = &FaceRangeParam::faceTexData09;
        utFaceRangeParam["faceTexData10"] = &FaceRangeParam::faceTexData10;
        utFaceRangeParam["faceTexData11"] = &FaceRangeParam::faceTexData11;
        utFaceRangeParam["faceTexData12"] = &FaceRangeParam::faceTexData12;
        utFaceRangeParam["faceTexData13"] = &FaceRangeParam::faceTexData13;
        utFaceRangeParam["faceTexData14"] = &FaceRangeParam::faceTexData14;
        utFaceRangeParam["faceTexData15"] = &FaceRangeParam::faceTexData15;
        utFaceRangeParam["faceTexData16"] = &FaceRangeParam::faceTexData16;
        utFaceRangeParam["faceTexData17"] = &FaceRangeParam::faceTexData17;
        utFaceRangeParam["faceTexData18"] = &FaceRangeParam::faceTexData18;
        utFaceRangeParam["faceTexData19"] = &FaceRangeParam::faceTexData19;
        utFaceRangeParam["faceTexData20"] = &FaceRangeParam::faceTexData20;
        utFaceRangeParam["faceTexData21"] = &FaceRangeParam::faceTexData21;
        utFaceRangeParam["faceTexData22"] = &FaceRangeParam::faceTexData22;
        utFaceRangeParam["faceTexData23"] = &FaceRangeParam::faceTexData23;
        utFaceRangeParam["faceTexData24"] = &FaceRangeParam::faceTexData24;
        utFaceRangeParam["faceTexData25"] = &FaceRangeParam::faceTexData25;
        utFaceRangeParam["faceTexData26"] = &FaceRangeParam::faceTexData26;
        utFaceRangeParam["faceTexData27"] = &FaceRangeParam::faceTexData27;
        utFaceRangeParam["faceTexData28"] = &FaceRangeParam::faceTexData28;
        utFaceRangeParam["faceTexData29"] = &FaceRangeParam::faceTexData29;
        utFaceRangeParam["faceTexData30"] = &FaceRangeParam::faceTexData30;
        utFaceRangeParam["faceTexData31"] = &FaceRangeParam::faceTexData31;
        utFaceRangeParam["faceTexData32"] = &FaceRangeParam::faceTexData32;
        utFaceRangeParam["faceTexData33"] = &FaceRangeParam::faceTexData33;
        utFaceRangeParam["faceTexData34"] = &FaceRangeParam::faceTexData34;
        utFaceRangeParam["faceTexData35"] = &FaceRangeParam::faceTexData35;
        utFaceRangeParam["burn_scar"] = &FaceRangeParam::burn_scar;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<FaceRangeParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<FaceRangeParam>>(nullptr);
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
            {"chrBodyScaleArm", false},
            {"chrBodyScaleLeg", false},
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
            {"burn_scar", false},
        });
        return indexer;
    };
    paramsTable["FaceRangeParam"] = [tableLoader]() -> auto { return tableLoader(L"FaceRangeParam"); };
}

template<> void ParamTableIndexer<FaceRangeParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,face_partsId,skin_color_R,skin_color_G,skin_color_B,skin_gloss,skin_pores,face_beard,face_aroundEye,face_aroundEyeColor_R,face_aroundEyeColor_G,face_aroundEyeColor_B,face_cheek,face_cheekColor_R,face_cheekColor_G,face_cheekColor_B");
    fwprintf(f, L",face_eyeLine,face_eyeLineColor_R,face_eyeLineColor_G,face_eyeLineColor_B,face_eyeShadowDown,face_eyeShadowDownColor_R,face_eyeShadowDownColor_G,face_eyeShadowDownColor_B,face_eyeShadowUp,face_eyeShadowUpColor_R,face_eyeShadowUpColor_G,face_eyeShadowUpColor_B,face_lip,face_lipColor_R,face_lipColor_G,face_lipColor_B");
    fwprintf(f, L",body_hair,body_hairColor_R,body_hairColor_G,body_hairColor_B,eye_partsId,eyeR_irisColor_R,eyeR_irisColor_G,eyeR_irisColor_B,eyeR_irisScale,eyeR_cataract,eyeR_cataractColor_R,eyeR_cataractColor_G,eyeR_cataractColor_B,eyeR_scleraColor_R,eyeR_scleraColor_G,eyeR_scleraColor_B");
    fwprintf(f, L",eyeR_irisDistance,eyeL_irisColor_R,eyeL_irisColor_G,eyeL_irisColor_B,eyeL_irisScale,eyeL_cataract,eyeL_cataractColor_R,eyeL_cataractColor_G,eyeL_cataractColor_B,eyeL_scleraColor_R,eyeL_scleraColor_G,eyeL_scleraColor_B,eyeL_irisDistance,hair_partsId,hair_color_R,hair_color_G");
    fwprintf(f, L",hair_color_B,hair_shininess,hair_rootBlack,hair_whiteDensity,beard_partsId,beard_color_R,beard_color_G,beard_color_B,beard_shininess,beard_rootBlack,beard_whiteDensity,eyebrow_partsId,eyebrow_color_R,eyebrow_color_G,eyebrow_color_B,eyebrow_shininess");
    fwprintf(f, L",eyebrow_rootBlack,eyebrow_whiteDensity,eyelash_partsId,eyelash_color_R,eyelash_color_G,eyelash_color_B,accessories_partsId,accessories_color_R,accessories_color_G,accessories_color_B,decal_partsId,decal_posX,decal_posY,decal_angle,decal_scale,decal_color_R");
    fwprintf(f, L",decal_color_G,decal_color_B,decal_gloss,decal_mirror,chrBodyScaleHead,chrBodyScaleBreast,chrBodyScaleAbdomen,chrBodyScaleArm,chrBodyScaleLeg,age,gender,caricatureGeometry,caricatureTexture,faceGeoData00,faceGeoData01,faceGeoData02");
    fwprintf(f, L",faceGeoData03,faceGeoData04,faceGeoData05,faceGeoData06,faceGeoData07,faceGeoData08,faceGeoData09,faceGeoData10,faceGeoData11,faceGeoData12,faceGeoData13,faceGeoData14,faceGeoData15,faceGeoData16,faceGeoData17,faceGeoData18");
    fwprintf(f, L",faceGeoData19,faceGeoData20,faceGeoData21,faceGeoData22,faceGeoData23,faceGeoData24,faceGeoData25,faceGeoData26,faceGeoData27,faceGeoData28,faceGeoData29,faceGeoData30,faceGeoData31,faceGeoData32,faceGeoData33,faceGeoData34");
    fwprintf(f, L",faceGeoData35,faceGeoData36,faceGeoData37,faceGeoData38,faceGeoData39,faceGeoData40,faceGeoData41,faceGeoData42,faceGeoData43,faceGeoData44,faceGeoData45,faceGeoData46,faceGeoData47,faceGeoData48,faceGeoData49,faceGeoData50");
    fwprintf(f, L",faceGeoData51,faceGeoData52,faceGeoData53,faceGeoData54,faceGeoData55,faceGeoData56,faceGeoData57,faceGeoData58,faceGeoData59,faceGeoData60,faceTexData00,faceTexData01,faceTexData02,faceTexData03,faceTexData04,faceTexData05");
    fwprintf(f, L",faceTexData06,faceTexData07,faceTexData08,faceTexData09,faceTexData10,faceTexData11,faceTexData12,faceTexData13,faceTexData14,faceTexData15,faceTexData16,faceTexData17,faceTexData18,faceTexData19,faceTexData20,faceTexData21");
    fwprintf(f, L",faceTexData22,faceTexData23,faceTexData24,faceTexData25,faceTexData26,faceTexData27,faceTexData28,faceTexData29,faceTexData30,faceTexData31,faceTexData32,faceTexData33,faceTexData34,faceTexData35,burn_scar\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g\n",
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
            param->chrBodyScaleArm,
            param->chrBodyScaleLeg,
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
            param->burn_scar
        );
    }
    fclose(f);
}

}
