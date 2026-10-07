FLAG_ROWS=6
FLAG_COLS=12
ELEM_SIZE=4

.data
flag:
    .word '#', '#', '#', '#', '#', '.', '.', '#', '#', '#', '#', '#'
    .word '#', '#', '#', '#', '#', '.', '.', '#', '#', '#', '#', '#'
    .word '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'
    .word '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'
    .word '#', '#', '#', '#', '#', '.', '.', '#', '#', '#', '#', '#'
    .word '#', '#', '#', '#', '#', '.', '.', '#', '#', '#', '#', '#'

# i = t0
# j = t1
.text
main:

row_loop_init:
    li  $t0, 0
row_loop_cond:
    bge $t0, FLAG_ROWS, row_loop_end
row_loop_body:


col_loop_init:
    li  $t1, 0
col_loop_cond:
    bge $t1, FLAG_COLS, col_loop_end
col_loop_body:

    mul $t2, $t0, FLAG_COLS
    add $t2, $t2, $t1
    mul $t2, $t2, ELEM_SIZE # ELEM_SIZE * (N_COLS * i + j) = offset
    lw  $a0, flag($t2)
    li  $v0, 11
    syscall
    
col_loop_step:
    addi    $t1, $t1, 1
    j       col_loop_cond
col_loop_end:
    li  $a0, '\n'
    li  $v0, 11
    syscall

row_loop_step:
    addi    $t0, $t0, 1
    j       row_loop_cond
row_loop_end:
    jr  $ra
