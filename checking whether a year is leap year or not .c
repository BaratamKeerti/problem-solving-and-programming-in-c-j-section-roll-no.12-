#include<stdio.h>
int main()
{
    int year;
    printf("enter the year:");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("it is a leap year and it has 366 days");
    }
    else
    {
        printf("it is not a leap year and it has 365 days");
    }
    return 0;
}
