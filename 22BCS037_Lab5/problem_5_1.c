//To print numbers type
#include<stdio.h>
int main()
{
    int lower, upper, bool;
    do
    {
        printf("Enter the lower limit :\t");
        scanf("%d", &lower);
        printf("Enter the upper limit :\t");
        scanf("%d", &upper);
    }
    while(lower < 1 || upper < 1 || upper < lower);

    for (int i = lower; i <= upper; i++)
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