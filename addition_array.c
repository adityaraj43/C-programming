#include <stdio.h>

int main() 
{
    int rows, cols;

    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int a[rows][cols], b[rows][cols], sum[rows][cols];

    printf("Enter elements of first array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) 
        {
            printf("array 1[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) 
        {
            printf("array 2[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of the two arrays:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
