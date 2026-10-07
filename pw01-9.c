#include <stdio.h>
void phase_2()
{
    printf("BETA\t");
}
void phase_1()
{
    printf("ALPHA\t");
    phase_2();
    printf("GAMMA");
}
int main()
 {
    printf("START\t");
    phase_1();
    printf("\tEND\n");
    return 0;
 }
