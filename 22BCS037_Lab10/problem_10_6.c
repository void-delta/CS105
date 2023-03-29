#include <stdio.h>
#include <ctype.h>
#include <string.h>

void up_low(char *str, int a);
int main()
{
    char *str;
    printf("Enter The string\n");
    gets(str);
    up_low(str, 0);
    printf("%s\n", str);
    return 0;
}
void up_low(char *str, int a)
{
    if (*str == '\0')
    {
        return;
    }   
    a % 2 == 0  ? ((*str) = tolower(*str)) : ((*str) = toupper(*str));
    
    *str == ' ' ? up_low(str + 1, a) : up_low(str + 1, a + 1);
}