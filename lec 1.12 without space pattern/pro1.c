#include<stdio.h>
main(){
	int i,j,n;
	printf("Enter The value for pattern :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		
		for(j=i;j>=1;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
}
