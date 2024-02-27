#include<stdio.h>
pointer(int x){
	int i,arr[x];
	for(i=0;i<x;i++){
		printf("Arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<x/2;i++){
		int temp = arr[i];
		arr[i] = arr[x-1-i]; 
		arr[x-1-i] = temp;
	}
	printf("\n");
	for(i=0;i<x;i++){
		printf("Arr[%d] = %d\n",x-1-i,arr[i]);
	}
}

main(){
	int n;
	printf("Enter size of Array :");
	scanf("%d",&n);
	pointer(n);
	
}
