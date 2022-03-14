#include <stdio.h>
int sum1(int *p, int *q){
printf("the sum of %d and %d is %d",*p,*q,*p+*q);
}
int sum2(int m, int n){
printf("the sum of %d and %d is %d",m,n,m+n);
}
int main(){
int a=10,b=20;
sum1(&a,&b);
printf("\n");
sum2(a,b);
}

