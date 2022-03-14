#include<stdio.h>
int main()
{
    int m,n,i=0,j;
    printf("enter the no. of rows and columns in a matrix:");
    scanf("%d       %d",&m,&n);
    int a[10][10];
    printf("enter the values:");
    for(i=0;i<m;i++)
    {                                                                                                                                                                                                                                                                                                                                                                                                                                                           
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the elements in the matrix are:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int max=0,res[m];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
        }
         res[i]=max;
            max=0;
    }
    for(i=0;i<n;i++)
    {
        printf("largest element in row %d is %d\n",i,res[i]);
    }
    return 0;
}

