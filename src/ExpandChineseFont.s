.org ExpandChineseFontAddress
 .importobj ".\build\RenderText.o"
/* 
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
*/