#include<stdio.h>
#include<string.h>
struct students
{
    char name[40];
    char age[40];
    char gender[40];
    int rollno;
};
int main()
{
    struct students s1;
    struct students s2;
    strcpy(s1.name,"keerti");
    strcpy(s1.age,"sixteen");
    strcpy(s1.gender,"female");
    s1.rollno=313;
    strcpy(s2.name,"yashu");
    strcpy(s2.age,"fourteen");
    strcpy(s2.gender,"female");
    s2.rollno=2006;
    printf("name of s2 is: %s\n",s2.name);
    printf("age of s2 is: %s\n",s2.age);
    printf("gender of s2 is:%s\n",s2.gender);
    printf("roll no. of s2 is: %d\n",s2.rollno);
    printf("name of s1 is: %s\n",s1.name);
    printf("age of s1 is: %s\n",s1.age);
    printf("gender of s1 is:%s\n",s1.gender);
    printf("roll no. of s1 is: %d\n",s1.rollno);
}

