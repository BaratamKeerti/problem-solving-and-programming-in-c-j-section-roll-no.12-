#include<stdio.h>
int main()
{
    int a,b,n;
    printf("enter the value of a: ");
    scanf("%d",&a);
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(b=1;b<=n;b++)
    {
        printf("\n%d*%d=%d",a,b,a*b);
    }
}
