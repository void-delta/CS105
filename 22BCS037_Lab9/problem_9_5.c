#include <stdio.h>
struct Employee
{
    char name[50];
    unsigned int id;
    char dept[50];
    int salary;
};
int main()
{
    int n;
    printf("Enter the nubmer of employees\n");
    scanf("%d", &n);
    struct Employee info[n];

    for(int i = 0; i < n; i++)
    {
        printf("Enter EMPLOYEE NAME\n", i+1);
        scanf("%s", info[i].name);
        printf("Enter 5 digit EMPLOYEE ID\n", i+1);
        scanf("%d", &info[i].id);
        printf("Enter EMPLOYEE DEPARTMENT\n", i+1);
        scanf("%s", info[i].dept);
        printf("Enter EMPLOYEE SALARY\n", i+1);
        scanf("%d", &info[i].salary);
        printf("Next employee details\n\n\n");
    }
    printf("NAME\t| ID\t| DEPARTMENT\t| SALARY|\n");
    for(int i = 0; i < n; i++)
    {
        printf("%s\t|", info[i].name);
        printf("%d\t|", info[i].id);
        printf("%s\t\t|", info[i].dept);
        printf("%d\t|\n", info[i].salary);
    }
}