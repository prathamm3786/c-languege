#include<stdio.h>
main(){
	int i, n=0;
	printf("Enter your value to find digit number: ");
	scanf("%d",&i);
	while(i>0){
		i=i/10;
		n++;
	}
	printf("Your digit value is : %d",n);
}
