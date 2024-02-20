#include<stdio.h>
main(){
	
	int a,b,c;
	printf("Enter value of a : ");
	scanf("%d",&a);
	printf("Enter value of b : ");
	scanf("%d",&b);
	printf("Enter value of c : ");
	scanf("%d",&c);
	
	(a < b)	? ((a<c) ? printf("a is min") : printf("c is min")) 
			: ((b<c) ? printf("b is min") : printf("c is min"));
}
