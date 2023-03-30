#include<stdio.h>
int main()
{
    float temp_cel;
    printf("What is the temperature");
    scanf("%f", &temp_cel);

    float temp_far;
    temp_far=(temp_cel*9)/5+32;
    printf("The Temperature in Farenheit is %f", temp_far);
    return 0;
}