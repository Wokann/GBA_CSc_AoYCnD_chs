#ifndef RENDER_TEXT_H
#define RENDER_TEXT_H

#include "libgba\gba_types.h"

struct FontTileInfo
{
    u16 unknown1;           //+0
    u16 charCounts;         //+2
    u32 *AddressOfCopyText; //+4
    u32 *VramBase;          //+8
    u32 *Wram2;             //+0xC
    u16 TileCounts;         //+0x10
    u8 NotChar;              //+0x12
};

void RenderText_08009F3C(struct FontTileInfo *a1);
bool IsChinese(u16 curChar);

#define TRUE 1
#define FALSE 0

#endif
