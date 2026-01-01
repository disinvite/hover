#ifndef HOVER_MFC_H
#define HOVER_MFC_H

#include "stdafx.h"

// superclass for others.
class CGameObj : public CObject {
    DECLARE_DYNAMIC(CGameObj);

    // SYNTHETIC: HOVER 0x42ad00
    // CGameObj::GetRuntimeClass

    // GLOBAL: HOVER 0x4c52c0
    // classCGameObj
};

// VTABLE: HOVER 0x4bc910
class CPlayer : public CGameObj {
    DECLARE_DYNAMIC(CPlayer);

    // SYNTHETIC: HOVER 0x42b8d0
    // CPlayer::GetRuntimeClass

    // GLOBAL: HOVER 0x4c53f8
    // classCPlayer
};

// VTABLE: HOVER 0x4bc500
class CPodObj : public CGameObj {
    DECLARE_DYNAMIC(CPodObj);

    // SYNTHETIC: HOVER 0x42aec0
    // CPodObj::GetRuntimeClass

    // GLOBAL: HOVER 0x4c5318
    // classCPodObj
};

// VTABLE: HOVER 0x4bc7f0
class CFloorObj : public CGameObj {
    DECLARE_DYNAMIC(CFloorObj);

    // SYNTHETIC: HOVER 0x4011f0
    // CFloorObj::GetRuntimeClass

    // GLOBAL: HOVER 0x4c53c8
    // classCFloorObj
};

// VTABLE: HOVER 0x4be698
class CBeacon : public CGameObj {
    DECLARE_DYNAMIC(CBeacon);

    // SYNTHETIC: HOVER 0x40bc40
    // CBeacon::GetRuntimeClass

    // GLOBAL: HOVER 0x4c5790
    // classCBeacon
};

// VTABLE: HOVER 0x4bae10
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
};

// VTABLE: HOVER 0x4bb6d0
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
};

// VTABLE: HOVER 0x4bd100
class CCollider : public CObject {
    DECLARE_DYNAMIC(CCollider);
public:

    // SYNTHETIC: HOVER 0x41b6c0
    // CCollider::`scalar deleting destructor'

    // SYNTHETIC: HOVER 0x42c6e0
    // CCollider::GetRuntimeClass

    // GLOBAL: HOVER 0x4c55a0
    // classCCollider
};

// VTABLE: HOVER 0x4bca88
class CContainer : public CPodObj {
    DECLARE_DYNAMIC(CContainer);

    // GLOBAL: HOVER 0x4c5438
    // classCContainer
};

// VTABLE: HOVER 0x4bc9f0
class CFlag : public CPodObj {
    DECLARE_DYNAMIC(CFlag);

    // GLOBAL: HOVER 0x4c5418
    // classCFlag
};

// VTABLE: HOVER 0x4bcf40
class CFlagRemover : public CFloorObj {
    DECLARE_DYNAMIC(CFlagRemover);

    // GLOBAL: HOVER 0x4c5548
    // classCFlagRemover
};

// VTABLE: HOVER 0x4bcb48
class CHoldPad : public CFloorObj {
    DECLARE_DYNAMIC(CHoldPad);

    // GLOBAL: HOVER 0x4c5460
    // classCHoldPad
};

// VTABLE: HOVER 0x4bcbe0
class CHumanPlayer : public CPlayer {
    DECLARE_DYNAMIC(CHumanPlayer);

    // GLOBAL: HOVER 0x4c5488
    // classCHumanPlayer
};

class CInviciblePod : public CPodObj {
    DECLARE_DYNAMIC(CInviciblePod);

    // GLOBAL: HOVER 0x4c52f0
    // classCInviciblePod
};

// VTABLE: HOVER 0x4bc2c0
class CJumpPod : public CPodObj {
    DECLARE_DYNAMIC(CJumpPod);

    // GLOBAL: HOVER 0x4c5298
    // classCJumpPod
};

// VTABLE: HOVER 0x4bab30
class CMainFrame : public CFrameWnd {
    DECLARE_DYNCREATE(CMainFrame);

    // SYNTHETIC: HOVER 0x41d600
    // CMainFrame::Construct

    // SYNTHETIC: HOVER 0x41dfd0
    // CMainFrame::`scalar deleting destructor`

    // SYNTHETIC: HOVER 0x426a50
    // CMainFrame::GetRuntimeClass
};

class CMapEraserPod : public CPodObj {
    DECLARE_DYNAMIC(CMapEraserPod);

    // GLOBAL: HOVER 0x4c54f8
    // classCMapEraserPod
};

// VTABLE: HOVER 0x4bd078
class CRegionMatrix : public CObject {
    DECLARE_DYNAMIC(CRegionMatrix);

    // GLOBAL: HOVER 0x4c55b8
    // classCRegionMatrix
};

// VTABLE: HOVER 0x4bcce0
class CRobotPlayer : public CPlayer {
    DECLARE_DYNAMIC(CRobotPlayer);

    // GLOBAL: HOVER 0x4c54b8
    // classCRobotPlayer
};

// VTABLE: HOVER 0x4bc750
class CSledPad : public CFloorObj {
    DECLARE_DYNAMIC(CSledPad);

    // GLOBAL: HOVER 0x4c53a0
    // classCSledPad
};

// VTABLE: HOVER 0x4bce80
class CSlowPod : public CPodObj {
    DECLARE_DYNAMIC(CSlowPod);

    // GLOBAL: HOVER 0x4c5520
    // classCSlowPod
};

// VTABLE: HOVER 0x4bc1f0
class CSmokeBombPod : public CPodObj {
    DECLARE_DYNAMIC(CSmokeBombPod);

    // GLOBAL: HOVER 0x4c5270
    // classCSmokeBombPod
};

// VTABLE: HOVER 0x4bc690
class CSpeedPod : public CPodObj {
    DECLARE_DYNAMIC(CSpeedPod);

    // GLOBAL: HOVER 0x4c5378
    // classCSpeedPod
};

class CTempWallPod : public CPodObj {
    DECLARE_DYNAMIC(CTempWallPod);

    // GLOBAL: HOVER 0x4c5340
    // classCTempWallPod
};

// VTABLE: HOVER 0x4bcfd8
class CWall : public CGameObj {
    DECLARE_DYNAMIC(CWall);

    // SYNTHETIC: HOVER 0x4011d0
    // CWall::GetRuntimeClass

    // GLOBAL: HOVER 0x4c5570
    // classCWall
};

#endif // HOVER_MFC_H