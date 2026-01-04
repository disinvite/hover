#ifndef CSLOWPOD_H
#define CSLOWPOD_H

#include "stdafx.h"

#include "CPodObj.h"

// VTABLE: HOVER 0x4bce80
// SIZE 0x100
class CSlowPod : public CPodObj {
    DECLARE_DYNAMIC(CSlowPod);
public:
    virtual ~CSlowPod() {}
    virtual void VTable0x1c();
    virtual void VTable0x20();
    virtual void VTable0x3c();
    virtual void VTable0x40();
    virtual void VTable0x44();

    // SYNTHETIC: HOVER 0x401500
    // CSlowPod::GetRuntimeClass

    // SYNTHETIC: HOVER 0x41b3e0
    // CSlowPod::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c5520
    // classCSlowPod
};

#endif // CSLOWPOD_H