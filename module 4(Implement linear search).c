#include<stdio.h>
int main()
{
    int a[50],i,n,search;
    printf("enter the no. of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the value you want to search:");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
    if(a[i]==search)
    {
        printf("%d is at %d position",search,i+1);
        break;
    }
    }
    if(i==n)
    {
        printf("%d is not present in the array",search);
    }
}
