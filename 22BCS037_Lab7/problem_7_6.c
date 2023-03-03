#include<stdio.h>
#include<string.h>
int main()
{
    char wrd[25], pal[25];
    printf("Enter the WORD:\t");
    scanf("%s", wrd);
    strcpy(pal, wrd);
    strrev(pal);
    int i=strcmp(wrd, pal);
    if(i==0)
    {
        printf("%s is a palindrome", wrd);
    }
    else printf("%s is not a palindrome", wrd);
    return 0;
}