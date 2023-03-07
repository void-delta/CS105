#include<stdio.h>
void range()
{
    int low, upp;
    int bool=0;
    do
    {
        printf("Enter the lower limit :\t");
        scanf("%d", &low);
        printf("Enter the upper limit :\t");
        scanf("%d", &upp);
    }
    while(low < 1 || upp < 1 || upp < low);
    
    for (int i = low; i <= upp; i++)
    {
        if (i == 1)
        {
            printf("1: Neither Prime Nor Composite\n");
            continue;
        }
        bool = 1;
        for (int j = 2; j < i - 1; j++)
        {
            if (i % j == 0)
            {
                bool = 0;
                break;
            }
            
        }
        if (bool == 1)
        {
            printf("%d: Prime\n", i);
        }
        else
        {
            printf("%d: Composite\n", i);
        }
    }
}

int main()
{
    range();
    return 0;
}