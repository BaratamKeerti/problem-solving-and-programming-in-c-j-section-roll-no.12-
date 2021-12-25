#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    double D,r1,r2;
    printf("enter the values of a,b and c:");
    scanf("%d %d %d",&a,&b,&c);
    D=pow((b*b-4*a*c),0.5);
    if(D>0)
    {
        r1=(-b+D)/(2*a);r2=(-b-D)/(2*a);
        printf("roots are %lf and %lf",r1,r2);
    }
    else if(D==0)
    {
        r1=-b/(2*a);
        printf("roots are identical and its value is %lf",r1);
    }
    else
    {
        printf("the given quadratic equation dont have real roots");
    }
}
