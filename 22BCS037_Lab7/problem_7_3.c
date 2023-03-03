#include<stdio.h>
int main()
{
    char wrd1[25], wrd2[25];
    printf("Word 1:\t");
    scanf("%s", wrd1);
    printf("Word 2:\t");
    scanf("%s", wrd2);
    int i=0, sum1=0, sum2=0;

    while(wrd1[i]!=0)
    {
        i+=1;
        sum1+=1;
    }
    i=0;
    while(wrd2[i]!=0)
    {
        i+=1;
        sum2+=1;
    }

    if(sum1!=sum2)
    {
        printf("Not EQUAL\n");
        return 1;
    }

    char word1[sum1], word2[sum2];
    for(int j=0; j<sum1; j++)
    {
       word1[j]=wrd1[j];
    }
    for(int j=0; j<sum2; j++)
    {
       word2[j]=wrd2[j];
    }
    int b=0;
    for(int j=0; j<sum1; j++)
    {
       if(word1[j]!=word2[j])
       {
           printf("Not EQUAL\n");
           b=1;
           return 0;
       }
    }
    if(b==0)
    {
       printf("EQUAL\n");
    }
    return 0;
}