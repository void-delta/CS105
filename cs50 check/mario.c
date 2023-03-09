/*#include <stdio.h>

int main(void)
{
    int height;
    printf("Enter the height of the pyramid:\t");
    scanf("%d", &height);

    for(int i=0; i<height; i++)
    {
        for(int j=0; j<(2*height); j++)
        {
            //first block
            if(j<(height+1)&&j>(height-i-1)) printf("#");
            else printf(" ");
            //if(j==height+1) printf(" ");
        }
        printf(" ");
        
        for(int j=0; j<(2*height); j++)
        {    
            if(j<(height+1)&&j>(height-i-1)) printf("#");
        }
        printf("\n");
    }
    return 0;
}*/
#include <stdio.h>

int main(void)
{
     int height;
     printf("Entert the height:\t");
     scanf("%d", &height);

     for(int i=0; i<height; i++)
     {
        for(int j=0; j<height; j++)
        {
            if(j<(height-i+1)) printf("#");
            else printf(" ");
        }
        printf("\n");
     }
     return 0;
}