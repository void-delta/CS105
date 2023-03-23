#include<stdio.h>
void check(int num, int arr[])
{
    int *max=&arr[0];
    int *min = &arr[0];
    int a=num;
    for (int i=0; a--; i++)
    {
        if(*max<*(max+i))
        {
            max=max+i;
            i=0;
        }
        if (*min>*(min+i))
        {
            min=min+i;
            i=0;
        }
    }
    printf("Minimum:\t%d\nMaximum:\t%d\n", *min, *max);
    return;
}
int main()
{
    int n;
    printf("Enter the number of elements in array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the values\n");
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    check(n, arr);
    return 0;
}