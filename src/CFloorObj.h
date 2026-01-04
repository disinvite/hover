#ifndef CFLOOROBJ_H
#define CFLOOROBJ_H

#include "stdafx.h"

#include "CGameObj.h"

// VTABLE: HOVER 0x4bc7f0
// SIZE 0xb8
class CFloorObj : public CGameObj {
    DECLARE_DYNAMIC(CFloorObj);
public:
    // FUNCTION: HOVER 0x421890
    virtual ~CFloorObj() {};
    virtual void VTable0x1c();
    virtual void VTable0x20();
    virtual void VTable0x28();
    virtual void VTable0x2c();
    virtual void VTable0x30();
    virtual void VTable0x34();
    virtual void VTable0x3c();
    virtual void VTable0x40();
    virtual void VTable0x44();

    // SYNTHETIC: HOVER 0x4011f0
    // CFloorObj::GetRuntimeClass

    // SYNTHETIC: HOVER 0x4219d0
    // CFloorObj::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c53c8
    // classCFloorObj
protected:
    char padding[52];   // 0x84
};

#endif // CFLOOROBJ_H