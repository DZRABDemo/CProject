#include <stdio.h>
void test01();

int main()
{
    test01();
}

void test01()
{
    double num = 0.0;

    if (num)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    // printf(0 == 0.0);
}
