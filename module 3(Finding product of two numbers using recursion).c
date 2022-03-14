#include <stdio.h>
int product(int m, int n){
if (m<n)
{
return product(n,m);
}
else if (n!=0){
return (m+product(m,n-1));
}
else{
return (0);
}
}
int main(){
int a,b; 
printf("enter two numbers whose product youi want to find : ");
scanf("%d %d",&a,&b);
int c=product(a,b);
printf("%d",c);
}

