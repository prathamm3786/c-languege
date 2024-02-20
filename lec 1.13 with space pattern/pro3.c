#include<stdio.h>
main(){
	int i,j,s,n;
	printf("Enter pattern column value you want to print :");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(s=i-1;s>=1;s--){
			printf("  ");
		}
		
		for(j=i;j<=n;j++){
			printf("%d ",i);
		}
		
		printf("\n");
	}

}
