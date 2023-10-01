vramforchs
.org 0x08009A86
ldr r0,=0x08FD0090
mov pc,r0
0x08FD0080
.back 0x08009ADE


sub_800A068_copy
.org 0x08FD0080
RAM:0800A068 09 04       LSLS            R1, R1, #0x10
RAM:0800A06A 09 0C       LSRS            R1, R1, #0x10
RAM:0800A06C 12 06       LSLS            R2, R2, #0x18
RAM:0800A06E 00 2A       CMP             R2, #0
RAM:0800A070 00 D1       BNE             locret_800A074
RAM:0800A070
RAM:0800A072 01 80       STRH            R1, [R0]
RAM:0800A072
RAM:0800A074
RAM:0800A074             locret_800A074        ; CODE XREF: sub_800A068+8↑j
RAM:0800A074 70 47       BX              LR

fontramstart
.org 0x08FD0090

RAM:08009A86 73 88       LDRH            R3, [R6,#2];r3 = *0x020018A2
RAM:08009A88 59 00       LSLS            R1, R3, #1 ;r1 = r3*2
RAM:08009A8A 01 31       ADDS            R1, #1     ;r1 = r3*2 + 1
RAM:08009A8C 30 8A       LDRH            R0, [R6,#0x10];r0 = *0x020018B0(037F)
RAM:08009A8E 41 1A       SUBS            R1, R0, R1;r1 = *0x020018B0 - (r3*2 + 1)
RAM:08009A90 21 43       ORRS            R1, R4    ;r1 = r1 | r4(v17)
RAM:08009A92 09 04       LSLS            R1, R1, #0x10
RAM:08009A94 09 0C       LSRS            R1, R1, #0x10
RAM:08009A96 28 1C       MOVS            R0, R5    ;r0 = r5(v15)=0x020026C0+
RAM:08009A98 02 9B       LDR             R3, [SP,8h];r3 = 
RAM:08009A9A 1A 0E       LSRS            R2, R3, #0x18 ;r2 = v24 & 1
RAM:08009A9C 00 F0 E4 FA BL              sub_800A068
RAM:08009A9C
RAM:08009AA0 71 88       LDRH            R1, [R6,#2];r1 = *0x020018A2
RAM:08009AA2 48 00       LSLS            R0, R1, #1 ;r0 = r1*2
RAM:08009AA4 33 8A       LDRH            R3, [R6,#0x10];r3 = *0x020018B0(037F)
RAM:08009AA6 18 1A       SUBS            R0, R3, R0;r0 = *0x020018B0 - (r1*2)
RAM:08009AA8 04 43       ORRS            R4, R0    ;r4 = r4(v17) | r0
RAM:08009AAA 21 04       LSLS            R1, R4, #0x10
RAM:08009AAC 09 0C       LSRS            R1, R1, #0x10
RAM:08009AAE 38 1C       MOVS            R0, R7
RAM:08009AB0 53 46       MOV             R3, R10
RAM:08009AB2 1A 0E       LSRS            R2, R3, #0x18
RAM:08009AB4 00 F0 D8 FA BL              sub_800A068
RAM:08009AB4
RAM:08009AB8 70 88       LDRH            R0, [R6,#2]
RAM:08009ABA 01 30       ADDS            R0, #1
RAM:08009ABC 70 80       STRH            R0, [R6,#2]
RAM:08009ABE 0E E0       B               loc_8009ADE

RAM:08009ADE 02 35       ADDS            R5, #2


RAM:0800A068 09 04       LSLS            R1, R1, #0x10
RAM:0800A06A 09 0C       LSRS            R1, R1, #0x10
RAM:0800A06C 12 06       LSLS            R2, R2, #0x18
RAM:0800A06E 00 2A       CMP             R2, #0
RAM:0800A070 00 D1       BNE             locret_800A074
RAM:0800A070
RAM:0800A072 01 80       STRH            R1, [R0]
RAM:0800A072
RAM:0800A074
RAM:0800A074             locret_800A074        ; CODE XREF: sub_800A068+8↑j
RAM:0800A074 70 47       BX              LR


===========================================================================
RAM:08009A30 01 98       LDR             R0, [SP,#0x30+var_2C]
RAM:08009A32 53 46       MOV             R3, R10
RAM:08009A34 18 40       ANDS            R0, R3
RAM:08009A36 00 06       LSLS            R0, R0, #0x18
RAM:08009A38 02 90       STR             R0, [SP,#0x30+var_28]
RAM:08009A3A 02 20       MOVS            R0, #2
RAM:08009A3C 01 99       LDR             R1, [SP,#0x30+var_2C]
RAM:08009A3E 08 40       ANDS            R0, R1
RAM:08009A40 00 06       LSLS            R0, R0, #0x18
RAM:08009A42 82 46       MOV             R10, R0
RAM:08009A42
RAM:08009A44
RAM:08009A44             loc_8009A44           ; CODE XREF: font_rely_020026C0_08009934+1DC↓j
RAM:08009A44 E0 23 1B 01 MOVS            R3, #0xE00
RAM:08009A48 18 1C       MOVS            R0, R3
RAM:08009A4A 11 1C       MOVS            R1, R2
RAM:08009A4C 01 40       ANDS            R1, R0
RAM:08009A4E 80 20 80 00 MOVS            R0, #0x200
RAM:08009A52 2F 1C       MOVS            R7, R5
RAM:08009A54 40 37       ADDS            R7, #0x40 ; '@'
RAM:08009A56 81 42       CMP             R1, R0
RAM:08009A58 41 D0       BEQ             loc_8009ADE
RAM:08009A58
RAM:08009A5A 01 38       SUBS            R0, #1
RAM:08009A5C 01 1C       MOVS            R1, R0
RAM:08009A5E 10 1C       MOVS            R0, R2
RAM:08009A60 08 40       ANDS            R0, R1
RAM:08009A62 00 28       CMP             R0, #0
RAM:08009A64 2C D0       BEQ             loc_8009AC0
RAM:08009A64
RAM:08009A66 70 68       LDR             R0, [R6,#4]
RAM:08009A68 73 88       LDRH            R3, [R6,#2]
RAM:08009A6A 59 00       LSLS            R1, R3, #1
RAM:08009A6C 09 18       ADDS            R1, R1, R0
RAM:08009A6E 0A 80       STRH            R2, [R1]
RAM:08009A70 C0 21 89 01 MOVS            R1, #0x3000
RAM:08009A74 08 1C       MOVS            R0, R1
RAM:08009A76 14 1C       MOVS            R4, R2
RAM:08009A78 04 40       ANDS            R4, R0
RAM:08009A7A 00 2C       CMP             R4, #0
RAM:08009A7C 01 D1       BNE             loc_8009A82
RAM:08009A7C
RAM:08009A7E 00 24       MOVS            R4, #0
RAM:08009A80 01 E0       B               loc_8009A86
RAM:08009A80
RAM:08009A82             ; ---------------------------------------------------------------------------
RAM:08009A82
RAM:08009A82             loc_8009A82           ; CODE XREF: font_rely_020026C0_08009934+148↑j
RAM:08009A82 14 0B       LSRS            R4, R2, #0xC
RAM:08009A84 24 03       LSLS            R4, R4, #0xC
RAM:08009A84
RAM:08009A86
RAM:08009A86             loc_8009A86           ; CODE XREF: font_rely_020026C0_08009934+14C↑j
RAM:08009A86 73 88       LDRH            R3, [R6,#2]
RAM:08009A88 59 00       LSLS            R1, R3, #1
RAM:08009A8A 01 31       ADDS            R1, #1
RAM:08009A8C 30 8A       LDRH            R0, [R6,#0x10]
RAM:08009A8E 41 1A       SUBS            R1, R0, R1
RAM:08009A90 21 43       ORRS            R1, R4
RAM:08009A92 09 04       LSLS            R1, R1, #0x10
RAM:08009A94 09 0C       LSRS            R1, R1, #0x10
RAM:08009A96 28 1C       MOVS            R0, R5
RAM:08009A98 02 9B       LDR             R3, [SP,#0x30+var_28]
RAM:08009A9A 1A 0E       LSRS            R2, R3, #0x18
RAM:08009A9C 00 F0 E4 FA BL              sub_800A068
RAM:08009A9C
RAM:08009AA0 71 88       LDRH            R1, [R6,#2]
RAM:08009AA2 48 00       LSLS            R0, R1, #1
RAM:08009AA4 33 8A       LDRH            R3, [R6,#0x10]
RAM:08009AA6 18 1A       SUBS            R0, R3, R0
RAM:08009AA8 04 43       ORRS            R4, R0
RAM:08009AAA 21 04       LSLS            R1, R4, #0x10
RAM:08009AAC 09 0C       LSRS            R1, R1, #0x10
RAM:08009AAE 38 1C       MOVS            R0, R7
RAM:08009AB0 53 46       MOV             R3, R10
RAM:08009AB2 1A 0E       LSRS            R2, R3, #0x18
RAM:08009AB4 00 F0 D8 FA BL              sub_800A068
RAM:08009AB4
RAM:08009AB8 70 88       LDRH            R0, [R6,#2]
RAM:08009ABA 01 30       ADDS            R0, #1
RAM:08009ABC 70 80       STRH            R0, [R6,#2]
RAM:08009ABE 0E E0       B               loc_8009ADE
RAM:08009ABE
RAM:08009AC0             ; ---------------------------------------------------------------------------
RAM:08009AC0
RAM:08009AC0             loc_8009AC0           ; CODE XREF: font_rely_020026C0_08009934+130↑j
RAM:08009AC0 00 24       MOVS            R4, #0
RAM:08009AC2 2B 48       LDR             R0, =0x201
RAM:08009AC4 04 43       ORRS            R4, R0
RAM:08009AC6 28 1C       MOVS            R0, R5
RAM:08009AC8 21 1C       MOVS            R1, R4
RAM:08009ACA 02 9B       LDR             R3, [SP,#0x30+var_28]
RAM:08009ACC 1A 0E       LSRS            R2, R3, #0x18
RAM:08009ACE 00 F0 CB FA BL              sub_800A068
RAM:08009ACE
RAM:08009AD2 38 1C       MOVS            R0, R7
RAM:08009AD4 21 1C       MOVS            R1, R4
RAM:08009AD6 53 46       MOV             R3, R10
RAM:08009AD8 1A 0E       LSRS            R2, R3, #0x18
RAM:08009ADA 00 F0 C5 FA BL              sub_800A068
RAM:08009ADA
RAM:08009ADE
RAM:08009ADE             loc_8009ADE           ; CODE XREF: font_rely_020026C0_08009934+124↑j
RAM:08009ADE                 ; font_rely_020026C0_08009934+18A↑j
RAM:08009ADE 02 35       ADDS            R5, #2
RAM:08009AE0 49 46       MOV             R1, R9
RAM:08009AE2 08 06       LSLS            R0, R1, #0x18
RAM:08009AE4 80 23 5B 04 MOVS            R3, #0x1000000
RAM:08009AE8 C0 18       ADDS            R0, R0, R3
RAM:08009AEA 01 0E       LSRS            R1, R0, #0x18
RAM:08009AEC 89 46       MOV             R9, R1
RAM:08009AEE 03 9B       LDR             R3, [SP,#0x30+var_24]
RAM:08009AF0 98 42       CMP             R0, R3
RAM:08009AF2 34 DA       BGE             loc_8009B5E
RAM:08009AF2
RAM:08009AF4 70 88       LDRH            R0, [R6,#2]
RAM:08009AF6 31 88       LDRH            R1, [R6]
RAM:08009AF8 88 42       CMP             R0, R1
RAM:08009AFA 30 D2       BCS             loc_8009B5E
RAM:08009AFA
RAM:08009AFC 43 46       MOV             R3, R8
RAM:08009AFE 1A 88       LDRH            R2, [R3]
RAM:08009B00 02 20       MOVS            R0, #2
RAM:08009B02 80 44       ADD             R8, R0
RAM:08009B04 80 23 1B 02 MOVS            R3, #0x8000
RAM:08009B08 19 1C       MOVS            R1, R3
RAM:08009B0A 10 1C       MOVS            R0, R2
RAM:08009B0C 08 40       ANDS            R0, R1
RAM:08009B0E 00 28       CMP             R0, #0
RAM:08009B10 98 D0       BEQ             loc_8009A44










===========================================================================
;汉化修改
      while ( 1 )
      {
        if ( (v15 & 0xE00) != 0x200 )
        {
          if ( (v15 & 0x1FF) != 0 )
          {
            *(_WORD *)(2 * a1[1] + *((_DWORD *)a1 + 1)) = v15;
            if ( (v15 & 0x3000) != 0 )
              v17 = v15 >> 12 << 12;
            else
              LOWORD(v17) = 0;
            sub_800A068(v13, (a1[8] - (2 * a1[1] + 1)) | v17, v24 & 1);
            sub_800A068(v13 + 0x20, v17 | (a1[8] - 2 * a1[1]++), v24 & 2);
            if(v15 >= 0x0100 && v15 < 0x1E00) //添加中文判断
            {
                ++v13;
                sub_800A068(v13, (a1[8] - (2 * a1[1] + 1)) | v17, v24 & 1);
                sub_800A068(v13 + 0x20, v17 | (a1[8] - 2 * a1[1]++), v24 & 2);
            }
          }
          else
          {
            v18 = dword_8009B70;
            sub_800A068(v13, dword_8009B70, v24 & 1);
            sub_800A068(v13 + 0x20, v18, v24 & 2);
          }
        }
        ++v13;
        v19 = (v14 << 24) + 0x1000000;
        v14 = HIBYTE(v19);
        if ( v19 >= v25 || a1[1] >= (unsigned int)*a1 )
          break;
        v15 = *v16++;
        if ( (v15 & 0x8000) != 0 )
          goto LABEL_28;
      }



===========================================================================
;原版
      while ( 1 )
      {
        if ( (v15 & 0xE00) != 0x200 )
        {
          if ( (v15 & 0x1FF) != 0 )
          {
            *(_WORD *)(2 * a1[1] + *((_DWORD *)a1 + 1)) = v15;
            if ( (v15 & 0x3000) != 0 )
              v17 = v15 >> 12 << 12;
            else
              LOWORD(v17) = 0;
            sub_800A068(v13, (a1[8] - (2 * a1[1] + 1)) | v17, v24 & 1);
            sub_800A068(v13 + 0x20, v17 | (a1[8] - 2 * a1[1]++), v24 & 2);
          }
          else
          {
            v18 = dword_8009B70;
            sub_800A068(v13, dword_8009B70, v24 & 1);
            sub_800A068(v13 + 0x20, v18, v24 & 2);
          }
        }
        ++v13;
        v19 = (v14 << 24) + 0x1000000;
        v14 = HIBYTE(v19);
        if ( v19 >= v25 || a1[1] >= (unsigned int)*a1 )
          break;
        v15 = *v16++;
        if ( (v15 & 0x8000) != 0 )
          goto LABEL_28;
      }