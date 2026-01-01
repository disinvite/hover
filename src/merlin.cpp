#include "merlin.h"

IMPLEMENT_SERIAL(CMerlinObject, CObject, 1)
IMPLEMENT_SERIAL(CMerlinLine, CMerlinObject, 1)
IMPLEMENT_SERIAL(CMerlinBSP, CMerlinLine, 1)
IMPLEMENT_SERIAL(CMerlinDynamic, CMerlinLine, 1)
IMPLEMENT_SERIAL(CMerlinLocation, CMerlinObject, 1)
IMPLEMENT_SERIAL(CMerlinStatic, CMerlinLine, 1)
IMPLEMENT_SERIAL(CMerlinTexture, CMerlinObject, 1)
IMPLEMENT_SERIAL(CMerlinWorld, CObject, 1)

// FUNCTION: HOVER 0x401030
CMerlinObject::CMerlinObject()
{
    m_string.Empty();
    m_unk0x10 = 0;
}

// FUNCTION: HOVER 0x401160
CMerlinLine::CMerlinLine()
{
    m_unk0x20 = 0;
    m_unk0x1c = 0;
    m_unk0x18 = 0;
    m_unk0x14 = 0;
}

// STUB: HOVER 0x411b10
void CMerlinObject::Serialize(CArchive& ar)
{
    // TODO
    if (ar.IsStoring()) {

    }
}

// STUB: HOVER 0x412980
void CMerlinTexture::Serialize(CArchive& ar)
{
    // TODO
}

// FUNCTION: HOVER 0x4132a0
CMerlinDynamic::CMerlinDynamic()
{
    // TODO: ordering?
    m_str0x44.Empty();
    m_unk0x50 = 0;
    m_unk0x54 = 0;
    m_unk0x56 = 128;
    m_unk0x58 = 128;
    m_unk0x5a = 0;
    m_unk0x5c = 0;
    m_unk0x60 = 1;
    m_unk0x64 = 1;
    m_unk0x68 = 0;
}

// STUB: HOVER 0x414740
void CMerlinLine::Serialize(CArchive& ar)
{
    // TODO
    if (ar.IsStoring()) {
        // FUN_004525cb
        // FUN_00452bc3
        return;
    }

    // FUN_00452750 (m_string?)
}

// STUB: HOVER 0x418dc0
void CMerlinWorld::Serialize(CArchive& ar)
{
    // TODO
}

// STUB: HOVER 0x419e00
void CMerlinStatic::Serialize(CArchive& ar)
{
    // TODO
}

// STUB: HOVER 0x41b940
void CMerlinLocation::Serialize(CArchive& ar)
{
    // TODO
}

// STUB: HOVER 0x41bc40
void CMerlinBSP::Serialize(CArchive& ar)
{
    // TODO
}

// STUB: HOVER 0x42cc40
void CMerlinDynamic::Serialize(CArchive& ar)
{
    // TODO
}
