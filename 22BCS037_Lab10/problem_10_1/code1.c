#include <stdio.h>
#include <string.h>

int main() {

    int oper;
    
    delta: printf("Enter 1 for new file and 2 for existing file\n");
    scanf("%d", &oper);

    switch(oper)
    {
        case 1 :
        {
            char name[50];
            printf("Enter the name of the new file\n");
            scanf("%s", name);
            FILE *new = fopen(name, "w");
            if(new == NULL)
            {
                printf("Couldn't open a new file\n");
                return 1;
            }

            char buf[500];
            do
            {
                printf("Enter the data to write (line-wise, press enter to finish)\n");
                fgets(buf, 500, stdin);
                fprintf(new, "%s", buf);
            } while (strcmp(buf, "\n") != 0);

            fclose(new);
            goto delta;
        }
        case 2 :
        {
            char exfile[50];
            printf("Enter the name of the existing file\n");
            scanf("%s", exfile);

            int pref;
            printf("Enter 1 to read and 2 to write\n");
            scanf("%d%*c", &pref);

            switch(pref)
            {
                case 1 :
                {
                    FILE *ex = fopen(exfile, "r");
                    if(ex == NULL)
                    {
                        printf("Couldn't open the existing file\n");
                        return 1;
                    }
                    char ch;
                    while(fread(&ch, sizeof(char), 1, ex))
                    {
                        printf("%c", ch);
                    }
                    goto delta;
                }
                case 2 :
                {
                    FILE *ex = fopen(exfile, "a");
                    if(ex == NULL)
                    {
                        printf("Couldn't open existing file\n");
                        return 1;
                    }
                    char buf[500];
                    do
                    {
                        printf("Enter the data to write (line-wise and press enter to finish)\n");
                        fgets(buf, 500, stdin);
                        fprintf(ex, "\n%s", buf);
                    }
                    while(strcmp(buf, "\n") != 0);
                    fclose(ex);
                    goto delta;
                }
                default :
                {
                    printf("Invalid input\n");
                    goto delta;
                }
            }
            goto delta;
        }
        default :
        {
            printf("Invalid input\n");
            goto delta;
        }
    }
    return 0;
}