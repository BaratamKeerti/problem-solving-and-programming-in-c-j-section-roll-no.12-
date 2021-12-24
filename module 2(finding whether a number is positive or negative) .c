#include<stdio.h>
int main()
{
    char ch;
    printf("enter your choice:");
    scanf("%c",&ch);
    switch(ch)
    {
    case '+':
    {
    printf("The given integer is a positive integer");
    break;
        }
    case '-':
    {
    printf("The given integer is a negative integer");
    break;
    }
    case '0':
    {
    printf("the given integer is neither a positive integer nor a negative integer");
    break;
    }
    }
}
