#include<stdio.h>
int main()
{
    char nme[25];
    printf("NAME:\t");
    scanf("%s", nme);
    int i=0, sum=0;
    while(nme[i]!='\0')
    {
        i+=1;
        sum+=1;
    }
    /*char name[sum];
    for(int j=0; j<sum; j++)
    {
        nme[j]=name[j];
    }*/
    for(int j=0; j<sum; j++)
    {
        printf("%d ", nme[j]);
    }
    return 0;
    /*char nme[20];
    printf("Enter your name:\t");
    scanf("%s", nme);
    int i=0, sum=0;
    while(nme[i]!='\0')
    {
        i++;
        sum=sum+1;
    }

    char name[sum];
    for(int k=0; k<sum; k++)
    {
        name[k]=nme[k];
    }

    for(int k=0; k<sum; k++)
    {
        printf("%d ", name[k]);
    }
    return 0;*/
}