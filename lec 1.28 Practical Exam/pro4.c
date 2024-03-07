#include<stdio.h>
main(){
	int i,j,s,n;
	printf("Enter any number below 9 : ");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		for(s=n-1;s>=i;s--){
			printf("  ");
		}
		for(s=i;s<=n-1;s++){
			printf("  ");
		}
		for(j=i;j>=1;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		for(s=n-1;s>=i;s--){
			printf("  ");
		}
		for(s=i;s<=n-1;s++){
			printf("  ");
		}
		for(j=i;j>=1;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
}
