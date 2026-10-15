#include <stdio.h>
#include <stdint.h>

int main()
{
    int id, code;
    uint16_t checksum;
    float volt;
    scanf("%x %o %f", &id, &code, &volt);
    checksum = id + code;
    printf("PACKET_ID: %d\n", id);
    printf("STATUS_CODE: %d\n", code);
    printf("STATUS_CHAR: %c\n", code);
    printf("VOLTAGE: %.2f\n", volt);
    printf("CHECKSUM: %d\n", checksum);
    return 0;
}
