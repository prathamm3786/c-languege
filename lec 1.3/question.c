#include <stdio.h>

int main() {
    int userInput;

	printf("do you love me . . .\n");
    do {
        printf("Enter 1 to get 'love you 2': ");
        scanf("%d", &userInput);

        if (userInput == 1) {
            printf("ME too\n");
        } else {
            printf("Think again\n");
        }

    } while (userInput != 1);

    return 0;
}

