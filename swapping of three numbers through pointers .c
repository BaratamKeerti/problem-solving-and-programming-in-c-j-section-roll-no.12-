#include<stdio.h>
int main()
{
    int x,y,z,*c,*a,*b,temp;
    printf("enter the values of x,y and z");
    scanf("%d %d %d",&x,&y,&z);
    a=&x;
    b=&y;
    c=&z;
    temp=*a;
    *a=*b;
    *b=*c;
    *c=temp;
    printf("after swapping x=%d,y=%d,z=%d",x,y,z);
}
