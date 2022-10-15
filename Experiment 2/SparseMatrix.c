#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row, column, matrix[10][10], count = 0;
    printf("Number of rows: ");
    scanf("%d", &row);
    printf("Number of columns: ");
    scanf("%d", &column);
    printf("Elements of the matrix: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix is:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (matrix[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (count > ((row * column) / 2))
        printf(" \nMatrix is a sparse matrix");
    else
        printf("\nMatrix is not a sparse matrix");
}
