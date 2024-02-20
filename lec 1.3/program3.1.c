#include<stdio.h>
#define PI 3.14
main(){
	int r;
	float ans;
	printf("Enter value of radius : ");
	scanf("%d",&r);
	ans=PI*r*r;
	printf("Area of the circle is : %.2f",ans);
}
