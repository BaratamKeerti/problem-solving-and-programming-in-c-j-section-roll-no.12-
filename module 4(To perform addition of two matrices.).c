#include<stdio.h>
int main()
{
    int a[40][40],b[40][40],n,i,j,c[40][40],size;
    printf("enter the size of the matrices:");
    scanf("%d",&size);
    printf("enter the elements:");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements:");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("the addition of two matrices is:\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
