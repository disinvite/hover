#ifndef CFLAGREMOVER_H
#define CFLAGREMOVER_H

#include "stdafx.h"

#include "CFloorObj.h"

// VTABLE: HOVER 0x4bcf40
// SIZE 0xb8
class CFlagRemover : public CFloorObj {
    DECLARE_DYNAMIC(CFlagRemover);
public:
    virtual ~CFlagRemover() {};
    virtual void VTable0x1c();
    virtual void VTable0x20();
    virtual void VTable0x3c();
    virtual void VTable0x40();
    virtual void VTable0x44();

    // SYNTHETIC: HOVER 0x401510
    // CFlagRemover::GetRuntimeClass

    // SYNTHETIC: HOVER 0x422b20
    // CFlagRemover::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c5548
    // classCFlagRemover
};

#endif // CFLAGREMOVER_H
