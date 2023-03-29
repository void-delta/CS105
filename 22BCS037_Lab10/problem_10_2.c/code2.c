#include <stdio.h>
#include <string.h>

int main()
{
    char data[1000];
    FILE* fp1 = fopen("file1.txt", "w");
    if (fp1 == NULL)
    {
        printf("cannot open");
        return 1;
    }
    
    printf("Enter the data\n");
    gets(data);
    int i = 0;
    while (data[i] != '\0')
    {
        putc(data[i], fp1);
        i++;
    }
    fclose(fp1);
    fp1 = fopen("file1.txt", "r");
    FILE* fp2 = fopen("file2.txt", "w");
    if (fp2 == NULL)
    {
        printf("cannot open file2\n");
        return 1;
    }
    char buffer[1000];
    while (fscanf(fp1, "%s", buffer) == 1)
    {
        strrev(buffer);
        fprintf(fp2, "%s ", buffer);
    }
    fclose(fp1);
    fclose(fp2);
}