#ifndef CPLAYER_H
#define CPLAYER_H

#include "stdafx.h"

#include "CGameObj.h"

// VTABLE: HOVER 0x4bc910
// SIZE 0x1fc
class CPlayer : public CGameObj {
    DECLARE_DYNAMIC(CPlayer);
public:
    // FUNCTION: HOVER 0x421a90
    virtual ~CPlayer() {};
    virtual void VTable0x1c();
    virtual void VTable0x20();
    virtual void VTable0x28();
    virtual void VTable0x2c();
    virtual void VTable0x30();
    virtual void VTable0x3c();
    virtual void VTable0x40();
    virtual void VTable0x44();

    // SYNTHETIC: HOVER 0x42b8d0
    // CPlayer::GetRuntimeClass

    // SYNTHETIC: HOVER 0x42c080
    // CPlayer::`scalar deleting destructor'

    // GLOBAL: HOVER 0x4c53f8
    // classCPlayer
protected:
    char padding[376];  // 0x84
};

#endif // CPLAYER_H