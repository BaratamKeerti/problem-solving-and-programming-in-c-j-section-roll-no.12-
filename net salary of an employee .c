#include<stdio.h>
int main()
{
	int basic,da,hra,pf,lic,tot;
	printf("enter basic salary");
	scanf("%d",&basic);
	printf("enter da salary");
	scanf("%d",&da);
	printf("enter hra salary");
	scanf("%d",&hra);
	printf("enter pf salary");
	scanf("%d",&pf);
	printf("enter lic value");
	scanf("%d",&lic);
	tot=basic+da+hra-pf-lic;
	printf("total net salary of an employee is:%d",tot);
	return 0;
}
