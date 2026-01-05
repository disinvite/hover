#ifndef CHOLDPAD_H
#define CHOLDPAD_H

#include "stdafx.h"

#include "CFloorObj.h"

// VTABLE: HOVER 0x4bcb48
// SIZE 0xb8
class CHoldPad : public CFloorObj {
    DECLARE_DYNAMIC(CHoldPad);
public:
    virtual ~CHoldPad() {};
    virtual void VTable0x1c();
    virtual void VTable0x20(undefined4, undefined4);
    virtual void VTable0x3c();
    virtual void VTable0x40();
    virtual void VTable0x44();

    // SYNTHETIC: HOVER 0x401200
    // CHoldPad::GetRuntimeClass

    // SYNTHETIC: HOVER 0x421f30
    // CHoldPad::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c5460
    // classCHoldPad
};

#endif // CHOLDPAD_H
