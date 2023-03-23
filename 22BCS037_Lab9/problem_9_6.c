#include<stdio.h>
struct DayData
{
    int temp;
    int rainfall;
};
int main()
{
    int n;
    printf("Enter the nubmer of days\n");
    scanf("%d", &n);
    struct DayData info[n];
    int avgtemp=0, avgrain=0;
    for(int i=0; i<n; i++)
    {
        printf("Enter temp on day %d \n", i + 1);
        scanf("%d", &info[i].temp);
        avgtemp+=info[i].temp;
        printf("Enter rainfall on day %d \n", i + 1);
        scanf("%d", &info[i].rainfall);
        avgrain+=info[i].rainfall;
    }

    printf("Average Rainfall: %d\nAverage Temperature: %d\n", avgrain/n, avgtemp/n);
}