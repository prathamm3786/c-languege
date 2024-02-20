#include <stdio.h>
main(){
    int rows, cols, i, j, r, c, rsum = 0, csum = 0;
    
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    
    printf("Enter the array's column size: ");
    scanf("%d", &cols);
    
    int arr[rows][cols]; 
   
    printf("\nEnter array's elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    printf("\nEnter row number: ");
    scanf("%d", &r);
    printf("Elements of row number  %d: \n", r);
    for (j = 0; j < cols; j++) {
        printf("%d", arr[r-1][j]);
        rsum += arr[r-1][j];
      	printf(" ");
    }
    printf("\nThe sum of row number %d is : %d\n", r, rsum);
    
    printf("\nEnter column number: ");
    scanf("%d", &c);
    printf("Elements of column number %d: ", c);
    for (i = 0; i < rows; i++) {
        printf("%d", arr[i][c-1]);
        csum += arr[i][c-1];
        printf(" ");
    }
    printf("\nThe sum of column number %d is : %d\n", c, csum);
      
}

