#include <stdio.h>

void fib(int n) {
    int n1 = 0, n2 = 1, n3,j;
    printf("Fibonacci Series: \n");
    for (j = 0; j < n; j++) {
        printf("%d, ", n1);
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
}

void main() {
    int A;
    printf("Enter the number of terms: ");
    scanf("%d", &A);
    fib(A);

}
