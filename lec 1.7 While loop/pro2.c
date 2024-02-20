#include<stdio.h>
main(){
	int i,n=1,sub=0;

	printf("Enter Starting value for pattern (Should be bigger than ending value) :");
	scanf("%d",&i);
	
	printf("Enter End value for pattern :");
	scanf("%d",&n);
	
	
	while(i >= n){
		
		printf("%d\n",i);
		sum = sum-(i-2);
		i--;
		
			
		
		
	}
	
printf("Subtraction of pattern = %d",sub);	
}
