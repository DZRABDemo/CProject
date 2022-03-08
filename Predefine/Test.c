#include <stdio.h>
#define NUM 10
//#undef NUM

void test01();
void test02();

int main()
{
    // test01();
    test02();
}

void test01()
{
    printf("%d\n", NUM);
}

void test02()
{
    printf("%s\n", __FILE__);
    printf("%s\n", __DATE__);
    printf("%s\n", __TIME__);
}