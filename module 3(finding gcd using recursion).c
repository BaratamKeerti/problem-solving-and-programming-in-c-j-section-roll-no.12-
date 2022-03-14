#include <stdio.h>
int gcd(int m, int n){
if (n == 0)
return m;
return gcd(n, m % n);
}
int main(){
    int i,j;
    printf("enter the values of i and j:");
    scanf("%d %d",&i,&j);
int k = gcd(i,j);
printf("%d",k);
}
