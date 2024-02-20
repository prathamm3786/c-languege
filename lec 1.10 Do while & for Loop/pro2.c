#include<stdio.h>
main(){
	int i=1,n;
	
	printf("Enter the starting number for pattern :");
	scanf("%d",&n);
	do{
		printf("%d ",n);
		n--;
	}while(n>=i);
}
