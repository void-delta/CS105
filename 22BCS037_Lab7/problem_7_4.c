#include<stdio.h>
int main()
{
    char wrd1[25], wrd2[25];
    printf("Word 1:\t");
    scanf("%s", wrd1);
    printf("Word 2:\t");
    scanf("%s", wrd2);

    char final[49];
    int i=0;
    for(i; wrd1[i]!='\0'; i++)
    {
        final[i]=wrd1[i];
    }
    int k=i;
    for(i=0; wrd2[i]!=0; i++)
    {
        final[i+k]=wrd2[i];   
    }
    printf("%s", final);
    return 0;
}