#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char ch[1024];
    fp = fopen("one.txt", "r");
    fgets(ch, 1024, fp);
    printf("%s\n", ch);
    fclose(fp);

    fp = fopen("one.txt", "w");
    strcpy(ch, "测试写入");
    fputs(ch, fp);
    fclose(fp);
}