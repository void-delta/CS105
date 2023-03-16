#include <stdio.h>
#include <string.h>
int strcheck(char str1[100],char str2[100]);
int main()
{
    char str1[100], str2[100];

    printf("Enter the First string: ");
    gets(str1);
    printf("Enter the checking string: ");
    gets(str2);

    int a = strcheck(str1, str2);
    printf("%d", a);
}

int strcheck(char str1[100],char str2[100])
{
    int a=0;
    int flag=0;
    int l=strlen(str2);
    for(int i=0; str1[i]!='\0'; i++)
    {
        flag=0;
        for (int j=0; j<l; j++)
        {
            if(str2[j]!=str1[j+i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            a++;
        }
    }   
    return a;
}