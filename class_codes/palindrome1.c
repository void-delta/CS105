//to check if the word is a palindrome
#include<stdio.h>
#include<string.h>
int main()
{
    char word[19];
    printf("Enter the WORD:\t");
    scanf("%s", &word);
    printf("The WORD is: %s\n", word);
    char word2[19];

    strcpy(word2, word);
    strrev(word);
    int a=strcmp(word, word2);
    if(a==0) printf("%s is a palindrome\n", word);
    else printf("%s is not a palindrome\n", strrev(word));
    return 0;
}