#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter the Word:\t");
    scanf("%s", str);
    int i=0, sum=0;

    while(str[i]!='\0')
    {
        i+=1;
        sum+=1;
    }
    printf("Length of the word is %d\n", sum);
    return 0;
}