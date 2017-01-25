//
//
//	FGETS EXAMPLE
//
//

#include "stdio.h"

//#define BUFFER_SIZE 50

int main(int argc, char const *argv[]) {

    char x[50]; // "hello world\n"
    int y = 10;

	// char *, int, FILE *
    fgets(x, 50, stdin);

	// template, value...
    printf("Hello, Mr. %s\n", x);

    return 0;
}
