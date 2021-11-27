#include<stdio.h>
int main()
{
	float l,ml,cubicmetre;
	printf("volume in litres is:");
	scanf("%f",&l),
	ml=l*1000;
	cubicmetre=l*0.001;
	printf("\n volume in millilitres is:%f",+ml);
	printf("\n volume in cubicmetres is: %f",+cubicmetre);
	return 0;
}
