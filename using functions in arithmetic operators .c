#include<stdio.h>
void add();
void sub();
void mul();
void div();
void main()
{
    printf("function calling myself.......");
    add();
    sub();
    mul();
    div();
}
void add()
{
    float a,b,c;
    printf("\nenter the values of a and b: ");
    scanf("%f %f",&a,&b);
    c=a+b;
    printf("\naddition of %f and %f is %f",a,b,c);
}
void sub()
{
    float a,b,d;
    printf("\nenter the values of a and b: ");
    scanf("%f %f",&a,&b);
    d=a-b;
    printf("\nsubtraction of %f and %f is %f",a,b,d);
}
void mul()
{
    float a,b,e;
    printf("\nenter the values of a and b: ");
    scanf("%f %f",&a,&b);
    e=a*b;
    printf("\nproduct of %f and %f is %f",a,b,e);
}
void div()
{
    float a,b,f;
    printf("\nenter the values of a and b: ");
    scanf("%f %f",&a,&b);
    f=a/b;
    printf("\ndivision of %f and %f is %f",a,b,f);
}
