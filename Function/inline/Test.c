#include <stdio.h>
void test01();

int main()
{
    test01();
}

inline void test01()
{
    printf("this is inline method\n");
}