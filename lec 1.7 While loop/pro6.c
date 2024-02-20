//Write a Program to print leap years between two given numbers using a while loop.
#include<stdio.h>
main(){
	int i,n,sum=0;
	printf("Enter Starting year to find leap year :");
	scanf("%d",&n);
	printf("Enter Ending year to find leap year:");
	scanf("%d",&i);
	while(n <= i){
	if(n%4==0){
		printf("%d\n",n);
	}	n++;
		
	}
	

}
