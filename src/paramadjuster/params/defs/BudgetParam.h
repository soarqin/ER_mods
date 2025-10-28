#pragma once

#include <cstdint>

struct BudgetParam {
    /* VRAM:ALL
     *   VRAM:ALL(単位はMB)
     * VRAM: ALL
     *   VRAM: ALL (unit is MB)
     * Default Value  = 1 */
    float vram_all = 1;

    /* VRAM:マップ/オブジェ テクスチャ
     *   VRAM:マップ/オブジェ テクスチャ(単位はMB)
     * VRAM: Map / Object Texture
     *   VRAM: Map / Object Texture (Unit: MB)
     * Default Value  = 1 */
    float vram_mapobj_tex = 1;

    /* VRAM:マップ/オブジェ モデル
     *   VRAM:マップ/オブジェ モデル(単位はMB)
     * VRAM: Map / Object Model
     *   VRAM: Map / object model (in MB)
     * Default Value  = 1 */
    float vram_mapobj_mdl = 1;

    /* VRAM:マップ
     *   VRAM:マップ(単位はMB)
     * VRAM: map
     *   VRAM: Map (in MB)
     * Default Value  = 1 */
    float vram_map = 1;

    /* VRAM:キャラ
     *   VRAM:キャラ(単位はMB)
     * VRAM: Character
     *   VRAM: Character (unit is MB)
     * Default Value  = 1 */
    float vram_chr = 1;

    /* VRAM:パーツ
     *   VRAM:パーツ(単位はMB)
     * VRAM: Parts
     *   VRAM: Parts (unit is MB)
     * Default Value  = 1 */
    float vram_parts = 1;

    /* VRAM:SFX
     *   VRAM:SFX(単位はMB)
     * VRAM: SFX
     *   VRAM: SFX (unit is MB)
     * Default Value  = 1 */
    float vram_sfx = 1;

    /* VRAM:キャラ テクスチャ
     *   VRAM:キャラ テクスチャ(単位はMB)
     * VRAM: Character texture
     *   VRAM: Character texture (unit is MB)
     * Default Value  = 1 */
    float vram_chr_tex = 1;

    /* VRAM:キャラ モデル
     *   VRAM:キャラ モデル(単位はMB)
     * VRAM: Character model
     *   VRAM: Character model (unit is MB)
     * Default Value  = 1 */
    float vram_chr_mdl = 1;

    /* VRAM:パーツ テクスチャ
     *   VRAM:パーツ テクスチャ(単位はMB)
     * VRAM: Parts texture
     *   VRAM: Parts texture (unit is MB)
     * Default Value  = 1 */
    float vram_parts_tex = 1;

    /* VRAM:パーツ モデル
     *   VRAM:パーツ モデル(単位はMB)
     * VRAM: Parts model
     *   VRAM: Parts model (unit is MB)
     * Default Value  = 1 */
    float vram_parts_mdl = 1;

    /* VRAM:SFX テクスチャ
     *   VRAM:SFX テクスチャ(単位はMB)
     * VRAM: SFX texture
     *   VRAM: SFX texture (unit is MB)
     * Default Value  = 1 */
    float vram_sfx_tex = 1;

    /* VRAM:SFX モデル
     *   VRAM:SFX モデル(単位はMB)
     * VRAM: SFX model
     *   VRAM: SFX model (in MB)
     * Default Value  = 1 */
    float vram_sfx_mdl = 1;

    /* VRAM:Gi
     *   VRAM:Gi(単位はMB)
     * VRAM: Gi
     *   VRAM: Gi (unit is MB)
     * Default Value  = 1 */
    float vram_gi = 1;

    /* VRAM:メニュー
     *   VRAM:メニュー(単位はMB)
     * VRAM: Menu
     *   VRAM: Menu (unit is MB)
     * Default Value  = 1 */
    float vram_menu_tex = 1;

    /* VRAM:DECAL_RT
     *   VRAM:DECALレンダーターゲット(単位はMB)
     * VRAM: DECAL_RT
     *   VRAM: DECAL render target (unit is MB)
     * Default Value  = 1 */
    float vram_decal_rt = 1;

    /* VRAM:DECAL
     *   VRAM:DECAL(単位はMB)
     * VRAM: DECAL
     *   VRAM: DECAL (unit is MB)
     * Default Value  = 1 */
    float vram_decal = 1;

    /* 予約領域 */
    char reserve_0[4] {};

    /* VRAM:その他 テクスチャ
     *   VRAM:その他 モデル(単位はMB)
     * VRAM: Other textures
     *   VRAM: Other models (in MB)
     * Default Value  = 1 */
    float vram_other_tex = 1;

    /* VRAM:その他 モデル
     *   VRAM:その他 テクスチャ(単位はMB)
     * VRAM: Other models
     *   VRAM: Other textures (in MB)
     * Default Value  = 1 */
    float vram_other_mdl = 1;

    /* HAVOK:アニメ
     *   HAVOK:アニメ(単位はMB)
     * HAVOK: Animation
     *   HAVOK: Animation (unit is MB)
     * Default Value  = 1 */
    float havok_anim = 1;

    /* HAVOK:配置
     *   HAVOK:配置(単位はMB)
     * HAVOK: Placement
     *   HAVOK: Placement (unit is MB)
     * Default Value  = 1 */
    float havok_ins = 1;

    /* HAVOK:ヒット
     *   HAVOK:ヒット(単位はMB)
     * HAVOK: Hit
     *   HAVOK: Hit (unit is MB)
     * Default Value  = 1 */
    float havok_hit = 1;

    /* VRAM:その他
     *   VRAM:その他(単位はMB)
     * VRAM: Other
     *   VRAM: Other (unit is MB)
     * Default Value  = 1 */
    float vram_other = 1;

    /* VRAM:合算値
     *   VRAM:合算値(単位はMB)
     * VRAM: Total Value
     *   VRAM: Total value (unit is MB)
     * Default Value  = 1 */
    float vram_detail_all = 1;

    /* VRAM:キャラ&パーツ
     *   VRAM:キャラとパーツ合算値(単位はMB)
     * VRAM: Characters and Parts
     *   VRAM: Total value of characters and parts (unit is MB)
     * Default Value  = 1 */
    float vram_chr_and_parts = 1;

    /* HAVOK:ナビメッシュ
     *   HAVOK:ナビメッシュ(単位はMB)
     * HAVOK: Navimesh
     *   HAVOK: Navimesh (unit is MB)
     * Default Value  = 1 */
    float havok_navimesh = 1;

    /* 予約領域
     *   予約領域 */
    char reserve_1[24] {};
};
