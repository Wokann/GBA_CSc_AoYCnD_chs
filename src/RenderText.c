typedef signed char        int8_t;
typedef short              int16_t;
typedef int                int32_t;
typedef long long          int64_t;
typedef unsigned char      uint8_t;
typedef unsigned short     uint16_t;
typedef unsigned int       uint32_t;
typedef unsigned long long uint64_t;

typedef uint8_t   u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef int8_t    s8;
typedef int16_t  s16;
typedef int32_t  s32;
typedef int64_t  s64;

typedef volatile u8   vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef volatile s8   vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;

typedef float  f32;
typedef double f64;

typedef u8  bool8;
typedef u16 bool16;
typedef u32 bool32;

struct FontTileInfo
{
    u16 unknown1;           //+0
    u16 charCounts;         //+2
    u32 *AddressOfCopyText; //+4
    u32 *VramBase;          //+8
    u32 *Wram2;             //+0xC
    u16 TileCounts;         //+0x10
    u8 IsChar;              //+0x12
};

void RenderText_08009F3C(struct FontTileInfo *a1) 
{
    u8 IsChar;
    u16 *ptrOfCurChar;
    u16 curChar,charCounts;
    u32 dest,i;

    if ( a1->charCounts ) 
    {
        IsChar = a1->IsChar;
        if ( (IsChar & 1) == 0 ) 
        {
            a1->IsChar = IsChar | 1; 
            charCounts = a1->charCounts;
            ptrOfCurChar = (u16 *)((u32)a1->AddressOfCopyText + (2 * (charCounts - 1)));
            dest = (u32)a1->VramBase + 0x20 * (a1->TileCounts - (2 * (charCounts - 1) + 1));
            i = 0;
            
            if ( a1->charCounts ) 
            {
                do 
                {
                    curChar = *ptrOfCurChar;
                    if (curChar) 
                    {
                        //汉字识别逻辑
                        u8 hi = curChar >> 8;
                        u8 lo = curChar & 0xFF;
                        if ((hi >= 0x01 && hi <= 0x0F && hi != 0x02 && hi != 0x03 && lo != 0x00)
                        ||  (hi >= 0x40 && hi <= 0x4F && hi != 0x42 && hi != 0x43 && lo != 0x00))
                        {
                            u32 NewOffesetOfFont = 0x09000000;
                            u32 IndexOfFontGfx;
                            if (hi == 1)
                                IndexOfFontGfx = lo -1;
                            else if (hi >= 4 && hi <= 0xF)
                                IndexOfFontGfx = ((hi - 3) * 255) + lo -1;
                            else if (hi >= 0x40 && hi <= 0x41)
                                IndexOfFontGfx = ((hi - 0x33) * 255) + lo -1;
                            else if (hi >= 0x44 && hi <= 0x4F)
                                IndexOfFontGfx = ((hi - 0x35) * 255) + lo -1;

                            *(u32 *) 0x40000D4 = NewOffesetOfFont + 0x40 * IndexOfFontGfx;
                            *(u32 *) 0x40000D8 = dest;
                            *(u32 *) 0x40000DC = 0x80000020;
                            dest += 0x40;
                        }
                        else
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
                    }
                    --ptrOfCurChar;
                } while (i++ < a1->charCounts);
            }
        }
    }
    return;
}

/*
void RenderText_08009F3C(struct FontTileInfo *a1) 
{
    u8 IsChar;
    u16 *ptrOfCurChar;
    u16 curChar,charCounts;
    u32 dest,i;

    if ( a1->charCounts ) 
    {
        IsChar = a1->IsChar;
        if ( (IsChar & 1) == 0 ) 
        {
            a1->IsChar = IsChar | 1; 
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