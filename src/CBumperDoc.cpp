#include "CBumperDoc.h"

IMPLEMENT_DYNCREATE(CBumperDoc, CDocument);

BEGIN_MESSAGE_MAP(CBumperDoc, CDocument)
    ON_COMMAND(34002, OnDebugSetNewPosition)
    ON_COMMAND(34027, OnDebugDecGreen)
    ON_COMMAND(34026, OnDebugIncGreen)
    ON_COMMAND(34021, OnDebugDecBrightness)
    ON_COMMAND(34028, OnDebugIncBrightness)
    ON_COMMAND(34025, OnDebugDecBlue)
    ON_COMMAND(34024, OnDebugIncBlue)
    ON_COMMAND(34023, OnDebugDecRed)
    ON_COMMAND(34022, OnDebugIncRed)
END_MESSAGE_MAP()

// STUB: HOVER 0x414900
void CBumperDoc::DeleteContents()
{
    // TODO
}

// STUB: HOVER 0x415450
BOOL CBumperDoc::OnOpenDocument(LPCTSTR lpszPathName)
{
    // TODO
    return TRUE;
}

// STUB: HOVER 0x417b00
BOOL CBumperDoc::OnNewDocument()
{
    // TODO
    return TRUE;
}

// STUB: HOVER 0x426f20
void CBumperDoc::OnDebugSetNewPosition()
{
    // TODO
}

// STUB: HOVER 0x427060
void CBumperDoc::OnDebugDecGreen()
{
    // TODO
}

// STUB: HOVER 0x4270d0
void CBumperDoc::OnDebugIncGreen()
{
    // TODO
}

// STUB: HOVER 0x427140
void CBumperDoc::OnDebugDecBrightness()
{
    // TODO
}

// STUB: HOVER 0x4271b0
void CBumperDoc::OnDebugIncBrightness()
{
    // TODO
}

// STUB: HOVER 0x427220
void CBumperDoc::OnDebugDecBlue()
{
    // TODO
}

// STUB: HOVER 0x427290
void CBumperDoc::OnDebugIncBlue()
{
    // TODO
}

// STUB: HOVER 0x427300
void CBumperDoc::OnDebugDecRed()
{
    // TODO
}

// STUB: HOVER 0x427370
void CBumperDoc::OnDebugIncRed()
{
    // TODO
}
