#ifndef HOVER_MFC_H
#define HOVER_MFC_H

#include "stdafx.h"

class CAnimateCtrl : public CObject {};

// VTABLE: HOVER 0x4be698
class CBeacon : public CObject {};

// VTABLE: HOVER 0x4bae10
class CBumperDoc : public CObject {};

// VTABLE: HOVER 0x4bb6d0
class CBumperView : public CObject {};

// VTABLE: HOVER 0x4bd100
class CCollider : public CObject {};

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

class CMainFrame : public CObject {};

class CMapEraserPod : public CObject {};

// VTABLE: HOVER 0x4bd438
class CMerlinBSP : public CObject {};

// VTABLE: HOVER 0x4bd348
class CMerlinDynamic : public CObject {};

// VTABLE: HOVER 0x4bc110
class CMerlinLine : public CObject {};

// VTABLE: HOVER 0x4bd3c0
class CMerlinLocation : public CObject {};

// VTABLE: HOVER 0x4bd808
class CMerlinObject : public CObject {};

class CMerlinStatic : public CObject {};

class CMerlinTexture : public CObject {};

class CMerlinWorld : public CObject {};

class CMixit : public CObject {};

class CPlayer : public CObject {};

class CPodObj : public CObject {};

class CRegionMatrix : public CObject {};

class CRobotPlayer : public CObject {};

class CSledPad : public CObject {};

class CSlowPod : public CObject {};

class CSmokeBombPod : public CObject {};

class CSpeedPod : public CObject {};

class CTempWallPod : public CObject {};

class CWall : public CObject {};

#endif // HOVER_MFC_H