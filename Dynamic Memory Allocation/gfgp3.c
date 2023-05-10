#include <stdio.h>
#include <stdlib.h>

void fun(int **a)
{
    a = (int*) malloc(sizeof(int));
}

int main()
{
    int *p = NULL;
    fun(&p);
    *p = 6;
    printf("%d", *p);
    return 0;
}