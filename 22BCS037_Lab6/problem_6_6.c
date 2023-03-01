#include<stdio.h>
int main()
{
    int num1, num2;
    printf("enter the 2 numbers:\t");
    scanf("%d %d", &num1, &num2);

    if(num1>num2)
    {
        for(int i=num2; 0<i<=num2; i--)
        {
            if(num1%i==0 && num2%i==0)
            {
                printf("GCD is %d\n", i);
                break;
            }
        }
    }

    if(num1<num2)
    {
        for(int i=num1; 0<i<=num1; i--)
        {
            if(num1%i==0 && num2%i==0)
            {
                printf("GCD is %d\n", i);
                break;
            }
        }
    }

    for(int i=1; i<=num1*num2; i++)
    {
        if(i%num1==0 && i%num2==0)
        {
            printf("LCM is %d\n", i);
            break;
        }
    }
    return 0;
}