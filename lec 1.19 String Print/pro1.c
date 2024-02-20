#include<stdio.h>
main(){

	char name[50];
	
	printf("Enter any string : ");
	scanf("%49[^\n]", name);
	
	printf("Uppercase string : %s",strupr(name));
} 
