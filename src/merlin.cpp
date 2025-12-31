#include "merlin.h"

IMPLEMENT_DYNCREATE(CMerlinObject, CObject)
IMPLEMENT_DYNCREATE(CMerlinLine, CMerlinObject)
IMPLEMENT_DYNCREATE(CMerlinBSP, CMerlinLine)
IMPLEMENT_DYNCREATE(CMerlinDynamic, CMerlinLine)
IMPLEMENT_DYNCREATE(CMerlinLocation, CMerlinObject)
IMPLEMENT_DYNCREATE(CMerlinStatic, CMerlinLine)
IMPLEMENT_DYNCREATE(CMerlinTexture, CMerlinObject)
IMPLEMENT_DYNCREATE(CMerlinWorld, CObject)

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
