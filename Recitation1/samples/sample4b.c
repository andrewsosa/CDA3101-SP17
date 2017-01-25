//
//
//	SAMPLE FILE PASSING
//
//

#include "stdio.h"
#include "string.h"

#define BUFFER_SIZE 50

typedef struct {
	char label[20];
	char instruction[30];
	int addr;
} line_t;

line_t lines[100];

int i = 0;
int addr = 0;
char buffer[BUFFER_SIZE];
char label[20];
char instruction[30];

int main(int argc, char const *argv[]) {

	while(fgets(buffer, BUFFER_SIZE, stdin)) {

		if(sscanf(buffer, "%[^:]:\t%[^\n]", label, instruction) == 2){
			/* Found a label and an instruction */
			strncpy(lines[i].label, label, strlen(label));
			strncpy(lines[i].instruction, instruction, strlen(instruction));
		}
		else if(sscanf(buffer, "\t%[^\n]", instruction) == 1){
			/* Line only contains an instruction */
		}

		lines[i].addr = addr;


		printf("%06X: %s\n",lines[i].addr, lines[i].instruction);
		// %d vs %X vs %06X

		// iterate
		addr = addr + 4;
		i++;

	}


	return 0;
}
