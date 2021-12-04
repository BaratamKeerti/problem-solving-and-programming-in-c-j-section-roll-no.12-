#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	float f;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	c=a+b;d=a-b;e=a*b;f=a/b;
	printf("\n the adittion of two numbers is %d",c);
	printf("\n the difference between two numbers  is %d",d);
	printf("\n the product of two numbers is %d",e);
	printf("\n the division between two numbers is %f",f);
	return 0;
}
