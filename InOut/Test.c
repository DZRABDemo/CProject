#include <stdio.h>
void test01();
void test02();
void test03();

int main()
{
    // int num;
    // printf("%d\n", num);
    // test01();
    // test02();
    test03();
}

void test01()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", num);
}

void test02()
{
    char ch;
    ch = getchar();

    putchar(ch);
}

void test03()
{
    char ch[100];
    gets(ch);

    puts(ch);
}