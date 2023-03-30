#include<stdio.h>
int main()
{
    int num;
    printf("Enter the no. of elements in the array:\t");
    scanf("%d", &num);
    int arr[num];
    int i=0;

    for(i; i<num; i++)
    {
        printf("Enter the %d no.\t", i+1);
        scanf("%d", &arr[i]);
    }
    //bubble sort//
    for(int k=0; k<num; k++)
    {
        for(int d=0; d<num; d++)
        {
            if(arr[d]>arr[d+1])
            {
                int c=arr[d];
                arr[d]=arr[d+1];
                arr[d+1]=c;
            }
        }
    }

    //printing the array that is sorted
    for(int a=0; a<num; a++)
    {
        printf("%d ", arr[a]);
    }

    return 0;
}