#include<stdio.h>
int max(int a,int b)
{
    if(a>b)
    {
        printf("%d is greater than %d",a,b);
    }
    else if(a==b)
    {
        printf("%d is equal to %d",a,b);
    }
    else
    {
        printf("%d is greater than %d",b,a);
    }
    return 0;
}
int main(int x,int y)
{
    printf("enter the values of to numbers x and y:");
    scanf("%d %d",&x,&y);
    max(x,y);
}
