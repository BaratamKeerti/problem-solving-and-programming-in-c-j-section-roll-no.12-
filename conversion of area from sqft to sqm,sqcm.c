#include<stdio.h>
int main()
{
	int sqft;
	float sqm,sqcm;
	printf("enter the area in sqft");
	scanf("%d",&sqft);
	sqm=sqft*0.092903;
	sqcm=sqft*9.2903;
	printf("\n the value of area in square meters is: %f",+sqm);
	printf("\n the value of area in suare centimetres is %f",sqcm);
	return 0;
}
