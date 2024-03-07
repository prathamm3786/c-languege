#include<stdio.h>
main(){
	int n,i;
	printf("Enter array size : ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("arr[%d] :",i);
		scanf("%d",&arr[i]);
		
	}
	printf("The square of all Elements are : \n");
	for(i=0;i<n;i++){
		printf("arr[%d] = %d \n",i,arr[i]*arr[i]);
	}
}
