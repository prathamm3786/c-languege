#include <stdio.h>
 main() {
    int i , n , n1 = 0 , n2 = 1 , ans;
    printf("Enter the numer for series : ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        printf("%d ",ans);
        n1=n2;
        n2=ans;
        ans = n1 + n2 ;
    }
}

