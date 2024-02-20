//Write a Program to print odd numbers from N to 1 using a while loop.
#include<stdio.h>
main(){
	int i,n=1,sum=0;

	printf("Enter Starting value for pattern (Should be bigger than ending value) :");
	scanf("%d",&i);
	
	printf("Enter End value for pattern :");
	scanf("%d",&n);

		while(i >= n){
		if(i%2!=0){
			printf("%d\n",i);
		}
		i--;
		
		}
		
	

	
}
