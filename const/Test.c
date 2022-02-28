#include <stdio.h>
#define NUM_INFO 20
void test01();

int main()
{
    test01();
}

void test01()
{
    const int num = 10;
    printf("%d\n", num);
    printf("%d\n", NUM_INFO);
}