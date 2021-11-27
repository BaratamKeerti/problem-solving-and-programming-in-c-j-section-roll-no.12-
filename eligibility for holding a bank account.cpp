#include<stdio.h>
int main()
{
	int a;
	printf("enter your age:");
	scanf("%d",&a);
	if (a>=18)
	{
		printf("you are eliible for holding a bank account");
	}
	else
	{
		printf("you are not eligible for holing a bank account");
	}
	return 0;
}
