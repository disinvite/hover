#ifndef CMAINFRAME_H
#define CMAINFRAME_H

#include "stdafx.h"

// VTABLE: HOVER 0x4bab30
// SIZE 0x158
class CMainFrame : public CFrameWnd {
    DECLARE_DYNCREATE(CMainFrame)
public:
    CMainFrame() {
        m_unk0xc0 = 0;
        m_library = 0;
        m_unk0xc8 = 0;
        m_unk0xd0 = 0;
    }
    virtual ~CMainFrame() {
        if (m_library) {
            ::FreeLibrary(m_library);
        }
    }
    virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
    virtual BOOL OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext);

    // SYNTHETIC: HOVER 0x401020
    // CMainFrame::GetMessageMap

    // SYNTHETIC: HOVER 0x41d600
    // CMainFrame::Construct

    // SYNTHETIC: HOVER 0x41dfd0
    // CMainFrame::`scalar deleting destructor'

    // SYNTHETIC: HOVER 0x426a50
    // CMainFrame::GetRuntimeClass

    // GLOBAL: HOVER 0x4ba8d0
    // messageMap

    // GLOBAL: HOVER 0x4ba8d8
    // _messageEntries
protected:
    afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
    afx_msg void OnSize(UINT nType, int cx, int cy);
    afx_msg void OnGetMinMaxInfo(MINMAXINFO* lpMMI);
    afx_msg void OnCommand57669();
    afx_msg void OnCommand57666();
    afx_msg void OnCommand32787();
    afx_msg void OnActivateApp(BOOL bActive, HTASK hTask);
    afx_msg void OnCommand34010();
    afx_msg void OnUpdateCommand34010(CCmdUI* cmd_ui);
    afx_msg BOOL OnQueryNewPalette();
    afx_msg void OnPaletteChanged(CWnd* pFocusWnd);
    afx_msg void OnClose();
    afx_msg void OnCommand57667();
    afx_msg void OnInitMenu(CMenu* pMenu);
    afx_msg void OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL bSysMenu);
    afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
    afx_msg void OnMove(int x, int y);
    afx_msg void OnMenuSelect(UINT nItemID, UINT nFlags, HMENU hSysMenu);
    afx_msg LRESULT OnMmWomDone(WPARAM wParam, LPARAM lParam);
    afx_msg LRESULT OnExitSizeMove(WPARAM wParam, LPARAM lParam);
    afx_msg LRESULT OnEnterSizeMove(WPARAM wParam, LPARAM lParam);


    DWORD m_unk0xc0;        // 0xc0
    HMODULE m_library;      // 0xc4
    DWORD m_unk0xc8;        // 0xc8
    char padding[4];        // 0xca
    DWORD m_unk0xd0;        // 0xd0
    char padding2[16];      // 0xd4
    CStatusBar m_statusBar; // 0xe4

    DECLARE_MESSAGE_MAP()
};

#endif // CMAINFRAME_H
