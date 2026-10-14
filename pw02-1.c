#include <stdio.h>

int main()
{
    int UNIT_ID, UNIT_VERSION, UNIT_STATUS, SUM;
    scanf("%d %x %o", &UNIT_ID, &UNIT_VERSION, &UNIT_STATUS);
    SUM = UNIT_ID + UNIT_STATUS + UNIT_VERSION;
    printf("UNIT_ID: %d\nUNIT_VERSION: %d\nUNIT_STATUS: %d\nSUM:%d\n", UNIT_ID, UNIT_VERSION, UNIT_STATUS, SUM);
    return 0;
}
