#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter the string\n");
    char str[100];
    gets(str);
    int length=strlen(str);

    int sumv=0, sumc=0, i=0;
    for(i;i<length; i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            sumv+=1;}
        else if(str[i]==' ')
        {
            continue;}
        else if(str[i]=='\0')
        {
            break;}
        else
        {
            sumc+=1;}
    }

    printf("Consonants: %d\nVowels: %d", sumc, sumv);
    return 0;
}