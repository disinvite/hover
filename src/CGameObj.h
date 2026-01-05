#ifndef CGAMEOBJ_H
#define CGAMEOBJ_H

#include "stdafx.h"

// VTABLE: HOVER 0x4bc380
// SIZE 0x84
class CGameObj : public CObject {
    // DECOMP: This may not be the correct vtable addr.
    // There are 9 tables with the same call to GetRuntimeClass, which
    // means 8 of them extend CGameObj but do not use DECLARE_DYNAMIC.
    DECLARE_DYNAMIC(CGameObj);

public:
    // FUNCTION: HOVER 0x40d220
    virtual ~CGameObj() {}

    virtual BOOL VTable0x14();
    virtual BOOL VTable0x18();
    virtual void VTable0x1c();
    virtual void VTable0x20(undefined4, undefined4);
    virtual void VTable0x24(undefined4);
    virtual BOOL VTable0x28(undefined4, undefined4, undefined4);
    virtual BOOL VTable0x2c(undefined4);
    virtual BOOL VTable0x30(undefined4);
    virtual BOOL VTable0x34(undefined4, undefined4, undefined4, undefined4*);
    virtual BOOL VTable0x38(undefined4);
    virtual void VTable0x3c();
    virtual void VTable0x40();
    virtual void VTable0x44();

    // SYNTHETIC: HOVER 0x423670
    // CGameObj::CGameObj

    // SYNTHETIC: HOVER 0x42ad00
    // CGameObj::GetRuntimeClass

    // SYNTHETIC: HOVER 0x42adb0
    // CGameObj::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c52c0
    // classCGameObj

protected:
    undefined padding[128];  // 0x04
};

#endif // CGAMEOBJ_H