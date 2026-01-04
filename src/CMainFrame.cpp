#include "CMainFrame.h"

#include <mmsystem.h>

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
    ON_WM_CREATE()
    ON_WM_SIZE()
    ON_WM_GETMINMAXINFO()
    ON_COMMAND(57669, OnCommand57669)
    ON_COMMAND(57666, OnCommand57666)
    ON_COMMAND(32787, OnCommand32787)
    ON_WM_ACTIVATEAPP()
    ON_COMMAND(34010, OnCommand34010)
    ON_UPDATE_COMMAND_UI(34010, OnUpdateCommand34010)
    ON_WM_QUERYNEWPALETTE()
    ON_WM_PALETTECHANGED()
    ON_WM_CLOSE()
    ON_COMMAND(57667, OnCommand57667)
    ON_WM_INITMENU()
    ON_WM_INITMENUPOPUP()
    ON_WM_SYSCOMMAND()
    ON_WM_MOVE()
    ON_COMMAND(57670, OnCommand57669)
    ON_WM_MENUSELECT()
    ON_MESSAGE(MM_WOM_DONE, OnMmWomDone)
    ON_MESSAGE(WM_EXITSIZEMOVE, OnExitSizeMove)
    ON_MESSAGE(WM_ENTERSIZEMOVE, OnEnterSizeMove)
END_MESSAGE_MAP()

// STUB: HOVER 0x40e2b0
void CMainFrame::OnInitMenu(CMenu* pMenu)
{
    // TODO
}

// STUB: HOVER 0x40e2c0
void CMainFrame::OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL bSysMenu)
{
    // TODO
}

// STUB: HOVER 0x40ee60
BOOL CMainFrame::OnQueryNewPalette()
{
    // TODO
    return TRUE;
}

// STUB: HOVER 0x4142c0
void CMainFrame::OnPaletteChanged(CWnd* pFocusWnd)
{
    // TODO
}

// STUB: HOVER 0x415300
void CMainFrame::OnActivateApp(BOOL bActive, HTASK hTask)
{
    // TODO
}

// STUB: HOVER 0x417af0
void CMainFrame::OnGetMinMaxInfo(MINMAXINFO* lpMMI)
{
    // TODO
}

// STUB: HOVER 0x41d6b0
void CMainFrame::OnClose()
{
    // TODO
}

// STUB: HOVER 0x41db20
void CMainFrame::OnSysCommand(UINT nID, LPARAM lParam)
{
    // TODO
}

// STUB: HOVER 0x41db90
int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
    // TODO
    return 0;
}

// STUB: HOVER 0x41dce0
void CMainFrame::OnSize(UINT nType, int cx, int cy)
{
    // TODO
}

// STUB: HOVER 0x41ddf0
BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
    // TODO
    return TRUE;
}

// STUB: HOVER 0x41e070
BOOL CMainFrame::OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext)
{
    // TODO
    return TRUE;
}

// STUB: HOVER 0x426a60
LRESULT CMainFrame::OnExitSizeMove(WPARAM wParam, LPARAM lParam)
{
    // TODO
    return 1;
}

// STUB: HOVER 0x426b40
LRESULT CMainFrame::OnEnterSizeMove(WPARAM wParam, LPARAM lParam)
{
    // TODO
    return 1;
}

// STUB: HOVER 0x426b60
void CMainFrame::OnMenuSelect(UINT nItemID, UINT nFlags, HMENU hSysMenu)
{
    // TODO
}

// STUB: HOVER 0x426b80
LRESULT CMainFrame::OnMmWomDone(WPARAM wParam, LPARAM lParam)
{
    // TODO
    return 1;
}

// STUB: HOVER 0x426ba0
void CMainFrame::OnCommand57669()
{
    // TODO
}

// STUB: HOVER 0x426bc0
void CMainFrame::OnCommand57666()
{
    // TODO
}

// STUB: HOVER 0x426be0
void CMainFrame::OnCommand57667()
{
    // TODO
}

// STUB: HOVER 0x426c00
void CMainFrame::OnCommand32787()
{
    // TODO
}

// STUB: HOVER 0x426c20
void CMainFrame::OnCommand34010()
{
    // TODO
}

// STUB: HOVER 0x426ca0
void CMainFrame::OnUpdateCommand34010(CCmdUI* cmd_ui)
{
    // TODO
}

// STUB: HOVER 0x426e00
void CMainFrame::OnMove(int x, int y)
{
    // TODO
}
