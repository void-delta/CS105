#include <stdio.h>

int main()
{
    delta: printf("Console\n\t1)Read the file\n\t2)Write on the file\n\t3)Make a new file\n\t4)End\n\t");
    int n;
    scanf("%d", &n);
    if (n==1)
    {
        FILE *ptr;
        char *c;
        printf("Enter the file name\t");
        char str[25];
        scanf("%s", str);
        ptr = fopen(str, "r");
        if (ptr == NULL)
        {
            printf("Cannot open file \n");
            goto delta;
        }
        // Read contents from file
        /*c = fgets(str, 150, ptr);
        while (c != EOF)
        {
            printf ("%c", c);
            c = fgetc(ptr);
        }*/
        if(fgets(str, 80, ptr) != NULL)
        {
            puts(str);
        }
        fclose(ptr);
        printf("\n");
        goto delta;
    }
    else if (n==2)
    {
        FILE *ptr;
        printf("Enter the name of the file\t");
        char str[25];
        scanf("%s", str);
        printf("Enter the words to be entered\n");
        scanf("%s", str);
        ptr = fopen(str, "w");
        fputs(str, ptr);
        fclose(ptr);
        goto delta;
    }
    else if (n==3)
    {
        FILE *ptr;
        printf("Enter the name of the file\t");
        char str[25];
        scanf("%s", str);
        printf("Enter the words to be entered\n");
        char st[150];
        scanf("%s", st);
        ptr = fopen(str, "w");
        fputs(st, ptr);
        fclose(ptr);
        goto delta;
    }
    else if (n==4)
    {
        return 0;
    }
    goto delta;
}