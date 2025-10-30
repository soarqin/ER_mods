# Param Adjuster

## Changelog

* v0.1.0
  * Initial release

## What is this

This is a simple mod to adjust param on game boot, using lua script.

## How to install

* Load it with any mod loader, or rename it to `winhttp.dll` and put it aside `eldenring.exe`.
* put your scipts in `scripts` folder.

## Lua script references

* All files with extension `.lua` inside `scripts` folder will be loaded on game start.

* 2 examples are located in `scripts` folder.

* Use `Params.TableName()` to load a param table, Supported `TableName`'s are listed at last of this part.
  * I removed Network, Graphics and Audio related params to reduce foorprint of lua bindings.

* For any param table:
  * Property `count` returns row count
  * Function `id(n)` returns ID of row `n` (`n` is in `[0, count)`)
  * Indexer `[n]` returns data of row `n` (`n` is in `[0, count)`)
  * Function `exportToCsv(csvPath)` exports whole table to csv.
  * Function `importFromCsv(csvPath)` imports whole csv to table.
    * First row is field titles, the mod will try to match them with param fields described below.
    * First column is always treated as ID, whatever the title is.
    * Missing fields will leave unmodified.
    * Name mismatched fields will be ignored.

* For any param row:
  * Check Smithbox's [PARAM Defs](https://github.com/vawser/Smithbox/tree/main/src/Smithbox.Data/Assets/PARAM/ER/Defs) and [PARAM Meta](https://github.com/vawser/Smithbox/tree/main/src/Smithbox.Data/Assets/PARAM/ER/Meta) for field descriptions. All fields are property.

* Supprted `TableName`'s with their param types:
  * `ActionButtonParam`: `ActionButtonParam`
  * `AssetEnvironmentGeometryParam`: `AssetEnvironmentGeometryParam`
  * `AssetMaterialSfxParam`: `AssetMaterialSfxParam`
  * `AssetModelSfxParam`: `AssetModelSfxParam`
  * `AtkParam_Npc`: `AtkParam_Npc`
  * `AtkParam_Pc`: `AtkParam_Pc`
  * `AttackElementCorrectParam`: `AttackElementCorrectParam`
  * `BaseChrSelectMenuParam`: `BaseChrSelectMenuParam`
  * `BehaviorParam`: `BehaviorParam`
  * `BehaviorParam_PC`: `BehaviorParam_PC`
  * `BonfireWarpParam`: `BonfireWarpParam`
  * `BonfireWarpSubCategoryParam`: `BonfireWarpSubCategoryParam`
  * `BonfireWarpTabParam`: `BonfireWarpTabParam`
  * `BuddyParam`: `BuddyParam`
  * `BuddyStoneParam`: `BuddyStoneParam`
  * `BudgetParam`: `BudgetParam`
  * `BulletCreateLimitParam`: `BulletCreateLimitParam`
  * `Bullet`: `Bullet`
  * `CalcCorrectGraph`: `CalcCorrectGraph`
  * `CameraFadeParam`: `CameraFadeParam`
  * `Ceremony`: `Ceremony`
  * `CharaInitParam`: `CharaInitParam`
  * `CharMakeMenuListItemParam`: `CharMakeMenuListItemParam`
  * `CharMakeMenuTopParam`: `CharMakeMenuTopParam`
  * `ChrActivateConditionParam`: `ChrActivateConditionParam`
  * `ChrEquipModelParam`: `ChrEquipModelParam`
  * `ChrModelParam`: `ChrModelParam`
  * `ClearCountCorrectParam`: `ClearCountCorrectParam`
  * `CommonSystemParam`: `CommonSystemParam`
  * `CoolTimeParam`: `CoolTimeParam`
  * `CutsceneGparamTimeParam`: `CutsceneGparamTimeParam`
  * `CutsceneGparamWeatherParam`: `CutsceneGparamWeatherParam`
  * `CutsceneMapIdParam`: `CutsceneMapIdParam`
  * `CutSceneTextureLoadParam`: `CutSceneTextureLoadParam`
  * `CutsceneTimezoneConvertParam`: `CutsceneTimezoneConvertParam`
  * `CutsceneWeatherOverrideGparamConvertParam`: `CutsceneWeatherOverrideGparamConvertParam`
  * `DecalParam`: `DecalParam`
  * `DefaultKeyAssign`: `DefaultKeyAssign`
  * `DirectionCameraParam`: `DirectionCameraParam`
  * `EnemyCommonParam`: `EnemyCommonParam`
  * `EnvObjLotParam`: `EnvObjLotParam`
  * `EquipMtrlSetParam`: `EquipMtrlSetParam`
  * `EquipParamAccessory`: `EquipParamAccessory`
  * `EquipParamCustomWeapon`: `EquipParamCustomWeapon`
  * `EquipParamGem`: `EquipParamGem`
  * `EquipParamGoods`: `EquipParamGoods`
  * `EquipParamProtector`: `EquipParamProtector`
  * `EquipParamWeapon`: `EquipParamWeapon`
  * `HPEstusFlaskRecoveryParam`: `HPEstusFlaskRecoveryParam`
  * `MPEstusFlaskRecoveryParam`: `MPEstusFlaskRecoveryParam`
  * `FaceParam`: `FaceParam`
  * `FaceRangeParam`: `FaceRangeParam`
  * `FeTextEffectParam`: `FeTextEffectParam`
  * `FinalDamageRateParam`: `FinalDamageRateParam`
  * `FootSfxParam`: `FootSfxParam`
  * `GameAreaParam`: `GameAreaParam`
  * `GestureParam`: `GestureParam`
  * `GparamRefSettings`: `GparamRefSettings`
  * `GrassLodRangeParam`: `GrassLodRangeParam`
  * `GrassTypeParam`: `GrassTypeParam`
  * `GrassTypeParam_Lv1`: `GrassTypeParam_Lv1`
  * `GrassTypeParam_Lv2`: `GrassTypeParam_Lv2`
  * `HitEffectSeParam`: `HitEffectSeParam`
  * `HitEffectSfxConceptParam`: `HitEffectSfxConceptParam`
  * `HitEffectSfxParam`: `HitEffectSfxParam`
  * `HitMtrlParam`: `HitMtrlParam`
  * `ItemLotParam_enemy`: `ItemLotParam_enemy`
  * `ItemLotParam_map`: `ItemLotParam_map`
  * `KeyAssignMenuItemParam`: `KeyAssignMenuItemParam`
  * `KeyAssignParam_TypeA`: `KeyAssignParam_TypeA`
  * `KeyAssignParam_TypeB`: `KeyAssignParam_TypeB`
  * `KeyAssignParam_TypeC`: `KeyAssignParam_TypeC`
  * `KnockBackParam`: `KnockBackParam`
  * `KnowledgeLoadScreenItemParam`: `KnowledgeLoadScreenItemParam`
  * `LegacyDistantViewPartsReplaceParam`: `LegacyDistantViewPartsReplaceParam`
  * `LockCamParam`: `LockCamParam`
  * `Magic`: `Magic`
  * `MapDefaultInfoParam`: `MapDefaultInfoParam`
  * `MapGdRegionDrawParam`: `MapGdRegionDrawParam`
  * `MapGdRegionInfoParam`: `MapGdRegionInfoParam`
  * `MapGridCreateHeightDetailLimitInfo`: `MapGridCreateHeightDetailLimitInfo`
  * `MapGridCreateHeightLimitInfoParam`: `MapGridCreateHeightLimitInfoParam`
  * `MapMimicryEstablishmentParam`: `MapMimicryEstablishmentParam`
  * `MapNameTexParam`: `MapNameTexParam`
  * `MapNameTexParam_m61`: `MapNameTexParam_m61`
  * `MapPieceTexParam`: `MapPieceTexParam`
  * `MapPieceTexParam_m61`: `MapPieceTexParam_m61`
  * `MaterialExParam`: `MaterialExParam`
  * `MenuCommonParam`: `MenuCommonParam`
  * `MenuOffscrRendParam`: `MenuOffscrRendParam`
  * `MenuColorTableParam`: `MenuColorTableParam`
  * `MenuPropertyLayoutParam`: `MenuPropertyLayoutParam`
  * `MenuPropertySpecParam`: `MenuPropertySpecParam`
  * `MenuValueTableParam`: `MenuValueTableParam`
  * `MimicryEstablishmentTexParam`: `MimicryEstablishmentTexParam`
  * `MimicryEstablishmentTexParam_m61`: `MimicryEstablishmentTexParam_m61`
  * `MoveParam`: `MoveParam`
  * `MultiHPEstusFlaskBonusParam`: `MultiHPEstusFlaskBonusParam`
  * `MultiMPEstusFlaskBonusParam`: `MultiMPEstusFlaskBonusParam`
  * `MultiPlayCorrectionParam`: `MultiPlayCorrectionParam`
  * `MultiSoulBonusRateParam`: `MultiSoulBonusRateParam`
  * `NpcAiActionParam`: `NpcAiActionParam`
  * `NpcAiBehaviorProbability`: `NpcAiBehaviorProbability`
  * `NpcParam`: `NpcParam`
  * `NpcThinkParam`: `NpcThinkParam`
  * `ObjActParam`: `ObjActParam`
  * `PartsDrawParam`: `PartsDrawParam`
  * `PhantomParam`: `PhantomParam`
  * `PlayerCommonParam`: `PlayerCommonParam`
  * `PlayRegionParam`: `PlayRegionParam`
  * `PostureControlParam_Gender`: `PostureControlParam_Gender`
  * `PostureControlParam_Pro`: `PostureControlParam_Pro`
  * `PostureControlParam_WepLeft`: `PostureControlParam_WepLeft`
  * `PostureControlParam_WepRight`: `PostureControlParam_WepRight`
  * `RandomAppearParam`: `RandomAppearParam`
  * `ReinforceParamProtector`: `ReinforceParamProtector`
  * `ReinforceParamWeapon`: `ReinforceParamWeapon`
  * `ResistCorrectParam`: `ResistCorrectParam`
  * `ReverbAuxSendBusParam`: `ReverbAuxSendBusParam`
  * `RideParam`: `RideParam`
  * `RoleParam`: `RoleParam`
  * `RollingObjLotParam`: `RollingObjLotParam`
  * `RuntimeBoneControlParam`: `RuntimeBoneControlParam`
  * `SeActivationRangeParam`: `SeActivationRangeParam`
  * `SeMaterialConvertParam`: `SeMaterialConvertParam`
  * `SfxBlockResShareParam`: `SfxBlockResShareParam`
  * `ShopLineupParam`: `ShopLineupParam`
  * `ShopLineupParam_Recipe`: `ShopLineupParam_Recipe`
  * `SignPuddleParam`: `SignPuddleParam`
  * `SignPuddleSubCategoryParam`: `SignPuddleSubCategoryParam`
  * `SignPuddleTabParam`: `SignPuddleTabParam`
  * `SpeedtreeParam`: `SpeedtreeParam`
  * `SpEffectParam`: `SpEffectParam`
  * `SpEffectSetParam`: `SpEffectSetParam`
  * `SpEffectVfxParam`: `SpEffectVfxParam`
  * `SwordArtsParam`: `SwordArtsParam`
  * `TalkParam`: `TalkParam`
  * `ThrowDirectionSfxParam`: `ThrowDirectionSfxParam`
  * `ThrowParam`: `ThrowParam`
  * `ToughnessParam`: `ToughnessParam`
  * `TutorialParam`: `TutorialParam`
  * `WaypointParam`: `WaypointParam`
  * `WeatherAssetCreateParam`: `WeatherAssetCreateParam`
  * `WeatherAssetReplaceParam`: `WeatherAssetReplaceParam`
  * `WeatherLotParam`: `WeatherLotParam`
  * `WeatherLotTexParam`: `WeatherLotTexParam`
  * `WeatherLotTexParam_m61`: `WeatherLotTexParam_m61`
  * `WeatherParam`: `WeatherParam`
  * `WepAbsorpPosParam`: `WepAbsorpPosParam`
  * `WetAspectParam`: `WetAspectParam`
  * `WhiteSignCoolTimeParam`: `WhiteSignCoolTimeParam`
  * `WorldMapLegacyConvParam`: `WorldMapLegacyConvParam`
  * `WorldMapPieceParam`: `WorldMapPieceParam`
  * `WorldMapPlaceNameParam`: `WorldMapPlaceNameParam`
  * `WorldMapPointParam`: `WorldMapPointParam`
