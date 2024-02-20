#include<stdio.h>

main(){
	
	const int tri=180;
	int first , second , total;
	printf("Enter first corner :");
	scanf("%d",&first);
	
	printf("Enter second corner :");
	scanf("%d",&second);
	
	total = tri - (first + second);
	
	printf("Third corner is = %d",total);
}
