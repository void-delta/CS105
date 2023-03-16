#include<stdio.h>
void insert(char string[], int a, char newstr[], int b, int p);
int main()
{
    int a=50;
    char str[a];
    printf("Enter the string\n");
    fgets(str, a, stdin);

    int b=50;
    char instr[b];
    printf("Enter the string to be inserted\n");
    fgets(instr, b, stdin);

    int position;
    printf("Enter the position at which you want to insert\n");
    scanf("%d", &position);
    insert(str, a, instr, b, position);
    return 0;
}

void insert(char string[], int a, char newstr[], int b, int p)
{
    int i=0, ic=0, count=0;
    char out[b+a];

    for(i = 0 ; i < p; i++)
    {
        out[i] = string[count++];
    }
    out[i++] = ' ';

    for(; newstr[ic] != '\0' && newstr[ic] != '\n'; i++)
    {
        out[i] = newstr[ic++];
    }
    out[i++] = ' ';

    for(; string[count] != '\0'; i++)
    {
        out[i] = string[count++];
    }
    out[i] = '\0';

    printf("The new string is : %s\n", out);
}