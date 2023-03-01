#include<stdio.h>
int main()
{
    char op;
    printf("Enter the symbol for the operation\n");
    scanf("%c", &op);

    int a, b;
    printf("Enter the two numbers:\n");
    scanf("%d %d", &a, &b);

    switch(op)
    {
        case('+'):
        printf("The sum is %d", a+b);
        break;
        case('-'):
        printf("The subtraction is %d", a-b);
        break;
        case('*'):
        printf("The multiplication is %d", a*b);
        break;
        case('/'):
        printf("The division is %f", (float)a/(float)b);
        break;
        case('%'):
        printf("The modulus is %d", a%b);
        break;
        default:
        printf("Input not readable");
        break;
    }
    printf("\nCalculation completed\n");
    return 0;
}    
       