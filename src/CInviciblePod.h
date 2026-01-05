#ifndef CINVICIBLEPOD_H
#define CINVICIBLEPOD_H

#include "stdafx.h"

#include "CPodObj.h"

// VTABLE: HOVER 0x4bc440
// SIZE 0x100
class CInviciblePod : public CPodObj {
    DECLARE_DYNAMIC(CInviciblePod);
public:
    virtual ~CInviciblePod() {};
    virtual void VTable0x1c();
    virtual void VTable0x20(undefined4, undefined4);
    virtual void VTable0x3c();
    virtual void VTable0x40();
    virtual void VTable0x44();

    // SYNTHETIC: HOVER 0x4014a0
    // CInviciblePod::GetRuntimeClass

    // SYNTHETIC: HOVER 0x4146c0
    // CInviciblePod::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c52f0
    // classCInviciblePod
};

#endif // CINVICIBLEPOD_H