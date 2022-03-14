#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,len,vowel,consonant;
    printf("enter the string:");
    scanf("%s",str);
    vowel=0;
    consonant=0;
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            vowel++;
        
        else
        {
            consonant++;
        }
        }
    }
    printf("total no. of vowels are: %d\n",vowel);
    printf("total no. of consonants are:%d",consonant);
    return 0;
}
