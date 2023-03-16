#include<stdio.h>
#include<string.h>
int palin(char str[100], int a);
int main()
{
    char str[100];
    printf("Enter String\n");
    scanf("%s", str);
    int n= palin(str , 0);
    n==0?printf("%s is a Palindrome\n", str) : printf("%s is not a Palindrome\n", str);
}

int palin(char str[1000],int a)
{
    int l=strlen(str);
    if(a>=(l-1))
    {
        return 0;
    }
    if(str[a] != str[l-1])
    {
        return 1;
    }
    str[l-1] = '\0';
    palin(str, a + 1);
}