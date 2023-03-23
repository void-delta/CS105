#include<stdio.h>
struct rectangle
{
    float len;
    float wid;
};
float area(struct rectangle rectangle);
float perimeter(struct rectangle rectangle);
int main()
{
    struct rectangle rect;
    printf("Enter length\n");
    scanf("%f", &rect.len);
    printf("Enter width\n");
    scanf("%f", &rect.wid);
    float are=area(rect);
    float peri=perimeter(rect);
    printf("Area:\t%f\nPerimeter:\t%f\n", are, peri);
    return 0;
}
float area(struct rectangle rectangle)
{
    float are = rectangle.len * rectangle.wid;
    return are;
}
float perimeter(struct rectangle rectangle)
{
    float peri=2*(rectangle.len + rectangle.wid);
    return peri;
}