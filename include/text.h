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

/*原函数
void RenderText_08009F3C(struct FontTileInfo *a1) 
{
    u8 NotChar;
    u16 *ptrOfCurChar;
    u16 curChar,charCounts;
    u32 dest,i;

    if ( a1->charCounts ) 
    {
        NotChar = a1->NotChar;
        if ( (NotChar & 1) == 0 ) 
        {
            a1->NotChar = NotChar | 1; 
            charCounts = a1->charCounts;
            ptrOfCurChar = (u16 *)((u32)a1->AddressOfCopyText + (2 * (charCounts - 1)));
            dest = (u32)a1->VramBase + 0x20 * (a1->TileCounts - (2 * (charCounts - 1) + 1));
            //从0x06008000起，计算当前要写入的字数，每个字占2个0x20 tile, 0x037F减去占用的tile数量 1、3、5、……
            //即该字对应的tile内存存放地址
            i = 0;
            
            if ( a1->charCounts ) 
            {
                u32 v11;
                do {
                    curChar = *ptrOfCurChar;
                    if (curChar) 
                    {
                        u32 v8 = (u16)(curChar & 0xE00) >> 9;
                        u32 baseOffesetOfFont = *(u32 *)(0x848E92C + v8); //PtrOfAddOfFontGfx
                        u16 *IndexOfFontGfx_Origin = *(u16 **)(4 * (curChar & 0x1FF) + *(u32 *)(0x848E930 + v8));//PtrOfAddOfFontIndex
                        
                        if ( *(u16 *)(0x848E934 + v8) )//PtrOfAddOfAddOfFontIndex
                        {
                            *(u32 *) 0x40000D4 = baseOffesetOfFont + 0x20 * IndexOfFontGfx_Origin[1];
                            *(u32 *) 0x40000D8 = dest;
                            *(u32 *) 0x40000DC = 0x80000010;
                            *(u32 *) 0x40000D4 = baseOffesetOfFont + 0x20 * IndexOfFontGfx_Origin[3];
                            *(u32 *) 0x40000D8 = dest + 0x20;
                            *(u32 *) 0x40000DC = 0x80000010;
                            *(u32 *) 0x40000D4 = baseOffesetOfFont + 0x20 * IndexOfFontGfx_Origin[0];
                            *(u32 *) 0x40000D8 = dest + 0x40;
                            *(u32 *) 0x40000DC = 0x80000010;
                            *(u32 *) 0x40000D4 = baseOffesetOfFont + 0x20 * IndexOfFontGfx_Origin[2];
                            *(u32 *) 0x40000D8 = dest + 0x60;
                            *(u32 *) 0x40000DC = 0x80000010;
                            dest += 0x80;
                        } 
                        else 
                        {   
                            *(u32 *) 0x40000D4 = baseOffesetOfFont + 0x40 * IndexOfFontGfx_Origin[0];
                            *(u32 *) 0x40000D8 = dest;
                            *(u32 *) 0x40000DC = 0x80000020;
                            dest += 0x40;
                        }
                    }
                    --ptrOfCurChar;
                    v11 = (i << 16) + 0x10000;
                    i = (u32)(v11 >> 16);  
                } while ((v11 >> 16) < a1->charCounts);
            }
        }
    }
    return;
}
*/