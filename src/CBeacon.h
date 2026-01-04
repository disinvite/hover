#ifndef CBEACON_H
#define CBEACON_H

#include "stdafx.h"

#include "CGameObj.h"

// VTABLE: HOVER 0x4be698
// SIZE 0xb0
class CBeacon : public CGameObj {
    DECLARE_DYNAMIC(CBeacon);
public:
    virtual ~CBeacon() {};
    virtual void VTable0x38();

    // SYNTHETIC: HOVER 0x40bc40
    // CBeacon::GetRuntimeClass

    // SYNTHETIC: HOVER 0x424180
    // CBeacon::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c5790
    // classCBeacon
protected:
    char padding[44];   // 0x84
};

#endif // CBEACON_H