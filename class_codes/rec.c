#include <stdio.h>
int add(int p)
{
    int res;
    if(p==1){
        return 1;
    }
    else{
        res = p+add(p-1);
    }
    return res;
}
int main()
{
    int n; 
    printf("Enter the number\t");
    scanf("%d", &n);
    //int *p;
    //p=&n;
    int a=add(n);
    printf("%d", a);
    return 0;
}
