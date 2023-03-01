#include<stdio.h>
int main()
{
    printf("Enter\n1 for Square\n2 for Rectangle\n3 for Circle\n4 for Triangle\n");
    int bruh;
    scanf("%d", &bruh);

    switch(bruh)
    {
        case(1): {
            printf("please enter the side length of the square\n");
        int side;
        scanf("%d", &side);
        printf("the area of the square is %d", side*side);
        }
        break;

        case(2): {
            printf("Enter the width and the breadth of the rectangle\n");
        int wid, bred;
        scanf("%d %d", &wid, &bred);
        if(wid==bred)
        {
            printf("the area of the square is %d", wid*bred);
        }
        else printf("the area of the rectangle is %d", wid*bred);
        }
        break;

        case(3): {
            printf("Enter the radius of the circle\n");
        int rad;
        scanf("%d", &rad);
        printf("the area of the circle is %f", 22*(float)rad*(float)rad/7);
        }
        break;

        case(4): {
            printf("Enter the base and the height of the triangle\n");
        int bas, hei;
        scanf("%d %d", &bas, &hei);
        printf("the area of the circle is %f", (float)bas*(float)hei/2);
        }
        break;

        default: printf("Input not acceptable\n");
    }

    /*if(bruh==0)
    {
        printf("please enter the side length of the square\n");
        int side;
        scanf("%d", &side);
        printf("the area of the square is %d", side*side);
    }
    else if(bruh==1)
    {
        printf("Enter the width and the breadth of the rectangle\n");
        int wid, bred;
        scanf("%d %d", &wid, &bred);
        if(wid==bred)
        {
            printf("the area of the square is %d", wid*bred);
        }
        else printf("the area of the rectangle is %d", wid*bred);
    }
    else if(bruh==2)
    {
        printf("Enter the radius of the circle\n");
        int rad;
        scanf("%d", &rad);
        printf("the area of the circle is %f", 22*(float)rad*(float)rad/7);
    }
    else if(bruh==3)
    {
        printf("Enter the base and the height of the triangle\n");
        int bas, hei;
        scanf("%d %d", &bas, &hei);
        printf("the area of the circle is %f", (float)bas*(float)hei/2);
    }
    else printf("Not Acceptable input\n");*/

    return 0;
}