#include<stdio.h>
main(){
	int i, n;
	printf("Enter size of array :");
	scanf("%d",&n);
	int arrA[n];
	printf("\nEnter Elements of array : \n");
	for(i=0;i<n;i++){
		printf("A[%d] :",i);
		scanf("%d",&arrA[i]);	
	}
	printf("\nNegative elements from an Array : ");
	for(i=0;i<n;i++){
		if(arrA[i]<0){
			printf("%d ",arrA[i]);
		}
	}
	
}
