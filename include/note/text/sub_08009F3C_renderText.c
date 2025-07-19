#include "..\..\libgba\gba_types.h"
//转C语言代码
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

/*
//汇编分析
RAM:08009F3C F0 B5       PUSH            {R4-R7,LR}
RAM:08009F3E 57 46       MOV             R7, R10
RAM:08009F40 4E 46       MOV             R6, R9
RAM:08009F42 45 46       MOV             R5, R8
RAM:08009F44 E0 B4       PUSH            {R5-R7}
RAM:08009F46 84 46       MOV             R12, R0       ;r12 = r0 = 0x020018A0
RAM:08009F48 40 88       LDRH            R0, [R0,#2]   ;r0 = *0x020018A2(u16)
RAM:08009F4A 00 28       CMP             R0, #0
RAM:08009F4C 00 D1       BNE             loc_8009F50
RAM:08009F4C
RAM:08009F4E 83 E0       B               loc_800A058
RAM:08009F4E
RAM:08009F50             ; ---------------------------------------------------------------------------
RAM:08009F50
RAM:08009F50             loc_8009F50           ; CODE XREF: MayLoadFontgfx_08009F3C+10↑j
RAM:08009F50 60 46       MOV             R0, R12          ;r0 = 0x020018A0
RAM:08009F52 81 7C       LDRB            R1, [R0,#0x12]   ;r1(v2) = *0x020019B2(u8)
RAM:08009F54 01 20       MOVS            R0, #1           ;r0 = 1
RAM:08009F56 08 40       ANDS            R0, R1           ;r0 = r0 & r1 = v2 & 1
RAM:08009F58 00 28       CMP             R0, #0           ;if((v2 & 1) ==0)
RAM:08009F5A 7D D1       BNE             loc_800A058
RAM:08009F5A
RAM:08009F5C 01 20       MOVS            R0, #1           ;r0 = 1
RAM:08009F5E 08 43       ORRS            R0, R1           ;r0 = r0 | r1 = v2 | 1
RAM:08009F60 61 46       MOV             R1, R12          ;r1 = r12 = 0x020018A0
RAM:08009F62 88 74       STRB            R0, [R1,#0x12]   ;*0x020018B2 = r0 = v2 | 1
RAM:08009F64 4A 88       LDRH            R2, [R1,#2]      ;r2(v3) = *0x020018A2(u16)
RAM:08009F66 51 00       LSLS            R1, R2, #1       ;r1 = r2 * 2
RAM:08009F68 63 46       MOV             R3, R12          ;r3 = 0x020018A0
RAM:08009F6A 58 68       LDR             R0, [R3,#4]      ;r0 = *0x020018A4
RAM:08009F6C 47 18       ADDS            R7, R0, R1       ;r7 = *0x020018A4 + *0x020018A2(u16) * 2
RAM:08009F6E 02 3F       SUBS            R7, #2           ;r7(v4) = *0x020018A4 + *0x020018A2(u16) * 2 - 2 ;文本编码位置
RAM:08009F70 9C 68       LDR             R4, [R3,#8]      ;r4 = *0x020018A8  ;显存地址0x06008000
RAM:08009F72 50 1E       SUBS            R0, R2, #1       ;r0 = v3 - 1
RAM:08009F74 40 00       LSLS            R0, R0, #1       ;r0 = (v3 - 1) * 2
RAM:08009F76 01 30       ADDS            R0, #1           ;r0 = (v3 - 1) * 2 + 1
RAM:08009F78 1E 8A       LDRH            R6, [R3,#0x10]   ;r6 = *0x020018B0
RAM:08009F7A 30 1A       SUBS            R0, R6, R0       ;r0 = *0x020018B0 - ((v3 - 1) * 2 + 1)
RAM:08009F7C 40 01       LSLS            R0, R0, #5       ;r0 = (*0x020018B0 - ((v3 - 1) * 2 + 1)) * 0x20
RAM:08009F7E 24 18       ADDS            R4, R4, R0       ;r4(v5) = *0x020018A8 + (*0x020018B0 - ((v3 - 1) * 2 + 1)) * 0x20
RAM:08009F80 00 20       MOVS            R0, #0           ;r0 = 0
RAM:08009F82 81 46       MOV             R9, R0           ;r9(v6) = r0 = 0
RAM:08009F84 91 45       CMP             R9, R2           ;if(0 >= v3)
RAM:08009F86 67 DA       BGE             loc_800A058

RAM:08009F88 14 4D       LDR             R5, =dword_40000D4 ;r5 = 0x040000D4
RAM:08009F8A 15 49       LDR             R1, =0x80000010    ;r1 = 0x80000010
RAM:08009F8C 88 46       MOV             R8, R1             ;r8 = r1 = 0x80000010
RAM:08009F8E 15 4A       LDR             R2, =0x1FF         ;r2 = 0x000001FF
RAM:08009F90 92 46       MOV             R10, R2            ;r10 = r2 = 0x000001FF
RAM:08009F90
RAM:08009F92
RAM:08009F92             loc_8009F92           ; CODE XREF: MayLoadFontgfx_08009F3C+11A↓j
RAM:08009F92 3B 88       LDRH            R3, [R7]           ;r3(v10) = *r7(v4)
RAM:08009F94 00 2B       CMP             R3, #0             ;if(r3 == 0)
RAM:08009F96 52 D0       BEQ             loc_800A03E         if=,then sub
RAM:08009F96
RAM:08009F98 19 1C       MOVS            R1, R3             ;r1 = r3 = *r7
RAM:08009F9A E0 26 36 01 MOVS            R6, #0xE00         ;r6 = 0x0E00
                         movs r6,0xe0                        【r6 = 0
                         lsls r6,r6,4
RAM:08009F9E 31 40       ANDS            R1, R6             ;r1 = *r7 & 0x0E00
RAM:08009FA0 49 0A       LSRS            R1, R1, #9         ;r1 = r1 / 0x900 (0x0-0x7)
RAM:08009FA2 8A 00       LSLS            R2, R1, #2         ;r2(v11) = r1 * 4(0x0,0x4,..,0x1C)
RAM:08009FA4 10 4E       LDR             R6, =unk_848E92C   ;r6 = 0x0848E92C 字模指针地址
RAM:08009FA6 90 19       ADDS            R0, R2, R6         ;r0 = r6 + r2 
RAM:08009FA8 06 68       LDR             R6, [R0]           ;r6(v12) = *r0 = 0x080A7D34字模地址
RAM:08009FAA 10 48       LDR             R0, =unk_848E930;r0 = 0x0848E930 字模偏移列表指针列表指针
RAM:08009FAC 12 18       ADDS            R2, R2, R0         ;r2 = r0 + r2
RAM:08009FAE 50 46       MOV             R0, R10            ;r0(v9) = r10 = 0x000001FF
RAM:08009FB0 03 40       ANDS            R3, R0             ;r3 = r3(v10) & 0x000001FF
RAM:08009FB2 12 68       LDR             R2, [R2]     ;r2 = *r2 = 0x0848E4B4 字模偏移列表指针列表的指针
RAM:08009FB4 98 00       LSLS            R0, R3, #2         ;r0 = r3 * 4
RAM:08009FB6 80 18       ADDS            R0, R0, R2         ;r0 = r0 + r2 字模偏移指针
RAM:08009FB8 02 68       LDR             R2, [R0]           ;r2(v13) = *r0 字模偏移量列表指针
RAM:08009FBA 49 00       LSLS            R1, R1, #1         ;r1 = r1 * 2(0x0,0x2,..,0xE)
RAM:08009FBC 0C 4B       LDR             R3, =unk_848E934   ;r3 = 0x0848E934
RAM:08009FBE C9 18       ADDS            R1, R1, R3         ;r1 = r1 + r3
RAM:08009FC0 08 88       LDRH            R0, [R1]           ;r0 = *r1(h)
RAM:08009FC2 00 28       CMP             R0, #0             ;
RAM:08009FC4 18 D1       BNE             loc_8009FF8
RAM:08009FC4
RAM:08009FC6 12 88       LDRH            R2, [R2]           ;r2 = *r2 字模偏移量
RAM:08009FC8 90 01       LSLS            R0, R2, #6         ;
RAM:08009FCA 30 18       ADDS            R0, R6, R0
RAM:08009FCC 28 60       STR             R0, [R5]
RAM:08009FCE 6C 60       STR             R4, [R5,#(dword_40000D8 - 0x40000D4)]
RAM:08009FD0 08 48       LDR             R0, =0x80000020
RAM:08009FD2 A8 60       STR             R0, [R5,#(dword_40000DC - 0x40000D4)]
RAM:08009FD4 A8 68       LDR             R0, [R5,#(dword_40000DC - 0x40000D4)]
RAM:08009FD6 40 34       ADDS            R4, #0x40 ; '@'
RAM:08009FD8 31 E0       B               loc_800A03E
RAM:08009FD8
RAM:08009FD8             ; ---------------------------------------------------------------------------
RAM:08009FDA 00          DCB    0
RAM:08009FDB 00          DCB    0
RAM:08009FDC             EXPORT Ram_040000D4
RAM:08009FDC D4 00 00 04 Ram_040000D4 DCD dword_40000D4          ; DATA XREF: MayLoadFontgfx_08009F3C+4C↑r
RAM:08009FE0             EXPORT Num_80000010
RAM:08009FE0 10 00 00 80 Num_80000010 DCD 0x80000010             ; DATA XREF: MayLoadFontgfx_08009F3C+4E↑r
RAM:08009FE4             EXPORT Num_000001FF
RAM:08009FE4 FF 01 00 00 Num_000001FF DCD 0x1FF; DATA XREF: MayLoadFontgfx_08009F3C+52↑r
RAM:08009FE8             EXPORT PtrOfAddOfFontGfx
RAM:08009FE8 2C E9 48 08 PtrOfAddOfFontGfx DCD unk_848E92C       ; DATA XREF: MayLoadFontgfx_08009F3C+68↑r
RAM:08009FEC             EXPORT PtrOfAddOfFontIndex
RAM:08009FEC 30 E9 48 08 PtrOfAddOfFontIndex DCD unk_848E930     ; DATA XREF: MayLoadFontgfx_08009F3C+6E↑r
RAM:08009FF0             EXPORT PtrOfAddOfAddOfFontIndex
RAM:08009FF0 34 E9 48 08 PtrOfAddOfAddOfFontIndex DCD unk_848E934
RAM:08009FF0                 ; DATA XREF: MayLoadFontgfx_08009F3C+80↑r
RAM:08009FF4             EXPORT Num_80000020
RAM:08009FF4 20 00 00 80 Num_80000020 DCD 0x80000020 


RAM:0800A03E 02 3F       SUBS            R7, #2
RAM:0800A040 4A 46       MOV             R2, R9        ;r2=r9(v6)
RAM:0800A042 10 04       LSLS            R0, R2, #0x10 ;r0=r2<<16
RAM:0800A044 80 23 5B 02 MOVS            R3, #0x10000  ;r3=0x10000 
RAM:0800A048 C0 18       ADDS            R0, R0, R3    ;r0(v15)=r2<<16+0x10000
RAM:0800A04A 06 0C       LSRS            R6, R0, #0x10 ;r6=r0>>16
RAM:0800A04C B1 46       MOV             R9, R6        ;r9(v6)=r6
RAM:0800A04E 00 14       ASRS            R0, R0, #0x10
RAM:0800A050 61 46       MOV             R1, R12
RAM:0800A052 49 88       LDRH            R1, [R1,#2]
RAM:0800A054 88 42       CMP             R0, R1
RAM:0800A056 9C DB       BLT             loc_8009F92

*/