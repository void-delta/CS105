#include<stdio.h>
int main()
{
    printf("Enter the elements in the array:\n");
    int arr[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Enter element in %d*%d:\t", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for(int h=0; h<3; h++)
    {
        for(int k=0; k<3; k++)
        {
            printf("%d ", arr[h][k]);
        }
        printf("\n");
    }
    
    int det=(arr[0][0])*((arr[1][1]*arr[2][2])-(arr[2][1]*arr[1][2]))-(arr[0][1])*((arr[1][0]*arr[2][2])-(arr[2][0]*arr[1][2]))+(arr[0][2])*((arr[1][0]*arr[2][1])-(arr[2][0]*arr[1][1]));
    printf("The Determinant is %d", det);
    return 0;
}