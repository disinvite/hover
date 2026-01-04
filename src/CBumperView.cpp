#include "CBumperView.h"

#include <mmsystem.h>

IMPLEMENT_DYNCREATE(CBumperView, CView);

BEGIN_MESSAGE_MAP(CBumperView, CView)
    ON_WM_DESTROY()
    ON_WM_SIZE()
    ON_UPDATE_COMMAND_UI(32768, OnUpdateCommandMulti)
    ON_COMMAND(34000, OnCommand34000)
    ON_UPDATE_COMMAND_UI(34000, OnUpdateCommand34000)
    ON_COMMAND(34011, OnCommand34011)
    ON_UPDATE_COMMAND_UI(34011, OnUpdateCommand34011)
    ON_WM_ERASEBKGND()
    ON_COMMAND(34014, OnCommand34014)
    ON_COMMAND(34015, OnCommand34015)
    ON_COMMAND(34013, OnCommand34013)
    ON_COMMAND(34018, OnCommand34018)
    ON_COMMAND(34019, OnCommand34019)
    ON_COMMAND(34017, OnCommand34017)
    ON_COMMAND(34016, OnCommand34016)
    ON_COMMAND(32779, OnCommand32779)
    ON_UPDATE_COMMAND_UI(32779, OnUpdateCommand32779)
    ON_COMMAND(34005, OnCommand34005)
    ON_UPDATE_COMMAND_UI(34005, OnUpdateCommand34005)
    ON_WM_KEYDOWN()
    ON_COMMAND(34029, OnCommand34029)
    ON_UPDATE_COMMAND_UI(34029, OnUpdateCommand34029)
    ON_COMMAND(34030, OnCommand34030)
    ON_UPDATE_COMMAND_UI(34030, OnUpdateCommand34030)
    ON_UPDATE_COMMAND_UI(34014, OnUpdateCommand34014)
    ON_UPDATE_COMMAND_UI(34015, OnUpdateCommand34015)
    ON_UPDATE_COMMAND_UI(34013, OnUpdateCommand34013)
    ON_UPDATE_COMMAND_UI(34018, OnUpdateCommand34018)
    ON_UPDATE_COMMAND_UI(34019, OnUpdateCommand34019)
    ON_UPDATE_COMMAND_UI(34017, OnUpdateCommand34017)
    ON_UPDATE_COMMAND_UI(34016, OnUpdateCommand34016)
    ON_COMMAND(34032, OnCommand34032)
    ON_UPDATE_COMMAND_UI(34032, OnUpdateCommand34032)
    ON_WM_CREATE()
    ON_COMMAND(34033, OnCommand34033)
    ON_UPDATE_COMMAND_UI(34033, OnUpdateCommand34033)
    ON_UPDATE_COMMAND_UI(32769, OnUpdateCommandMulti)
    ON_UPDATE_COMMAND_UI(32770, OnUpdateCommandMulti)
    ON_UPDATE_COMMAND_UI(32771, OnUpdateCommandMulti)
    ON_WM_CHAR()
    ON_MESSAGE(WM_USER, OnUserMsg0)
    ON_MESSAGE(WM_USER+1, OnUserMsg1)
    ON_MESSAGE(WM_USER+2, OnUserMsg2)
    ON_COMMAND(32800, OnCommand32800)
    ON_MESSAGE(MM_MCINOTIFY, OnMmMciNotify)
    ON_MESSAGE(0x53, OnMsg0x53)
    ON_MESSAGE(0x7b, OnMsg0x7b)
    ON_COMMAND(34034, OnCommand34034)
END_MESSAGE_MAP()

// STUB: HOVER 0x402610
void CBumperView::OnUpdateCommandMulti(CCmdUI* cmd_ui)
{
    // TODO
}

// STUB: HOVER 0x408af0
LRESULT CBumperView::OnUserMsg0(WPARAM wParam, LPARAM lParam)
{
    // TODO
    return 1;
}

// STUB: HOVER 0x40b540
void CBumperView::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
    // TODO
}

// STUB: HOVER 0x40c480
void CBumperView::OnDraw(CDC*)
{
    // TODO
}

// STUB: HOVER 0x40c600
BOOL CBumperView::OnEraseBkgnd(CDC* pDC)
{
    // TODO
    return TRUE;
}

// STUB: HOVER 0x40e310
void CBumperView::OnActivateView(BOOL bActivate, CView* pActivateView, CView* pDeactiveView)
{
    // TODO
}

// STUB: HOVER 0x412860
void CBumperView::OnUpdateCommand32779(CCmdUI* cmd_ui)
{
    // TODO
}

// STUB: HOVER 0x413c70
void CBumperView::OnCommand32779()
{
    // TODO
}

// STUB: HOVER 0x417e30
void CBumperView::OnInitialUpdate()
{
    // TODO
}

// STUB: HOVER 0x4183e0
void CBumperView::OnSize(UINT nType, int cx, int cy)
{
    // TODO
}

// STUB: HOVER 0x41e710
void CBumperView::OnDestroy()
{
    // TODO
}

// STUB: HOVER 0x41f180
BOOL CBumperView::Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext)
{
    // TODO
    return TRUE;
}

// STUB: HOVER 0x420df0
int CBumperView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
    // TODO
    return 0;
}

// STUB: HOVER 0x427d20
LRESULT CBumperView::OnUserMsg1(WPARAM wParam, LPARAM lParam)
{
    // TODO
    return 1;
}

// STUB: HOVER 0x427d30
LRESULT CBumperView::OnUserMsg2(WPARAM wParam, LPARAM lParam)
{
    // TODO
    return 1;
}

// STUB: HOVER 0x427ec0
void CBumperView::OnCommand34000()
{
    // TODO
}

// STUB: HOVER 0x427ee0
void CBumperView::OnUpdateCommand34000(CCmdUI* cmd_ui)
{
    // TODO
}

// STUB: HOVER 0x427f00
void CBumperView::OnCommand34011()
{
    // TODO
}

// STUB: HOVER 0x427f20
void CBumperView::OnUpdateCommand34011(CCmdUI* cmd_ui)
{
    // TODO
}

// STUB: HOVER 0x428590
void CBumperView::OnCommand34014()
{
    // TODO
}

// STUB: HOVER 0x428610
void CBumperView::OnCommand34015()
{
    // TODO
}

// STUB: HOVER 0x428690
void CBumperView::OnCommand34013()
{
    // TODO
}

// STUB: HOVER 0x428710
void CBumperView::OnCommand34018()
{
    // TODO
}

// STUB: HOVER 0x428770
void CBumperView::OnCommand34019()
{
    // TODO
}

// STUB: HOVER 0x4287d0
void CBumperView::OnCommand34017()
{
    // TODO
}

// STUB: HOVER 0x428830
void CBumperView::OnCommand34016()
{
    // TODO
}

// STUB: HOVER 0x428890
void CBumperView::OnCommand32800()
{
    // TODO
}

// STUB: HOVER 0x428940
LRESULT CBumperView::OnMmMciNotify(WPARAM wParam, LPARAM lParam)
{
    // TODO
    return 1;
}

// STUB: HOVER 0x428970
void CBumperView::OnCommand34005()
{
    // TODO
}

// STUB: HOVER 0x4289f0
void CBumperView::OnUpdateCommand34005(CCmdUI* cmd_ui)
{
    // TODO
}

// STUB: HOVER 0x428a10
void CBumperView::OnCommand34029()
{
    // TODO
}

// STUB: HOVER 0x428a40
void CBumperView::OnUpdateCommand34029(CCmdUI* cmd_ui)
{
    // TODO
}

// STUB: HOVER 0x428a90
void CBumperView::OnCommand34030()
{
    // TODO
}

// STUB: HOVER 0x428c00
void CBumperView::OnUpdateCommand34030(CCmdUI* cmd_ui)
{
    // TODO
}

// STUB: HOVER 0x428c30
void CBumperView::OnUpdateCommand34014(CCmdUI* cmd_ui)
{
    // TODO
}

// STUB: HOVER 0x428c60
void CBumperView::OnUpdateCommand34015(CCmdUI* cmd_ui)
{
    // TODO
}

// STUB: HOVER 0x428c90
void CBumperView::OnUpdateCommand34013(CCmdUI* cmd_ui)
{
    // TODO
}

// STUB: HOVER 0x428cc0
void CBumperView::OnUpdateCommand34018(CCmdUI* cmd_ui)
{
    // TODO
}

// STUB: HOVER 0x428cf0
void CBumperView::OnUpdateCommand34019(CCmdUI* cmd_ui)
{
    // TODO
}

// STUB: HOVER 0x428d20
void CBumperView::OnUpdateCommand34017(CCmdUI* cmd_ui)
{
    // TODO
}

// STUB: HOVER 0x428d50
void CBumperView::OnUpdateCommand34016(CCmdUI* cmd_ui)
{
    // TODO
}

// STUB: HOVER 0x428d80
LRESULT CBumperView::OnMsg0x53(WPARAM wParam, LPARAM lParam)
{
    // TODO
    return 1;
}

// STUB: HOVER 0x428d90
LRESULT CBumperView::OnMsg0x7b(WPARAM wParam, LPARAM lParam)
{
    // TODO
    return 1;
}

// STUB: HOVER 0x429230
void CBumperView::OnCommand34032()
{
    // TODO
}

// STUB: HOVER 0x4292f0
void CBumperView::OnUpdateCommand34032(CCmdUI* cmd_ui)
{
    // TODO
}

// STUB: HOVER 0x429340
void CBumperView::OnCommand34033()
{
    // TODO
}

// STUB: HOVER 0x429360
void CBumperView::OnUpdateCommand34033(CCmdUI* cmd_ui)
{
    // TODO
}

// STUB: HOVER 0x429380
void CBumperView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
    // TODO
}

// STUB: HOVER 0x4294f0
void CBumperView::OnCommand34034()
{
    // TODO
}
