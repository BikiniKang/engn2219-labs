movl r1, 0
movl r2, 1
movl r3, 0
start:
add r3, r1, r2
add r1, r2, r0
add r2, r3, r0
jp start
end: