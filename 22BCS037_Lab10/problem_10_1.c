#include <stdio.h>

int main()
{
    delta: printf("Console\n\t1)Read the file\n\t2)Write on the file\n\t3)Make a new file\n\t");
    int n;
    scanf("%d", &n);
    if (n==1)
    {
        FILE *ptr;
        char c;
        printf("Enter the file name\t");
        char str[25];
        scanf("%s", str);
        ptr = fopen(str, "r");
        if (ptr == NULL)
        {
            printf("Cannot open file \n");
            exit(0);
        }
        // Read contents from file
        c = fgetc(ptr);
        while (c != EOF)
        {
            printf ("%c", c);
            c = fgetc(ptr);
        }
        fclose(ptr);
        goto delta;
    }
    else if (n==2)
    {
        FILE *ptr;
        printf("Enter the name of the file\t");
        char str[25];
        scanf("%s", str);
        printf("Enter the words to be entered\n");
        scanf("%[^\n]", str);
        ptr = fopen(str, "w");

    }
}