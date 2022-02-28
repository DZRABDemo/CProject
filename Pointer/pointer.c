#include <stdio.h>
void basicInfo();
void nullInfo();

int main()
{
    // basicInfo();
    nullInfo();
}

void basicInfo()
{
    int var_runoob = 10;
    int *p; // 定义指针变量
    p = &var_runoob;

    printf("var_runoob 变量的地址： %p\n", p);
}

void nullInfo()
{
    int *p;
    printf("%p\n", p);

    int *p1 = NULL;
    printf("%p\n", p1);
}