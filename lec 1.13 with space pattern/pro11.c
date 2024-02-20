#include<stdio.h>
main(){
	int i,j,s,n;
	printf("Enter pattern column value you want to print :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(s=n-1;s>=i;s--){
			printf("  ");
		}
		
		for(j=1;j<=i;j++){
			printf("* ",j);
		}
			for(j=i-1;j>=1;j--){
			printf("* ",j);
		}
		
		printf("\n");
	}

}
