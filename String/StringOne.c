#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void test01();

int main()
{
    printf("%d\n", sizeof(char));
    test01();
}

void test01()
{
    char *ch;
    ch = (char *)malloc(255);
    strcpy(ch, "xufeifan");
    printf("%s\n", ch);
}