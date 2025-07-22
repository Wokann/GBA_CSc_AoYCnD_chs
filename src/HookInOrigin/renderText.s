.org 0x08009F3C
    push r0-r7
    ldr R0,=ExpandChineseFontAddress
    mov pc,R0
.pool


//.org UnlockCharmapLimit
//    mov r6,0
/* 
E0 26 movs r6,0xe0 ->
00 26 movs r6,0
*/

//.org FontGlyphAddress
//.word 0x09000000
/* 
34 7D 0A 08->
00 00 00 09
*/

//.org ExpandChineseFontJump
//    ldr r0,=ExpandChineseFontAddress
//    mov pc,r0
//.pool