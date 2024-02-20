#include<stdio.h>
main(){
	int i,j,s,n;
	printf("Enter pattern column value you want to print :");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(s=n-1;s>=i;s--){
			printf("  ");
		}
		
		for(j=i;j>=1;j--){
			printf("%d ",j);
		}
		
		printf("\n");
	}

}
