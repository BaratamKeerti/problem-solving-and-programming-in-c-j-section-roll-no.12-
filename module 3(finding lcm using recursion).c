#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
int lcm(int a,int b)
{
    return (a/gcd(a,b))*b;
}
int main()
{
    int m,n;
    printf("enter the values of m,n whose lcm you want to find : ");
    scanf("%d %d",&m,&n);
    lcm(m,n);
    printf("\n%d",lcm(m,n));
}
