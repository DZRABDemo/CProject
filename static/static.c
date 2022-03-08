#include <stdio.h>
void test01();

int main()
{
    for (int i = 0; i < 10; i++)
    {
        test01();
    }
}

void test01()
{
    static int num = 0;
    num++;
    printf("%d\n", num);
}