#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter the value of first number: ");
    scanf("%d",&num1);
    printf("enter the value of second number: ");
    scanf("%d",&num2);
    (num1>num2) ?
    printf("%d is greater than %d",num1,num2) : printf("%d is less than %d",num1,num2);
}
