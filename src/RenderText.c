#include "libgba\gba_types.h"
#include "libgba\gba_dma.h"
#include "text.h"

bool IsChinese(u16 curChar)
{
    //汉字识别逻辑
    u8 hi = curChar >> 8;
    u8 lo = curChar & 0xFF;
    if ((hi >= 0x01 && hi <= 0x0F && hi != 0x02 && hi != 0x03 && lo != 0x00)
    ||  (hi >= 0x40 && hi <= 0x4F && hi != 0x42 && hi != 0x43 && lo != 0x00))
        return TRUE;
    return FALSE;
}

void RenderText_08009F3C(struct FontTileInfo *a1) 
{
    u8 NotChar;
    u16 *ptrOfCurChar;
    u16 curChar,charCounts;
    u32 dest,i;

    if ( a1->charCounts ) 
    {
        NotChar = a1->NotChar;
        if ( (NotChar & 1) == FALSE ) 
        {
            a1->NotChar = NotChar | 1; 
            charCounts = a1->charCounts;
            ptrOfCurChar = &((u16 *)a1->AddressOfCopyText)[(charCounts - 1)];
            dest = (u32)a1->VramBase + 0x20 * (a1->TileCounts - (2 * (charCounts - 1) + 1));
            i = 0;
            
            if ( a1->charCounts ) 
            {
                do 
                {
                    curChar = *ptrOfCurChar;
                    if (IsChinese(curChar))
                    {
                        //汉字识别逻辑
                        u8 hi = curChar >> 8;
                        u8 lo = curChar & 0xFF;
                        //汉字编码转汉字字模序列    
                        if (hi == 1)
                            hi -= 0x01;
                        else if (hi >= 4 && hi <= 0xF)
                            hi -= 0x03;
                        else if (hi >= 0x40 && hi <= 0x41)
                            hi -= 0x33;
                        else if (hi >= 0x44 && hi <= 0x4F)
                            hi -= 0x35;
                        u32 IndexOfFontGfx = hi * 0xFF + lo - 1;
                        u32 NewOffesetOfFont = 0x09000000;
                        REG_DMA3SAD = NewOffesetOfFont + 0x40 * IndexOfFontGfx;
                        REG_DMA3DAD = dest;
                        REG_DMA3CNT = 0x80000020;
                        dest += 0x40;
                    }
                    else if (curChar) 
                    {
                        u32 v8 = (u16)(curChar & 0xE00) >> 9;
                        u32 baseOffesetOfFont = *(u32 *)(0x848E92C + v8); //PtrOfAddOfFontGfx
                        u16 *IndexOfFontGfx_Origin = *(u16 **)(4 * (curChar & 0x1FF) + *(u32 *)(0x848E930 + v8));//PtrOfAddOfFontIndex
                        
                        if ( *(u16 *)(0x848E934 + v8) )//PtrOfAddOfAddOfFontIndex
                        {
                            REG_DMA3SAD = baseOffesetOfFont + 0x20 * IndexOfFontGfx_Origin[1];
                            REG_DMA3DAD = dest;
                            REG_DMA3CNT = 0x80000010;
                            REG_DMA3SAD = baseOffesetOfFont + 0x20 * IndexOfFontGfx_Origin[3];
                            REG_DMA3DAD = dest + 0x20;
                            REG_DMA3CNT = 0x80000010;
                            REG_DMA3SAD = baseOffesetOfFont + 0x20 * IndexOfFontGfx_Origin[0];
                            REG_DMA3DAD = dest + 0x40;
                            REG_DMA3CNT = 0x80000010;
                            REG_DMA3SAD = baseOffesetOfFont + 0x20 * IndexOfFontGfx_Origin[2];
                            REG_DMA3DAD = dest + 0x60;
                            REG_DMA3CNT = 0x80000010;
                            dest += 0x80;
                        } 
                        else 
                        {   
                            REG_DMA3SAD = baseOffesetOfFont + 0x40 * IndexOfFontGfx_Origin[0];
                            REG_DMA3DAD = dest;
                            REG_DMA3CNT = 0x80000020;
                            dest += 0x40;
                        }
                    }
                    --ptrOfCurChar;
                } while (i++ < a1->charCounts);
            }
        }
    }
    return;
}
