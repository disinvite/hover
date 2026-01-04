#include "hover.h"

#include "CMainFrame.h"
#include "hover_mfc.h"
#include "merlin.h"

BEGIN_MESSAGE_MAP(CHoverApp, CWinApp)
    ON_COMMAND(ID_APP_ABOUT, OnAppAbout)
    ON_COMMAND(34012, OnDebugTuningParameters)
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
    ON_COMMAND(34009, OnDebugDroneMotionPhysics)
    ON_COMMAND(34008, OnDebugPlayerMotionPhysics)
    ON_COMMAND(40006, OnHighScores)
    ON_UPDATE_COMMAND_UI(40006, OnUpdateHighScores)
    ON_COMMAND(32808, OnQuickHelp)
    ON_UPDATE_COMMAND_UI(32808, OnUpdateQuickHelp)
    ON_COMMAND(32777, OnNewGame)
    ON_COMMAND(34031, OnDebugRobotTuningParameters)
    ON_COMMAND(32821, OnCommand32821)
    ON_COMMAND(ID_FILE_NEW, OnFileNew)
    ON_COMMAND(ID_FILE_OPEN, OnFileOpen)
END_MESSAGE_MAP()

CHoverApp theApp;

// FUNCTION: HOVER 0x405b80
BOOL CHoverApp::OnIdle(LONG lCount)
{
    return CWinApp::OnIdle(lCount);
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
    ::DeleteCriticalSection(&m_critical0);
    ::DeleteCriticalSection(&m_critical1);
    ::DeleteCriticalSection(&m_critical2);
    ::DeleteCriticalSection(&m_critical3);
    ::DeleteCriticalSection(&m_critical4);

    // TODO

    return CWinApp::ExitInstance();
}

// FUNCTION: HOVER 0x41c100
CHoverApp::CHoverApp()
{
    // TODO

    SYSTEM_INFO sysinfo;
    ::GetSystemInfo(&sysinfo);
    m_is386 = sysinfo.dwProcessorType != PROCESSOR_INTEL_486;

    DWORD dwVersion = ::GetVersion();
}

// STUB: HOVER 0x41c9e0
BOOL CHoverApp::InitInstance()
{
    // TODO
    CSingleDocTemplate* doc = new CSingleDocTemplate(
        128,
        RUNTIME_CLASS(CBumperDoc),
        RUNTIME_CLASS(CMainFrame),
        RUNTIME_CLASS(CBumperView)
    );
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

    // These are here only to get the merlin functions created
    // so we can compare them.
    CMerlinObject *merlinObj = new CMerlinObject();
    CMerlinLine *merlinLine = new CMerlinLine();
    CMerlinBSP *merlinBsp = new CMerlinBSP();
    CMerlinDynamic *merlinDynamic = new CMerlinDynamic();
    CMerlinLocation *merlinLocation = new CMerlinLocation();
    CMerlinStatic *merlinStatic = new CMerlinStatic();
    CMerlinTexture *merlinTexture = new CMerlinTexture();
    CMerlinWorld *merlinWorld = new CMerlinWorld();

    CMapStringToOb *mapStr = new CMapStringToOb();

    CGameObj *gameObj = new CGameObj();
    CPlayer *player = new CPlayer();
    CPodObj *podObj = new CPodObj();
    CFloorObj *floorObj = new CFloorObj();
    CBeacon *beacon = new CBeacon();
    CBumperDoc *bumperDoc = new CBumperDoc();
    CBumperView *bumperView = new CBumperView();
    CCollider *collider = new CCollider();
    CContainer *container = new CContainer();
    CFlag *flag = new CFlag();
    CFlagRemover *flagRemover = new CFlagRemover();
    CHoldPad *holdPad = new CHoldPad();
    CHumanPlayer *humanPlayer = new CHumanPlayer();
    CInviciblePod *inviciblePod = new CInviciblePod();
    CJumpPod *jumpPod = new CJumpPod();
    CMainFrame *mainFrame = new CMainFrame();
    CMapEraserPod *mapEraserPod = new CMapEraserPod();
    CRegionMatrix *regionMatrix = new CRegionMatrix();
    CRobotPlayer *robotPlayer = new CRobotPlayer();
    CSledPad *sledPad = new CSledPad();
    CSlowPod *slowPod = new CSlowPod();
    CSmokeBombPod *smokeBombPod = new CSmokeBombPod();
    CSpeedPod *speedPod = new CSpeedPod();
    CTempWallPod *tempWallPod = new CTempWallPod();
    CWall *wall = new CWall();
}

// STUB: HOVER 0x425730
void CHoverApp::OnDebugTuningParameters()
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
void CHoverApp::OnDebugDroneMotionPhysics()
{
    // TODO
}

// STUB: HOVER 0x426000
void CHoverApp::OnDebugPlayerMotionPhysics()
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
void CHoverApp::OnDebugRobotTuningParameters()
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
