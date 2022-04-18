; Hand assemble the remaining instructions

.word 0x0109 ; movl r1, 0x9
.word   ; movl r2, 1
.word   ; ldr r3, [r1]
.word   ; add r3, r3, r2
.word   ; str r3, [r1]
.word 0
.word 0
.word 0
.word 0
.word 0xFF
