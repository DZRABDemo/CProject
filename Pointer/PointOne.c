#include <stdio.h>
void test01();

int main()
{
    test01();
}

void test01()
{
    int *num;
    int num1 = 10;
    num = &num1;
    printf("%p\n", num);
}