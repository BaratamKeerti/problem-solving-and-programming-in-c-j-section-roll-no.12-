#include<stdio.h>
typedef struct complex
{
    float real,imaginary;
}complex;
complex add(complex a,complex b)
{
    complex temp;
    temp.real=a.real+b.real;
    temp.imaginary=a.imaginary+b.imaginary;
   return(temp);
}
int main()
{
    complex a,b,result;
printf("enetr the first complex number's real and imaginary numbers : ");
scanf("%f %f",&a.real,&a.imaginary);
printf("second complex number's real and imaginary numbers : ");
scanf("%f %f",&b.real,&b.imaginary);
result = add(a,b);
printf("the final result is %.1f+%.1fi",result.real,result.imaginary);
return 0;
}
