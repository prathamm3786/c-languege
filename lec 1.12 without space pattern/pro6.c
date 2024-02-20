#include<stdio.h>
main(){
	int i,j,n;
	printf("Enter value for pattern :");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d ",j%2);
		}printf("\n");
	}
	
}
