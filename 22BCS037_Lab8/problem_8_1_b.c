#include<stdio.h>
#include<string.h>
int main()
{
    char str[50], str1[50], cpy[150];
    int n;

    printf("Enter string\n");
    gets(str);
    printf("%s\n", str);
    printf("Enter string to be entered\n");
    gets(str1);
    printf("%s\n", str1);
    printf("Enter position to insert\n");
    scanf("%d", &n);

    int length=strlen(str1);
    strcpy(cpy, str);
    printf("%s\n", cpy);
    cpy[n]=' ';
    strcpy(cpy+n+1,str1);
    strcat(cpy+n+length+1, str+n);
    printf("%s", cpy);

    return 0;
}