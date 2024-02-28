#include<stdio.h>
main(){
	char str[50];
	int *p , length;
	printf("Enter Any Word or Name :");
	gets(str);
	length = strlen(str);
	p = &length;
	
	printf("Length of string is : %d",*p);
}
