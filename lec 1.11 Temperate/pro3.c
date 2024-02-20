#include<stdio.h>

main(){
int first,last,sum;

printf("Enter your value   : ");
scanf("%d",&first);
last=first%10; //to find last digit of number
while(first>9){
	first=first/10; //to find first number of digit
}

sum=first+last;
printf("Sum of First and Last digit is = %d",sum);
}
