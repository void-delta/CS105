#include <stdio.h>
int main()
{
    int h;
    printf("Enter The height :");
    scanf("%d", &h);

    for (int i = h; i > 0; i--)
    {
        for (int j = i - 1; j > 0 ; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < h - i; k++)
        {
            printf("%d", k + 1);
        }
        printf("%d",h - i + 1);
        for (int l = 0; l < h - i; l++)
        {
            printf("%d", h - i - l);
        }
        printf("\n");
    }
}