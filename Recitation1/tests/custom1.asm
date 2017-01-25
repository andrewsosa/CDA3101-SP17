


	.text
	addi	$s0,$0,10
	addi	$t0,$0,1
	bne	$s0,$t0,LOOP
LOOP:	addi	$t0,$t0,1

	.data
_a:	.space	4
