#include <stdio.h>
main() {
    char name[100];
    int i, sum = 0;

    printf("Enter your Name: ");
	scanf("%99[^\n]", name);

    printf("\n");

    for (i = 0; name[i] != '\0'; i++) {
        printf("ASCII Value of %c is %d \n", name[i], name[i]);
        sum += name[i];
    }

    printf("Sum is = %d\n", sum);

}

