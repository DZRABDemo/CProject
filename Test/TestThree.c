#include <stdio.h>
void test01();
void test02();
void test03();

int main()
{
    // test01();
    // test02();
    test03();
}

void test01()
{
    int num = 10;
    int *nump;
    nump = &num;
    printf("%p\n", nump);
    printf("%d\n", *nump);
}

void test02()
{
    // int *point = 0x000000000061FDE4;

    // printf("%d\n", *point);
}

void test03()
{
}