#include<stdio.h>
main(){
	const int tri= 180;
	int a,b,c;
	
	printf("enter corner a : ");
	scanf("%d",&a);
	
	printf("enter corner b : ");
	scanf("%d",&b);
	
	c = tri - a - b;
	
	printf("answer is %d",c);
}
