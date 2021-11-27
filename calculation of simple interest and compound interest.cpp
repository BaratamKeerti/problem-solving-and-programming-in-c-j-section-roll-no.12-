#include <stdio.h>
#include <math.h>

int main()
{
	float principle,rate,time,ci,si;
	printf("enter principle value");
	scanf("%f",&principle);
	printf("enter the valoe of rate");
	scanf("%f",&rate);
	printf("enter time period");
	scanf("%f",&time);
	ci=principle*(pow((1+rate/100),time));
	si=(principle*rate*time)/100;
	printf("\n simple interest is: %f",+si);
	printf("\n copound interest is: %f",+ci);
	return 0;
}
