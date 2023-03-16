#include<stdio.h>
#include<ctype.h>
int main()
{
    printf("Enter the string\n");
    char string[75];
    gets(string);
    for(int i=0; string[i]!='\0'; i+=2)
    {
        string[i]=toupper(string[i]);
    }
    for(int i=1; string[i]!='\0'; i+=2)
    {
        string[i]=tolower(string[i]);
    }
    printf("%s", string);
    return 0;
}