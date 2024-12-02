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

void RenderText_08009F3C(s32 a1) 
{
    if ( *(s16 *)(a1 + 2) ) 
    {
        s8 v2 = *(s8 *)(a1 + 0x12);
        if ( (v2 & 1) == 0 ) 
        {
            *(s8 *)(a1 + 0x12) = v2 | 1; 
            s32 v3 = *(u16 *)(a1 + 2);
            s16 *v4 = (s16 *)(*(s32 *)(a1 + 4) + 2 * v3 - 2);
            s32 dest = *(s32 *)(a1 + 8) + 0x20 * (*(u16 *)(a1 + 0x10) - (2 * (v3 - 1) + 1));
            u32 v6 = 0;
            
            if ( *(s16 *)(a1 + 2) ) 
            {
                s32 v11;
                do {
                    s16 curChar = *v4;
                    if (curChar) 
                    {
                        s32 v8 = (u16)(curChar & 0x0) >> 9;
                        //原程序s32 v8 = (u16)(curChar & 0xE00) >> 9;
                        s32 baseOffesetOfFont = *(u32 *)(0x848E92C + v8); 
                        u16 *v10 = *(u16 **)(4 * (curChar & 0x1FF) + *(u32 *)(0x848E930 + v8));
                        
                        if ( *(u16 *)(0x848E934 + v8) ) 
                        {
                            *(s32 *) 0x40000D4 = baseOffesetOfFont + 0x20 * v10[1];
                            *(s32 *) 0x40000D8 = dest;
                            *(s32 *) 0x40000DC = 0x80000010;
                            *(s32 *) 0x40000D4 = baseOffesetOfFont + 0x20 * v10[3];
                            *(s32 *) 0x40000D8 = dest + 0x20;
                            *(s32 *) 0x40000DC = 0x80000010;
                            *(s32 *) 0x40000D4 = baseOffesetOfFont + 0x20 * v10[0];
                            *(s32 *) 0x40000D8 = dest + 0x40;
                            *(s32 *) 0x40000DC = 0x80000010;
                            *(s32 *) 0x40000D4 = baseOffesetOfFont + 0x20 * v10[2];
                            *(s32 *) 0x40000D8 = dest + 0x60;
                            *(s32 *) 0x40000DC = 0x80000010;
                            dest += 0x80;
                        } 
                        else 
                        {   
                            u32 offset;
                            u8 hi = curChar >> 8;
                            u8 lo = curChar & 0xFF;
                            if ((hi >= 0x00 && hi <= 0x0F && hi != 0x02 && hi != 0x03 && lo != 0x00)
                            ||  (hi >= 0x40 && hi <= 0x4F && hi != 0x42 && hi != 0x43 && lo != 0x00))
                            {
                                if (hi >= 0 && hi <= 1)
                                    offset = curChar;
                                else if (hi >= 4 && hi <= 0xF)
                                    offset = ((hi - 2) * 255) + lo + 1;
                                else if (hi >= 0x40 && hi <= 0x41)
                                    offset = ((hi - 0x32) * 255) + lo + 1;
                                else if (hi >= 0x44 && hi <= 0x4F)
                                    offset = ((hi - 0x34) * 255) + lo + 1;
                            }
                            else
                                offset = v10[0];
                            
                            *(s32 *) 0x40000D4 = baseOffesetOfFont + 0x40 * offset;
                            *(s32 *) 0x40000D8 = dest;
                            *(s32 *) 0x40000DC = 0x80000020;
                            dest += 0x40;
                        }
                    }
                    --v4;
                    v11 = (v6 << 16) + 0x10000;
                    v6 = (u32)(v11 >> 16);
                } while ((v11 >> 16) < *(u16 *)(a1 + 2));
            }
        }
    }
    return;
}