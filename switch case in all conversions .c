#include<stdio.h>
int main()
{
	int h,min,sec,km,m,cm,sqft,l,ml,ch;
	float sqm,sqcm,cubicmetre,c,f,k;
	ch;
	printf("enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
printf("enter the value of time in hours:");
scanf("%d",&h);
min=h*60;
sec=min*60;
printf("\n time in minutes is: %d",+min);
printf("\n time in seconds is: %d",+sec);
break;
case 2:
printf("\n enter the value of distance in kilometeres:");
scanf("%d",&km);
m=km*1000;
cm=m*100;
printf("\n distance in metres is: %d",+m);
printf("\n distance in centimetres is: %d",+cm);
break;
case 3:
printf("\n enter the value of area in sqft:");
scanf("%d",&sqft);
sqm=sqft*0.0929;
sqcm=sqft*92.9;
printf("\n area in square metre is: %f",+sqm);
printf("\n area in square centimetres is: %f",+sqcm);
break;
case 4:
printf("\n enter the volume in litres:");
scanf("%d",&l);
ml=l*1000;
cubicmetre=l*0.001;
printf("\n volume in millilitres is: %d",+ml);
printf("\n volume in cubicmetres is: %f",cubicmetre);
break;
case 5:
printf("\n enter the temperature in celsius is:");
scanf("%f",&c);
f=(c*1.8)+32;
k=c+273.15;
printf("\n temperature in farenhiet is: %f",f);
printf("\n temprature in kelvin is: %f",k);
break;
default:
	printf("enter your correct choice");
}
return 0;
}
