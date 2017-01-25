//
//
//	INSTRUCTION TRANSLATION EXAMPLE
//
//

#include "stdio.h"
#include "labels.h"

// Directive type
// INPUT:		[optional_label:]<tab>directive[<tab>operand]
// ex:			_sum:	.word	0
// ex:				.text

// Instruction type
// INPUT:		[optional_label:]<tab>instruction<tab>operands
// ex:			MAIN:	addi	$s0,$s1,4
// ex:				add $s0,$s1,$s2
//					   ^ there is a '\t' here

int translate(char * instr);
int convertOpr(char * opr);
int convertReg(char * reg);
int ascii(char * reg);

int main(int argc, char const *argv[]) {
	/* Demonstrate identifying which type of instruction */

	char buffer[50];
	char label[20];
	char instruction[30];

	fgets(buffer, 256, stdin);

	if(sscanf(buffer, "%[^:]:\t%[^\n]", label, instruction) == 2){
		/* Found a label and an instruction */

	}
   	else if(sscanf(buffer, "\t%[^\n]", instruction) == 1){
		/* Line only contains an instruction */
		printf("Instruction: %s\n", instruction);
		translate(instruction);
	}


	return 0;
}

int translate(char * instr) {
	/* instr:	operation<tab>operands
	 * ex:		lw<tab>$s2,0($s3)
	 * ex:		addi<tab>$s1,$s2,$s3
	 */

	// INPUT:	addi	$s1,$s2,$s3

	char opr[16];
	char a[16], b[16], c[16];
	int i;

	i = sscanf(instr, "%[^\t]\t$%[^,],$%[^,],$%[^,]", opr, a, b, c);

	printf("tokens: %d\n", i);
	printf("opcode: %s\n", opr);
	printf("a: %s\n", a);
	printf("b: %s\n", b);
	printf("c: %s\n", c);

	printf("translated: %s %d %d %d\n", opr,
		convertReg(a), convertReg(b), convertReg(c));
}

int convertOpr(char * opr) {
	return 0;
}

int convertReg(char * reg) {
	/* Converts a regsiter (e.g. s1) to it's value (e.,g 16) */

	int tmp = ascii(reg);
	// t0 -> 11648
	// #define t0_k 11648

	printf("%d\n", tmp);

	switch(tmp) {
		case t0_k: return t0_v;
		case t1_k: return t1_v;
		case t2_k: return t2_v;
		case t3_k: return t3_v;
		case t4_k: return t4_v;
		case t5_k: return t5_v;
		case t6_k: return t6_v;
		case t7_k: return t7_v;
		case s0_k: return s0_v;
		case s1_k: return s1_v;
		case s2_k: return s2_v;
		case s3_k: return s3_v;
		case s4_k: return s4_v;
		case s5_k: return s5_v;
		case s6_k: return s6_v;
		case s7_k: return s7_v;
		case z0_k: return z0_v;
	}
}

int ascii(char * reg) {
	/* Accepts register strings, e.g. s1 */

	printf("%s\n", reg);

	char ch;
	int i;

	sscanf(reg, "%c%d", &ch, &i);

	printf("ch: %c\n", ch);
	printf("i: %d\n", i);

	return (((int) ch) * 100) + (i + 48);

}
