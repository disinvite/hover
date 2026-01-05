#ifndef CFLAG_H
#define CFLAG_H

#include "stdafx.h"

#include "CPodObj.h"

// VTABLE: HOVER 0x4bc9f0
// SIZE 0x100
class CFlag : public CPodObj {
    DECLARE_DYNAMIC(CFlag);
public:
    virtual ~CFlag() {};
    virtual void VTable0x1c();
    virtual void VTable0x20(undefined4, undefined4);
    virtual BOOL VTable0x2c(undefined4);
    virtual void VTable0x3c();
    virtual void VTable0x40();
    virtual void VTable0x44();

    // SYNTHETIC: HOVER 0x4014d0
    // CFlag::GetRuntimeClass

    // SYNTHETIC: HOVER 0x421db0
    // CFlag::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c5418
    // classCFlag
};

#endif // CFLAG_H
