#include<stdio.h>
int fact(int n)
{
    int a=1,b;
    for(b=1;b<=n;b++)
    {
    a*=b;
    }
return a;
}
int individual(int n)
{
    int i,j=0,k=0;
    for(i=0;i<=n;i++)
    {
        j=n%10;
        n=n/10;
        k+=fact(j);
        if(n==1)
        {
            k+=1;
        }
    }
        return k;
    }
int main(void)
{
    int m,p,x;
    printf("enter the range m and p:");
    scanf("%d %d",&m,&p);
    printf("strong numbers in the given range(%d,%d) are: ",m,p);
    for(x=m;x<=p;x++)
    {
        if(x==individual(x))
        {
            printf("%d, ",x);
        }
    }
}

