SQUARE_MAX=46340
.data

enter_string:
	.asciiz "Enter a number: "

error_string:
	.asciiz "square too big for 32 bits\n"


.text
# $t0 -> x
# $t1 -> y
main:
	li	$v0, 4
	la	$a0, enter_string
	syscall			#printf("Enter..)

	li	$v0, 5
	syscall
	move	$t0, $v0 # scanf

	bgt	$t0, SQUARE_MAX, square_too_big

	mul	$t1, $t0, $t0

	li	$v0, 1
	move	$a0, $t1
	syscall
	li	$v0, 11
	li	$a0, '\n'
	syscall     #    printf("%d\n", y);

        b	epilogue;

square_too_big:

	li	$v0, 4
	la	$a0, error_string
	syscall			#printf("Enter..)

epilogue:

	jr	$ra
