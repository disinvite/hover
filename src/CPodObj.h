#ifndef CPODOBJ_H
#define CPODOBJ_H

#include "stdafx.h"

#include "CGameObj.h"

// VTABLE: HOVER 0x4bc500
// SIZE 0x100
class CPodObj : public CGameObj {
    DECLARE_DYNAMIC(CPodObj);
public:
    // FUNCTION: HOVER 0x411580
    virtual ~CPodObj() {}
    virtual void VTable0x1c();
    virtual void VTable0x20(undefined4, undefined4);
    virtual BOOL VTable0x28(undefined4, undefined4, undefined4);
    virtual BOOL VTable0x2c(undefined4);
    virtual BOOL VTable0x30(undefined4);
    virtual void VTable0x3c();
    virtual void VTable0x40();
    virtual void VTable0x44();

    // SYNTHETIC: HOVER 0x42aec0
    // CPodObj::GetRuntimeClass

    // SYNTHETIC: HOVER 0x42b000
    // CPodObj::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c5318
    // classCPodObj
protected:
    undefined padding[124];  // 0x84
};

#endif // CPODOBJ_H