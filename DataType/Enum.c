#include <stdio.h>

enum DAY
{
    MON = 1,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
};

int main()
{
    enum DAY day;
    day = WED;
    printf("%d", day);
    //这里枚举类型会执行自增操作
    return 0;
}