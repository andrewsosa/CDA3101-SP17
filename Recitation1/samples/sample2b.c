//
//
//	SSCANF EXAMPLE
//
//

#include "stdio.h"

// INPUT: "string1;string2(56)"

int main(int argc, char const *argv[]) {

    char buffer[256];

    char s1[64];
    char s2[64];
    int x;

    fgets(buffer, 256, stdin);


    int i = 0;
    i = sscanf(buffer, "%[^;];%[^(](%d", s1, s2, &x);
	// buffer, pattern, var1, var2,...

    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%d\n", x);
    printf("elements found: %d\n", i);


    return 0;
}
