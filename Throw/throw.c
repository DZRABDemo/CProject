#include <stdio.h>
void test01();
void test02();

int main()
{
    test01();
    test02();
}

void test01()
{
    fputs("error", stderr);
}

void test02()
{
    perror("通过 perror 输出错误");
}