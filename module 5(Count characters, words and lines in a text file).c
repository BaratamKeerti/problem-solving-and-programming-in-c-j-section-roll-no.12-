#include<stdio.h>
#include<string.h>
int main()
{
	int i,c=0,n=0;
	char a[1000];
	FILE*fp;
	fp=fopen("readfile.txt","w");
	gets(a);
	fprintf(fp,"%s",a);
	fclose(fp);
	fp=fopen("readfile.txt","r");
	fgets(a,100,fp);
	fclose(fp);
	for(i=0;i!='\o';i++)
	{
		if(a[i]>=65 && a[i]<=90||a[i]>=97 && a[i]<=122)
		{
			c=c+1;
		}
		if(a[i]>=48 && a[i]<=57)
		{
			n=n+1;
		}
	}
	printf("the number of words %d\n",c-4);
	printf("the number of words %d\n",n-1);
}
