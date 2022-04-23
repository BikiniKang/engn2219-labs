movl r1, 5
movl r2, 0
movl r3, 4
movl r4, 1
label_bg:
add r2, r2, r1
sub r3, r3, r4
jpz label_end
jp label_bg
label_end: