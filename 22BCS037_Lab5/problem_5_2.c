// Linear search
#include <stdio.h>
int main()
{
    int num, key, a;
    printf("Enter the size Of Array : ");
    scanf("%d", &num);
    
    int arr[num];

    printf("Enter the values for Array : ");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter The Number To search In Array : ");
    scanf("%d", &key);

    for (int j = 0; j < num; j++)
    {
        if(key == arr[j])
        {
            printf("Number is Found at %d\n", j);
            a=j;
            break;
            printf("Number Is Not Found\n");
        }
    }
    //printf("Enter the INDEX\t");
    //int index;
    //scanf("%d", &index);
    printf("\nThe number is %d at %d index\n", arr[a], a);
    return 0;
}