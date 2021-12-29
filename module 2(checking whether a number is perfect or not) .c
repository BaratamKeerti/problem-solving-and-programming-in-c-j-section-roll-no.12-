#include<stdio.h>
int main()
{
    int number,a,sum=0;
    printf("enter the value of a number: ");
    scanf("%d",&number);
    for(a=1;a<number;a++)
    {
        if(number%a==0)
        sum=sum+a;
    }
    if(sum==number)
    {
        printf("%d is a perfect number.",number);
    }
    else
    {
        printf("%d is not a perfect number.",number);
    }
}
