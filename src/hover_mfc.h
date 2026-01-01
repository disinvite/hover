#ifndef HOVER_MFC_H
#define HOVER_MFC_H

#include "stdafx.h"

// VTABLE: HOVER 0x4be698
class CBeacon : public CObject {};

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
class CContainer : public CObject {};

// VTABLE: HOVER 0x4bc9f0
class CFlag : public CObject {};

// VTABLE: HOVER 0x4bcf40
class CFlagRemover : public CObject {};

// VTABLE: HOVER 0x4bc7f0
class CFloorObj : public CObject {};

// superclass for others.
class CGameObj : public CObject {};

// VTABLE: HOVER 0x4bcb48
class CHoldPad : public CObject {};

class CHumanPlayer : public CObject {};

class CInviciblePod : public CObject {};

// VTABLE: HOVER 0x4bc2c0
class CJumpPod : public CObject {};

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

class CMapEraserPod : public CObject {};

class CMixit : public CObject {};

class CPlayer : public CObject {};

class CPodObj : public CObject {};

class CRegionMatrix : public CObject {};

class CRobotPlayer : public CObject {};

// VTABLE: HOVER 0x4bc750
class CSledPad : public CObject {};

class CSlowPod : public CObject {};

class CSmokeBombPod : public CObject {};

class CSpeedPod : public CObject {};

class CTempWallPod : public CObject {};

// VTABLE: HOVER 0x4bcfd8
class CWall : public CObject {};

#endif // HOVER_MFC_H