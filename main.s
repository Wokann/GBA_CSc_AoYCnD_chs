.gba
.thumb
.loadtable "./charmap.txt"
.create "./CSc_AoYCnD_chs.gba",0x08000000
.close
.open "./baserom.gba","./CSc_AoYCnD_chs.gba",0x08000000

;定义函数地址
.include "./include/global.s"

;原址修改的部分
.include "./src/HackInOrigin.s"

;中文相关函数
.include "./src/ExpandChineseFont.s"

;中文字模
.include "./graphic/graphic.s"

;测试文本
.include "./data/testtext.s"

.close