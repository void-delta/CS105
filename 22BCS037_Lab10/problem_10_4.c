#include <stdio.h>

void vowel_count(char *p, int *v, int *c);

int main()
{
    char str[1000];
    printf("Enter The Word\n");
    gets(str);
    int v, c;
    vowel_count(str, &v, &c);
    printf("Number of vowels are %d\n", v);
    printf("Number of Consonants are %d\n", c);
}

void vowel_count(char *p,int *v, int *c)
{
    int vo = 0, co = 0;
    for (int i = 0; p[i] != '\0'; i++)
    {
        if(p[i] == ' ')
        {
            continue;
        }
        if (p[i] == 'a' || p[i] == 'e' || p[i] == 'i' || p[i] == 'o' || p[i] == 'u')
        {
           vo++; 
        }
        if (p[i] == 'A' || p[i] == 'E' || p[i] == 'I' || p[i] == 'O' || p[i] == 'U')
        {
           vo++; 
        }
        else
        {
            co++;
        }
    }
    *v = vo;
    *c = co;
    return;
}