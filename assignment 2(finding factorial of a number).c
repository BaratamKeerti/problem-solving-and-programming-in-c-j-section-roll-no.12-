#include<stdio.h>
int main()
{
int i=1,number,factorial=1;
printf("enter the number whoose factorial you want to find: ");
scanf("%d",&number);
for(i=1;i<=number;i++)
factorial=factorial*i;
{
    printf("%d!=%d",number,factorial);
}
}
