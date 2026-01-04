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

    afx_msg void OnCommand34002();
    afx_msg void OnCommand34027();
    afx_msg void OnCommand34026();
    afx_msg void OnCommand34021();
    afx_msg void OnCommand34028();
    afx_msg void OnCommand34025();
    afx_msg void OnCommand34024();
    afx_msg void OnCommand34023();
    afx_msg void OnCommand34022();

    char padding[33856];    // 0x60
};

#endif // CBUMPERDOC_H
