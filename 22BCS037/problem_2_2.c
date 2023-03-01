#include<stdio.h>
int main()
{
    int basic_salary;
    printf("Enter the Basic Salary of the Employee");
    scanf("%d", &basic_salary);

    if(basic_salary<=10000)
    {
        float gross;
        gross=(0.8+0.2+1)*basic_salary;
        printf("The Gross Salary of the Employee is %f", gross);
    }
    else if(10001<=basic_salary<=20000)
    {
        float gross;
        gross=(0.9+0.25+1)*basic_salary;
        printf("The Gross Salary of the Employee is %f", gross);
    }
    else if(basic_salary>=20001)
    {
        float gross;
        gross=(0.95+0.3+1)*basic_salary;
        printf("The Gross Salary of the Employee is %f", gross);
    }
    else printf("not aplicable");
}