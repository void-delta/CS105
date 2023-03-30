#include <stdio.h>
typedef struct Book
{
    char title[1000];
    char author[1000];
    int year;
}book;

void add_books();
void display_books();

int main()
{
    int n, a;

    printf("Add book - 1\nDisplay book -2\n");
    scanf("%d", &a);
    switch(a)
    {
        case 1:
        {
            add_books();
        }
        case 2:
        {
            display_books();
            break;
        }
        default:
        {
            printf("Invalid");
            break;
        }
    }
}

void add_books()
{
    int n;
    printf("Enter the number of data you want to enter\n");
    scanf("%d", &n);
    book dat;
    char c;
    FILE* fp = fopen("file.txt", "w");
    for(int i = 0; i < n; i++)
    {
        printf("Enter the name of book %d\n", i + 1);
        scanf("%*c %[^\n]", dat.title);
        printf("Enter the author of book %d\n", i + 1);
        scanf("%*c %[^\n]", dat.author);
        printf("Enter the year of book %d\n", i + 1);
        scanf("%d", &dat.year);
    
        fprintf(fp, "Title: %s\nAuthor: %s\nYear: %d\n", dat.title, dat.author, dat.year);
    }
    fclose(fp);
    return;
}
void display_books()
{
    FILE* fp = fopen("file.txt", "r");
    if(fp == NULL)
    {
        printf("File cannot be opened for reading\n");
    }
    char ch;
    while (fscanf(fp, "%c", &ch) == 1)
    {
        printf("%c", ch);
    }
    fclose(fp);
    return;
}