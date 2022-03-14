#include<stdio.h>
int main()
{
    int a[20][20],b[20][20],c[20][20];
    int size,i,j;
    printf("enter the size of rows and olumns:");
    scanf("%d",&size);
    printf("enter the elements:");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements:");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
   
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            int sum=0,d,e;
            for(d=0;d<size;d++)
            {
                sum+=a[i][d]*b[d][i];
            }
            c[i][j]=sum;
        }
    }
     printf("product of the given two matrices is:\n");
      for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
