#include <stdio.h>

int lcm(int high, int low, int i)
{
    return (high * i) % low == 0 ? high * i : lcm(high, low , i + 1);
}

int hcf(int a, int b) {
    return a == 0 ? b : hcf(b % a, a);
}

int main()
{
    int a, b, high, low;;

    printf("Enter the Numbers to be found\n");
    scanf("%d %d", &a, &b);

    a > b ? ({low = b; high = a;}):({low = a; high = b;});
    
    printf("HCF of the Number Is %d\n", hcf(low, high));
    printf("LCM of the Number Is %d\n", lcm(high, low, 1));
}