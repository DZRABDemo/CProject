#include <stdio.h>
#include <string.h>
void test01();
void test02();
void test03();

struct Student
{
    char myName[10];
    char *info;
};

int main()
{
    // test01();
    //  test02();
    test03();
}

void test01()
{
    struct Student student;

    strcpy(student.myName, "xufeifan");
    strcpy(student.info, "myInfo");

    printf("%s\n", student.myName);
    printf("%s\n", student.info);

    // student.info = "xufeifan";

    // student.myName = "xufeifan";
}

void test02()
{
    char *ch1 = "xufeifan";
    char *ch2 = "xufeifan";

    char ch3[] = "xufeifan";
    char ch4[] = "xufeifan";

    printf("%p\n", ch1);
    printf("%p\n", ch2);
    printf("%p\n", ch3);
    printf("%p\n", ch4);
}

void test03()
{
    const char *str1 = "xufeifan";
    char *ch2;
    ch2 = str1;

    printf("%s\n", ch2);
}