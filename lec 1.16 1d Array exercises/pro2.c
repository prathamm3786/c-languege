#include <stdio.h>
main() {
    int first, last, year, i;
    int yr[50];
    int c = 0;

    
    printf("Enter the first year number: ");
    scanf("%d", &first);
    printf("Enter the last year number: ");
    scanf("%d", &last);

    
    for (year = first; year <= last; year++) {
        if (year % 4 == 0) {
            yr[c] = year;
            c++;
        }
    }

    printf("The array is: ");
    for (i = 0; i < c; i++) {
        printf("%d", yr[i]);
        printf(" ,");
    }
    printf("\n");

}
