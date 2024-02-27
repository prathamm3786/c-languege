#include<stdio.h>
main(){
	int n , i;
	printf("Enter size of Array :");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n/2;i++){
		int temp = arr[i];
		arr[i] = arr[n-1-i];
		arr[n-1-i] = temp;
	}
	printf("\n");
	for(i=0;i<n;i++){
		printf("Arr[%d] = %d\n",n-1-i,arr[i]);
	}
}
