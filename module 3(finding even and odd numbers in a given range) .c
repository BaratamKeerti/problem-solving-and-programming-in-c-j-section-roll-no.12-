#include<stdio.h>
int even_and_odd(int i,int j)
{
    printf("Even numbers in the given range are:");
    {
        for(int m=i;m<=j;m++)
        {
            if(m%2==0)
            printf("\t %d",m);
        }
    }
    printf("\nOdd numbers in the given range are:");
    {
        for(int n=i;n<=j;n++)
        {
            if(n%2!=0)
            printf("\t %d",n);
        }
    }
}
int main()
{
    even_and_odd(1,10);
}
