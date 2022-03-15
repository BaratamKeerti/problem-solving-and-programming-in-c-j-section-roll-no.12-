#include<stdio.h>
#include<string.h>
struct student
{
	char stname[1000];
	int rollno;
	char section[100];
}s1,s2,s3,s4;
int main()
{
	int a;
	printf("enter your s.no(1-4): ");
	scanf("%d",&a);
	strcpy(s1.stname,"abc");
	strcpy(s2.stname,"def");
	strcpy(s3.stname,"ghi");
	strcpy(s4.stname,"jkl");
	s1.rollno=1;
	s2.rollno=2;
	s3.rollno=3;
	s4.rollno=4;
	strcpy(s1.section,"a");
	strcpy(s2.section,"b");
	strcpy(s3.section,"c");
	strcpy(s4.section,"d");
	switch(a)
	{
		case 1:
			printf("%s",s1.stname);
			printf("\n%d",s1.rollno);
			printf("\n%s",s1.section);
			break;
		case 2:
			printf("%s",s2.stname);
			printf("\n%d",s2.rollno);
			printf("\n%s",s2.section);
			break;
		case 3:
			printf("%s",s3.stname);
			printf("\n%d",s3.rollno);
			printf("\n%s",s3.section);
			break;
		case 4:
			printf("%s",s4.stname);
			printf("\n%d",s4.rollno);
			printf("\n%s",s4.section);
			break;
	}
}

