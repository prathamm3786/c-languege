#include<stdio.h>
main(){
	char i,j,n;
	printf("Enter any Alphabate (should be capital) : ");
	scanf("%c",&n);
	for(i='A';i<=n;i++){
		for(j=i;j>='A';j--){
			printf("%c ",j);
		}printf("\n");
	}
}
