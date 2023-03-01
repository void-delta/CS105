#include<stdio.h>
int main()
{
    int row, col;
    printf("Enter the number of rows and columns:\t");
    scanf("%d %d", &row, &col);
    int arr[row][col];

    printf("Enter the elements of the matrix\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("Enter the number at %d*%d:\t", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    //row should ascend
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col - 1; j++) 
        {
            for (int k = j + 1; k < col; k++) 
            {
                if (arr[i][j] > arr[i][k]) 
                {
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }

    //columns should descend
    for (int j = 0; j < col; j++) 
    {
        for (int i = 0; i < row - 1; i++) 
        {
            for (int k = i + 1; k < row; k++) 
            {
                if (arr[i][j] < arr[k][j]) 
                {
                    int temp = arr[i][j];
                    arr[i][j] = arr[k][j];
                    arr[k][j] = temp;
                }
            }
        }
    }
    
    //printing array that is sorted
    printf("The Sorted Matrix is:\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}