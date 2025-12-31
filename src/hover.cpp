#include "hover.h"

#include "hover_mfc.h"

BEGIN_MESSAGE_MAP(CHoverApp, CWinApp)
    ON_COMMAND(ID_APP_ABOUT, OnAppAbout)
    ON_COMMAND(34012, OnCommand34012)
    ON_COMMAND(32785, OnSettings)
    ON_COMMAND(32784, OnSelectControls)
    ON_COMMAND(40009, OnSounds)
    ON_UPDATE_COMMAND_UI(40009, OnUpdateSounds)
    ON_COMMAND(32780, OnFullScreen)
    ON_UPDATE_COMMAND_UI(32780, OnUpdateFullScreen)
    ON_COMMAND(32778, OnLevelSelect)
    ON_COMMAND(34006, OnCommand34006)
    ON_UPDATE_COMMAND_UI(34006, OnUpdateCommand34006)
    ON_COMMAND(34007, OnCommand34007)
    ON_UPDATE_COMMAND_UI(34007, OnUpdateCommand34007)
    ON_COMMAND(34009, OnCommand34009)
    ON_COMMAND(34008, OnCommand34008)
    ON_COMMAND(40006, OnHighScores)
    ON_UPDATE_COMMAND_UI(40006, OnUpdateHighScores)
    ON_COMMAND(32808, OnQuickHelp)
    ON_UPDATE_COMMAND_UI(32808, OnUpdateQuickHelp)
    ON_COMMAND(32777, OnNewGame)
    ON_COMMAND(34031, OnCommand34031)
    ON_COMMAND(32821, OnCommand32821)
    ON_COMMAND(ID_FILE_NEW, OnFileNew)
    ON_COMMAND(ID_FILE_OPEN, OnFileOpen)
END_MESSAGE_MAP()

CHoverApp theApp;

// STUB: HOVER 0x405b80
BOOL CHoverApp::OnIdle(LONG lCount)
{
    // TODO
    return FALSE;
}

// STUB: HOVER 0x412240
void CHoverApp::OnUpdateHighScores(CCmdUI* cmd_ui)
{
    // TODO
}

// STUB: HOVER 0x4137d0
void CHoverApp::OnSettings()
{
    // TODO
}

// STUB: HOVER 0x413940
void CHoverApp::OnUpdateSounds(CCmdUI* cmd_ui)
{
    // TODO
}

// STUB: HOVER 0x413950
void CHoverApp::OnUpdateFullScreen(CCmdUI* cmd_ui)
{
    // TODO
}

// STUB: HOVER 0x41c060
BOOL CHoverApp::ExitInstance()
{
    // TODO
    return FALSE;
}

// STUB: HOVER 0x41c100
CHoverApp::CHoverApp()
{
    // TODO
}

// STUB: HOVER 0x41c9e0
BOOL CHoverApp::InitInstance()
{
    // TODO
    return FALSE;
}

// STUB: HOVER 0x41d410
void CHoverApp::OnNewGame()
{
    // TODO
}

// STUB: HOVER 0x425390
void CHoverApp::OnAppAbout()
{
    // TODO
}

// STUB: HOVER 0x425730
void CHoverApp::OnCommand34012()
{
    // TODO
}

// STUB: HOVER 0x4258f0
void CHoverApp::OnSelectControls()
{
    // TODO
}

// STUB: HOVER 0x4259a0
void CHoverApp::OnSounds()
{
    // TODO
}

// STUB: HOVER 0x425a20
void CHoverApp::OnFullScreen()
{
    // TODO
}

// STUB: HOVER 0x425cb0
void CHoverApp::OnLevelSelect()
{
    // TODO
}

// STUB: HOVER 0x425ec0
void CHoverApp::OnCommand34006()
{
    // TODO
}

// STUB: HOVER 0x425ee0
void CHoverApp::OnUpdateCommand34006(CCmdUI* cmd_ui)
{
    // TODO
}

// STUB: HOVER 0x425f00
void CHoverApp::OnCommand34007()
{
    // TODO
}

// STUB: HOVER 0x425f20
void CHoverApp::OnUpdateCommand34007(CCmdUI* cmd_ui)
{
    // TODO
}

// STUB: HOVER 0x425f40
void CHoverApp::OnCommand34009()
{
    // TODO
}

// STUB: HOVER 0x426000
void CHoverApp::OnCommand34008()
{
    // TODO
}

// STUB: HOVER 0x4260b0
void CHoverApp::OnHighScores()
{
    // TODO
}

// STUB: HOVER 0x426130
void CHoverApp::OnQuickHelp()
{
    // TODO
}

// STUB: HOVER 0x4261a0
void CHoverApp::OnUpdateQuickHelp(CCmdUI* cmd_ui)
{
    // TODO
}

// STUB: HOVER 0x4261b0
void CHoverApp::OnCommand34031()
{
    // TODO
}

// STUB: HOVER 0x426230
void CHoverApp::OnCommand32821()
{
    // TODO
}

// STUB: HOVER 0x453f02
void CHoverApp::OnFileNew()
{
    // TODO
}

// STUB: HOVER 0x454032
void CHoverApp::OnFileOpen()
{
    // TODO
}
