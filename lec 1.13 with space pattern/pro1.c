#include<stdio.h>
main(){
	int i,j,s,n;
	printf("Enter pattern column value you want to print :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(s=i+1;s<=n;s++){
			printf("  ");
		}
		
		for(j=i;j>=1;j--){
			printf("%d ",j);
		}
		
		printf("\n");
	}

}
