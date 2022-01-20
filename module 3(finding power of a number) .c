#include<stdio.h>
#include<math.h>
int power(int a, int b)
{
    int value;
    value=pow(a,b);
    printf("%d to the power of %d is %d",a,b,value);
    return value;
}
int main(int x, int y)
{
    printf("enter the value of x and y where x is base and y is power :");
    scanf("%d %d",&x,&y);
    power(x,y);
}
