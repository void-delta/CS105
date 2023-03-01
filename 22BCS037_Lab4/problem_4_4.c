#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    int sum=0;

    for(num; num>0; num=num/10)
    {
        sum=sum+num%10;
        printf("%d ", sum);
    }
    printf("\nThe sum of all numbers is %d\n", sum);

}