#ifndef CBUMPERDOC_H
#define CBUMPERDOC_H

#include "stdafx.h"

// VTABLE: HOVER 0x4bae10
// SIZE 0x84a0
class CBumperDoc : public CDocument {
    DECLARE_DYNCREATE(CBumperDoc);
public:
    virtual ~CBumperDoc() {}

    // FUNCTION: HOVER 0x426f10
    virtual void Serialize(CArchive& ar) {};
    virtual void DeleteContents();
    virtual BOOL OnNewDocument();
    virtual BOOL OnOpenDocument(LPCTSTR lpszPathName);

    // SYNTHETIC: HOVER 0x40e300
    // CBumperDoc::GetMessageMap

    // SYNTHETIC: HOVER 0x41e1d0
    // CBumperDoc::Construct

    // SYNTHETIC: HOVER 0x41e230
    // CBumperDoc::CBumperDoc

    // SYNTHETIC: HOVER 0x41e0d0
    // CBumperDoc::`scalar deleting destructor'

    // SYNTHETIC: HOVER 0x426e80
    // CBumperDoc::GetRuntimeClass

    // GLOBAL: HOVER 0x4bac90
    // messageMap

    // GLOBAL: HOVER 0x4bac98
    // _messageEntries
protected:
    DECLARE_MESSAGE_MAP()

    afx_msg void OnDebugSetNewPosition();
    afx_msg void OnDebugDecGreen();
    afx_msg void OnDebugIncGreen();
    afx_msg void OnDebugDecBrightness();
    afx_msg void OnDebugIncBrightness();
    afx_msg void OnDebugDecBlue();
    afx_msg void OnDebugIncBlue();
    afx_msg void OnDebugDecRed();
    afx_msg void OnDebugIncRed();

    undefined padding[33856];    // 0x60
};

#endif // CBUMPERDOC_H
