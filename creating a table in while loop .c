#include<stdio.h>
int main()
{
    int a,b,n;
    b=1;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of n:");
    scanf("%d",&n);
    while(b<n)
    {
       printf("\n%d*%d=%d",a,b,a*b);
       ++b;
    }

    return 0;
}
