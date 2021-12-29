#include<stdio.h>
int main()
{
    int a,i=1,num;
    printf("enter the value of num: ");
    scanf("%d",&num);
    for(a=1;a<=num;a++)
    {
    i=i*a;
    }
    printf("the factorial of %d is %d",num,i);
}
