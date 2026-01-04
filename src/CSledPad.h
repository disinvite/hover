#ifndef CSLEDPAD_H
#define CSLEDPAD_H

#include "stdafx.h"

#include "CFloorObj.h"

// VTABLE: HOVER 0x4bc750
// SIZE 0xb8
class CSledPad : public CFloorObj {
    DECLARE_DYNAMIC(CSledPad);
public:
    virtual ~CSledPad() {}
    virtual void VTable0x1c();
    virtual void VTable0x20();
    virtual void VTable0x3c();
    virtual void VTable0x40();
    virtual void VTable0x44();

    // SYNTHETIC: HOVER 0x4011e0
    // CSledPad::GetRuntimeClass

    // SYNTHETIC: HOVER 0x4217b0
    // CSledPad::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c53a0
    // classCSledPad
};

#endif // CSLEDPAD_H
