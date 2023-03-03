#include<stdio.h>
int main()
{
    char _10[10];
    printf("Enter the 10 letter Word\n");
    for(int i=0; i<10; i++)
    {
        _10[i]=getchar();
    }
    puts(_10);
    return 0;
}