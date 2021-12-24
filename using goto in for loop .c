#include <stdio.h>  
int main()   
{  
  int num,i=1;   
  printf("Enter the number whose table you want to print?");   
  scanf("%d",&num);  
  table:   
  for(i=1;i<11;i++)
  {
      printf("%d*%d=%d\n",num,i,num*i);
  }
  if(i<=10)  
  goto table;    
}  
