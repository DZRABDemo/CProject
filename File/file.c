#include <stdio.h>
#include <string.h>

void test01();
void test02();
void test03();

int main()
{
    // test01();
    // test02();
    test03();
}

void test01()
{
    FILE *fp = NULL;
    char buff[255];

    fp = fopen("one.txt", "r");

    fgets(buff, 255, fp);
    printf("3: %s\n", buff);
    fclose(fp);
}

void test02()
{
    //对fgets 和 fputs进行分析
    char ch[100];

    fgets(ch, 100, stdin);

    fputs(ch, stdout);
}

void test03()
{
    FILE *fp = NULL;

    char ch[100];

    strcpy(ch, "xufeifan");

    fp = fopen("one.txt", "w");

    fputs(ch, fp);
}