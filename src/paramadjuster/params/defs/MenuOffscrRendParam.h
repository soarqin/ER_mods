#pragma once

#include <cstdint>

struct MenuOffscrRendParam {
    /* カメラ注視点X
     *   カメラ注視点X
     * Camera Gaze Point X
     *   Camera gaze point X */
    float camAtPosX {};

    /* カメラ注視点Y
     *   カメラ注視点Y
     * Camera Gaze Point Y
     *   Camera gaze point Y */
    float camAtPosY {};

    /* カメラ注視点Z
     *   カメラ注視点Z
     * Camera Gaze Point Z
     *   Camera gaze point Z */
    float camAtPosZ {};

    /* カメラ距離
     *   カメラ距離
     * Camera Distance
     *   Camera distance
     * Default Value  = 10 */
    float camDist = 10;

    /* カメラ向きX
     *   カメラ向きX
     * Camera Rotation X
     *   Camera oriented X */
    float camRotX {};

    /* カメラ向きY
     *   カメラ向きY
     * Camera Rotation Y
     *   Suitable for camera Y */
    float camRotY {};

    /* カメラ画角
     *   カメラ画角
     * Camera Field of View
     *   Camera angle of view
     * Default Value  = 49 */
    float camFov = 49;

    /* カメラ操作時最短距離
     *   カメラ操作時最短距離
     * Camera Distance - Minimum
     *   Shortest distance when operating the camera */
    float camDistMin {};

    /* カメラ操作時最長距離
     *   カメラ操作時最長距離
     * Camera Distance - Maximum
     *   Longest distance when operating the camera
     * Default Value  = 100 */
    float camDistMax = 100;

    /* カメラ操作時最小向き
     *   カメラ操作時最小向き
     * Camera Rotation - Minimum
     *   Minimum orientation when operating the camera
     * Default Value  = -89 */
    float camRotXMin = -89;

    /* カメラ操作時最大向き
     *   カメラ操作時最大向き
     * Camera Rotation - Maximum
     *   Maximum orientation when operating the camera
     * Default Value  = 89 */
    float camRotXMax = 89;

    /* GPARAM ID
     *   GparamID
     * Default Value  = 10 */
    uint32_t GparamID = 10;

    /* 環境マップテクスチャID
     *   環境マップテクスチャID。N:\GR\data\Other\SysEnvTex\GILM????_rem.dds の数字4桁に対応しています。
     * Env Texture ID
     *   Environment map texture ID. It corresponds to 4 digits of N \ GR \ data \ Other \ SysEnvTex \ GILM _rem.dds.
     * Default Value  = 10 */
    uint32_t envTexId = 10;

    /* GparamID(PS4用)
     *   GparamID(PS4用)
     * GPARAM ID - PS4
     *   Gparam ID (for PS4)
     * Default Value  = 10 */
    uint32_t Grapm_ID_forPS4 = 10;

    /* GparamID(XboxOne用)
     *   GparamID(XboxOne用)
     * GPARAM ID - XB1
     *   Gparam ID (for Xbox One)
     * Default Value  = 10 */
    uint32_t Grapm_ID_forXB1 = 10;

    /* 予約
     *   予約 */
    char pad[4] {};
};
