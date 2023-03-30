#include<stdio.h>
int main()
{
    int employee_id;
    printf("Enter the Employee ID\n");
    scanf("%5d", &employee_id);
    printf("The Employee ID is %d\n", employee_id);

    int  basic_salary;
    printf("Enter the BASIC SALARY of the Employee\n");
    scanf("%d", &basic_salary);
    printf("Basic Salary is registered\n");

    float da_percentage;
    printf("Enter the DAILY ALLOWANCE Percentage\n");
    scanf("%f", &da_percentage);
    printf("The Daily Allowance Percentage is registered\n");

    float hra_percentage;
    printf("Enter the HOUSE RENT ALLOWANCE Percentage\n");
    scanf("%f", &hra_percentage);
    printf("The House Rent Allowance is registered\n");

    int days_of_month;
    printf("How many days in the month?\n");
    scanf("%d", &days_of_month);

    float da_monthly;
    da_monthly=basic_salary*da_percentage*days_of_month/100;

    float hra_monthly;
    hra_monthly=basic_salary*hra_percentage/100;

    float gross_salary;
    gross_salary=basic_salary+da_monthly+hra_monthly;
    printf("The Monthly Gross Salry is %f", gross_salary);
    return 0;

}