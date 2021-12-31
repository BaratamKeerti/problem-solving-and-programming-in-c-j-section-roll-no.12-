#include<stdio.h>
int main()
{
    int num,sum=0,rem,temp;
    printf("enter the number: ");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        sum=(sum*10)+rem;
        num/=10;
    }
    if(temp==sum)
    {
        printf("the entered number is a palindrome");
    }
    else
    {
        printf("the entered number is not a palindrome.");
    }
}
