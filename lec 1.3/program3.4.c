#include<stdio.h>
main(){
	int p,t;
	float r,ans;
	
	printf("Enter principal of simple interest :");
	scanf("%d",&p);
	printf("Enter rate of interest  :");
	scanf("%f",&r);
	printf("Enter time period :");
	scanf("%d",&t);
	
	ans=(p*r*t)/100;
	
	printf("simple interest is : %f",ans);
	
	
}
