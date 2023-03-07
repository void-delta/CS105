#include<stdio.h>
void prime(int num)
{
    int bool=0;
    for(int i=2; i<num; i++)
    {
        if(num%i==0)
        {
            printf("Not Prime\n");
            bool=1;
            break;
        }
    }
    if(bool==0)
    printf("Prime\n");
}

int main()
{
    printf("Enter the Number to be checked\n");
    int a;
    scanf("%d", &a);
    prime(a);
    return 0;
}