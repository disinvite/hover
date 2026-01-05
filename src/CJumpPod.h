#ifndef CJUMPPOD_H
#define CJUMPPOD_H

#include "stdafx.h"

#include "CPodObj.h"

// VTABLE: HOVER 0x4bc2c0
// SIZE 0x100
class CJumpPod : public CPodObj {
    DECLARE_DYNAMIC(CJumpPod);
public:
    virtual ~CJumpPod() {}
    virtual void VTable0x1c();
    virtual void VTable0x20(undefined4, undefined4);
    virtual void VTable0x24(undefined4);
    virtual void VTable0x3c();
    virtual void VTable0x40();
    virtual void VTable0x44();

    // SYNTHETIC: HOVER 0x401490
    // CJumpPod::GetRuntimeClass

    // SYNTHETIC: HOVER 0x4213c0
    // CJumpPod::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c5298
    // classCJumpPod
};

#endif // CJUMPPOD_H