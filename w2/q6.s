.data

enter_string:
	.asciiz "Enter a number: "

medium:
	.asciiz "medium"

small_large:
	.asciiz "small/large"

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

	bgt	$t0, 100, check_lt_1000
	j	small


check_lt_1000:

	blt	$t0, 1000, say_medium


small:
	li	$v0, 4
	la	$a0, small_large
	syscall			#printf("Enter..)

	j epilogue

say_medium:
	li	$v0, 4
	la	$a0, medium
	syscall			#printf("Enter..)


epilogue:
	jr	$ra
