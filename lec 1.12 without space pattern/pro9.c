#include<stdio.h>

main(){
	
	int i,j,n,count=2;
	char alp='A';
	printf("Enter the value for pattern :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
			for(j=1;j<=i;j++){
				if(i%2==0){
				
					if(j%2==0){
						printf("%c ",alp++);
					}
					else{
						printf("%d ",count++);
					}
				}
					else if(j%2==0)
					{
						printf("%d ",count++);
					}
					else{
						printf("%c ",alp++);
					}
				}
				printf("\n");
			}
		
	} 

