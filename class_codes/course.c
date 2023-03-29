#include <stdio.h>

struct course{
    int id;
    char name[25];
    char inst[30];
};

int check(int arr[], int n, int id);
int main()
{
    printf("Enter the number of course\t");
    int n;
    scanf("%d", &n);
    struct course c[n];
    printf("Enter the course details\n");

    for(int i=0; i<n; i++)
    {
        printf("Enter the Course-ID:\t");
        scanf("%d", c -> id);
        printf("Enter the Course Name:\t");
        scanf("%s", c -> name[i]);
        printf("Enter the Instructor:\t");
        scanf("%s", c -> inst[i]);
        printf("%d Course noted", i+1);
    }
}