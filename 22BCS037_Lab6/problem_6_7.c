#include<stdio.h>
int main()
{
    int year;
    printf("Enter the YEAR AD.:\t");
    scanf("%d", &year);

    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                printf("%d:LEAP YEAR\n", year);
            }
            else
            {
                printf("%d:NOT A LEAP YEAR\n", year);
            }
        }
        else
        {
            printf("%d:LEAP YEAR\n", year);
        }
    }
    else
    {
        printf("%d:NOT A LEAP YEAR\n", year);
    }
    return 0;
}