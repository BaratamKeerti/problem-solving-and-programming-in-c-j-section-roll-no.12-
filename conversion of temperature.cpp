#include<stdio.h>
int main()
{
	float c,k,f;
	printf("enter the value of temp in celsius");
	scanf("%f",&c);
	k=c+273.15;
	f=c*(9/5)+32;
	printf("\n temperature in kelvin is: %f", k);
	printf("\n temnperature in farenheit is %f",f);
	return 0;
}
