
.data
numbers: .word 0, 1, 2, -3, 4, -5, 6, -7, 8, 9

.text
main:

loop_init:
    li  $t0, 0

loop_cond:
    bge $t0, 10, loop_end
loop_body:

        // numbe[i] = numbers + 4 * i
        mul $t3, 4, $t0

        lw  $t1, numbers($t3)

        bge $t1, 0, loop_incr

        addi    $t1, $t1, 42
        sw      $t1, numbers($t3)


loop_incr:
    addi    $t0, $t0, 1
    j   loop_cond
loop_end:
    jr  $ra

