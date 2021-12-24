#include<stdio.h>
int main()
{
    int x,y,*a,*b,temp;
    printf("enter the values of x and y");
    scanf("%d %d",&x,&y);
    a=&x;
    b=&y;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("after swapping x=%d,y=%d",x,y);
}
