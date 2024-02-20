#include<stdio.h>
main(){

	char name[25];
	
	printf("Enter any string : ");
	scanf("%49[^\n]", name);
	
	printf("Lowercase string : %s",strlwr(name));
}
