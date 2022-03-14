#include<stdio.h>
int main()
{
    int a[10],i,n,large=0,min;
    printf("enter no. of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>large)
        {
            large=a[i];
        }
    }
    min=a[0];
    printf("the highest value is: %d",large); 
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("\nthe least value is: %d",min);
}
