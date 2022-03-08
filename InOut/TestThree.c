#include <stdio.h>
void test01();
void test02();

int main()
{
    // test01();
    test02();
}

void test01()
{
    char ch[10];

    gets(ch);

    puts(ch);
}

void test02()
{
    char ch[100];
    fgets(ch, 100, stdin);
    fputs(ch, stdout);
}