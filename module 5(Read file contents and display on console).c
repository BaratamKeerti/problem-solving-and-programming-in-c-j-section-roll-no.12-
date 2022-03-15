#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];
	FILE*fp;
	fp=fopen("test1.txt","r");
	fgets(a,1000,fp);
	printf("%s",a);
	fclose(fp);
}

