#include <stdio.h>
int main()
{
   int a,n;
   printf("enter the value of a");
   scanf("%d",&a);
   printf("enter the value of n");
   scanf("%d",&n);
   while(a<n)
   {
       printf("\n%d",a);
       ++a;
   }
    return 0;
}
