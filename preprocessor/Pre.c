#include <stdio.h>
void test01();

int main()
{
    test01();
}

void test01()
{
    printf("%s\n", __DATE__);
    printf("%s\n", __TIME__);
    printf("%s\n", __FILE__);

    printf("%d\n", __STDC__);
    printf("%d\n", __LINE__);
}