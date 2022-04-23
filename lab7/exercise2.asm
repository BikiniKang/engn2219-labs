; Hand assemble the remaining instructions

.word 0x0109 ; movl r1, 0x9
.word 0x0201  ; movl r2, 1        0000 0010 0000 0001
.word 0x5310  ; ldr r3, [r1]      0101 0011 0001 0000
.word 0x8332  ; add r3, r3, r2    1000 0011 0011 0010
.word 0x4310  ; str r3, [r1]      0100 0011 0001 0000
.word 0
.word 0
.word 0
.word 0
.word 0xFF
