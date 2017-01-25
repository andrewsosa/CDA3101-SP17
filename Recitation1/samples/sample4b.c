//
//
//	SAMPLE FILE PASSING
//
//


typedef struct {
	char label[20];
	char instruction[30];
	int addr;
} line_t;

line_t lines[100];

int index = 0;
int addr = 0;
char buffer[128];
char label[20];
char instruction[30];

while(fgets(buffer, 128, stdin)) {

	if(sscanf(buffer, "%[^:]:\t%[^\n]", label, instruction) == 2){
		/* Found a label and an instruction */
		strncpy(lines[index].label, label, strnlen(label));
		strncpy(lines[index].instruction, instruction, strnlen(instruction));
	}

	lines[index].addr = addr;

	if(instuction = la) {
		index++;

	}

	index++;
}
