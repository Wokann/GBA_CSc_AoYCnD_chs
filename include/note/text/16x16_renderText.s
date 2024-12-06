0x08009F9A
E0 26 movs r6,0xe0
->
00 26 movs r6,0

0x0848E92C
34 7D 0A 08
->
00 00 00 09

fontramstart
.org 0x08009F66
ldr r0,=0x08FD0000
mov pc,r0
0x08FD0000
.back 0x08009F80

fontramstart
.org 0x08FD0000
mov r3,0       ;tilecount = 0
mov r4,1       ;i = 1
mov r0,r12     ;r0 = 0x020018A0
ldr r0,[r0,4]  ;r0 = *0x020018A4

_countcycle
lsls r1,r4,1    ;r1 = 2 * i
adds r7,r0,r1   ;r7 = *0x020018A4 + i * 2
subs r7,2       ;r7(v4) = *0x020018A4 + i * 2 - 2 ;文本编码位置
add r3,2        ;tilecount += 2

ldrh r1,[r7,0]  ;r1= *r7
lsrs r1,r7,8    ;r1 = *r7 >> 8 
cmp r1,0        ;r1 > 0
bls _cycle
cmp r1,0x1e     ;r1 < 1E
bge _cycle
add r3,2        ;tilecount += 2; 汉字 00< r2 < 1E

_cycle
cmp r4,r2       ;if(i >= r2(v3))
bge _Ramcount
add r4,1
b _countcycle

_Ramcount
subs r3,1          ;tilecount -= 1;
movs r0,r12         ;r0 = 0x020018A0
ldr r4,[r0,8]      ;r4 = *0x020018A8
ldrh r6,[r0,0x10]  ;r6 = *0x020018B0
subs r0,r6,r3      ;r0 = *0x020018B0 - tilecount
lsls r0,r0,5       ;r0 =(*0x020018B0 - tilecount) * 0x20
add r4,r4,r0       ;r4 = *0x020018A8 + (*0x020018B0 - tilecount) * 0x20

_end
ldr r0,=0x08009F80
mov pc,r0
0x08009F80





fontexpand
.org 0x08009FC6
ldr r0,=0x08FD0040
mov pc,r0
0x08FD0040
.back 0x08009FD8

fontexpand
.org 0x08FD0040
_jpfont
ldrh r2,[r7,0]         ;r2 = *r7(*v4)  ;文本编码
lsls r0,r2,7         ;r0 = r2 * 0x80
adds r0,r0,r6        ;r0 = r2 * 0x80 + r6   ;字模地址
mov r2,0x40          ;r2 = 0x40
adds r0,r0,r2        ;r0 = r2 * 0x80 + r6 + 0x40
str r0,[r5,0]        ;*0x040000D4 = r0
str r4,[r5,4]        ;*0x040000D8 = r4   (内存地址)
ldr r0,=0x80000020   ;r0 = 0x80000020
str r0,[r5,8]        ;*0x040000DC = r0 = 0x80000020
ldr r0,[r5,8]        ;r0 = 0x8000020
adds r4,0x40         ;r4 = r4 + 0x40     (内存地址增加？) 

_chinesefont
ldrh r2,[r7]         ;r2 = *r7(*v4)  ;文本编码
lsrs r2,r2,8         ;r2 = HiByte(r2)
cmp r2,0             ;r2 > 0
bls _end
cmp r2,0x1e          ;r2 < 1E
bge _end

_chinese
ldrh r2,[r7]          ;r2 = *r7(*v4)  ;文本编码
lsls r0,r2,7          ;r0 = r2 * 0x80
adds r0,r0,r6         ;r0 = r2 * 0x80 + r6   ;字模地址
str r0,[r5,0]        ;*0x040000D4 = r0
str r4,[r5,4]        ;*0x040000D8 = r4   (内存地址)
ldr r0,=0x80000020   ;r0 = 0x80000020
str r0,[r5,8]        ;*0x040000DC = r0 = 0x80000020
ldr r0,[r5,8]        ;r0 = 0x8000020
adds r4,0x40         ;r4 = r4 + 0x40     (内存地址增加？) 

_end
ldr r0,=0x08009FD8
mov pc,r0
0x80000020
0x08009FD8



int __fastcall MayLoadFontgfx_08009F3C(int a1)
{
  char v2; // r1
  int v3; // r2
  _WORD *v4; // r7
  int v5; // r4
  unsigned int v6; // r9
  int *Ram_040000D4_1; // r5
  int Num_80000010_1; // r8
  int v9; // r10
  int v10; // r3
  int v11; // r1
  int v12; // r6
  unsigned __int16 *v13; // r2
  int v14; // r4
  int v15; // r0
  int v17; // [sp+1Ch] [bp-4h]

  if ( *(_WORD *)(a1 + 2) )
  {
    v2 = *(_BYTE *)(a1 + 0x12);
    if ( (v2 & 1) == 0 )
    {
      *(_BYTE *)(a1 + 0x12) = v2 | 1;
      v3 = *(unsigned __int16 *)(a1 + 2);

      tilecount = 0;
      for(i = 1, i <= v3,i++)
      {
        v4 = *(a1+4)+ 2 * i - 2;
        tilecount += 2;
        if(*v4 >= 0x0100 && *v4 < 0x1E00))
        {
            tilecount += 2;
        }
      }
      v5 = *(_DWORD *)(a1 + 8) + 0x20 * (*(unsigned __int16 *)(a1 + 0x10) - tilecount + 1));

      //v4 = (_WORD *)(*(_DWORD *)(a1 + 4) + 2 * v3 - 2);
      //文本中最新的字在内存中的地址
      //v5 = *(_DWORD *)(a1 + 8) + 0x20 * (*(unsigned __int16 *)(a1 + 0x10) - (2 * (v3 - 1) + 1));
      //从0x06008000起，计算当前要写入的字数，每个字占2个0x20 tile, 0x037F减去占用的tile数量 1、3、5、……
      //即该字对应的tile内存存放地址

      v6 = 0;
      if ( *(_WORD *)(a1 + 2) )
      {
        Ram_040000D4_1 = Ram_040000D4;
        Num_80000010_1 = Num_80000010;
        v9 = Num_000001FF;
        do
        {
          v10 = (unsigned __int16)*v4;
          if ( *v4 )
          {
            v11 = (unsigned __int16)(v10 & 0x0) >> 9;;
            v12 = *((_DWORD *)PtrOfAddOfFontGfx + v11);
            v13 = *(unsigned __int16 **)(4 * (v10 & v9) + *((_DWORD *)PtrOfAddOfFontIndex + v11));
            if ( !*((_WORD *)PtrOfAddOfAddOfFontIndex + v11) )
            {
              *Ram_040000D4_1 = v12 + 0x20 * v13[1];
              Ram_040000D4_1[1] = v5;
              Ram_040000D4_1[2] = Num_80000010_1;
              v14 = v5 + 0x20;
              *Ram_040000D4_1 = v12 + 0x20 * v13[3];
              Ram_040000D4_1[1] = v14;
              Ram_040000D4_1[2] = Num_80000010_1;
              v14 += 0x20;
              *Ram_040000D4_1 = v12 + 0x20 * *v13;
              Ram_040000D4_1[1] = v14;
              Ram_040000D4_1[2] = Num_80000010_1;
              v14 += 0x20;
              *Ram_040000D4_1 = v12 + 0x20 * v13[2];
              Ram_040000D4_1[1] = v14;
              Ram_040000D4_1[2] = Num_80000010_1;
              v5 = v14 + 0x20;
            }
            else
            {
              *Ram_040000D4_1 = v12 + (*v10 << 7) + 0x40;// *v10 * 0x80 汉字左右两半需反过来加载
              Ram_040000D4_1[1] = v5;
              Ram_040000D4_1[2] = Num_80000020;
              v5 += 0x40;
              if(v10 >= 0x0100 && v10 < 0x1E00)
              {
                *Ram_040000D4_1 = v12 + (*v10 << 7);
                Ram_040000D4_1[1] = v5;
                Ram_040000D4_1[2] = Num_80000020;
                v5 += 0x40;
              }
            }
          }
          --v4;
          v15 = (v6 << 16) + 0x10000;
          v6 = HIWORD(v15);
        }
        while ( v15 >> 16 < *(unsigned __int16 *)(a1 + 2) );
      }
    }
  }
  return v17;
}
6763
=6669+94
=247*27+94

=238/*28+99
