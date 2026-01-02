#ifndef HOVER_MFC_H
#define HOVER_MFC_H

#include "stdafx.h"

// VTABLE: HOVER 0x4be148
// SIZE 0x84
class CGameObj : public CObject {
    // DECOMP: This may not be the correct vtable addr.
    // There are 9 tables with the same call to GetRuntimeClass, which
    // means 8 of them extend CGameObj but do not use DECLARE_DYNAMIC.
    DECLARE_DYNAMIC(CGameObj);

    // SYNTHETIC: HOVER 0x42ad00
    // CGameObj::GetRuntimeClass

    // GLOBAL: HOVER 0x4c52c0
    // classCGameObj

protected:
    char padding[128];  // 0x04
};

// VTABLE: HOVER 0x4bc910
// SIZE 0x1fc
class CPlayer : public CGameObj {
    DECLARE_DYNAMIC(CPlayer);

    // SYNTHETIC: HOVER 0x42b8d0
    // CPlayer::GetRuntimeClass

    // GLOBAL: HOVER 0x4c53f8
    // classCPlayer
protected:
    char padding[376];  // 0x84
};

// VTABLE: HOVER 0x4bc500
// SIZE 0x100
class CPodObj : public CGameObj {
    DECLARE_DYNAMIC(CPodObj);

    // SYNTHETIC: HOVER 0x42aec0
    // CPodObj::GetRuntimeClass

    // GLOBAL: HOVER 0x4c5318
    // classCPodObj
protected:
    char padding[124];  // 0x84
};

// VTABLE: HOVER 0x4bc7f0
// SIZE 0xb8
class CFloorObj : public CGameObj {
    DECLARE_DYNAMIC(CFloorObj);

    // SYNTHETIC: HOVER 0x4011f0
    // CFloorObj::GetRuntimeClass

    // GLOBAL: HOVER 0x4c53c8
    // classCFloorObj
protected:
    char padding[52];   // 0x84
};

// VTABLE: HOVER 0x4be698
// SIZE 0xb0
class CBeacon : public CGameObj {
    DECLARE_DYNAMIC(CBeacon);

    // SYNTHETIC: HOVER 0x40bc40
    // CBeacon::GetRuntimeClass

    // GLOBAL: HOVER 0x4c5790
    // classCBeacon
protected:
    char padding[44];   // 0x84
};

// VTABLE: HOVER 0x4bae10
// SIZE 0x84a0
class CBumperDoc : public CDocument {
    DECLARE_DYNCREATE(CBumperDoc);
public:

    // FUNCTION: HOVER 0x426f10
    virtual void Serialize(CArchive& ar) {};

    // SYNTHETIC: HOVER 0x41e1d0
    // CBumperDoc::Construct

    // SYNTHETIC: HOVER 0x41e230
    // CBumperDoc::CBumperDoc

    // SYNTHETIC: HOVER 0x41e0d0
    // CBumperDoc::`scalar deleting destructor'

    // SYNTHETIC: HOVER 0x426e80
    // CBumperDoc::GetRuntimeClass
protected:
    char padding[33856];    // 0x60
};

// VTABLE: HOVER 0x4bb6d0
// SIZE 0x55c
class CBumperView : public CView {
    DECLARE_DYNCREATE(CBumperView);
public:
    virtual void OnDraw(CDC*);

    // SYNTHETIC: HOVER 0x41e5a0
    // CBumperView::Construct

    // SYNTHETIC: HOVER 0x41e700
    // CBumperView::GetRuntimeClass

    // SYNTHETIC: HOVER 0x420dd0
    // CBumperView::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c4cb0
    // classCBumperView
protected:
    char padding[1320];     // 0x34
};

// VTABLE: HOVER 0x4bd100
// SIZE 0x5c
class CCollider : public CObject {
    DECLARE_DYNAMIC(CCollider);
public:

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

    // GLOBAL: HOVER 0x4c5438
    // classCContainer
};

// VTABLE: HOVER 0x4bc9f0
// SIZE 0x100
class CFlag : public CPodObj {
    DECLARE_DYNAMIC(CFlag);

    // GLOBAL: HOVER 0x4c5418
    // classCFlag
};

// VTABLE: HOVER 0x4bcf40
// SIZE 0xb8
class CFlagRemover : public CFloorObj {
    DECLARE_DYNAMIC(CFlagRemover);

    // GLOBAL: HOVER 0x4c5548
    // classCFlagRemover
};

// VTABLE: HOVER 0x4bcb48
// SIZE 0xb8
class CHoldPad : public CFloorObj {
    DECLARE_DYNAMIC(CHoldPad);

    // GLOBAL: HOVER 0x4c5460
    // classCHoldPad
};

// VTABLE: HOVER 0x4bcbe0
// SIZE 0x1fc
class CHumanPlayer : public CPlayer {
    DECLARE_DYNAMIC(CHumanPlayer);

    // GLOBAL: HOVER 0x4c5488
    // classCHumanPlayer
};

// VTABLE: HOVER 0x4bc440
// SIZE 0x100
class CInviciblePod : public CPodObj {
    DECLARE_DYNAMIC(CInviciblePod);

    // GLOBAL: HOVER 0x4c52f0
    // classCInviciblePod
};

// VTABLE: HOVER 0x4bc2c0
// SIZE 0x100
class CJumpPod : public CPodObj {
    DECLARE_DYNAMIC(CJumpPod);

    // GLOBAL: HOVER 0x4c5298
    // classCJumpPod
};

// VTABLE: HOVER 0x4bab30
// SIZE 0x158
class CMainFrame : public CFrameWnd {
    DECLARE_DYNCREATE(CMainFrame);

    // SYNTHETIC: HOVER 0x41d600
    // CMainFrame::Construct

    // SYNTHETIC: HOVER 0x41dfd0
    // CMainFrame::`scalar deleting destructor`

    // SYNTHETIC: HOVER 0x426a50
    // CMainFrame::GetRuntimeClass
protected:
    char padding[152];
};

// VTABLE: HOVER 0x4bcdc0
// SIZE 0x100
class CMapEraserPod : public CPodObj {
    DECLARE_DYNAMIC(CMapEraserPod);

    // GLOBAL: HOVER 0x4c54f8
    // classCMapEraserPod
};

// VTABLE: HOVER 0x4bd078
// SIZE 0x18
class CRegionMatrix : public CObject {
    DECLARE_DYNAMIC(CRegionMatrix);

    // GLOBAL: HOVER 0x4c55b8
    // classCRegionMatrix
protected:
    char padding[20];
};

// VTABLE: HOVER 0x4bcce0
// SIZE 0x688
class CRobotPlayer : public CPlayer {
    DECLARE_DYNAMIC(CRobotPlayer);

    // GLOBAL: HOVER 0x4c54b8
    // classCRobotPlayer
protected:
    char padding[1164];
};

// VTABLE: HOVER 0x4bc750
// SIZE 0xb8
class CSledPad : public CFloorObj {
    DECLARE_DYNAMIC(CSledPad);

    // GLOBAL: HOVER 0x4c53a0
    // classCSledPad
};

// VTABLE: HOVER 0x4bce80
// SIZE 0x100
class CSlowPod : public CPodObj {
    DECLARE_DYNAMIC(CSlowPod);

    // GLOBAL: HOVER 0x4c5520
    // classCSlowPod
};

// VTABLE: HOVER 0x4bc1f0
// SIZE 0x100
class CSmokeBombPod : public CPodObj {
    DECLARE_DYNAMIC(CSmokeBombPod);

    // GLOBAL: HOVER 0x4c5270
    // classCSmokeBombPod
};

// VTABLE: HOVER 0x4bc690
// SIZE 0x100
class CSpeedPod : public CPodObj {
    DECLARE_DYNAMIC(CSpeedPod);

    // GLOBAL: HOVER 0x4c5378
    // classCSpeedPod
};

// VTABLE: HOVER 0x4bc5c0
// SIZE 0x100
class CTempWallPod : public CPodObj {
    DECLARE_DYNAMIC(CTempWallPod);

    // GLOBAL: HOVER 0x4c5340
    // classCTempWallPod
};

// VTABLE: HOVER 0x4bcfd8
// SIZE 0xa0
class CWall : public CGameObj {
    DECLARE_DYNAMIC(CWall);

    // SYNTHETIC: HOVER 0x4011d0
    // CWall::GetRuntimeClass

    // GLOBAL: HOVER 0x4c5570
    // classCWall
protected:
    char padding[28];
};

#endif // HOVER_MFC_H