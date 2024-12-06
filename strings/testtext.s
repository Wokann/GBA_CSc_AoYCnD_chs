;蜡笔小新文本并非常规0xFF,0x00终止符，而是控制符结束。
;故不使用.str，因其在已设置终止符时会调用，不设置时也会默认为00填充

.org 0x08FF0000
Dialog_001:
Text_001_001: .strn "在新之助他们居住的春日部！{End_16}"
Text_001_002: .strn "新开设了一个{End_06}"
Text_001_003: .strn "春日部电影乐园{End_07}"
Text_001_004: .strn "啊蹭瞪府厚街阑漫陪热谁宛姓雍正冂厶薇{End_21}"
Text_001_005: .strn "在那里，通过虚拟电影院机器{End_16}"
Text_001_006: .strn "人们可以体验电影中的世界！{End_16}"
Text_001_007: .strn "圄阗婢椋腈钏癜篌鲐{End_09}"
Text_001_008: .strn "测试八{End_03}"
Text_001_009: .strn "测试九{End_03}"
Text_001_010: .strn "测试十{End_03}"

Dialog_002:
Text_002_001: .strn "哦…… 春日部竟然有了{End_11}"
Text_002_002: .strn "这样的东西啊……{End_08}"

.align 4
PtrOfDialog_001:
.word Text_001_001,Text_001_002,Text_001_003,Text_001_004
.word Text_001_005,Text_001_006,Text_001_007,Text_001_008
.word Text_001_009,Text_001_010,0

PtrOfDialog_002:
.word Text_002_001,Text_002_002,0

.org 0x0849FFB8
.word PtrOfDialog_001,PtrOfDialog_002

/*
.org 0x080C67EE
strn "しんちゃんたちのすむ カスカベに{End_16}"
;3b00 7500 4500 6700 7500 4300 4500 5200 3d00 6400 0000 8000 8e00 8000 ae00 4f00 1080

.org 0x080C6810
strn "あらたにオ—プンした アトラクツョン{End_18}"
;2600 6d00 4300 4f00 7f00 ec00 ac00 c600 3b00 4300 0000 7700 9d00 be00 8400 8c00 bc00 c600 1280
*/