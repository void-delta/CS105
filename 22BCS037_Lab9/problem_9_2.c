#include <stdio.h>
#include <string.h>
void revcpy(char *a, char *b);
void reverse(char *a, char *b);
int main()
{
    char str[1000], rev[1000], *a, *b;
    printf("Enter the string\t");
    scanf("%s", str);
    printf("string is %s\n", str);
    
    a=str;
    b=rev;
    printf("After reverse\t");
    reverse(a, b);
    printf("%s\n", rev);
}
void revcpy(char *a, char *b)
{
    char c=*a;
    *a=*b;
    *b=c;
}
void reverse(char *a, char *b)
{
    int len=strlen(a);
    for (int i=0,j=len-1; i<len; i++, j--)
    {
        *(b+i) = *(a+j);
    }
    b[len]='\0';
}