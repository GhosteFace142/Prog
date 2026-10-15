#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t a, b, c, d;
    scanf("%hhu", &a);
    b = a + a;
    c = a * 2;
    d = a * a;
    printf("ADD: %u\n", b);
    printf("MUL2: %u\n", c);
    printf("SQR: %u\n", d);
    return 0;
}
