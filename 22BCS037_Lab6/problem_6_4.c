#include<stdio.h>
int main()
{
    int row, col;
    printf("Enter the row and the columns\t");
    scanf("%d %d", &row, &col);
    int arr[row][col];

    //reading the matrix
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("Enter the number at %d*%d:\t", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    //printingf the matxir
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    //transpose karenge guys
    int trans[col][row];
    for(int i=0; i<col; i++)
    {
        for(int j=0; j<row; j++)
        {
            trans[i][j]=arr[j][i];
        }
    }
    printf("The transpose is\n");
    //print karenge guys
    for(int i=0; i<col; i++)
    {
        for(int j=0; j<row; j++)
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}