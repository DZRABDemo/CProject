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
    int num[] = {1, 2, 3, 4};

    int length = (sizeof num) / 4;
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", num[i]);
    }
}

void test02()
{
    int num[] = {1, 2, 3, 4};
    printf("%p\n", num + 1);
    printf("%p\n", &num + 1);
    printf("%p\n", &num[0] + 1);
    //这里涉及了数组的首地址 和数组的首元素地址
}

void test03()
{
    int num1[] = {1, 2, 3, 4};
    int num2[] = {1, 2, 3, 4};
    printf("%p\n", &num1);
    printf("%p\n", &num2);
    //内存分配策略
}