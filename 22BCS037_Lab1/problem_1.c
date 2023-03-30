#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the Two Integers\n");
    scanf("%d %d", &a, &b);
    int sum_1=a+b;
    printf("The Sum is %d\n", sum_1);

    float c, d;
    printf("Enter the Two Decimal Numbers\n");
    scanf("%f %f", &c, &d);
    float sum_2=c+d;
    printf("The Sum is %f\n", sum_2);
    return 0;

}