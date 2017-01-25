	.text
	la	$t0,_i
	lw	$s0,0($t0)
	addi	$t1,$0,10
	j	TEST
LOOP:	addi	$s0,$s0,1
TEST:	bne	$s0,$t0,LOOP
	sw	$s0,0($t0)
	.data
_i:	.word	0

	// assume $s1 = 10
ADD:	addi	$t1,$t1,1
	bne	$s1,$t1,ADD


//
//
//



typedef struct {
	char label[20];
	char instruction[30];
	int addr;
} line_t;

label = ADD
instruction = addi	$t1,$t1,1
addr = 0x0004

label = n/a
instruction = bne	$s1,$t1,ADD -> $s1,$t1,0x0004 -> 0111000110
addr = 0x0008
