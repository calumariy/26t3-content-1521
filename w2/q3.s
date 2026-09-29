.data

enter_string:
	.asciiz "Enter a number: "


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

	mul	$t1, $t0, $t0

	li	$v0, 1
	move	$a0, $t1
	syscall
	li	$v0, 11
	li	$a0, '\n'
	syscall     #    printf("%d\n", y);


	jr	$ra
