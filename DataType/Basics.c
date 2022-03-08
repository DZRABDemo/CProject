#include <stdio.h>
void funInteger();
void funDecimals();
void funChar();

int main()
{
    funInteger();
    funDecimals();
    funChar();
}

void funInteger()
{
    printf("%d\n", sizeof(short));
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(long));
}

void funDecimals()
{
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));
}

void funChar()
{
    char ch = 'a';
    printf("%d\n", sizeof(char));
    printf("%c\n", ch);
}