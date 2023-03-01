#include<stdio.h>
int main()
{
    int classR, classS;
    printf("Enter the class of\nRam\nShyam\n");
    scanf("%d %d", &classR, &classS);
    if(classR==classS) printf("TRUE\n");
    else printf("FALSE\n");

    int ageR, ageS;
    printf("Enter\nRam's Age\nShyam's Age\n");
    scanf("%d %d", &ageR, &ageS);
    if(ageR<ageS) printf("TRUE\n");
    else printf("FALSE\n");

    int mathR, mathS;
    printf("Enter Mathematics marks of\nRam\nShyam\n");
    scanf("%d %d", &mathR, &mathS);
    if(mathR>mathS) printf("TRUE\n");
    else printf("FALSE\n");

    int sciR, sciS;
    printf("Enter Science marks of\nRam\nShyam\n");
    scanf("%d %d", &sciR, &sciS);
    if(sciR<sciS) printf("TRUE\n");
    else printf("FALSE\n");

    printf("All Questions Answered!!!!\n");
    return 0;
}