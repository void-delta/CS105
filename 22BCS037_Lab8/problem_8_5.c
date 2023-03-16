#include<stdio.h>
int fibo(int n)
{
    if(n<=1){
        return n;
    }
    
    return fibo(n-1)+fibo(n-2);
}

int main()
{
    printf("Enter the number of FIBONACCI no. you want\t");
    int num;
    scanf("%d", &num);

    for(int i=0; i<=num; i++)
    {
        printf("%d ", fibo(i));
    }
    return 0;
}