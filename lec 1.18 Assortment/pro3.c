#include <stdio.h>
main(){
    int rows, cols, i, j;
    printf("Enter the array's rows : ");
    scanf("%d", &rows);
    printf("Enter the array's rows : ");
    scanf("%d", &cols);
    
    int arr[rows][cols]; 
    int t[cols][rows]; 
    
 
    printf("\nEnter array's elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            t[j][i] = arr[i][j];
        }
    }
    
    printf("The transpose matrix of an array :\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    
    
}

