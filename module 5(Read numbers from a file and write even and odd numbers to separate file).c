#include<stdio.h>
int main()
{
	int i,a;
	FILE*fp;
	FILE*ev;
	FILE*od;
	fp=fopen("read.txt","w");
	scanf("%d",&a);
	fprintf(fp,"%d",a);
	fclose(fp);
	fp=fopen("read.txt","r");
	fscanf(fp,"%d",&a);
	fclose(fp);
	ev=fopen("evenfile.txt","w");
	od=fopen("oddfile.txt","w");
	while(a>0)
	{
		i=a%10;
		if(i%2==0)
		{
			fprintf(ev,"%d\n",i);
		}
		else
		{
			fprintf(od,"%d\n",i);
		}	
		a=a/10;
	}
	fclose(ev);
	fclose(od);
}

