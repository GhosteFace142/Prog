#include <stdio.h>

int main()
{
    int reactor_core = 41;
    printf("[%d,", reactor_core);
    printf("%d,", reactor_core * 2);
    printf("%d]\n", reactor_core * reactor_core);
    return 0;
}
