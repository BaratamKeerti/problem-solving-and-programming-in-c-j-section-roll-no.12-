#include<stdio.h>
void even();
void odd();
void main()
{
    printf("printing even and odd in a given range...");
    even();
    odd();
}
void even()
{
    int num1,num2;
    printf("\nenter the value of number1: ");
    scanf("%d",&num1);
    printf("enter the value of number2: ");
    scanf("%d",&num2);
    for(num1;num1<num2;num1++)
    {
        if(num1%2==0)
        {
            printf("\n%d is even",num1);
        }
    }
}
void odd()
{
    int num1,num2;
    printf("\nenter the value of number1: ");
    scanf("%d",&num1);
    printf("enter the value of number2: ");
    scanf("%d",&num2);
    for(num1;num1<num2;num1++)
    {
        if(num1%2!=0)
        {
            printf("\n%d is odd",num1);
        }
    }
}
