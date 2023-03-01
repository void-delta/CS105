#include<stdio.h>
#include<math.h>
int main()
{
    int remamount=1550000-85000;
        float emi1=((remamount*16*5/(12*100))+remamount)/60;
        printf("Monthly EMI is %f\n", emi1);
    
        float em=(1+0.16/12);
        float em2=pow(em, 60);
        float emi2=remamount*em2/60;
        printf("Monthly EMI is %f\n", emi2);
    
    return 0;
}