;.org 0x080102D8
    ;.word MessageOfMenu

.org 0x08015BB0
    .word MessageOfNameList             ;0x084990C8
.org 0x08015BC0
    .word MessageOfTips                 ;0x0849BB6C
.org 0x08015BD0
    .word MessageOfGetItemNote          ;0x0849CC08
.org 0x08015BE0
    .word MessageOfMoviePlot            ;0x0849F970
.org 0x08015BF0
    .word (MessageOfMoviePlot + 0x6C)   ;0x0849F9DC


.org 0x084990C8
 .importobj ".\build\strings\PtrOfStrings1.o"


//*Menu                     
//*MessageOfMenu            0x0848EF18 - 0x0848F1CB