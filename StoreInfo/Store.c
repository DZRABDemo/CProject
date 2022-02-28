#include <stdio.h>
void testAuto();
void testReg();
void testStatic();
static int count = 10;

int main()
{
    // testAuto();
    // testReg();

    while (count--)
    {
        testStatic();
    }
}

void testAuto()
{
    auto num = 10;
    printf("%d\n", num);
}

void testReg()
{
    register int num = 10;
    printf("%d\n", num);
}

void testStatic()
{
    static int thingy = 5;
    thingy++;
    printf(" thingy 为 %d ， count 为 %d\n", thingy, count);
}