#include<stdio.h>
int main()
{
	int a,n;
	a=100;
	printf("enter the value of n");
	scanf("%d",&n);
	for (a=100;a>n;a--)
	{
		printf("\n the values are %d",a);
	}
	return 0;
}
