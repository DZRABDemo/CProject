#include <stdio.h>

#ifndef MESSAGE
#define MESSAGE "YOU WISH!"
#endif

#if !defined MESSAGEOne
#define MESSAGEOne "You wish!"
#endif

int main(int argc, char const *argv[])
{
    printf("%s\n", MESSAGE);
    printf("%s\n", MESSAGEOne);
    return 0;
}
