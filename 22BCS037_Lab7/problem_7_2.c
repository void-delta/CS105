#include<stdio.h>
int main()
{
    char str[20];
    printf("Word:\t");
    scanf("%s", str);
    int i=0, sum=0;

    while(str[i]!='\0')
    {
        i+=1;
        sum+=1;
    }

    char word[sum], pal[sum];

    for(int j=0; j<sum; j++)
    {
        word[j]=str[j];
        pal[sum-j-1]=word[j];
    }
    printf("Word:\t%s\nReversed:\t%s\n", word, pal);
    for(int j=0; j<sum; j++)
    {
        int b=0;
        if(word[j]!=pal[j])
        {
            printf("Not a Palindrome\n");
            b=1;
            return 0;
        }
        else 
        {
            printf("Palindrome\n");
            return 0;
        }
    }
}