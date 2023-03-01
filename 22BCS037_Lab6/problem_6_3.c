#include<stdio.h>
int main()
{
    int row, col;
    printf("Enter the number of rows and columns\t");
    scanf("%d %d", &row, &col);
    int arr[row][col];

    printf("Enter the elements of the array\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
        printf("Enter the %d %d number\t", i, j);
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

    int sume=0, sumo=0;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(arr[i][j]%2==1)
        {
            printf("%d:ODD\n", arr[i][j]);
            sumo=sumo+1;
        }
        else if(arr[i][j]%2==0)
        {
            printf("%d:EVEN\n", arr[i][j]);
            sume=sume+1;
        }
        }
    }
    printf("The number of Even numbers are %d\n", sume);
    printf("The number of Odd numbers are %d\n", sumo);
    return 0;
}