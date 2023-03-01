#include<stdio.h>
int main()
{
    int X;
    int Y;
    printf("Marks of Ram\n");
    scanf("%d", &X);
    printf("Marks of Sam\n");
    scanf("%d", &Y);
    
    int C;
    C=Y;
    Y=X;
    X=C;
    printf("Ram's marks are %d\n", X);
    printf("Sam's marks are %d\n", Y);
    return 0;
}