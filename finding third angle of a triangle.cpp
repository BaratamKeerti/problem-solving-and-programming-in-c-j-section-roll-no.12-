#include<stdio.h>
int main()
{
	int firstangle,secondangle,thirdangle;
	printf("enter the value of first angle of triangle");
	scanf("%d",&firstangle);
	printf("enter the value of second angle of triangle");
	scanf("%d",&secondangle);
	thirdangle=180-(firstangle+secondangle);
	printf("the value of third angle of triangle is: %d",thirdangle);
	return 0;
}
