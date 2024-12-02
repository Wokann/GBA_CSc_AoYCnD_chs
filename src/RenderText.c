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
            s32 v5 = *(s32 *)(a1 + 8) + 0x20 * (*(u16 *)(a1 + 0x10) - (2 * (v3 - 1) + 1));
            u32 v6 = 0;
            
            if ( *(s16 *)(a1 + 2) ) 
            {
                s32 v11;
                do {
                    s16 v7 = *v4;
                    if (v7) 
                    {
                        s32 v8 = (u16)(v7 & 0xE00) >> 9;
                        s32 v9 = *(u32 *)(0x848E92C + v8); 
                        u16 *v10 = *(u16 **)(4 * (v7 & 0x1FF) + *(u32 *)(0x848E930 + v8));
                        
                        if ( *(u16 *)(0x848E934 + v8) ) 
                        {
                            *(s32 *) 0x40000D4 = v9 + 0x20 * v10[1];
                            *(s32 *) 0x40000D8 = v5;
                            *(s32 *) 0x40000DC = 0x80000010;
                            *(s32 *) 0x40000D4 = v9 + 0x20 * v10[3];
                            *(s32 *) 0x40000D8 = v5 + 0x20;
                            *(s32 *) 0x40000DC = 0x80000010;
                            *(s32 *) 0x40000D4 = v9 + 0x20 * v10[0];
                            *(s32 *) 0x40000D8 = v5 + 0x40;
                            *(s32 *) 0x40000DC = 0x80000010;
                            *(s32 *) 0x40000D4 = v9 + 0x20 * v10[2];
                            *(s32 *) 0x40000D8 = v5 + 0x60;
                            *(s32 *) 0x40000DC = 0x80000010;
                            v5 += 0x80;
                        } 
                        else 
                        {
                            *(s32 *) 0x40000D4 = v9 + (v10[0] << 6);
                            *(s32 *) 0x40000D8 = v5;
                            *(s32 *) 0x40000DC = 0x80000020;
                            v5 += 0x40;
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