#include<stdio.h>
main(){
	int i=1,n;
	
	printf("Enter the last number for pattern :");
	scanf("%d",&n);
	do{
		if(i%2==0){
		printf("%d ",i);}
		
		i++;
	}while(i<=n);
}
