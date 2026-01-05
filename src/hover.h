#ifndef HOVER_H
#define HOVER_H

#include "stdafx.h"

// VTABLE: HOVER 0x4ba370
class CHoverApp : public CWinApp {
public:
    CHoverApp();

    virtual BOOL OnIdle(LONG lCount);
    virtual BOOL InitInstance();
    virtual ExitInstance();

    void OnUpdateHighScores(CCmdUI* cmd_ui);
    void OnSettings();
    void OnUpdateSounds(CCmdUI* cmd_ui);
    void OnUpdateFullScreen(CCmdUI* cmd_ui);
    void OnNewGame();
    void OnAppAbout();
    void OnDebugTuningParameters();
    void OnSelectControls();
    void OnSounds();
    void OnFullScreen();
    void OnLevelSelect();
    void OnCommand34006();
    void OnUpdateCommand34006(CCmdUI* cmd_ui);
    void OnCommand34007();
    void OnUpdateCommand34007(CCmdUI* cmd_ui);
    void OnDebugDroneMotionPhysics();
    void OnDebugPlayerMotionPhysics();
    void OnHighScores();
    void OnQuickHelp();
    void OnUpdateQuickHelp(CCmdUI* cmd_ui);
    void OnDebugRobotTuningParameters();
    void OnCommand32821();
    void OnFileNew();
    void OnFileOpen();


protected:
    DECLARE_MESSAGE_MAP()

    // unsigned padding[832];        // 0xd4 ?
    CRITICAL_SECTION m_critical0;    // 0x0d4
    CRITICAL_SECTION m_critical1;    // 0x0ec
    CRITICAL_SECTION m_critical2;    // 0x104
    CRITICAL_SECTION m_critical3;    // 0x11c
    CRITICAL_SECTION m_critical4;    // 0x134
    //14c next.

    BOOL m_is386;                   // 0x1d0

    CString m_unk414;               // 0x414
};

// SYNTHETIC: HOVER 0x426660
// CHoverApp::`scalar deleting destructor'

// SYNTHETIC: HOVER 0x40e2a0
// CHoverApp::GetMessageMap

// GLOBAL: HOVER 0x4ba0a8
// CHoverApp::messageMap

// GLOBAL: HOVER 0x4ba0b0
// CHoverApp::_messageEntries

#endif // HOVER_H