#ifndef HOVER_MFC_H
#define HOVER_MFC_H

#include "stdafx.h"

#include "CGameObj.h"
#include "CPlayer.h"
#include "CPodObj.h"

// VTABLE: HOVER 0x4bc7f0
// SIZE 0xb8
class CFloorObj : public CGameObj {
    DECLARE_DYNAMIC(CFloorObj);
public:
    // FUNCTION: HOVER 0x421890
    virtual ~CFloorObj() {};

    // SYNTHETIC: HOVER 0x4011f0
    // CFloorObj::GetRuntimeClass

    // SYNTHETIC: HOVER 0x4219d0
    // CFloorObj::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c53c8
    // classCFloorObj
protected:
    char padding[52];   // 0x84
};

// VTABLE: HOVER 0x4bd100
// SIZE 0x5c
class CCollider : public CObject {
    DECLARE_DYNAMIC(CCollider);
public:
    virtual ~CCollider() {};

    // SYNTHETIC: HOVER 0x41b6c0
    // CCollider::`scalar deleting destructor'

    // SYNTHETIC: HOVER 0x42c6e0
    // CCollider::GetRuntimeClass

    // GLOBAL: HOVER 0x4c55a0
    // classCCollider
protected:
    char padding[88];   // 0x04
};

// VTABLE: HOVER 0x4bca88
// SIZE 0x100
class CContainer : public CPodObj {
    DECLARE_DYNAMIC(CContainer);
public:
    virtual ~CContainer() {};

    // SYNTHETIC: HOVER 0x4038c0
    // CContainer::GetRuntimeClass

    // SYNTHETIC: HOVER 0x41b230
    // CContainer::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c5438
    // classCContainer
};

// VTABLE: HOVER 0x4bc9f0
// SIZE 0x100
class CFlag : public CPodObj {
    DECLARE_DYNAMIC(CFlag);
public:
    virtual ~CFlag() {};

    // SYNTHETIC: HOVER 0x4014d0
    // CFlag::GetRuntimeClass

    // SYNTHETIC: HOVER 0x421db0
    // CFlag::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c5418
    // classCFlag
};

// VTABLE: HOVER 0x4bcf40
// SIZE 0xb8
class CFlagRemover : public CFloorObj {
    DECLARE_DYNAMIC(CFlagRemover);
public:
    virtual ~CFlagRemover() {};

    // SYNTHETIC: HOVER 0x401510
    // CFlagRemover::GetRuntimeClass

    // SYNTHETIC: HOVER 0x422b20
    // CFlagRemover::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c5548
    // classCFlagRemover
};

// VTABLE: HOVER 0x4bcb48
// SIZE 0xb8
class CHoldPad : public CFloorObj {
    DECLARE_DYNAMIC(CHoldPad);
public:
    virtual ~CHoldPad() {};

    // SYNTHETIC: HOVER 0x401200
    // CHoldPad::GetRuntimeClass

    // SYNTHETIC: HOVER 0x421f30
    // CHoldPad::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c5460
    // classCHoldPad
};

// VTABLE: HOVER 0x4bcbe0
// SIZE 0x1fc
class CHumanPlayer : public CPlayer {
    DECLARE_DYNAMIC(CHumanPlayer);
public:
    virtual ~CHumanPlayer() {};

    // SYNTHETIC: HOVER 0x4014e0
    // CHumanPlayer::GetRuntimeClass

    // SYNTHETIC: HOVER 0x42c260
    // CHumanPlayer::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c5488
    // classCHumanPlayer
};

// VTABLE: HOVER 0x4bcdc0
// SIZE 0x100
class CMapEraserPod : public CPodObj {
    DECLARE_DYNAMIC(CMapEraserPod);
public:
    virtual ~CMapEraserPod() {}

    // SYNTHETIC: HOVER 0x4014f0
    // CMapEraserPod::GetRuntimeClass

    // SYNTHETIC: HOVER 0x41b350
    // CMapEraserPod::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c54f8
    // classCMapEraserPod
};

// VTABLE: HOVER 0x4bd078
// SIZE 0x18
class CRegionMatrix : public CObject {
    DECLARE_DYNAMIC(CRegionMatrix);
public:
    virtual ~CRegionMatrix() {}

    // SYNTHETIC: HOVER 0x42c6f0
    // CRegionMatrix::GetRuntimeClass

    // SYNTHETIC: HOVER 0x42c7a0
    // CRegionMatrix::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c55b8
    // classCRegionMatrix
protected:
    char padding[20];
};

// VTABLE: HOVER 0x4bcce0
// SIZE 0x688
class CRobotPlayer : public CPlayer {
    DECLARE_DYNAMIC(CRobotPlayer);
public:
    virtual ~CRobotPlayer() {}

    // SYNTHETIC: HOVER 0x4038d0
    // CRobotPlayer::GetRuntimeClass

    // SYNTHETIC: HOVER 0x422250
    // CRobotPlayer::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c54b8
    // classCRobotPlayer
protected:
    char padding[1164];
};

// VTABLE: HOVER 0x4bc750
// SIZE 0xb8
class CSledPad : public CFloorObj {
    DECLARE_DYNAMIC(CSledPad);
public:
    virtual ~CSledPad() {}

    // SYNTHETIC: HOVER 0x4011e0
    // CSledPad::GetRuntimeClass

    // SYNTHETIC: HOVER 0x4217b0
    // CSledPad::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c53a0
    // classCSledPad
};

// VTABLE: HOVER 0x4bc1f0
// SIZE 0x100
class CSmokeBombPod : public CPodObj {
    DECLARE_DYNAMIC(CSmokeBombPod);
public:
    virtual ~CSmokeBombPod() {}

    // SYNTHETIC: HOVER 0x401480
    // CSmokeBombPod::GetRuntimeClass

    // SYNTHETIC: HOVER 0x421290
    // CSmokeBombPod::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c5270
    // classCSmokeBombPod
};

// VTABLE: HOVER 0x4bc690
// SIZE 0x100
class CSpeedPod : public CPodObj {
    DECLARE_DYNAMIC(CSpeedPod);
public:
    virtual ~CSpeedPod() {}

    // SYNTHETIC: HOVER 0x4014c0
    // CSpeedPod::GetRuntimeClass

    // SYNTHETIC: HOVER 0x41a510
    // CSpeedPod::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c5378
    // classCSpeedPod
};

// VTABLE: HOVER 0x4bc5c0
// SIZE 0x100
class CTempWallPod : public CPodObj {
    DECLARE_DYNAMIC(CTempWallPod);
public:
    virtual ~CTempWallPod() {}

    // SYNTHETIC: HOVER 0x4014b0
    // CTempWallPod::GetRuntimeClass

    // SYNTHETIC: HOVER 0x4215d0
    // CTempWallPod::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c5340
    // classCTempWallPod
};

// VTABLE: HOVER 0x4bcfd8
// SIZE 0xa0
class CWall : public CGameObj {
    DECLARE_DYNAMIC(CWall);
public:
    virtual ~CWall() {}

    // SYNTHETIC: HOVER 0x4011d0
    // CWall::GetRuntimeClass

    // SYNTHETIC: HOVER 0x417ba0
    // CWall::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c5570
    // classCWall
protected:
    char padding[28];
};

#endif // HOVER_MFC_H