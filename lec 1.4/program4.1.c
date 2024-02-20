#include<stdio.h>
main(){
	
	float f,c;
	printf("Enter Celsius value :");
	scanf("%f",&c);
	
	f = (c * 9/5) + 32;
	 
	 printf("The temperature in Fahrenheit : %.2f", f);
}
