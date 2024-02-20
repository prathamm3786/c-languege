/*Q.4 Write a Program to print the below pattern using nested for loop.
               5
        	 4 5 4
           3 4 5 4 3
		 3 3 4 5 4 3 2
	   1 2 3 4 5 4 3 2 1*/
	   

#include<stdio.h>
main(){
	int i,j,s;
	
	for(i=5;i>=1;i--){
		for(s=2;s<=i;s++){
			printf("  ");
		}
		for(j=i;j<=5;j++){
			printf("%d ",j);
		}
		for(j=4;j>=i;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
}

