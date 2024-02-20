#include<stdio.h>
void main(){
	int x,y,z;
	int *a;
	int *b;
	
	
	printf("Enter a Value of x : ");
	scanf("%d",&x);
	printf("Enter a Value of y : ");
	scanf("%d",&y);
	a = &x;
	b = &y;
	printf("Before Swapping :\n");
	printf("x : %d\n",*a);
	printf("y : %d\n\n",*b);
	z=x;
	x=y;
	y=z;
	printf("After Swapping :\n");
	printf("x : %d\n",*a);
	printf("y : %d\n",*b);
	
}
