#include <stdio.h>

//首先是学生结构体  年龄和分数
struct student
{
    int age;
    int score;
};
//这里是班级共用体 学生
struct class
{
    struct student s1;
};

int main()
{
    //对结构体进行基础的赋值
    struct class *cls;

    struct class cls1 = {
        .s1 = {
            .age = 20,
            .score = 100}};
    cls = &cls1;
    //这里类型参数无效
    // printf("%d\n",cls1.s1.age);
    printf("%d\n", cls->s1.age);
}