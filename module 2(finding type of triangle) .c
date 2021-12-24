#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of first side of the triangle:");
    scanf("%d",&a);
    printf("enter the value of second side of the triangle:");
    scanf("%d",&b);
    printf("enter the value of third side of the triangle:");
    scanf("%d",&c);
    if(a==b==c)
    {
        printf("it is an equilateral triangle");
    }
    else if(a==b||b==c||c==a)
    {
        printf("it is an isoceles triangle");
    }
    else
    {
        printf("it is a scalene triangle");
    }
}
