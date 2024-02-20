#include<stdio.h>
main(){
	int i,n,sum=0;
	printf("Enter End value for :");
	scanf("%d",&i);
	while(n <= i){
		printf("%d\n",n);
		sum=n+sum; 
		n++;
		
	}
	
printf("Sum of pattern = %d",sum);	
}
