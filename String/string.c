#include <stdio.h>
#include <string.h>

void test01();
void test02();
// void test03();
//  void test04();
void test05();

int main()
{
    // test01();
    // test02();
    // test03();

    // test04();
    void test05();
}

void test01()
{
    char *str1 = "xufeifan";
    char str2[] = "xufeifan";

    printf("%d\n", sizeof(str2));
}

void test02()
{
    char str1[] = "java";
    char str2[] = "script";

    char str3[] = {};

    char *str4;

    printf("%d\n", strlen(str1));

    strcpy(str3, str2);

    printf("%s\n", str3);

    strcat(str1, str2);

    printf("%s\n", str1);
}

// void test03()
// {
// char *str1 = "abcdefghabcdefgh";
// char *str2 = "hijklmnopqrstuvw";
//
// printf("%p\n", str1);
// printf("%p\n", str2);
//
// char *ch;
// ch = 0x00406061;
// printf("%c\n", *ch);
// printf("%hhd\n", *ch);
//这里字符串的后面也有一个\0
// }

// void test04()

// {
// char str1[] = "xufeifan";
// printf("%p\n", str1);
// printf("%d\n", sizeof(str1));
// }

void test05()
{
    char ch1[] = "xufeifan";
    char *ch2 = "xufeifanOne";

    // ch1 = ch2; no suppress
}