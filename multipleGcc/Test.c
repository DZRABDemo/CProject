#include <stdio.h>
int add(int a, int b);

int main()
{
    int sum = add(1, 2);
    printf("%d\n", sum);

    //这里需要先把所有文件转换成.o的形式
    //然后进行合并
}