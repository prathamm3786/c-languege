#include<stdio.h>

void deci(int num)
{
   if(num%3==0 && num%5==0){
   	printf("This num is decimal with 3 & 5.");
   }
   else{
   	printf("This num is not decimal with 3 & 5.");
   }
}

void main()
{
	int A;
	printf("Enter your number :");
	scanf("%d",&A);
	
	deci(A);
}
