#include <stdio.h>

int main()
{
    long double a;
    scanf("%Lf", &a);
    printf("FLOAT: %.6f\n", (float)a);
    printf("DOUBLE: %.6f\n", (double)a);
    printf("LDOUBLE: %.6Lf\n", a);
    printf("FLOAT+1: %.6f\n", (float)a);
    printf("DOUBLE+1: %.6f\n", (double)a);
    printf("LDOUBLE+1: %.6Lf\n", a);
    return 0;
}
