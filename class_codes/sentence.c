#include<stdio.h>
int main()
{
    char sen[100];
    scanf("%[^\n]", sen);
    printf("%s", sen);
    return 0;
}
//to check if %[^\n] works