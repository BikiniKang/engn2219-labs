movl r1, my_label_1
ldr r1, [r1]
movl r2, my_label_2
ldr r2, [r2]
movl r3, my_label_3
ldr r1, [r3]
str r3, [r1]
my_label_1:
.word 0x5
my_label_2:
.word 0x9
my_label_3:
.word 0xF