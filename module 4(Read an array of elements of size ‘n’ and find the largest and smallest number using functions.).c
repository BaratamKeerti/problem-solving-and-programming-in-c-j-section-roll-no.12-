#include<stdio.h>
int main()
{
int a[10],n,i,min,large;  
    printf("Enter the Range :"); 
    scanf("%d",&n);  
    printf("Enter your Elements :");
    for(i=0;i<n;i++)        
    {
        scanf("%d",&a[i]);      
    }
min=a[0];
for(i=0;i<n;i++)
{
    if(a[i]<min)
    {
    min=a[i];
    }
}
printf("Min value is :%d\n",min);
large=0;
for(i=0;i<n;i++)
{
    if(a[i]>large)
    {
    large=a[i];
    }
}
printf("Max value is :%d",large);
return 0;
}

