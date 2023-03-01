#include<stdio.h>
#include<math.h>
int main ()\
{
    int principle_amount;
    printf("Please enter the Principle Amount.\n");
    scanf("%d", &principle_amount);
    printf("Principle Amount recorded.\n");

    float rate_of_interest;
    printf("Please enter the Rate of Interest.\n");
    scanf("%f", &rate_of_interest);
    printf("Rate of Interest recorded.\n");

    float time;
    printf("Please enter the Time.\n");
    scanf("%f", &time);
    printf("Time recorded\n");

    float simple_interest;
    simple_interest=principle_amount*rate_of_interest*time/100;

    printf("The Simple Interest is %f\n", simple_interest);

    float total_amount1;
    total_amount1=principle_amount+simple_interest;

    printf("The Amount recieved is %f\n", total_amount1);

    float n;
    printf("How many times interest is renewed in a year?\n");
    scanf("%f", &n);

    float a1;
    a1=1+rate_of_interest/(n*100);
    float tim1=n*time;
    float a2 = pow(a1, tim1);
    float compound_interest = principle_amount*a2;
    printf("The Compound Interest is %f", compound_interest);

    return 0;

}