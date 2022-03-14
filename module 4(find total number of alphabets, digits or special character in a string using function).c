#include <stdio.h>
int main()
{
    char str[100];
    int alphabets, digits, others, i;
    alphabets = digits = others = i = 0;
    printf("Enter any string : ");
    gets(str);
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alphabets++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;
        }
        else
        {
            others++;
        }
        i++;
    }
    printf(" Number of  Alphabets = %d\n", alphabets);
    printf(" Number of  Digits = %d\n", digits);
    printf(" Number of  Special characters = %d", others);
    return 0;
}

