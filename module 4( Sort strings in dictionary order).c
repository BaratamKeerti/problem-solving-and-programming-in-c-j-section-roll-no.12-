#include<stdio.h>
#include<string.h>
int main()
{
   char str[10][50],temp[50];
   int i,j,n;
   printf("How many words would you like to enter: ");
   scanf("%d",&n);
   printf("Enter the Words:\n");
   for(i=0;i<n;i++)
   scanf("%s[^\n]",str[i]);
   for(i=0;i<n-1;i++)
   {
     for(j=i+1;j<n;j++)
     {
       if(strcmp(str[i],str[j])>0)
       {
         strcpy(temp,str[i]); 
         strcpy(str[i],str[j]);
         strcpy(str[j],temp);
       }
     }
   }
   printf("In Dictionary order: \n");
   for(i=0;i<n;i++)
   puts(str[i]);
   return 0;
}

