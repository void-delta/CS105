#include<stdio.h>
#include<string.h>
int palin(char str[], int a);
int main()
{
    char str[100];
    printf("Enter String\n");
    scanf("%s", str);
    int n= palin(str , 0);
    n==0?printf("Palindrome\n"):printf("Not a Palindrome\n");
}

int palin(char str[],int a)
{
    int length=strlen(str);
    if(a>=(length-1))
    {
        return 0;
    }
    if(str[a] != str[length-1])
    {
        return 1;
    }
    str[length-1] = '\0';
    palin(str, a + 1);
}