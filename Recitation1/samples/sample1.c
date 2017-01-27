//
//
//	FGETS EXAMPLE
//
//

#include "stdio.h"

//#define BUFFER_SIZE 50

int main(int argc, char const *argv[]) {

    char x[50]; // "hello world\n"

    char label[30];
    char operation[10];
    char operands[20];


	// char *, int, FILE *
    fgets(x, 50, stdin);

    sscanf(x, "%[^:]:\t%[^\t]\t%[^\n]", label, operation, operands);

	// template, value...
    printf("label: %s\n", label);
    printf("operation: %s\n", operation);
    printf("operands: %s\n", operands);

    char a[10], b[10], c[10];

    sscanf(operands, "%[^,],%[^,],%[^\n]", a, b, c);

    printf("%s\n%s\n%s\n", a,b,c);

    return 0;
}
