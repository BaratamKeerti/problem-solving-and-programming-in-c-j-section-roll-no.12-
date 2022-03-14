#include <stdio.h>
int fibo(int k){
if (k==0){
return 1;
}
else if (k==1){
return 1;
}
else {
return fibo(k-1)+fibo(k-2);
}
}
int main(){
int a,b;
printf("Enter the number of outputs you need to see in fibonacci series : "); 
scanf("%d",&b);
for (a=0;a<=b;a++){
printf("%d ",fibo(a));
}
}
