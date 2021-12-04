#include<stdio.h>
int main()
{
	int sub1,sub2,sub3,sub4,sub5,tot;
	float avg,per;
	printf("enter the marks of subject 1:");
	scanf("%d",&sub1);
	printf("enter the marks of subject 2:");
	scanf("%d",&sub2);
	printf("enter the marks of subject 3:");
	scanf("%d",&sub3);
	printf("enter the marks of subject 4:");
	scanf("%d",&sub4);
	printf("enter the marks of subject 5:");
	scanf("%d",&sub5);
	tot=sub1+sub2+sub3+sub4+sub5;
	avg=tot/5.0;
	per=(tot/500.0)*100;
	printf("\n total marks of a student in 5 subjects is: %d",tot);
	printf("\n average marks of student in 5 subjects is: %f",+avg);
	printf("\n percentage marks of student in 5 subjects is: %f",+per);
	return 0;
}
