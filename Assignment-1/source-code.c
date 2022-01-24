
//Program to find the sum of major and minor diagonal elements of a matrix
#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of the Matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("\nEnter the elements of the Matrix:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum_of_major_diagonal_elements = 0;
    for(int i = 0; i < n; i++){
        sum_of_major_diagonal_elements += matrix[i][i];       
        // arr[0][0] + arr[1][1] and so on..
    }
    int sum_of_minor_diagonal_elements = 0;
    for(int i = 0; i < n; i++){
        sum_of_minor_diagonal_elements += matrix[i][n - 1 - i];
        // arr[0][n-1] + arr[1][n-2] and so on..
    }
    printf("The sum of the major diagonal elements is %d\n", sum_of_major_diagonal_elements);
    printf("The sum of the minor diagonal elements is %d", sum_of_minor_diagonal_elements);
    return 0;
}
