#include<stdio.h>
int main()
{
	int a,b,c,d,e,ch;
	float f,g;
	ch;
	printf("enter your choice in 1 to 5: ");
	scanf("%d",&ch);
	printf("enter the values of a and b: ");
	scanf("%d %d",&a,&b);
	switch(ch)
	{
		case 1:
		c=a+b;
		printf("the addition of two numbers: %d+%d=%d",a,b,c);
		break;
		case 2:
		d=a-b;
		printf("the subtraction between two numbers: %d-%d=%d",a,b,d);
		break;
		case 3:
		e=a*b;
		printf("the product of two numbers: %d*%d=%d",a,b,e);
		break;
		case 4:
		f=a/b;
		printf("the division between two numbers is: %d/%d=%f",a,b,f);
		break;
		case 5:
		g=a%b;
		printf("the remainder between two numbers: %f",g);
		break;
		default:
		printf("enter your correct choice");
	}
	return 0;
}
