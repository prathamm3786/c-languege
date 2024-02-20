#include<stdio.h>
main(){
	int i,j,s,n;
	printf("Enter pattern column value you want to print :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(s=2;s<=i;s++){
			printf("  ");
		}
		
		for(j=n;j>=i;j--){
			printf("%d ",j);
		}
		
		printf("\n");
	}

}
