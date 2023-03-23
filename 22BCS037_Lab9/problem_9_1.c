#include<stdio.h>
int main()
{
    int num1, num2;
    int *p1, *p2;
    printf("Enter the numbers A and B\t");
    scanf("%d %d", &num1, &num2);
    p1=&num1;
    p2=&num2;
    int c=*p1;
    *p1=*p2;
    *p2=c;
    printf("A:%d\nB:%d", num1, num2);
    
    return 0;
}