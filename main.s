.gba
.thumb
.loadtable "./charmap.txt"
.create "./CSc_AoYCnD_chs.gba",0x08000000
.close
.open "./baserom.gba","./CSc_AoYCnD_chs.gba",0x08000000

;定义函数地址
.include "./include/global.s"

;原址修改的部分
.include "./src/HookInOrigin/renderText.s"
.include "./src/HookInOrigin/GetStrings.s"

;中文相关函数
.include "./src/HackFunction/ExpandChineseFont.s"

;中文字模
.include "./graphic/graphic.s"

;测试文本
 ;.importobj ".\build\strings\Menu.o"
  
 .org 0x09070000
 .importobj ".\build\strings\NameList.o"
 .importobj ".\build\strings\Tips.o"
 .importobj ".\build\strings\GetItemNote.o"
 .importobj ".\build\strings\MoviePlot.o"
 

 .org 0x080B1B88
 .incbin ".\build\strings\NameList_jp.bin"
 .org 0x080B1D64
 .incbin ".\build\strings\Tips_jp.bin"
 .org 0x080BC678
 .incbin ".\build\strings\GetItemNote_jp.bin"
 .org 0x080BDEA0
 .incbin ".\build\strings\MoviePlot_jp.bin"

.close