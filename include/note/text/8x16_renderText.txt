//8*16汉字的旧汇编程序hack代码（已废弃）
.org UnlockCharmapLimit ;0x08009F9A
    mov r6,0

//E0 26 movs r6,0xe0 ->
//00 26 movs r6,0

.org FontGlyphAddress   ;0x0848E92C
.word 0x09000000

//34 7D 0A 08->
//00 00 00 09

.org ExpandChineseFontJump  ;0x08009FC6
    ldr r0,=ExpandChineseFontAddress
    mov pc,r0
.pool
;0x08FD0000
;.back 0x08009FD8

.org ExpandChineseFontAddress   ;0x08FD0000
CalculateCharmap:
    ldrh r2,[r7,0]         ;r2 = *r7(*v4)  ;文本编码
    lsr r0,r2,8           ;r0 = hi(r2)
    cmp r0,3
    blt NormalCahr
    cmp r0,0xF
    ble CalChs
    cmp r0,0x40
    beq CalChs
    cmp r0,0x41
    beq CalChs
    cmp r0,0x43
    blt NormalCahr
    cmp r0,0x4F
    ble CalChs

CalChs:
    sub r0,r0,0x2
    cmp r0,0x3E
    blt GetChar
    sub r0,0x30
    cmp r0,0x11
    blt GetChar
    sub r0,r0,0x2

GetChar:
    lsl r2,r0,8
    sub r0,r2,r0
    add r0,r0,1
    ldrh r2,[r7,0]
    lsl r2,r2,0x18
    lsr r2,r2,0x18
    add r0,r0,r2
    b Wirte2Ram

NormalCahr:
    ldrh r2,[r7,0]         ;r2 = *r7(*v4)  ;文本编码
    mov r0,r2              ;r0 = r2

Wirte2Ram:
    lsl r0,r0,6
    add r0,r6,r0        ;r0 = r2 * 0x40 + r6   ;字模地址
    str r0,[r5,0]        ;*0x040000D4 = r0
    str r4,[r5,4]        ;*0x040000D8 = r4   (内存地址)
    ldr r0,=0x80000020   ;r0 = 0x80000020
    str r0,[r5,8]        ;*0x040000DC = r0 = 0x80000020
    ldr r0,[r5,8]        ;r0 = 0x8000020
    add r4,0x40         ;r4 = r4 + 0x40     (内存地址增加？) 

End:
    ldr r0,=ExpandChineseFontBack
    mov pc,r0
.pool
;0x80000020
;0x08009FD8


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
      v4 = (_WORD *)(*(_DWORD *)(a1 + 4) + 2 * v3 - 2);
      v5 = *(_DWORD *)(a1 + 8) + 0x20 * (*(unsigned __int16 *)(a1 + 0x10) - (2 * (v3 - 1) + 1));
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
            v11 = (unsigned __int16)(v10 & 0x000) >> 9;   //0xe00改为0x0
            v12 = *((_DWORD *)PtrOfAddOfFontGfx + v11);
            v13 = *(unsigned __int16 **)(4 * (v10 & v9) + *((_DWORD *)PtrOfAddOfFontIndex + v11));
            if ( *((_WORD *)PtrOfAddOfAddOfFontIndex + v11) )
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
              hi = v10 >> 8;
              lo = v10 & 0xFF;
              if((hi >= 0x03 && hi <= 0x0F)||(hi >= 0x40 && hi <= 0x41)||(hi >= 0x43 && hi <= 0x4F))
              {
                hi -= 0x2;     //扣除0x02,0x03
                if(hi >= 0x3E) //0x40-0x2
                  hi -= 0x30;  //缩减0x10-0x40差距
                if(hi >= 0x11) //0x43-0x2-0x30
                  hi -= 0x2;   //扣除0x42,0x43

                char = hi * 0xFF + lo + 1;
              }
              else
                char = v10;

              *Ram_040000D4_1 = v12 + (char << 6);// char * 0x40
              Ram_040000D4_1[1] = v5;
              Ram_040000D4_1[2] = Num_80000020;
              v5 += 0x40;
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