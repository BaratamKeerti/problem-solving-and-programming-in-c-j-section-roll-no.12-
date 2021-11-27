#include<stdio.h>
int main()
{
	int d,dividend,remainder;
	printf("enter the value of dividend:");
	scanf("%d",&dividend);
	printf("enter the value of divisor:");
	scanf("%d",&d);
	remainder=dividend-(d*(dividend/d));
	printf("remainder is: %d",+remainder);
	return 0;
}
