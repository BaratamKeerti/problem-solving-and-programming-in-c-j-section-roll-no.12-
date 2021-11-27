#include<stdio.h.>
int main()
{
	int km,m,cm;
	printf("enter the value of distance in km");
	scanf("%d",&km);
	m=km*1000;
	cm=m*100;
	printf("\n the value of distance in m is: %d",+m);
	printf("\n the value of distance in cm is: %d",+cm);
	return 0;
}
