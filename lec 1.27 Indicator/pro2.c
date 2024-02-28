#include<stdio.h>
cube(int r_c){
	int arr[r_c][r_c];
	int i,j;
	for(i=0;i<r_c;i++){
		for(j=0;j<r_c;j++){
			printf("arr[%d][%d] :",i,j);
			scanf("%d",&arr[i][j]);
			
		}
	}
	int (*p)[r_c] = &arr; 
	printf("\n\nCube of Elements are : \n");
    for (i = 0; i < r_c; i++) {
        for (j = 0; j < r_c; j++) {
            printf("%d = %d\n", *(*(p + i) + j), (*(*(p + i) + j)) * (*(*(p + i) + j)) * (*(*(p + i) + j)));
        }
    }
}
main(){
	int n;
	printf("Enetr the size of rows and columns :");
	scanf("%d",&n);
	cube(n);
		
}
	

