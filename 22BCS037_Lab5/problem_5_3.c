// binary search
#include <stdio.h>
int main()
{
    int low, hi, mid, n, key;
    int arr[10] = {1 ,2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Enter value to find\n");
    scanf("%d", &key);
    low = 0;
    hi = 10;
    mid = (low + hi) / 2;
    if (key > arr[10])
    {
        printf("%d is not present in the list \n", key);  
        return 0;
    }
    for(;low <= hi;) 
    {
        if (arr[mid] == key) 
        {
            printf("%d found at %d index\n", key, mid);
            return 0;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        } 
        else
        {
            hi = mid - 1;
        }
        mid = (low + hi)/2;
    }
    printf("%d is not present in the list \n", key);
    return 0;
}