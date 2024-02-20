#include <stdio.h>

main() {
	
       int i , N , num1 = 0 , num2 = 1 , ans;

    printf("Enter the number of terms: ");
    scanf("%d", &N);

   

    for (i = 0; i<=N; i++) {
        printf("%d ",ans);
        num1 = num2;
        num2 = ans;
        ans = num1 + num2;
    }
   

   
}

