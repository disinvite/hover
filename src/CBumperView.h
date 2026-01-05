#ifndef CBUMPERVIEW_H
#define CBUMPERVIEW_H

#include "stdafx.h"

// VTABLE: HOVER 0x4bb6d0
// SIZE 0x55c
class CBumperView : public CView {
    DECLARE_DYNCREATE(CBumperView);
public:
    virtual void OnDraw(CDC*);
    virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext);
    virtual void OnInitialUpdate();
    virtual void OnActivateView(BOOL bActivate, CView* pActivateView, CView* pDeactiveView);

    // SYNTHETIC: HOVER 0x401010
    // CBumperView::GetMessageMap

    // SYNTHETIC: HOVER 0x41e5a0
    // CBumperView::Construct

    // SYNTHETIC: HOVER 0x41e700
    // CBumperView::GetRuntimeClass

    // SYNTHETIC: HOVER 0x420dd0
    // CBumperView::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4bb0c0
    // messageMap

    // GLOBAL: HOVER 0x4bb0c8
    // _messageEntries

    // GLOBAL: HOVER 0x4c4cb0
    // classCBumperView
protected:
    DECLARE_MESSAGE_MAP()

    afx_msg void OnUpdateCommandMulti(CCmdUI* cmd_ui);
    afx_msg LRESULT OnUserMsg0(WPARAM wParam, LPARAM lParam);
    afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
    afx_msg BOOL OnEraseBkgnd(CDC* pDC);
    afx_msg void OnUpdateCommand32779(CCmdUI* cmd_ui);
    afx_msg void OnCommand32779();
    afx_msg void OnSize(UINT nType, int cx, int cy);
    afx_msg void OnDestroy();
    afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
    afx_msg LRESULT OnUserMsg1(WPARAM wParam, LPARAM lParam);
    afx_msg LRESULT OnUserMsg2(WPARAM wParam, LPARAM lParam);
    afx_msg void OnCommand34000();
    afx_msg void OnUpdateCommand34000(CCmdUI* cmd_ui);
    afx_msg void OnCommand34011();
    afx_msg void OnUpdateCommand34011(CCmdUI* cmd_ui);
    afx_msg void OnDebugGiveCloak();
    afx_msg void OnDebugGiveWall();
    afx_msg void OnDebugGiveJump();
    afx_msg void OnDebugGiveShield();
    afx_msg void OnDebugGiveMapEraser();
    afx_msg void OnDebugGiveSpeed();
    afx_msg void OnDebugGiveSlow();
    afx_msg void OnCommand32800();
    afx_msg LRESULT OnMmMciNotify(WPARAM wParam, LPARAM lParam);
    afx_msg void OnCommand34005();
    afx_msg void OnUpdateCommand34005(CCmdUI* cmd_ui);
    afx_msg void OnCommand34029();
    afx_msg void OnUpdateCommand34029(CCmdUI* cmd_ui);
    afx_msg void OnCommand34030();
    afx_msg void OnUpdateCommand34030(CCmdUI* cmd_ui);
    afx_msg void OnUpdateDebugGiveCloak(CCmdUI* cmd_ui);
    afx_msg void OnUpdateDebugGiveWall(CCmdUI* cmd_ui);
    afx_msg void OnUpdateDebugGiveJump(CCmdUI* cmd_ui);
    afx_msg void OnUpdateDebugGiveShield(CCmdUI* cmd_ui);
    afx_msg void OnUpdateDebugGiveMapEraser(CCmdUI* cmd_ui);
    afx_msg void OnUpdateDebugGiveSpeed(CCmdUI* cmd_ui);
    afx_msg void OnUpdateDebugGiveSlow(CCmdUI* cmd_ui);
    afx_msg LRESULT OnMsg0x53(WPARAM wParam, LPARAM lParam);
    afx_msg LRESULT OnMsg0x7b(WPARAM wParam, LPARAM lParam);
    afx_msg void OnCommand34032();
    afx_msg void OnUpdateCommand34032(CCmdUI* cmd_ui);
    afx_msg void OnCommand34033();
    afx_msg void OnUpdateCommand34033(CCmdUI* cmd_ui);
    afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
    afx_msg void OnCommand34034();

    undefined padding[1320];     // 0x34
};

#endif // CBUMPERVIEW_H