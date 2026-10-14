#include <stdio.h>
#include <stdbool.h>

int main()
{
    int MODULE_READY1, FAULT_STATE1, BOOL_SIZE, FLAGS_SUM;
    scanf("%d %d", &MODULE_READY1, &FAULT_STATE1);
    bool MODULE_READY = MODULE_READY1;
    bool FAULT_STATE = FAULT_STATE1;
    printf("MODULE_READY: %d\n", MODULE_READY);
    printf("FAULT_STATE: %d\n", FAULT_STATE);
    printf("BOOL_SIZE: %d\n", sizeof(bool));
    FLAGS_SUM = MODULE_READY + FAULT_STATE;
    printf("FLAGS_SUM: %d\n", FLAGS_SUM);
    return 0;
}
