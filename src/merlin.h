#ifndef MERLIN_H
#define MERLIN_H

#include "stdafx.h"

// VTABLE: HOVER 0x4bd808
// SIZE 0x14
class CMerlinObject : public CObject {
    DECLARE_SERIAL(CMerlinObject)
public:
    CMerlinObject();
    virtual ~CMerlinObject() {};

    virtual void Serialize(CArchive& ar);

    // SYNTHETIC: HOVER 0x4021e0
    // CMerlinObject::~CMerlinObject

    // SYNTHETIC: HOVER 0x42d570
    // CMerlinObject::Construct

    // SYNTHETIC: HOVER 0x42d600
    // CMerlinObject::GetRuntimeClass

    // SYNTHETIC: HOVER 0x42d620
    // CMerlinObject::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c56a8
    // classCMerlinObject

protected:
    CString m_string;       // 0x04
    DWORD m_unk0x10;        // 0x10
};

// VTABLE: HOVER 0x4bc110
// SIZE 0x44
class CMerlinLine : public CMerlinObject {
    DECLARE_SERIAL(CMerlinLine)
public:
    CMerlinLine();

    // FUNCTION: HOVER 0x401210
    virtual ~CMerlinLine() {};

    virtual void Serialize(CArchive& ar);

    // SYNTHETIC: HOVER 0x42a550
    // CMerlinLine::Construct

    // SYNTHETIC: HOVER 0x42a5d0
    // CMerlinLine::GetRuntimeClass

    // SYNTHETIC: HOVER 0x42a5f0
    // CMerlinLine::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c5248
    // classCMerlinLine

protected:
    DWORD m_unk0x14;         // 0x14
    DWORD m_unk0x18;         // 0x18
    DWORD m_unk0x1c;         // 0x1c
    DWORD m_unk0x20;         // 0x20
    undefined padding[32];   // 0x24
};

// VTABLE: HOVER 0x4bd438
// SIZE 0x68
class CMerlinBSP : public CMerlinLine {
    DECLARE_SERIAL(CMerlinBSP)
public:
    virtual ~CMerlinBSP() {};
    virtual void Serialize(CArchive& ar);

    // SYNTHETIC: HOVER 0x41bb10
    // CMerlinBSP::`scalar deleting destructor'

    // SYNTHETIC: HOVER 0x41bb80
    // CMerlinBSP::Construct

    // SYNTHETIC: HOVER 0x42cfc0
    // CMerlinBSP::GetRuntimeClass

    // GLOBAL: HOVER 0x4c5660
    // classCMerlinBSP

protected:
    WORD m_unk0x44;          // 0x44
    WORD m_unk0x46;          // 0x46
    WORD m_unk0x48;          // 0x48
    WORD m_unk0x4a;          // 0x4a
    undefined padding[2];    // 0x4c
    DWORD m_unk0x50;         // 0x50
    DWORD m_unk0x54;         // 0x54
    DWORD m_unk0x58;         // 0x58
    DWORD m_unk0x5c;         // 0x5c
    undefined padding2[8];   // 0x60
};

// VTABLE: HOVER 0x4bd348
// SIZE 0x70
class CMerlinDynamic : public CMerlinLine {
public:
    CMerlinDynamic();
    DECLARE_SERIAL(CMerlinDynamic)
    virtual ~CMerlinDynamic() {};
    virtual void Serialize(CArchive& ar);

    // SYNTHETIC: HOVER 0x40f920
    // CMerlinDynamic::`scalar deleting destructor'

    // SYNTHETIC: HOVER 0x42cab0
    // CMerlinDynamic::Construct

    // SYNTHETIC: HOVER 0x42cb60
    // CMerlinDynamic::GetRuntimeClass

    // GLOBAL: HOVER 0x4c5608
    // classCMerlinDynamic

protected:
    CString m_str0x44;      // 0x44
    DWORD m_unk0x50;        // 0x50
    WORD m_unk0x54;         // 0x54
    WORD m_unk0x56;         // 0x56
    WORD m_unk0x58;         // 0x58
    WORD m_unk0x5a;         // 0x5a
    WORD m_unk0x5c;         // 0x5c
    DWORD m_unk0x60;        // 0x60
    DWORD m_unk0x64;        // 0x64
    DWORD m_unk0x68;        // 0x68
    undefined padding[4];   // 0x6c
};

// VTABLE: HOVER 0x4bd3c0
// SIZE 0x1c
class CMerlinLocation : public CMerlinObject {
    DECLARE_SERIAL(CMerlinLocation)
public:
    virtual ~CMerlinLocation() {};
    virtual void Serialize(CArchive& ar);

    // SYNTHETIC: HOVER 0x415070
    // CMerlinLocation::Construct

    // SYNTHETIC: HOVER 0x41b8d0
    // CMerlinLocation::`scalar deleting destructor'

    // SYNTHETIC: HOVER 0x42cf70
    // CMerlinLocation::GetRuntimeClass

    // GLOBAL: HOVER 0x4c5638
    // classCMerlinLocation

protected:
    WORD m_unk0x14;    // 0x14
    WORD m_unk0x16;    // 0x16
    WORD m_unk0x18;    // 0x18
    WORD m_unk0x1a;    // 0x1a
};

// VTABLE: HOVER 0x4bc078
// SIZE 0xc4
class CMerlinStatic : public CMerlinLine {
    DECLARE_SERIAL(CMerlinStatic)
public:
    virtual ~CMerlinStatic() {};
    virtual void Serialize(CArchive& ar);

    // SYNTHETIC: HOVER 0x419cf0
    // CMerlinStatic::`scalar deleting destructor'

    // SYNTHETIC: HOVER 0x419de0
    // CMerlinStatic::Construct

    // SYNTHETIC: HOVER 0x42a500
    // CMerlinStatic::GetRuntimeClass

    // GLOBAL: HOVER 0x4c5220
    // classCMerlinStatic

protected:
    CString m_str0x44;      // 0x44
    CString m_str0x50;      // 0x50
    CString m_str0x5c;      // 0x5c
    CString m_str0x68;      // 0x68
    CString m_str0x74;      // 0x74
    CString m_str0x80;      // 0x80
    undefined padding[24];  // 0x8c
    WORD m_unk0xa4;         // 0xa4
    WORD m_unk0xa6;         // 0xa6
    WORD m_unk0xa8;         // 0xa8
    WORD m_unk0xaa;         // 0xaa
    WORD m_unk0xac;         // 0xac
    DWORD m_unk0xb0;        // 0xb0
    DWORD m_unk0xb4;        // 0xb4
    WORD m_unk0xb8;         // 0xb8
    WORD m_unk0xba;         // 0xba
    DWORD m_unk0xbc;        // 0xbc
    DWORD m_unk0xc0;        // 0xc0
};

// VTABLE: HOVER 0x4bbd20
// SIZE 0x44
class CMerlinTexture : public CMerlinObject {
    DECLARE_SERIAL(CMerlinTexture)
public:
    virtual ~CMerlinTexture() {};
    virtual void Serialize(CArchive& ar);

    // SYNTHETIC: HOVER 0x4128f0
    // CMerlinTexture::Construct

    // SYNTHETIC: HOVER 0x418a60
    // CMerlinTexture::`scalar deleting destructor'

    // SYNTHETIC: HOVER 0x429730
    // CMerlinTexture::GetRuntimeClass

    // GLOBAL: HOVER 0x4c51b0
    // classCMerlinTexture

protected:
    WORD m_unk0x14;         // 0x14
    WORD m_unk0x18;         // 0x18
    DWORD m_unk0x1c;        // 0x1c
    DWORD m_unk0x20;        // 0x20
    DWORD m_unk0x24;        // 0x24
    DWORD m_unk0x28;        // 0x28
    DWORD m_unk0x2c;        // 0x2c
    DWORD m_unk0x30;        // 0x30
    DWORD m_unk0x34;        // 0x34
    DWORD m_unk0x38;        // 0x38
    DWORD m_unk0x40;        // 0x40
};

// VTABLE: HOVER 0x4bbec8
// SIZE 0x64
class CMerlinWorld : public CObject {
    DECLARE_SERIAL(CMerlinWorld)
public:
    virtual void Serialize(CArchive& ar);

    // SYNTHETIC: HOVER 0x418ae0
    // CMerlinWorld::CMerlinWorld

    // SYNTHETIC: HOVER 0x418c00
    // CMerlinWorld::~CMerlinWorld

    // SYNTHETIC: HOVER 0x419190
    // CMerlinWorld::`scalar deleting destructor'

    // SYNTHETIC: HOVER 0x4298e0
    // CMerlinWorld::Construct

    // SYNTHETIC: HOVER 0x4298f0
    // CMerlinWorld::GetRuntimeClass

    // GLOBAL: HOVER 0x4c51e0
    // classCMerlinWorld

protected:
    undefined padding[16];      // 0x04
    CObArray m_array0x14;       // 0x14
    CObArray m_array0x28;       // 0x28
    CObArray m_array0x3c;       // 0x3c
    CObArray m_array0x50;       // 0x50
};

#endif // MERLIN_H
