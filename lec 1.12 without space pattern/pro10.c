#include<stdio.h>

main(){
	
	int i,j,n,k=1,c=1;
	char r='A';
	printf("Enter the value for pattern :");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--){
			for(j=0;j<n;j++){
			if(j%2==0){
				printf("%d ",c++);
			}
			else{
				printf("%c ",r++);
			}
				
			}
			printf("\n");
		
	}
	}
	 

