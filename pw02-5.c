#include <stdio.h>
#include <stdint.h>

int main()
{
    printf("INT8: size=%zu, min=%d, max=%d, values=%u\n", sizeof(int8_t), INT8_MIN, INT8_MAX, INT8_MAX - INT8_MIN + 1);
    printf("UINT8: size=%zu, min=0, max=%d, values=%u\n", sizeof(uint8_t), UINT8_MAX, UINT8_MAX + 1);
    printf("INT16: size=%zu, min=%d, max=%d, values=%u\n", sizeof(int16_t), INT16_MIN, INT16_MAX, INT16_MAX - INT16_MIN + 1);
    printf("UINT16: size=%zu, min=0, max=%d, values=%u\n", sizeof(uint16_t), UINT16_MAX, UINT16_MAX + 1);
    printf("INT32: size=%zu, min=%d, max=%d, values=%llu\n", sizeof(int32_t), INT32_MIN, INT32_MAX, (long long)INT32_MAX - INT32_MIN + 1);
    printf("UINT32: size=%zu, min=0, max=%u, values=%llu\n", sizeof(uint32_t), UINT32_MAX, (long long)UINT32_MAX + 1);   
    return 0;
}
