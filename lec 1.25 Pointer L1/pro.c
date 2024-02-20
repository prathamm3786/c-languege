#include<stdio.h>
main(){
	int i,size,*p;

	printf("Enter size of array : ");
	scanf("%d",&size);
	int arr[size];
	p = &arr;
	
	for(i=0;i<size;i++){
		printf("a[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		printf("%u = > %d\n",p+i,*(p+i));
	}
	printf("squre of all elements :\n");
	for(i=0;i<size;i++){
		printf("%d = %d \n", *(p+i),(*(p+ i))*(*(p+i)));
	}
	
}
