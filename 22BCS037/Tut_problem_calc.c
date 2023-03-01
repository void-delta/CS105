#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the two numbers\n");
    scanf("%d %d", &num1, &num2);
    printf("Enter 1-Add, 2-Sub, 3-Div, 4-Mul, 5-mod\n");
    int func;
    scanf("%d", &func);

    if(func==1)
    {
        int sum=num1+num2;
        printf("The Sum is %d\n", sum);
    }
    else if(func==2)
    {
        int sub=num1-num2;
        printf("The subtraction is %d\n", sub);
    }
    else if(func==3)
    {
        float div=(float)num1/num2;
        printf("The Division is %f\n", div);
    }
    else if(func==4)
    {
        int mul=num1*num2;
        printf("The multiplication is %d\n", mul);
    }
    else if(func==5)
    {
        int mod=num1%num2;
        printf("The modulus is %d\n", mod);
    }
    else printf("Are you Dumb?\n");
    return 0;
}