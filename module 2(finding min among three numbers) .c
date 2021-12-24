#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the values of three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b&&b<c)
    {
        printf("%d is smaller than %d and %d",a,b,c);
    }
    else if(b<c)
    {
        printf("%d is smaller than %d",b,c);
    }
    else
    {
        printf("%d is smallest",c);
    }
}
